#include "runtime/native/hd_textures.h"
#include "runtime/gs/ps2_gs_memory.h"
#include "runtime/native/native_texture_cache.h" // GSMem::BlockOf
#include "ps2_host_settings.h"

#define XXH_INLINE_ALL
#include "xxhash.h"
#include "miniz.h"

#include <algorithm>
#include <atomic>
#include <condition_variable>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <filesystem>
#include <fstream>
#include <mutex>
#include <thread>
#include <unordered_map>
#include <unordered_set>

namespace fs = std::filesystem;

namespace ps2x::native
{
    namespace
    {
        struct NameHash
        {
            size_t operator()(const HdTextureName &n) const
            {
                return static_cast<size_t>(n.texHash ^ (n.clutHash * 0x9E3779B97F4A7C15ull) ^ (uint64_t{n.bits} << 17));
            }
        };

        // PCSX2's TextureName bits: PSM 6, TW 4, TH 4, (old TCC 1), TA0 8, AEM 1, TA1 8.
        constexpr uint32_t kTccBit = 1u << 14;

        std::string utf8(const fs::path &p)
        {
            const auto s = p.u8string();
            return std::string(reinterpret_cast<const char *>(s.data()), s.size());
        }

        bool parseHex(const std::string &s, uint64_t &out)
        {
            if (s.empty() || s.size() > 16)
                return false;
            char *end = nullptr;
            out = std::strtoull(s.c_str(), &end, 16);
            return end && *end == '\0';
        }

        // "<tex>-<clut>-<bits>.dds" or "<tex>-<bits>.dds"; region and mip names are skipped.
        bool parseName(const std::string &file, HdTextureName &out)
        {
            std::string stem = file;
            const size_t dot = stem.rfind('.');
            if (dot == std::string::npos)
                return false;
            std::string ext = stem.substr(dot + 1);
            std::transform(ext.begin(), ext.end(), ext.begin(), [](unsigned char c) { return std::tolower(c); });
            if (ext != "dds")
                return false;
            stem.resize(dot);
            std::vector<std::string> parts;
            size_t begin = 0;
            while (true)
            {
                const size_t dash = stem.find('-', begin);
                parts.push_back(stem.substr(begin, dash == std::string::npos ? std::string::npos : dash - begin));
                if (dash == std::string::npos)
                    break;
                begin = dash + 1;
            }
            uint64_t a = 0, b = 0, c = 0;
            if (parts.size() == 3 && parts[0].size() == 16 && parts[1].size() == 16 && parts[2].size() == 8 &&
                parseHex(parts[0], a) && parseHex(parts[1], b) && parseHex(parts[2], c))
            {
                out = {a, b, static_cast<uint32_t>(c) & ~kTccBit};
                return true;
            }
            if (parts.size() == 2 && parts[0].size() == 16 && parts[1].size() == 8 && parseHex(parts[0], a) &&
                parseHex(parts[1], c))
            {
                out = {a, 0, static_cast<uint32_t>(c) & ~kTccBit};
                return true;
            }
            return false;
        }

        uint32_t rd32(const uint8_t *p)
        {
            uint32_t v;
            std::memcpy(&v, p, 4);
            return v;
        }

        std::shared_ptr<HdTextureImage> parseDds(const std::vector<uint8_t> &file)
        {
            if (file.size() < 128 || std::memcmp(file.data(), "DDS ", 4) != 0)
                return nullptr;
            const uint8_t *h = file.data() + 4;
            const uint32_t height = rd32(h + 8), width = rd32(h + 12);
            uint32_t mips = std::max<uint32_t>(rd32(h + 24), 1u);
            const uint32_t pfFlags = rd32(h + 76), fourcc = rd32(h + 80), bitCount = rd32(h + 84);
            const uint32_t rMask = rd32(h + 88);
            size_t offset = 128;
            bool bc7 = false, rgba = false, bgra = false;
            if ((pfFlags & 0x4u) && fourcc == 0x30315844u) // "DX10"
            {
                if (file.size() < 148)
                    return nullptr;
                const uint32_t dxgi = rd32(file.data() + 128);
                offset = 148;
                if (dxgi == 98u || dxgi == 99u)
                    bc7 = true;
                else if (dxgi == 28u || dxgi == 29u)
                    rgba = true;
                else if (dxgi == 87u || dxgi == 91u)
                    bgra = true;
                else
                    return nullptr;
            }
            else if ((pfFlags & 0x40u) && bitCount == 32u)
            {
                rgba = rMask == 0x000000FFu;
                bgra = !rgba;
            }
            else
                return nullptr;
            if (width == 0 || height == 0 || width > 16384 || height > 16384)
                return nullptr;

            auto image = std::make_shared<HdTextureImage>();
            image->width = width;
            image->height = height;
            image->bc7 = bc7;
            uint32_t w = width, hh = height;
            for (uint32_t level = 0; level < mips; ++level)
            {
                const size_t bytes = bc7 ? static_cast<size_t>(std::max(1u, (w + 3) / 4)) * std::max(1u, (hh + 3) / 4) * 16u
                                         : static_cast<size_t>(w) * hh * 4u;
                if (offset + bytes > file.size())
                    break;
                HdTextureImage::Level l;
                l.width = w;
                l.height = hh;
                l.data.assign(file.begin() + offset, file.begin() + offset + bytes);
                if (bgra)
                    for (size_t i = 0; i + 3 < l.data.size(); i += 4)
                        std::swap(l.data[i], l.data[i + 2]);
                image->levels.push_back(std::move(l));
                offset += bytes;
                if (w == 1 && hh == 1)
                    break;
                w = std::max(1u, w / 2);
                hh = std::max(1u, hh / 2);
            }
            if (image->levels.empty())
                return nullptr;
            return image;
        }
    }

    struct HdTexturePack::Impl
    {
        struct Entry
        {
            std::string path;      // a loose file
            int32_t zipIndex = -1; // or a file in the zip
            std::shared_ptr<const HdTextureImage> image;
            bool queued = false;
            bool failed = false;
        };

        std::unordered_map<HdTextureName, Entry, NameHash> entries;
        std::unordered_set<uint32_t> bits;
        std::mutex mutex;
        std::condition_variable wake;
        std::deque<HdTextureName> queue;
        std::thread worker;
        bool stop = false;
        bool zip = false;
        mz_zip_archive archive{};

        void run()
        {
            for (;;)
            {
                HdTextureName name;
                std::string path;
                int32_t zipIndex = -1;
                {
                    std::unique_lock<std::mutex> lock(mutex);
                    wake.wait(lock, [this] { return stop || !queue.empty(); });
                    if (stop)
                        return;
                    name = queue.front();
                    queue.pop_front();
                    const Entry &e = entries[name];
                    path = e.path;
                    zipIndex = e.zipIndex;
                }
                std::vector<uint8_t> bytes;
                if (zipIndex >= 0)
                {
                    size_t size = 0;
                    if (void *p = mz_zip_reader_extract_to_heap(&archive, static_cast<mz_uint>(zipIndex), &size, 0))
                    {
                        bytes.assign(static_cast<uint8_t *>(p), static_cast<uint8_t *>(p) + size);
                        mz_free(p);
                    }
                }
                else
                {
                    std::ifstream in(fs::path(std::u8string(reinterpret_cast<const char8_t *>(path.data()), path.size())), std::ios::binary);
                    bytes.assign(std::istreambuf_iterator<char>(in), std::istreambuf_iterator<char>());
                }
                std::shared_ptr<HdTextureImage> image = parseDds(bytes);
                std::lock_guard<std::mutex> lock(mutex);
                Entry &e = entries[name];
                e.image = image;
                e.failed = !image;
                if (!image)
                    std::fprintf(stderr, "[hd] could not read %016llx-%016llx-%08x\n",
                                 static_cast<unsigned long long>(name.texHash), static_cast<unsigned long long>(name.clutHash),
                                 name.bits);
            }
        }

        ~Impl()
        {
            {
                std::lock_guard<std::mutex> lock(mutex);
                stop = true;
            }
            wake.notify_all();
            if (worker.joinable())
                worker.join();
            if (zip)
                mz_zip_reader_end(&archive);
        }
    };

    HdTexturePack::~HdTexturePack() = default;

    bool HdTexturePack::isOpen() const { return m_impl && !m_impl->entries.empty(); }
    size_t HdTexturePack::count() const { return m_impl ? m_impl->entries.size() : 0u; }

    bool HdTexturePack::open(const std::string &pathText, const std::string &serial)
    {
        m_impl = std::make_unique<Impl>();
        std::error_code ec;
        const fs::path path(std::u8string(reinterpret_cast<const char8_t *>(pathText.data()), pathText.size()));
        // Only the files of this game: <serial>/replacements/, wherever the pack's top folder is.
        const std::string want = serial + "/replacements/";
        const auto inGame = [&](std::string name) {
            std::replace(name.begin(), name.end(), '\\', '/');
            return name.find(want) != std::string::npos || name.find("/replacements/") == std::string::npos;
        };
        if (fs::is_regular_file(path, ec))
        {
            if (!mz_zip_reader_init_file(&m_impl->archive, pathText.c_str(), 0))
            {
                std::fprintf(stderr, "[hd] cannot open %s as a zip: %s\n", pathText.c_str(),
                             mz_zip_get_error_string(mz_zip_get_last_error(&m_impl->archive)));
                m_impl.reset();
                return false;
            }
            m_impl->zip = true;
            const mz_uint files = mz_zip_reader_get_num_files(&m_impl->archive);
            for (mz_uint i = 0; i < files; ++i)
            {
                char name[512];
                if (mz_zip_reader_is_file_a_directory(&m_impl->archive, i) ||
                    !mz_zip_reader_get_filename(&m_impl->archive, i, name, sizeof(name)))
                    continue;
                const std::string full = name;
                if (!inGame(full) || full.find("replacements") == std::string::npos)
                    continue;
                HdTextureName key;
                if (parseName(full.substr(full.find_last_of("/\\") + 1), key))
                    m_impl->entries[key].zipIndex = static_cast<int32_t>(i);
            }
        }
        else if (fs::is_directory(path, ec))
        {
            for (auto it = fs::recursive_directory_iterator(path, fs::directory_options::skip_permission_denied, ec);
                 it != fs::recursive_directory_iterator(); it.increment(ec))
            {
                if (ec || !it->is_regular_file(ec))
                    continue;
                const std::string full = utf8(it->path().generic_string());
                if (!inGame(full))
                    continue;
                HdTextureName key;
                if (parseName(utf8(it->path().filename()), key))
                    m_impl->entries[key].path = utf8(it->path());
            }
        }
        if (m_impl->entries.empty())
        {
            std::fprintf(stderr, "[hd] no %s textures in %s\n", serial.c_str(), pathText.c_str());
            m_impl.reset();
            return false;
        }
        Impl *impl = m_impl.get();
        m_impl->worker = std::thread([impl] { impl->run(); });
        std::fprintf(stderr, "[hd] %zu replacement textures for %s from %s\n", m_impl->entries.size(), serial.c_str(),
                     pathText.c_str());
        return true;
    }

    bool HdTexturePack::hasBits(uint32_t bits) const
    {
        if (!m_impl)
            return false;
        if (m_impl->bits.empty())
            for (const auto &[name, entry] : m_impl->entries)
                m_impl->bits.insert(name.bits);
        return m_impl->bits.count(bits) != 0;
    }

    bool HdTexturePack::has(const HdTextureName &name) const
    {
        return m_impl && m_impl->entries.find(name) != m_impl->entries.end();
    }

    std::shared_ptr<const HdTextureImage> HdTexturePack::request(const HdTextureName &name)
    {
        if (!m_impl)
            return nullptr;
        std::lock_guard<std::mutex> lock(m_impl->mutex);
        auto it = m_impl->entries.find(name);
        if (it == m_impl->entries.end() || it->second.failed)
            return nullptr;
        if (it->second.image)
            return it->second.image;
        if (!it->second.queued)
        {
            it->second.queued = true;
            m_impl->queue.push_back(name);
            m_impl->wake.notify_one();
        }
        return nullptr;
    }

    HdTexturePack &hdTextures()
    {
        static HdTexturePack pack;
        static std::once_flag once;
        std::call_once(once, [] {
            std::string path;
            if (const char *env = std::getenv("PS2X_HD_TEXTURES"))
                path = env;
            else
                path = ps2xHostSettings().hdTextures;
            if (path.empty() || path == "off")
                return;
            const char *serial = std::getenv("PS2X_HD_SERIAL");
            pack.open(path, serial && *serial ? serial : "SLUS-21180");
        });
        return pack;
    }

    // ---- PCSX2's texture name ----

    namespace
    {
        struct PsmInfo
        {
            uint32_t bsx, bsy; // block size in texels
            bool palette;
            bool fullMask;     // all 32 bits of a texel matter (fmsk 0xFFFFFFFF): hashed as raw blocks
        };

        bool psmInfo(uint32_t psm, PsmInfo &out)
        {
            switch (psm)
            {
            case 0x00: out = {8, 8, false, true}; return true;   // CT32
            case 0x13: out = {16, 16, true, true}; return true;  // T8
            case 0x14: out = {32, 16, true, true}; return true;  // T4
            default: return false;
            }
        }

        // PCSX2 GSClut::Read32 for a CT32 palette: the 32-bit entries the texture uses.
        void readClut32(const uint16_t *clut, uint32_t psm, uint32_t csa, uint32_t *dst, uint32_t &count)
        {
            const auto i4 = [&](uint32_t base, uint32_t *d) {
                for (uint32_t i = 0; i < 16; ++i)
                    d[i] = static_cast<uint32_t>(clut[base + i]) | static_cast<uint32_t>(clut[base + i + 256u]) << 16;
            };
            if (psm == 0x13)
            {
                const uint32_t offset = (csa & 15u) << 4;
                for (uint32_t i = 0; i < 256; i += 16)
                    i4(std::min(i + offset, 240u), dst + i);
                count = 256;
            }
            else
            {
                i4((csa & 15u) << 4, dst);
                count = 16;
            }
        }
    }

    bool hdTextureName(const uint8_t *vramConst, uint64_t tex0, uint64_t texa, const uint16_t *clut, HdTextureName &out)
    {
        uint8_t *vram = const_cast<uint8_t *>(vramConst); // the GSMem readers take a non-const pointer; they only read
        const uint32_t tbp = static_cast<uint32_t>(tex0 & 0x3FFFu);
        const uint32_t tbw = static_cast<uint32_t>(tex0 >> 14 & 0x3Fu);
        const uint32_t psm = static_cast<uint32_t>(tex0 >> 20 & 0x3Fu);
        const uint32_t tw = static_cast<uint32_t>(tex0 >> 26 & 0xFu), th = static_cast<uint32_t>(tex0 >> 30 & 0xFu);
        const uint32_t cpsm = static_cast<uint32_t>(tex0 >> 51 & 0xFu);
        const uint32_t csa = static_cast<uint32_t>(tex0 >> 56 & 0x1Fu);
        (void)texa;
        PsmInfo info;
        if (!psmInfo(psm, info) || tw > 10 || th > 10)
            return false;
        if (info.palette && cpsm != 0x0u && cpsm != 0x1u)
            return false; // CT16 palettes: not in this pack
        const uint32_t width = 1u << tw, height = 1u << th;

        XXH3_state_t state;
        XXH3_64bits_reset(&state);
        const uint32_t bw = std::max<uint32_t>(tbw, 1u);
        if (width < info.bsx || height < info.bsy)
        {
            // Expanded: one byte per index (palette) or the 32-bit texels, row by row.
            std::vector<uint8_t> row(static_cast<size_t>(width) * (info.palette ? 1u : 4u));
            for (uint32_t y = 0; y < height; ++y)
            {
                for (uint32_t x = 0; x < width; ++x)
                {
                    if (psm == 0x13)
                        row[x] = static_cast<uint8_t>(GSMem::ReadP8(vram, tbp, tbw, x, y));
                    else if (psm == 0x14)
                        row[x] = static_cast<uint8_t>(GSMem::ReadP4(vram, tbp, tbw, x, y));
                    else
                    {
                        const uint32_t v = GSMem::ReadCT32(vram, tbp, tbw, x, y);
                        std::memcpy(&row[x * 4u], &v, 4u);
                    }
                }
                XXH3_64bits_update(&state, row.data(), row.size());
            }
        }
        else
        {
            // The raw 256-byte blocks, row of blocks by row of blocks (PCSX2 hashes GS memory as it lies).
            for (uint32_t y = 0; y < height; y += info.bsy)
                for (uint32_t x = 0; x < width; x += info.bsx)
                {
                    const uint32_t block = GSMem::BlockOf(psm, tbp, bw, x, y) & 0x3FFFu;
                    XXH3_64bits_update(&state, vram + static_cast<size_t>(block) * 256u, 256u);
                }
        }
        out.texHash = XXH3_64bits_digest(&state);
        out.clutHash = 0;
        if (info.palette)
        {
            uint32_t entries[256];
            uint32_t count = 0;
            readClut32(clut, psm, csa, entries, count);
            out.clutHash = XXH3_64bits(entries, count * sizeof(uint32_t));
        }
        // TEXA only counts for non-palette formats that use it (CT24, CT16): none here.
        out.bits = psm | tw << 6 | th << 10;
        return true;
    }
}

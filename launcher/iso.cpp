#include "iso.h"
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <stdexcept>
#include <vector>

namespace fs = std::filesystem;
namespace {
constexpr uint64_t kSector = 2048;

struct Entry {
    std::string name;
    uint32_t lba = 0, size = 0;
    bool directory = false;
};

uint32_t le32(const unsigned char* p) { return p[0] | (p[1] << 8) | (p[2] << 16) | (static_cast<uint32_t>(p[3]) << 24); }

void readAt(std::ifstream& file, uint64_t offset, void* out, size_t size) {
    file.clear();
    file.seekg(static_cast<std::streamoff>(offset));
    file.read(static_cast<char*>(out), static_cast<std::streamsize>(size));
    if (static_cast<size_t>(file.gcount()) != size) throw std::runtime_error("The ISO file is shorter than its directory says.");
}

// Root directory record from the primary volume descriptor (sector 16).
Entry rootOf(std::ifstream& file) {
    unsigned char pvd[kSector];
    readAt(file, 16 * kSector, pvd, sizeof pvd);
    if (pvd[0] != 1 || std::memcmp(pvd + 1, "CD001", 5) != 0) throw std::runtime_error("This file is not a PS2 disc image (no ISO 9660 volume).");
    const unsigned char* root = pvd + 156;
    return {"", le32(root + 2), le32(root + 10), true};
}

std::vector<Entry> listDirectory(std::ifstream& file, const Entry& dir) {
    std::vector<Entry> entries;
    std::vector<unsigned char> data(dir.size);
    readAt(file, dir.lba * kSector, data.data(), data.size());
    for (size_t pos = 0; pos < data.size();) {
        const unsigned length = data[pos];
        if (length == 0) { pos = (pos / kSector + 1) * kSector; continue; } // records do not cross sectors
        if (pos + length > data.size() || length < 34) break;
        const unsigned char* r = data.data() + pos;
        const unsigned nameLength = r[32];
        std::string name(reinterpret_cast<const char*>(r + 33), nameLength);
        pos += length;
        if (nameLength == 1 && (name[0] == 0 || name[0] == 1)) continue; // . and ..
        if (auto semicolon = name.find(';'); semicolon != std::string::npos) name.resize(semicolon);
        entries.push_back({name, le32(r + 2), le32(r + 10), (r[25] & 2) != 0});
    }
    return entries;
}

void collect(std::ifstream& file, const Entry& dir, const fs::path& relative, std::vector<std::pair<fs::path, Entry>>& out, int depth) {
    if (depth > 16) return;
    for (const auto& e : listDirectory(file, dir)) {
        if (e.directory) collect(file, e, relative / fs::u8path(e.name), out, depth + 1);
        else out.push_back({relative / fs::u8path(e.name), e});
    }
}

std::string markerText(const fs::path& iso) {
    std::error_code ec;
    const auto size = fs::file_size(iso, ec);
    const auto time = fs::last_write_time(iso, ec).time_since_epoch().count();
    return iso.u8string() + "\n" + std::to_string(size) + "\n" + std::to_string(static_cast<long long>(time)) + "\n";
}
constexpr const wchar_t* kMarker = L".extracted_from_iso";
}

bool isoHasRootFile(const fs::path& iso, const std::string& name) {
    try {
        std::ifstream file(iso, std::ios::binary);
        if (!file) return false;
        for (const auto& e : listDirectory(file, rootOf(file)))
            if (!e.directory && e.name == name) return true;
    } catch (const std::exception&) {}
    return false;
}

bool isoExtracted(const fs::path& iso, const fs::path& target) {
    std::ifstream marker(target / kMarker, std::ios::binary);
    if (!marker) return false;
    std::string text((std::istreambuf_iterator<char>(marker)), std::istreambuf_iterator<char>());
    return text == markerText(iso);
}

void extractIso(const fs::path& iso, const fs::path& target, ExtractProgress& progress) {
    try {
        std::ifstream file(iso, std::ios::binary);
        if (!file) throw std::runtime_error("The ISO file cannot be opened.");
        std::vector<std::pair<fs::path, Entry>> files;
        collect(file, rootOf(file), {}, files, 0);
        uint64_t total = 0;
        for (const auto& f : files) total += f.second.size;
        progress.total = total;
        std::error_code ec;
        fs::remove(target / kMarker, ec);
        const auto space = fs::space(target.parent_path(), ec);
        if (!ec && space.available < total) throw std::runtime_error("Not enough free disk space to unpack the disc (" + std::to_string(total >> 30) + " GB needed).");
        std::vector<char> buffer(4 << 20);
        for (const auto& [relative, entry] : files) {
            const fs::path out = target / relative;
            fs::create_directories(out.parent_path());
            // A file that already has the right size is kept (resumes an interrupted unpack).
            if (fs::is_regular_file(out, ec) && fs::file_size(out, ec) == entry.size) { progress.done += entry.size; continue; }
            std::ofstream dst(out, std::ios::binary | std::ios::trunc);
            if (!dst) throw std::runtime_error("Cannot write " + out.u8string());
            uint64_t left = entry.size, offset = static_cast<uint64_t>(entry.lba) * kSector;
            while (left) {
                if (progress.cancel) throw std::runtime_error("Unpacking was cancelled.");
                const size_t n = static_cast<size_t>(std::min<uint64_t>(left, buffer.size()));
                readAt(file, offset, buffer.data(), n);
                dst.write(buffer.data(), static_cast<std::streamsize>(n));
                if (!dst) throw std::runtime_error("Writing failed (disk full?): " + out.u8string());
                left -= n; offset += n; progress.done += n;
            }
        }
        std::ofstream marker(target / kMarker, std::ios::binary | std::ios::trunc);
        marker << markerText(iso);
    } catch (const std::exception& e) {
        progress.error = e.what();
        progress.failed = true;
    }
    progress.finished = true;
}

// Onimusha: Dawn of Dreams (SLUS_211.80): CRI Sofdec movies played on the host.
//
// The game drives Sofdec through a small wrapper object (0x2b0070..0x2b04f0). The wrapper's start, stop,
// status and picture calls are answered here: the SFD file is decoded with FFmpeg from the disc files,
// pictures are handed to the game in the same format Sofdec's mwPlyGetCurFrm gives (RGBA32 16x16
// macroblocks as the IPU's colour conversion writes them) and the ADX soundtrack is mixed into the
// host audio output. Sofdec's own player, its IPU decoding and its ADX sound channel are never started,
// so a movie can be started any number of times (title attract loop, cutscenes).
//
// The approach follows the Soulcalibur III port (TheBozos, MIT), which answers Sofdec at mwPly's level.
//
// Environment:
//   PS2X_NATIVE_MOVIES=0   keep the game's own Sofdec player
//   PS2X_MOVIE_LOG=1       one line per movie start and end
//   PS2X_MOVIE_PCM=file    append the movie soundtrack (s16 stereo 48 kHz) to a file

#include "game_overrides.h"
#include "ps2_runtime.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <filesystem>
#include <iostream>
#include <memory>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

#if !defined(PS2X_HAS_FFMPEG)
#define PS2X_HAS_FFMPEG 1
#endif

#if PS2X_HAS_FFMPEG
extern "C"
{
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/channel_layout.h>
#include <libavutil/imgutils.h>
#include <libswresample/swresample.h>
#include <libswscale/swscale.h>
}
#endif

// Host audio mix hook, called by the runtime's audio pump with interleaved s16 stereo frames.
extern void (*g_ps2xHostAudioMix)(int16_t *frames, size_t count);

namespace
{
    constexpr uint32_t kWrapperStart = 0x002B01C0u;  // (wrapper, file name)
    constexpr uint32_t kWrapperStop = 0x002B0370u;   // (wrapper)
    constexpr uint32_t kWrapperGetFrm = 0x002B03C0u; // (wrapper, &buffer, &width, &height) -> picture number or -1
    constexpr uint32_t kWrapperRelFrm = 0x002B0440u; // (wrapper)
    constexpr uint32_t kWrapperStat = 0x002B0470u;   // (wrapper) -> 0 playing, -1 ended
    constexpr uint32_t kSoundFlag = 0x0082FF61u;     // 0: the wrapper mutes the movie (mwPlySetOutVol -960)

    constexpr int kAudioRate = 48000;
    constexpr size_t kMaxQueuedPictures = 6;
    constexpr size_t kMaxQueuedAudioFrames = kAudioRate * 2;

    bool movieLog()
    {
        static const bool on = [] { const char *v = std::getenv("PS2X_MOVIE_LOG"); return v && *v && *v != '0'; }();
        return on;
    }

    uint32_t readU32(const uint8_t *rdram, uint32_t address)
    {
        uint32_t value = 0;
        std::memcpy(&value, rdram + (address & 0x01FFFFFFu), sizeof(value));
        return value;
    }

    void writeU32(uint8_t *rdram, uint32_t address, uint32_t value)
    {
        std::memcpy(rdram + (address & 0x01FFFFFFu), &value, sizeof(value));
    }

    std::string readGuestString(const uint8_t *rdram, uint32_t address)
    {
        std::string text;
        for (uint32_t i = 0; i < 256u; ++i)
        {
            const char c = static_cast<char>(rdram[(address + i) & 0x01FFFFFFu]);
            if (c == '\0')
                break;
            text.push_back(c);
        }
        return text;
    }

    void returnTo(R5900Context *ctx)
    {
        ctx->pc = getRegU32(ctx, 31);
    }

    // Case-insensitive lookup of a relative path below a root, one component at a time.
    bool resolveBelow(const std::filesystem::path &root, const std::vector<std::string> &parts, std::filesystem::path &out)
    {
        std::filesystem::path current = root;
        std::error_code ec;
        for (const std::string &part : parts)
        {
            std::filesystem::path direct = current / part;
            if (std::filesystem::exists(direct, ec))
            {
                current = direct;
                continue;
            }
            bool found = false;
            for (const auto &entry : std::filesystem::directory_iterator(current, ec))
            {
                std::string name = entry.path().filename().string();
                if (name.size() == part.size() &&
                    std::equal(name.begin(), name.end(), part.begin(), [](char a, char b) { return std::tolower(static_cast<unsigned char>(a)) == std::tolower(static_cast<unsigned char>(b)); }))
                {
                    current = entry.path();
                    found = true;
                    break;
                }
            }
            if (!found)
                return false;
        }
        out = current;
        return std::filesystem::is_regular_file(out, ec);
    }

    std::filesystem::path resolveMovieFile(const std::string &guestName)
    {
        std::vector<std::string> parts;
        std::string part;
        for (char c : guestName)
        {
            if (c == '\\' || c == '/' || c == ':')
            {
                if (!part.empty())
                    parts.push_back(part);
                part.clear();
                continue;
            }
            if (c == ';')
                break;
            part.push_back(c);
        }
        if (!part.empty())
            parts.push_back(part);
        if (!parts.empty() && (parts.front() == "cdrom0" || parts.front() == "cdrom"))
            parts.erase(parts.begin());

        const PS2Runtime::IoPaths &paths = PS2Runtime::getIoPaths();
        std::vector<std::filesystem::path> roots;
        if (!paths.cdRoot.empty())
            roots.push_back(paths.cdRoot);
        if (!paths.elfDirectory.empty())
            roots.push_back(paths.elfDirectory);
        roots.push_back(std::filesystem::current_path());

        std::filesystem::path resolved;
        for (const auto &root : roots)
        {
            if (resolveBelow(root, parts, resolved))
                return resolved;
            std::vector<std::string> withImage = parts;
            withImage.insert(withImage.begin(), "IMAGE");
            if (resolveBelow(root, withImage, resolved))
                return resolved;
        }
        return {};
    }

#if PS2X_HAS_FFMPEG
    struct Picture
    {
        int64_t number = 0;
        int width = 0;
        int height = 0;
        std::vector<uint8_t> rgba;
    };

    class SfdPlayer
    {
    public:
        SfdPlayer(std::filesystem::path path, bool muted) : m_path(std::move(path)), m_muted(muted)
        {
            m_worker = std::thread([this] { decodeLoop(); });
        }

        ~SfdPlayer()
        {
            {
                std::lock_guard<std::mutex> lock(m_mutex);
                m_stop = true;
            }
            m_wake.notify_all();
            if (m_worker.joinable())
                m_worker.join();
        }

        double fps() const { return m_fps.load(); }

        // The newest picture due by the movie clock, or none. Older pictures are dropped.
        bool takeDuePicture(double seconds, Picture &out)
        {
            std::lock_guard<std::mutex> lock(m_mutex);
            const int64_t due = static_cast<int64_t>(seconds * m_fps.load());
            bool have = false;
            while (!m_pictures.empty() && m_pictures.front().number <= due)
            {
                out = std::move(m_pictures.front());
                m_pictures.pop_front();
                have = true;
            }
            if (have)
                m_wake.notify_all();
            return have;
        }

        // Ended once the decoder is done and every picture was handed out.
        bool ended() const
        {
            std::lock_guard<std::mutex> lock(m_mutex);
            return m_finished && m_pictures.empty();
        }

        bool failed() const { return m_failed.load(); }

        void mixAudio(int16_t *frames, size_t count)
        {
            std::lock_guard<std::mutex> lock(m_mutex);
            if (!m_started)
                return;
            const size_t available = m_audio.size() / 2u;
            const size_t n = std::min(count, available);
            for (size_t i = 0; i < n * 2u; ++i)
            {
                const int mixed = frames[i] + m_audio[i];
                frames[i] = static_cast<int16_t>(std::clamp(mixed, -32768, 32767));
            }
            m_audio.erase(m_audio.begin(), m_audio.begin() + static_cast<std::ptrdiff_t>(n * 2u));
            if (n != 0)
                m_wake.notify_all();
        }

        void markStarted()
        {
            std::lock_guard<std::mutex> lock(m_mutex);
            m_started = true;
        }

        int64_t picturesDecoded() const { return m_decoded.load(); }

    private:
        void decodeLoop()
        {
            AVFormatContext *format = nullptr;
            if (avformat_open_input(&format, m_path.string().c_str(), nullptr, nullptr) != 0 ||
                avformat_find_stream_info(format, nullptr) < 0)
            {
                if (format)
                    avformat_close_input(&format);
                finish(true);
                return;
            }

            int videoIndex = av_find_best_stream(format, AVMEDIA_TYPE_VIDEO, -1, -1, nullptr, 0);
            int audioIndex = -1;
            for (unsigned i = 0; i < format->nb_streams; ++i)
            {
                if (format->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_AUDIO &&
                    format->streams[i]->codecpar->codec_id == AV_CODEC_ID_ADPCM_ADX)
                {
                    audioIndex = static_cast<int>(i);
                    break;
                }
            }
            if (audioIndex < 0)
                audioIndex = av_find_best_stream(format, AVMEDIA_TYPE_AUDIO, -1, videoIndex, nullptr, 0);

            auto openCodec = [&](int index) -> AVCodecContext *
            {
                if (index < 0)
                    return nullptr;
                const AVCodecParameters *parameters = format->streams[index]->codecpar;
                const AVCodec *codec = avcodec_find_decoder(parameters->codec_id);
                AVCodecContext *context = codec ? avcodec_alloc_context3(codec) : nullptr;
                if (context && (avcodec_parameters_to_context(context, parameters) < 0 || avcodec_open2(context, codec, nullptr) < 0))
                    avcodec_free_context(&context);
                return context;
            };

            AVCodecContext *video = openCodec(videoIndex);
            AVCodecContext *audio = openCodec(audioIndex);
            if (!video)
            {
                avcodec_free_context(&audio);
                avformat_close_input(&format);
                finish(true);
                return;
            }

            AVRational rate = format->streams[videoIndex]->avg_frame_rate;
            if (rate.num <= 0 || rate.den <= 0)
                rate = format->streams[videoIndex]->r_frame_rate;
            if (rate.num > 0 && rate.den > 0)
                m_fps = av_q2d(rate);

            SwrContext *resampler = nullptr;
            if (audio)
            {
                AVChannelLayout stereo = AV_CHANNEL_LAYOUT_STEREO;
                if (swr_alloc_set_opts2(&resampler, &stereo, AV_SAMPLE_FMT_S16, kAudioRate, &audio->ch_layout, audio->sample_fmt,
                                        audio->sample_rate, 0, nullptr) < 0 ||
                    swr_init(resampler) < 0)
                    swr_free(&resampler);
            }

            static FILE *pcmDump = []() -> FILE *
            {
                const char *path = std::getenv("PS2X_MOVIE_PCM");
                return path && *path ? std::fopen(path, "ab") : nullptr;
            }();

            SwsContext *scaler = nullptr;
            AVPacket *packet = av_packet_alloc();
            AVFrame *frame = av_frame_alloc();
            int64_t pictureNumber = 0;
            bool draining = false;

            auto receivePictures = [&]()
            {
                while (avcodec_receive_frame(video, frame) == 0)
                {
                    Picture picture;
                    picture.number = pictureNumber++;
                    picture.width = frame->width;
                    picture.height = frame->height;
                    picture.rgba.resize(static_cast<size_t>(frame->width) * frame->height * 4u);
                    scaler = sws_getCachedContext(scaler, frame->width, frame->height, static_cast<AVPixelFormat>(frame->format),
                                                  frame->width, frame->height, AV_PIX_FMT_RGBA, SWS_BILINEAR, nullptr, nullptr, nullptr);
                    uint8_t *planes[4] = {picture.rgba.data(), nullptr, nullptr, nullptr};
                    int strides[4] = {frame->width * 4, 0, 0, 0};
                    if (scaler)
                        sws_scale(scaler, frame->data, frame->linesize, 0, frame->height, planes, strides);
                    ++m_decoded;

                    std::unique_lock<std::mutex> lock(m_mutex);
                    m_wake.wait(lock, [&] { return m_stop || m_pictures.size() < kMaxQueuedPictures; });
                    if (m_stop)
                        return;
                    m_pictures.push_back(std::move(picture));
                }
            };

            auto receiveAudio = [&]()
            {
                while (avcodec_receive_frame(audio, frame) == 0)
                {
                    if (!resampler)
                        continue;
                    const int capacity = swr_get_out_samples(resampler, frame->nb_samples);
                    if (capacity <= 0)
                        continue;
                    std::vector<int16_t> pcm(static_cast<size_t>(capacity) * 2u);
                    uint8_t *out[1] = {reinterpret_cast<uint8_t *>(pcm.data())};
                    const int produced = swr_convert(resampler, out, capacity, const_cast<const uint8_t **>(frame->extended_data), frame->nb_samples);
                    if (produced <= 0)
                        continue;
                    pcm.resize(static_cast<size_t>(produced) * 2u);
                    if (m_muted)
                        std::fill(pcm.begin(), pcm.end(), int16_t{0});
                    if (pcmDump)
                        std::fwrite(pcm.data(), sizeof(int16_t), pcm.size(), pcmDump);

                    // Never wait for the host: without an audio device nothing is consumed, and the pictures
                    // must keep coming. Past the cap the oldest samples go.
                    std::lock_guard<std::mutex> lock(m_mutex);
                    if (m_stop)
                        return;
                    m_audio.insert(m_audio.end(), pcm.begin(), pcm.end());
                    if (m_audio.size() > kMaxQueuedAudioFrames * 2u)
                        m_audio.erase(m_audio.begin(), m_audio.begin() + static_cast<std::ptrdiff_t>(m_audio.size() - kMaxQueuedAudioFrames * 2u));
                }
            };

            while (!stopRequested())
            {
                if (!draining)
                {
                    const int read = av_read_frame(format, packet);
                    if (read < 0)
                    {
                        draining = true;
                        avcodec_send_packet(video, nullptr);
                        if (audio)
                            avcodec_send_packet(audio, nullptr);
                    }
                    else
                    {
                        if (packet->stream_index == videoIndex && avcodec_send_packet(video, packet) >= 0)
                            receivePictures();
                        else if (audio && packet->stream_index == audioIndex && avcodec_send_packet(audio, packet) >= 0)
                            receiveAudio();
                        av_packet_unref(packet);
                        continue;
                    }
                }
                receivePictures();
                if (audio)
                    receiveAudio();
                break;
            }

            av_frame_free(&frame);
            av_packet_free(&packet);
            sws_freeContext(scaler);
            swr_free(&resampler);
            avcodec_free_context(&video);
            avcodec_free_context(&audio);
            avformat_close_input(&format);
            finish(false);
        }

        bool stopRequested()
        {
            std::lock_guard<std::mutex> lock(m_mutex);
            return m_stop;
        }

        void finish(bool failed)
        {
            m_failed = failed;
            std::lock_guard<std::mutex> lock(m_mutex);
            m_finished = true;
        }

        std::filesystem::path m_path;
        bool m_muted = false;
        std::thread m_worker;
        mutable std::mutex m_mutex;
        std::condition_variable m_wake;
        std::deque<Picture> m_pictures;
        std::deque<int16_t> m_audio;
        bool m_stop = false;
        bool m_finished = false;
        bool m_started = false;
        std::atomic<bool> m_failed{false};
        std::atomic<double> m_fps{29.97};
        std::atomic<int64_t> m_decoded{0};
    };

    struct MovieState
    {
        std::mutex mutex;
        std::shared_ptr<SfdPlayer> player;
        uint32_t wrapper = 0;
        std::string name;
        bool clockStarted = false;
        std::chrono::steady_clock::time_point clockStart{};
        int32_t delivered = 0;
        uint32_t buffer = 0;
    };

    MovieState &state()
    {
        static MovieState s;
        return s;
    }

    void hostAudioMix(int16_t *frames, size_t count)
    {
        std::shared_ptr<SfdPlayer> player;
        {
            std::lock_guard<std::mutex> lock(state().mutex);
            player = state().player;
        }
        if (player)
            player->mixAudio(frames, count);
    }

    void stopCurrent(const char *why)
    {
        std::shared_ptr<SfdPlayer> old;
        {
            std::lock_guard<std::mutex> lock(state().mutex);
            old.swap(state().player);
            if (old && movieLog())
                std::cerr << "[movie] " << why << " " << state().name << " after " << state().delivered << " pictures" << std::endl;
            state().wrapper = 0;
            state().delivered = 0;
            state().clockStarted = false;
        }
        old.reset(); // joins the decoder outside the lock
    }

    // Pictures in the layout Sofdec hands out: RGBA32 16x16 macroblocks as the IPU's colour conversion
    // writes them (64 bytes a row), the macroblocks column by column (top to bottom, then left to right).
    void writeMacroblocks(uint8_t *rdram, uint32_t destination, const Picture &picture)
    {
        static const bool columnMajor = [] { const char *v = std::getenv("PS2X_MOVIE_MB_ROWS"); return !(v && *v == '1'); }();
        const int mbw = (picture.width + 15) / 16;
        const int mbh = (picture.height + 15) / 16;
        uint32_t out = destination;
        for (int i = 0; i < mbw * mbh; ++i)
        {
            const int mbx = columnMajor ? i / mbh : i % mbw;
            const int mby = columnMajor ? i % mbh : i / mbw;
            for (int y = 0; y < 16; ++y)
            {
                const int py = std::min(mby * 16 + y, picture.height - 1);
                uint8_t row[64];
                for (int x = 0; x < 16; ++x)
                {
                    const int px = std::min(mbx * 16 + x, picture.width - 1);
                    const uint8_t *src = &picture.rgba[(static_cast<size_t>(py) * picture.width + px) * 4u];
                    row[x * 4 + 0] = src[0];
                    row[x * 4 + 1] = src[1];
                    row[x * 4 + 2] = src[2];
                    row[x * 4 + 3] = 0x40; // Sofdec sets TH1=0x1FF: every pixel gets alpha 0x40
                }
                std::memcpy(rdram + (out & 0x01FFFFFFu), row, sizeof(row));
                out += 64u;
            }
        }
    }

    void wrapperStart(uint8_t *rdram, R5900Context *ctx, PS2Runtime *)
    {
        returnTo(ctx);
        const uint32_t wrapper = getRegU32(ctx, 4);
        const std::string name = readGuestString(rdram, getRegU32(ctx, 5));
        stopCurrent("replaced");

        const std::filesystem::path path = resolveMovieFile(name);
        const bool muted = rdram[kSoundFlag] == 0u;
        const uint32_t work = readU32(rdram, wrapper + 0x58u);
        const uint32_t workSize = readU32(rdram, wrapper + 0x5Cu);

        // Same fields the game's start fills, so the rest of the wrapper reads sane values.
        writeU32(rdram, wrapper + 0x00u, 1u);
        writeU32(rdram, wrapper + 0x54u, wrapper);

        std::lock_guard<std::mutex> lock(state().mutex);
        state().wrapper = wrapper;
        state().name = name;
        state().delivered = 0;
        state().clockStarted = false;
        state().buffer = (work + 63u) & ~63u;
        if (path.empty())
        {
            std::cerr << "[movie] file not found: " << name << std::endl;
            state().player.reset();
        }
        else
        {
            state().player = std::make_shared<SfdPlayer>(path, muted);
        }
        if (movieLog())
            std::cerr << "[movie] start " << name << " -> " << path.string() << " work=0x" << std::hex << work << " size=0x" << workSize
                      << std::dec << (muted ? " muted" : "") << std::endl;
    }

    void wrapperStop(uint8_t *rdram, R5900Context *ctx, PS2Runtime *)
    {
        returnTo(ctx);
        const uint32_t wrapper = getRegU32(ctx, 4);
        if (readU32(rdram, wrapper) != 0u)
        {
            stopCurrent("stop");
            writeU32(rdram, wrapper, 0u);
        }
    }

    void wrapperGetFrame(uint8_t *rdram, R5900Context *ctx, PS2Runtime *)
    {
        returnTo(ctx);
        const uint32_t wrapper = getRegU32(ctx, 4);
        const uint32_t bufferOut = getRegU32(ctx, 5);
        const uint32_t widthOut = getRegU32(ctx, 6);
        const uint32_t heightOut = getRegU32(ctx, 7);
        setReturnS32(ctx, -1);
        if (readU32(rdram, wrapper) == 0u)
            return;

        std::shared_ptr<SfdPlayer> player;
        double seconds = 0.0;
        {
            std::lock_guard<std::mutex> lock(state().mutex);
            player = state().player;
            if (!player)
                return;
            if (!state().clockStarted)
            {
                state().clockStarted = true;
                state().clockStart = std::chrono::steady_clock::now();
                player->markStarted();
            }
            seconds = std::chrono::duration<double>(std::chrono::steady_clock::now() - state().clockStart).count();
        }

        Picture picture;
        if (!player->takeDuePicture(seconds, picture))
            return;

        std::lock_guard<std::mutex> lock(state().mutex);
        const uint32_t needed = static_cast<uint32_t>(((picture.width + 15) / 16) * ((picture.height + 15) / 16) * 1024);
        const uint32_t workSize = readU32(rdram, wrapper + 0x5Cu);
        if (state().buffer == 0u || needed + 64u > workSize)
        {
            static bool warned = false;
            if (!warned)
                std::cerr << "[movie] work area too small for a picture (need 0x" << std::hex << needed << ", have 0x" << workSize << ")" << std::dec << std::endl;
            warned = true;
            return;
        }
        writeMacroblocks(rdram, state().buffer, picture);
        writeU32(rdram, bufferOut, state().buffer);
        writeU32(rdram, widthOut, static_cast<uint32_t>(picture.width));
        writeU32(rdram, heightOut, static_cast<uint32_t>(picture.height));
        setReturnS32(ctx, state().delivered++);
    }

    void wrapperReleaseFrame(uint8_t *, R5900Context *ctx, PS2Runtime *)
    {
        returnTo(ctx);
    }

    void wrapperStatus(uint8_t *rdram, R5900Context *ctx, PS2Runtime *)
    {
        returnTo(ctx);
        const uint32_t wrapper = getRegU32(ctx, 4);
        if (readU32(rdram, wrapper) == 0u)
        {
            setReturnS32(ctx, -1);
            return;
        }
        std::shared_ptr<SfdPlayer> player;
        {
            std::lock_guard<std::mutex> lock(state().mutex);
            player = state().player;
        }
        const bool ended = !player || player->ended();
        if (ended && movieLog())
        {
            static uint32_t lastWrapperLogged = 0;
            static int32_t lastCount = -1;
            std::lock_guard<std::mutex> lock(state().mutex);
            if (lastWrapperLogged != wrapper || lastCount != state().delivered)
                std::cerr << "[movie] end " << state().name << " pictures=" << state().delivered
                          << (player && player->failed() ? " (decode failed)" : "") << std::endl;
            lastWrapperLogged = wrapper;
            lastCount = state().delivered;
        }
        setReturnS32(ctx, ended ? -1 : 0);
    }
#endif

    void applyOnimushaMovies(PS2Runtime &runtime)
    {
#if PS2X_HAS_FFMPEG
        const char *flag = std::getenv("PS2X_NATIVE_MOVIES");
        if (flag && *flag == '0')
            return;
        runtime.replaceFunction(kWrapperStart, wrapperStart);
        runtime.replaceFunction(kWrapperStop, wrapperStop);
        runtime.replaceFunction(kWrapperGetFrm, wrapperGetFrame);
        runtime.replaceFunction(kWrapperRelFrm, wrapperReleaseFrame);
        runtime.replaceFunction(kWrapperStat, wrapperStatus);
        g_ps2xHostAudioMix = hostAudioMix;
        std::cerr << "[movie] Sofdec movies are played by the host (FFmpeg)" << std::endl;
#else
        (void)runtime;
#endif
    }
}

void ps2xRegisterOnimushaOverrides()
{
    static bool registered = false;
    if (registered)
        return;
    registered = true;
    ps2_game_overrides::registerDescriptor({"Onimusha: Dawn of Dreams host movies", "SLUS_211.80", 0u, 0u, applyOnimushaMovies});
}

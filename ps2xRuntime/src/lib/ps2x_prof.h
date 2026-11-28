#pragma once
// Exclusive time per subsystem on the game thread, reported in the [speed] log line.
#include <atomic>
#include <chrono>
#include <cstdint>

namespace ps2x::prof
{
    enum Category : int
    {
        Ee = 0, // everything not in a scope below: the recompiled game code
        Vu1,
        Gs,
        Iop,
        Present,
        Vif,
        GsDraw,   // GPU renderer: building and submitting draw batches
        GsRead,   // GPU renderer: reading GS memory back from the GPU
        GsUpload, // GPU renderer: uploading changed GS memory and decoded textures
        GsXfer,   // image transfers into GS memory on the CPU side (BeginTransfer, UploadImage)
        Count
    };

    extern std::atomic<uint64_t> g_ns[Count];
    // Time on the VIF1 thread. Its index Ee holds the time outside any scope, i.e. waiting for work.
    extern std::atomic<uint64_t> g_nsVif1[Count];

    // Event counters per second, printed in the [speed] line.
    enum Counter : int
    {
        Readbacks = 0,
        ReadbackKiB,
        UploadKiB,
        Batches,
        TextureDecodes,
        Transfers,
        ImageChunks,
        Vif1Kicks,    // VIF1 DMA transfers processed
        GifKicks,     // GIF (PATH3) DMA transfers processed
        VifIrqs,      // VIF codes with the interrupt bit
        GsSignals,    // GS SIGNAL served by running the EE handler right away
        GsFinish,     // GS FINISH
        CounterCount
    };

    extern std::atomic<uint64_t> g_count[CounterCount];

    inline void count(int counter, uint64_t value = 1)
    {
        g_count[counter].fetch_add(value, std::memory_order_relaxed);
    }

    struct State
    {
        int current = Ee;
        std::chrono::steady_clock::time_point last = std::chrono::steady_clock::now();
        std::atomic<uint64_t> *sink = g_ns;
    };

    inline State &state()
    {
        thread_local State s;
        return s;
    }

    // The calling thread's time goes to g_nsVif1 from now on.
    inline void markVif1Thread()
    {
        State &s = state();
        s.sink = g_nsVif1;
        s.current = Ee;
        s.last = std::chrono::steady_clock::now();
    }

    struct Scope
    {
        int previous;
        explicit Scope(int category)
        {
            State &s = state();
            const auto now = std::chrono::steady_clock::now();
            s.sink[s.current].fetch_add(static_cast<uint64_t>(std::chrono::duration_cast<std::chrono::nanoseconds>(now - s.last).count()),
                                        std::memory_order_relaxed);
            s.last = now;
            previous = s.current;
            s.current = category;
        }
        ~Scope()
        {
            State &s = state();
            const auto now = std::chrono::steady_clock::now();
            s.sink[s.current].fetch_add(static_cast<uint64_t>(std::chrono::duration_cast<std::chrono::nanoseconds>(now - s.last).count()),
                                        std::memory_order_relaxed);
            s.last = now;
            s.current = previous;
        }
        Scope(const Scope &) = delete;
        Scope &operator=(const Scope &) = delete;
    };
}

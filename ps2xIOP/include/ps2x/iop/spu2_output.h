#pragma once

#include <cstddef>
#include <cstdint>

// Mixed 48 kHz stereo output of the emulated SPU2. The IOP side produces samples while it runs,
// the host audio side takes them out; both ends may be on different threads.
namespace ps2x::iop
{
    // Copies up to `frames` stereo frames (2 int16 each) into `out`, returns how many were copied.
    std::size_t spu2ReadOutput(std::int16_t *out, std::size_t frames);
    // Frames waiting in the buffer.
    std::size_t spu2BufferedFrames();
}

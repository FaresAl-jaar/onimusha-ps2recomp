#pragma once

#include <cstddef>
#include <cstdint>
#include <functional>

// SPU2: the PS2 sound processor on the IOP side. Registers at 0x1F900000..0x1F9007FF, sound RAM
// (2 MB) reached through IOP DMA channels 4 (core 0) and 7 (core 1). Output is 48 kHz stereo.
namespace ps2x::iop::spu2
{
    struct Hooks
    {
        // Pointer into IOP RAM for an IOP address.
        std::function<std::uint8_t *(std::uint32_t address)> ramPtr;
        // IOP interrupt line (9 for SPU2 IRQ).
        std::function<void(int line)> raiseInterrupt;
        // A DMA started with sceSd... is finished at IOP cycle `dueCycle`; channel is the IOP
        // interrupt number of the DMA channel.
        std::function<void(int channel, std::uint64_t dueCycle)> dmaDone;
    };

    void setHooks(Hooks hooks);
    void reset();
    std::uint16_t *ram();
    std::uint32_t read(std::uint32_t address, unsigned size);
    void write(std::uint32_t address, std::uint32_t value, unsigned size);
    void dma(int core, std::uint32_t madr, std::uint32_t words, bool toSpu, int channel);
    void stop_dma(int core);
    void set_sink(std::function<void(const std::int16_t *samples, std::size_t frames)> sink);
    // Runs the mixer up to the given IOP cycle (768 IOP cycles per output sample).
    void advanceTo(std::uint64_t cycles);
    std::uint64_t nextTickCycle();
    void dump_voices();
    void dump_audio(const char *path);
}

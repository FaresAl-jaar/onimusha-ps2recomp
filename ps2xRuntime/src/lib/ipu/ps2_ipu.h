#pragma once

#include <cstdint>
#include <functional>

// PS2 IPU (image processing unit, the MPEG-1/2 decoder of the EE). Registers live at
// 0x10002000..0x10002034, the FIFOs at 0x10007000 (out) and 0x10007010 (in), and the DMA
// channels fromIPU (3, 0x1000B000) and toIPU (4, 0x1000B400) feed it.
namespace ps2_ipu
{
    struct Hooks
    {
        // Next qword of the toIPU DMA stream; false when the channel has nothing to send.
        std::function<bool(std::uint8_t *qword)> pullInput;
        // Hands one decoded qword to the fromIPU DMA; false when the channel cannot take it.
        std::function<bool(const std::uint8_t *qword)> pushOutput;
        // INTC cause 8, raised when a command finishes.
        std::function<void()> raiseInterrupt;
    };

    void setHooks(Hooks hooks);
    void reset();
    std::uint32_t read32(std::uint32_t address);
    void write32(std::uint32_t address, std::uint32_t value);
    void writeFifo(const std::uint8_t *qword);
    void readFifo(std::uint8_t *qword);
    // A DMA channel of the IPU started or got more room; lets a stalled command continue.
    void dmaStarted();
}

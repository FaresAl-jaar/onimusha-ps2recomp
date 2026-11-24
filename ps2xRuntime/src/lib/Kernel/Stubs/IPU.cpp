#include "Common.h"
#include <cstdio>
#include <cstring>
#include "IPU.h"
#include "runtime/ee_scheduler.h"

namespace
{
    constexpr uint32_t REG_IPU_CTRL = 0x10002010u;
    constexpr uint32_t REG_IPU_CMD = 0x10002000u;
    constexpr uint32_t REG_IPU_IN_FIFO = 0x10007010u;
    constexpr uint32_t REG_D4_CHCR = 0x1000B400u;
    constexpr uint32_t IQVAL_BASE_FALLBACK = 0x1721e0u;
    constexpr uint32_t VQVAL_OFFSET = 0x50u;

    // libipu keeps its quantiser tables (intra matrix in zigzag order, the flat non intra
    // matrix as one qword, then the VQ CLUT) in the data section, at a different address in every game.
    // The intra matrix is the MPEG default one, so it is found by its first row.
    uint32_t findIqTable(uint8_t *rdram)
    {
        static uint32_t cached = 0u;
        if (cached != 0u)
            return cached;
        static const uint8_t kIntraHead[16] = {0x08, 0x10, 0x10, 0x13, 0x10, 0x13, 0x16, 0x16,
                                               0x16, 0x16, 0x16, 0x16, 0x1a, 0x18, 0x1a, 0x1b};
        uint8_t flat[16];
        std::memset(flat, 0x10, sizeof(flat));
        for (uint32_t address = 0x100000u; address + 0x60u < 0x02000000u; address += 16u)
        {
            const uint8_t *p = rdram + address;
            if (std::memcmp(p, kIntraHead, sizeof(kIntraHead)) == 0 &&
                std::memcmp(p + 0x40u, flat, sizeof(flat)) == 0 &&
                std::memcmp(p + 0x50u, flat, sizeof(flat)) != 0)
            {
                cached = address;
                std::fprintf(stderr, "[ipu] quantiser tables at 0x%08x\n", address);
                return cached;
            }
        }
        std::fprintf(stderr, "[ipu] quantiser tables not found, using 0x%08x\n", IQVAL_BASE_FALLBACK);
        cached = IQVAL_BASE_FALLBACK;
        return cached;
    }

    void completeIpuInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        PS2Memory &mem = runtime->memory();
        const uint32_t IQVAL_BASE = findIqTable(rdram);
        const uint32_t VQVAL_BASE = IQVAL_BASE + VQVAL_OFFSET;
        // setD4_CHCR(1): toIPU reads from memory, stopped.
        mem.write32(REG_D4_CHCR, 1u);
        mem.write32(REG_IPU_CTRL, 0x40000000u);
        mem.write32(REG_IPU_CMD, 0u);

        __m128i v;
        v = runtime->Load128(rdram, ctx, IQVAL_BASE + 0x00u);
        mem.write128(REG_IPU_IN_FIFO, v);
        v = runtime->Load128(rdram, ctx, IQVAL_BASE + 0x10u);
        mem.write128(REG_IPU_IN_FIFO, v);
        v = runtime->Load128(rdram, ctx, IQVAL_BASE + 0x20u);
        mem.write128(REG_IPU_IN_FIFO, v);
        v = runtime->Load128(rdram, ctx, IQVAL_BASE + 0x30u);
        mem.write128(REG_IPU_IN_FIFO, v);
        v = runtime->Load128(rdram, ctx, IQVAL_BASE + 0x40u);
        mem.write128(REG_IPU_IN_FIFO, v);
        mem.write128(REG_IPU_IN_FIFO, v);
        mem.write128(REG_IPU_IN_FIFO, v);
        mem.write128(REG_IPU_IN_FIFO, v);

        mem.write32(REG_IPU_CMD, 0x50000000u);
        mem.write32(REG_IPU_CMD, 0x58000000u);

        v = runtime->Load128(rdram, ctx, VQVAL_BASE + 0x00u);
        mem.write128(REG_IPU_IN_FIFO, v);
        v = runtime->Load128(rdram, ctx, VQVAL_BASE + 0x10u);
        mem.write128(REG_IPU_IN_FIFO, v);

        mem.write32(REG_IPU_CMD, 0x60000000u);
        mem.write32(REG_IPU_CMD, 0x90000000u);
        mem.write32(REG_IPU_CTRL, 0x40000000u);
        mem.write32(REG_IPU_CMD, 0u);
        setReturnS32(ctx, 0);
    }
}

namespace ps2_stubs
{
    void sceIpuInit(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        if (!runtime)
            return;

        if (!runtime->memory().getRDRAM())
        {
            if (!runtime->memory().initialize())
            {
                setReturnS32(ctx, -1);
                return;
            }
        }

        if (!runtime->syncCoreSubsystems())
        {
            setReturnS32(ctx, -1);
            return;
        }

        completeIpuInit(rdram, ctx, runtime);
    }

    void sceIpuRestartDMA(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, 0);
    }

    void sceIpuStopDMA(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, 0);
    }

    void sceIpuSync(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, 0);
    }
}

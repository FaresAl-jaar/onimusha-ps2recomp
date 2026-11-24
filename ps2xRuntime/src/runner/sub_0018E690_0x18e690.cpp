#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018E690
// Address: 0x18e690 - 0x18e6d4
void sub_0018E690_0x18e690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E690_0x18e690");
#endif

    ctx->pc = 0x18e690u;

    // 0x18e690: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x18e690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18e694: 0xa4820022  sh          $v0, 0x22($a0)
    ctx->pc = 0x18e694u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e698: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x18e698u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x18e69c: 0xa0820021  sb          $v0, 0x21($a0)
    ctx->pc = 0x18e69cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x18e6a0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x18e6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e6a4: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x18e6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x18e6a8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18e6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e6ac: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x18e6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x18e6b0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x18e6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e6b4: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x18e6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x18e6b8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x18e6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e6bc: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x18e6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x18e6c0: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x18e6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e6c4: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x18e6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x18e6c8: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x18e6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x18e6cc: 0x806399c  j           func_18E670
    ctx->pc = 0x18E6CCu;
    ctx->pc = 0x18E6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6CCu;
    // 0x18e6d0: 0xac80003c  sw          $zero, 0x3C($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E670u;
    sub_0018E670_0x18e670(rdram, ctx, runtime); return;
    ctx->pc = 0x18E6D4u;
}

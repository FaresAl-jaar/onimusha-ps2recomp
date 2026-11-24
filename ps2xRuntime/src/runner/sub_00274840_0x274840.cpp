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

// Function: sub_00274840
// Address: 0x274840 - 0x2748b8
void sub_00274840_0x274840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274840_0x274840");
#endif

    ctx->pc = 0x274840u;

    // 0x274840: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x274840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x274844: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274848: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x274848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x27484c: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x27484cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x274850: 0xa0800029  sb          $zero, 0x29($a0)
    ctx->pc = 0x274850u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x274854: 0xa0800028  sb          $zero, 0x28($a0)
    ctx->pc = 0x274854u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x274858: 0xa080002a  sb          $zero, 0x2A($a0)
    ctx->pc = 0x274858u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x27485c: 0xa080002b  sb          $zero, 0x2B($a0)
    ctx->pc = 0x27485cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x274860: 0xa080002c  sb          $zero, 0x2C($a0)
    ctx->pc = 0x274860u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x274864: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x274864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x274868: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x274868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x27486c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x27486cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x274870: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x274870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x274874: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x274874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x274878: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x274878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27487c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x27487cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274880: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x274880u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x274884: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x274884u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x274888: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x274888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x27488c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x27488cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x274890: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x274890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x274894: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x274894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x274898: 0xa4800026  sh          $zero, 0x26($a0)
    ctx->pc = 0x274898u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x27489c: 0xa4800024  sh          $zero, 0x24($a0)
    ctx->pc = 0x27489cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x2748a0: 0xa4800022  sh          $zero, 0x22($a0)
    ctx->pc = 0x2748a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x2748a4: 0xa4800020  sh          $zero, 0x20($a0)
    ctx->pc = 0x2748a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x2748a8: 0xa480001e  sh          $zero, 0x1E($a0)
    ctx->pc = 0x2748a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x2748ac: 0xa480001c  sh          $zero, 0x1C($a0)
    ctx->pc = 0x2748acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x2748b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2748B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2748B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748B0u;
        // 0x2748b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2748B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2748B8u;
}

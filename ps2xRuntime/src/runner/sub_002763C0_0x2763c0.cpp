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

// Function: sub_002763C0
// Address: 0x2763c0 - 0x276410
void sub_002763C0_0x2763c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002763C0_0x2763c0");
#endif

    ctx->pc = 0x2763c0u;

    // 0x2763c0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2763c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2763c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2763c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2763c8: 0x0  nop
    ctx->pc = 0x2763c8u;
    // NOP
    // 0x2763cc: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2763ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2763d0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2763D0u;
    {
        const bool branch_taken_0x2763d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2763d0) {
            ctx->pc = 0x2763E0u;
            goto label_2763e0;
        }
    }
    ctx->pc = 0x2763D8u;
    // 0x2763d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2763D8u;
    {
        const bool branch_taken_0x2763d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2763DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2763D8u;
        // 0x2763dc: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2763d8) {
            ctx->pc = 0x276408u;
            goto label_276408;
        }
    }
    ctx->pc = 0x2763E0u;
label_2763e0:
    // 0x2763e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2763e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2763e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2763e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2763e8: 0x0  nop
    ctx->pc = 0x2763e8u;
    // NOP
    // 0x2763ec: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2763ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2763f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2763F0u;
    {
        const bool branch_taken_0x2763f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2763f0) {
            ctx->pc = 0x276400u;
            goto label_276400;
        }
    }
    ctx->pc = 0x2763F8u;
    // 0x2763f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2763F8u;
    {
        const bool branch_taken_0x2763f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2763FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2763F8u;
        // 0x2763fc: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2763f8) {
            ctx->pc = 0x276408u;
            goto label_276408;
        }
    }
    ctx->pc = 0x276400u;
label_276400:
    // 0x276400: 0xe48c0004  swc1        $f12, 0x4($a0)
    ctx->pc = 0x276400u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x276404: 0x0  nop
    ctx->pc = 0x276404u;
    // NOP
label_276408:
    // 0x276408: 0x3e00008  jr          $ra
    ctx->pc = 0x276408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276410u;
}

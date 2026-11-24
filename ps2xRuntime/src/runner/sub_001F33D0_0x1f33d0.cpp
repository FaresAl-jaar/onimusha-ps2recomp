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

// Function: sub_001F33D0
// Address: 0x1f33d0 - 0x1f3428
void sub_001F33D0_0x1f33d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F33D0_0x1f33d0");
#endif

    ctx->pc = 0x1f33d0u;

    // 0x1f33d0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1f33d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f33d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f33d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f33d8: 0x0  nop
    ctx->pc = 0x1f33d8u;
    // NOP
    // 0x1f33dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1f33dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f33e0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F33E0u;
    {
        const bool branch_taken_0x1f33e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F33E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33E0u;
        // 0x1f33e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33e0) {
            ctx->pc = 0x1F33F0u;
            goto label_1f33f0;
        }
    }
    ctx->pc = 0x1F33E8u;
    // 0x1f33e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F33E8u;
    {
        const bool branch_taken_0x1f33e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f33e8) {
            ctx->pc = 0x1F3420u;
            goto label_1f3420;
        }
    }
    ctx->pc = 0x1F33F0u;
label_1f33f0:
    // 0x1f33f0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1f33f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f33f4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1f33f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f33f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F33F8u;
    {
        const bool branch_taken_0x1f33f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33F8u;
        // 0x1f33fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33f8) {
            ctx->pc = 0x1F3408u;
            goto label_1f3408;
        }
    }
    ctx->pc = 0x1F3400u;
    // 0x1f3400: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3400u;
    {
        const bool branch_taken_0x1f3400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3400) {
            ctx->pc = 0x1F3420u;
            goto label_1f3420;
        }
    }
    ctx->pc = 0x1F3408u;
label_1f3408:
    // 0x1f3408: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1f3408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f340c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1f340cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3410: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3410u;
    {
        const bool branch_taken_0x1f3410 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F3414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3410u;
        // 0x1f3414: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3410) {
            ctx->pc = 0x1F341Cu;
            goto label_1f341c;
        }
    }
    ctx->pc = 0x1F3418u;
    // 0x1f3418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f3418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f341c:
    // 0x1f341c: 0x0  nop
    ctx->pc = 0x1f341cu;
    // NOP
label_1f3420:
    // 0x1f3420: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3428u;
}

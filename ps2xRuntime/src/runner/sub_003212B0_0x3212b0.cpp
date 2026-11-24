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

// Function: sub_003212B0
// Address: 0x3212b0 - 0x32131c
void sub_003212B0_0x3212b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003212B0_0x3212b0");
#endif

    switch (ctx->pc) {
        case 0x3212f0u: goto label_3212f0;
        case 0x321300u: goto label_321300;
        case 0x321310u: goto label_321310;
        default: break;
    }

    ctx->pc = 0x3212b0u;

    // 0x3212b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3212b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3212b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3212b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3212b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3212b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3212bc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3212bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3212c0: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3212C0u;
    {
        const bool branch_taken_0x3212c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3212C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3212C0u;
        // 0x3212c4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3212c0) {
            ctx->pc = 0x321308u;
            goto label_321308;
        }
    }
    ctx->pc = 0x3212C8u;
    // 0x3212c8: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3212C8u;
    {
        const bool branch_taken_0x3212c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3212c8) {
            ctx->pc = 0x3212F8u;
            goto label_3212f8;
        }
    }
    ctx->pc = 0x3212D0u;
    // 0x3212d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3212d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3212d4: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3212D4u;
    {
        const bool branch_taken_0x3212d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3212d4) {
            ctx->pc = 0x3212E8u;
            goto label_3212e8;
        }
    }
    ctx->pc = 0x3212DCu;
    // 0x3212dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3212DCu;
    {
        const bool branch_taken_0x3212dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3212dc) {
            ctx->pc = 0x321310u;
            goto label_321310;
        }
    }
    ctx->pc = 0x3212E4u;
    // 0x3212e4: 0x0  nop
    ctx->pc = 0x3212e4u;
    // NOP
label_3212e8:
    // 0x3212e8: 0xc0c8508  jal         func_321420
    ctx->pc = 0x3212E8u;
    SET_GPR_U32(ctx, 31, 0x3212F0u);
    ctx->pc = 0x321420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321420u, 0x3212E8u, 0x3212F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3212F0u;
label_3212f0:
    // 0x3212f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3212F0u;
    {
        const bool branch_taken_0x3212f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3212f0) {
            ctx->pc = 0x321310u;
            goto label_321310;
        }
    }
    ctx->pc = 0x3212F8u;
label_3212f8:
    // 0x3212f8: 0xc0c864c  jal         func_321930
    ctx->pc = 0x3212F8u;
    SET_GPR_U32(ctx, 31, 0x321300u);
    ctx->pc = 0x321930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321930u, 0x3212F8u, 0x321300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321300u;
label_321300:
    // 0x321300: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x321300u;
    {
        const bool branch_taken_0x321300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321300) {
            ctx->pc = 0x321310u;
            goto label_321310;
        }
    }
    ctx->pc = 0x321308u;
label_321308:
    // 0x321308: 0xc0c8730  jal         func_321CC0
    ctx->pc = 0x321308u;
    SET_GPR_U32(ctx, 31, 0x321310u);
    ctx->pc = 0x321CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321CC0u, 0x321308u, 0x321310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321310u;
label_321310:
    // 0x321310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321314: 0x3e00008  jr          $ra
    ctx->pc = 0x321314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321314u;
        // 0x321318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32131Cu;
}

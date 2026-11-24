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

// Function: sub_00119420
// Address: 0x119420 - 0x11946c
void sub_00119420_0x119420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119420_0x119420");
#endif

    switch (ctx->pc) {
        case 0x119438u: goto label_119438;
        case 0x119444u: goto label_119444;
        case 0x119454u: goto label_119454;
        default: break;
    }

    ctx->pc = 0x119420u;

    // 0x119420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x119424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119428: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11942c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119430: 0xc046028  jal         func_1180A0
    ctx->pc = 0x119430u;
    SET_GPR_U32(ctx, 31, 0x119438u);
    ctx->pc = 0x119434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119430u;
    // 0x119434: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x119430u, 0x119438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119438u;
label_119438:
    // 0x119438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11943c: 0xc0464e0  jal         func_119380
    ctx->pc = 0x11943Cu;
    SET_GPR_U32(ctx, 31, 0x119444u);
    ctx->pc = 0x119440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11943Cu;
    // 0x119440: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119380u, 0x11943Cu, 0x119444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119444u;
label_119444:
    // 0x119444: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x119444u;
    {
        const bool branch_taken_0x119444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x119448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119444u;
        // 0x119448: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119444) {
            ctx->pc = 0x119454u;
            goto label_119454;
        }
    }
    ctx->pc = 0x11944Cu;
    // 0x11944c: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x11944Cu;
    SET_GPR_U32(ctx, 31, 0x119454u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x11944Cu, 0x119454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119454u;
label_119454:
    // 0x119454: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x119454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119458: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11945c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11945cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119464: 0x3e00008  jr          $ra
    ctx->pc = 0x119464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119464u;
        // 0x119468: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11946Cu;
}

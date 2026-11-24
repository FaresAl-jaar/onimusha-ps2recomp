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

// Function: sub_00269410
// Address: 0x269410 - 0x269458
void sub_00269410_0x269410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269410_0x269410");
#endif

    switch (ctx->pc) {
        case 0x269428u: goto label_269428;
        default: break;
    }

    ctx->pc = 0x269410u;

    // 0x269410: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x269410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x269414: 0x8c22f7d0  lw          $v0, -0x830($at)
    ctx->pc = 0x269414u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8BF7D0u));
    // 0x269418: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269418u;
    {
        const bool branch_taken_0x269418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269418) {
            ctx->pc = 0x269428u;
            goto label_269428;
        }
    }
    ctx->pc = 0x269420u;
    // 0x269420: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x269420u;
    {
        const bool branch_taken_0x269420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269420u;
        // 0x269424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269420) {
            ctx->pc = 0x269450u;
            goto label_269450;
        }
    }
    ctx->pc = 0x269428u;
label_269428:
    // 0x269428: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x269428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26942c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26942Cu;
    {
        const bool branch_taken_0x26942c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x26942c) {
            ctx->pc = 0x269440u;
            goto label_269440;
        }
    }
    ctx->pc = 0x269434u;
    // 0x269434: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x269434u;
    {
        const bool branch_taken_0x269434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269434) {
            ctx->pc = 0x269450u;
            goto label_269450;
        }
    }
    ctx->pc = 0x26943Cu;
    // 0x26943c: 0x0  nop
    ctx->pc = 0x26943cu;
    // NOP
label_269440:
    // 0x269440: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x269440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x269444: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x269444u;
    {
        const bool branch_taken_0x269444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269444) {
            ctx->pc = 0x269428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269428;
        }
    }
    ctx->pc = 0x26944Cu;
    // 0x26944c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26944cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269450:
    // 0x269450: 0x3e00008  jr          $ra
    ctx->pc = 0x269450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269458u;
}

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

// Function: sub_002693C0
// Address: 0x2693c0 - 0x269408
void sub_002693C0_0x2693c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002693C0_0x2693c0");
#endif

    switch (ctx->pc) {
        case 0x2693d8u: goto label_2693d8;
        default: break;
    }

    ctx->pc = 0x2693c0u;

    // 0x2693c0: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2693c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2693c4: 0x8c23f7d0  lw          $v1, -0x830($at)
    ctx->pc = 0x2693c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8BF7D0u));
    // 0x2693c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2693C8u;
    {
        const bool branch_taken_0x2693c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2693CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693C8u;
        // 0x2693cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693c8) {
            ctx->pc = 0x2693D8u;
            goto label_2693d8;
        }
    }
    ctx->pc = 0x2693D0u;
    // 0x2693d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2693D0u;
    {
        const bool branch_taken_0x2693d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2693d0) {
            ctx->pc = 0x269400u;
            goto label_269400;
        }
    }
    ctx->pc = 0x2693D8u;
label_2693d8:
    // 0x2693d8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2693d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2693dc: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2693DCu;
    {
        const bool branch_taken_0x2693dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2693E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693DCu;
        // 0x2693e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693dc) {
            ctx->pc = 0x2693F0u;
            goto label_2693f0;
        }
    }
    ctx->pc = 0x2693E4u;
    // 0x2693e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2693E4u;
    {
        const bool branch_taken_0x2693e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2693e4) {
            ctx->pc = 0x269400u;
            goto label_269400;
        }
    }
    ctx->pc = 0x2693ECu;
    // 0x2693ec: 0x0  nop
    ctx->pc = 0x2693ecu;
    // NOP
label_2693f0:
    // 0x2693f0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2693f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2693f4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2693F4u;
    {
        const bool branch_taken_0x2693f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2693F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693F4u;
        // 0x2693f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693f4) {
            ctx->pc = 0x2693D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2693d8;
        }
    }
    ctx->pc = 0x2693FCu;
    // 0x2693fc: 0x0  nop
    ctx->pc = 0x2693fcu;
    // NOP
label_269400:
    // 0x269400: 0x3e00008  jr          $ra
    ctx->pc = 0x269400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269408u;
}

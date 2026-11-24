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

// Function: sub_0027A300
// Address: 0x27a300 - 0x27a340
void sub_0027A300_0x27a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A300_0x27a300");
#endif

    switch (ctx->pc) {
        case 0x27a310u: goto label_27a310;
        default: break;
    }

    ctx->pc = 0x27a300u;

    // 0x27a300: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x27a300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x27a304: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x27A304u;
    {
        const bool branch_taken_0x27a304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A304u;
        // 0x27a308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a304) {
            ctx->pc = 0x27A338u;
            goto label_27a338;
        }
    }
    ctx->pc = 0x27A30Cu;
    // 0x27a30c: 0x0  nop
    ctx->pc = 0x27a30cu;
    // NOP
label_27a310:
    // 0x27a310: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x27a310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27a314: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27a314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27a318: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A318u;
    {
        const bool branch_taken_0x27a318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a318) {
            ctx->pc = 0x27A328u;
            goto label_27a328;
        }
    }
    ctx->pc = 0x27A320u;
    // 0x27a320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27a320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27a324: 0x0  nop
    ctx->pc = 0x27a324u;
    // NOP
label_27a328:
    // 0x27a328: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x27a328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x27a32c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27A32Cu;
    {
        const bool branch_taken_0x27a32c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a32c) {
            ctx->pc = 0x27A310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a310;
        }
    }
    ctx->pc = 0x27A334u;
    // 0x27a334: 0x0  nop
    ctx->pc = 0x27a334u;
    // NOP
label_27a338:
    // 0x27a338: 0x3e00008  jr          $ra
    ctx->pc = 0x27A338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A340u;
}

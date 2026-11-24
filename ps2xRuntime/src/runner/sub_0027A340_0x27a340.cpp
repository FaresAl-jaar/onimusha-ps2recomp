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

// Function: sub_0027A340
// Address: 0x27a340 - 0x27a388
void sub_0027A340_0x27a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A340_0x27a340");
#endif

    switch (ctx->pc) {
        case 0x27a358u: goto label_27a358;
        default: break;
    }

    ctx->pc = 0x27a340u;

    // 0x27a340: 0x90830048  lbu         $v1, 0x48($a0)
    ctx->pc = 0x27a340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x27a344: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x27a344u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a348: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x27a348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x27a34c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x27a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x27a350: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x27A350u;
    {
        const bool branch_taken_0x27a350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A350u;
        // 0x27a354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a350) {
            ctx->pc = 0x27A380u;
            goto label_27a380;
        }
    }
    ctx->pc = 0x27A358u;
label_27a358:
    // 0x27a358: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x27a358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27a35c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27a35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27a360: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A360u;
    {
        const bool branch_taken_0x27a360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a360) {
            ctx->pc = 0x27A370u;
            goto label_27a370;
        }
    }
    ctx->pc = 0x27A368u;
    // 0x27a368: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27a368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27a36c: 0x0  nop
    ctx->pc = 0x27a36cu;
    // NOP
label_27a370:
    // 0x27a370: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x27a370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x27a374: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x27a374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x27a378: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x27A378u;
    {
        const bool branch_taken_0x27a378 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a378) {
            ctx->pc = 0x27A358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a358;
        }
    }
    ctx->pc = 0x27A380u;
label_27a380:
    // 0x27a380: 0x3e00008  jr          $ra
    ctx->pc = 0x27A380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A388u;
}

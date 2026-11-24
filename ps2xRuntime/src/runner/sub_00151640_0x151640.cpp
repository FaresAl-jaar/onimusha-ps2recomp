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

// Function: sub_00151640
// Address: 0x151640 - 0x151680
void sub_00151640_0x151640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151640_0x151640");
#endif

    ctx->pc = 0x151640u;

    // 0x151640: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x151640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x151644: 0x24020ff0  addiu       $v0, $zero, 0xFF0
    ctx->pc = 0x151644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x151648: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151648u;
    {
        const bool branch_taken_0x151648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151648u;
        // 0x15164c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151648) {
            ctx->pc = 0x151658u;
            goto label_151658;
        }
    }
    ctx->pc = 0x151650u;
    // 0x151650: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x151650u;
    {
        const bool branch_taken_0x151650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151650) {
            ctx->pc = 0x151678u;
            goto label_151678;
        }
    }
    ctx->pc = 0x151658u;
label_151658:
    // 0x151658: 0x24020ff1  addiu       $v0, $zero, 0xFF1
    ctx->pc = 0x151658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4081));
    // 0x15165c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15165Cu;
    {
        const bool branch_taken_0x15165c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x151660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15165Cu;
        // 0x151660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15165c) {
            ctx->pc = 0x151670u;
            goto label_151670;
        }
    }
    ctx->pc = 0x151664u;
    // 0x151664: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x151664u;
    {
        const bool branch_taken_0x151664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151664) {
            ctx->pc = 0x151678u;
            goto label_151678;
        }
    }
    ctx->pc = 0x15166Cu;
    // 0x15166c: 0x0  nop
    ctx->pc = 0x15166cu;
    // NOP
label_151670:
    // 0x151670: 0x38620ff2  xori        $v0, $v1, 0xFF2
    ctx->pc = 0x151670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4082);
    // 0x151674: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x151674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_151678:
    // 0x151678: 0x3e00008  jr          $ra
    ctx->pc = 0x151678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151680u;
}

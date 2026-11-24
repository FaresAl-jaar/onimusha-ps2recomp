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

// Function: sub_0031C830
// Address: 0x31c830 - 0x31c890
void sub_0031C830_0x31c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C830_0x31c830");
#endif

    switch (ctx->pc) {
        case 0x31c850u: goto label_31c850;
        default: break;
    }

    ctx->pc = 0x31c830u;

    // 0x31c830: 0xacc50140  sw          $a1, 0x140($a2)
    ctx->pc = 0x31c830u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 320), GPR_U32(ctx, 5));
    // 0x31c834: 0x8cc20140  lw          $v0, 0x140($a2)
    ctx->pc = 0x31c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 320)));
    // 0x31c838: 0x80420003  lb          $v0, 0x3($v0)
    ctx->pc = 0x31c838u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x31c83c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31C83Cu;
    {
        const bool branch_taken_0x31c83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C83Cu;
        // 0x31c840: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c83c) {
            ctx->pc = 0x31C870u;
            goto label_31c870;
        }
    }
    ctx->pc = 0x31C844u;
    // 0x31c844: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x31c844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x31c848: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x31c848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x31c84c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x31c84cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_31c850:
    // 0x31c850: 0x8cc30140  lw          $v1, 0x140($a2)
    ctx->pc = 0x31c850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 320)));
    // 0x31c854: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x31c854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c858: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x31c858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x31c85c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31c860: 0xa060000a  sb          $zero, 0xA($v1)
    ctx->pc = 0x31c860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x31c864: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31C864u;
    {
        const bool branch_taken_0x31c864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C864u;
        // 0x31c868: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c864) {
            ctx->pc = 0x31C850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c850;
        }
    }
    ctx->pc = 0x31C86Cu;
    // 0x31c86c: 0x0  nop
    ctx->pc = 0x31c86cu;
    // NOP
label_31c870:
    // 0x31c870: 0x8cc40140  lw          $a0, 0x140($a2)
    ctx->pc = 0x31c870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 320)));
    // 0x31c874: 0x80830003  lb          $v1, 0x3($a0)
    ctx->pc = 0x31c874u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x31c878: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x31c878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31c87c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31c880: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31c880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31c884: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x31c884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31c888: 0x3e00008  jr          $ra
    ctx->pc = 0x31C888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C888u;
        // 0x31c88c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C890u;
}

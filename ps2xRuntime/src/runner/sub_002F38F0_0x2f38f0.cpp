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

// Function: sub_002F38F0
// Address: 0x2f38f0 - 0x2f3920
void sub_002F38F0_0x2f38f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F38F0_0x2f38f0");
#endif

    ctx->pc = 0x2f38f0u;

    // 0x2f38f0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2f38f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f38f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f38f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f38f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F38F8u;
    {
        const bool branch_taken_0x2f38f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F38FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38F8u;
        // 0x2f38fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f38f8) {
            ctx->pc = 0x2F3908u;
            goto label_2f3908;
        }
    }
    ctx->pc = 0x2F3900u;
    // 0x2f3900: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3900u;
    {
        const bool branch_taken_0x2f3900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3900) {
            ctx->pc = 0x2F3918u;
            goto label_2f3918;
        }
    }
    ctx->pc = 0x2F3908u;
label_2f3908:
    // 0x2f3908: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f3908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f390c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f390cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2f3910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3914: 0x2442009c  addiu       $v0, $v0, 0x9C
    ctx->pc = 0x2f3914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
label_2f3918:
    // 0x2f3918: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3920u;
}

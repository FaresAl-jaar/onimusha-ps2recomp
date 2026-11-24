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

// Function: sub_00271170
// Address: 0x271170 - 0x2711a0
void sub_00271170_0x271170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271170_0x271170");
#endif

    switch (ctx->pc) {
        case 0x271178u: goto label_271178;
        default: break;
    }

    ctx->pc = 0x271170u;

    // 0x271170: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x271170u;
    {
        const bool branch_taken_0x271170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x271174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271170u;
        // 0x271174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271170) {
            ctx->pc = 0x271198u;
            goto label_271198;
        }
    }
    ctx->pc = 0x271178u;
label_271178:
    // 0x271178: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x271178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x27117c: 0x0  nop
    ctx->pc = 0x27117cu;
    // NOP
    // 0x271180: 0x0  nop
    ctx->pc = 0x271180u;
    // NOP
    // 0x271184: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x271184u;
    {
        const bool branch_taken_0x271184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271184) {
            ctx->pc = 0x271198u;
            goto label_271198;
        }
    }
    ctx->pc = 0x27118Cu;
    // 0x27118c: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x27118cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x271190: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x271190u;
    {
        const bool branch_taken_0x271190 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x271194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271190u;
        // 0x271194: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271190) {
            ctx->pc = 0x271178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271178;
        }
    }
    ctx->pc = 0x271198u;
label_271198:
    // 0x271198: 0x3e00008  jr          $ra
    ctx->pc = 0x271198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2711A0u;
}

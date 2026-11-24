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

// Function: sub_00271140
// Address: 0x271140 - 0x271170
void sub_00271140_0x271140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271140_0x271140");
#endif

    switch (ctx->pc) {
        case 0x271148u: goto label_271148;
        default: break;
    }

    ctx->pc = 0x271140u;

    // 0x271140: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x271140u;
    {
        const bool branch_taken_0x271140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x271144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271140u;
        // 0x271144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271140) {
            ctx->pc = 0x271168u;
            goto label_271168;
        }
    }
    ctx->pc = 0x271148u;
label_271148:
    // 0x271148: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x271148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x27114c: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x27114cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x271150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x271150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x271154: 0x0  nop
    ctx->pc = 0x271154u;
    // NOP
    // 0x271158: 0x0  nop
    ctx->pc = 0x271158u;
    // NOP
    // 0x27115c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27115Cu;
    {
        const bool branch_taken_0x27115c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x27115c) {
            ctx->pc = 0x271148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271148;
        }
    }
    ctx->pc = 0x271164u;
    // 0x271164: 0x0  nop
    ctx->pc = 0x271164u;
    // NOP
label_271168:
    // 0x271168: 0x3e00008  jr          $ra
    ctx->pc = 0x271168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271170u;
}

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

// Function: sub_003E3100
// Address: 0x3e3100 - 0x3e3140
void sub_003E3100_0x3e3100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3100_0x3e3100");
#endif

    switch (ctx->pc) {
        case 0x3e3118u: goto label_3e3118;
        default: break;
    }

    ctx->pc = 0x3e3100u;

    // 0x3e3100: 0x3c01000f  lui         $at, 0xF
    ctx->pc = 0x3e3100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15 << 16));
    // 0x3e3104: 0x34214241  ori         $at, $at, 0x4241
    ctx->pc = 0x3e3104u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16961);
    // 0x3e3108: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x3e3108u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x3e310c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x3E310Cu;
    {
        const bool branch_taken_0x3e310c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E310Cu;
        // 0x3e3110: 0x3c02fff0  lui         $v0, 0xFFF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e310c) {
            ctx->pc = 0x3E3138u;
            goto label_3e3138;
        }
    }
    ctx->pc = 0x3E3114u;
    // 0x3e3114: 0x3442bdc0  ori         $v0, $v0, 0xBDC0
    ctx->pc = 0x3e3114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48576);
label_3e3118:
    // 0x3e3118: 0x3c01000f  lui         $at, 0xF
    ctx->pc = 0x3e3118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15 << 16));
    // 0x3e311c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3e311cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3e3120: 0x34214241  ori         $at, $at, 0x4241
    ctx->pc = 0x3e3120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16961);
    // 0x3e3124: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x3e3124u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x3e3128: 0x0  nop
    ctx->pc = 0x3e3128u;
    // NOP
    // 0x3e312c: 0x1020fffa  beqz        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E312Cu;
    {
        const bool branch_taken_0x3e312c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e312c) {
            ctx->pc = 0x3E3118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3118;
        }
    }
    ctx->pc = 0x3E3134u;
    // 0x3e3134: 0x0  nop
    ctx->pc = 0x3e3134u;
    // NOP
label_3e3138:
    // 0x3e3138: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3138u;
        // 0x3e313c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3140u;
}

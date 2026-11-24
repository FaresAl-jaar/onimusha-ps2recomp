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

// Function: sub_00276060
// Address: 0x276060 - 0x276080
void sub_00276060_0x276060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276060_0x276060");
#endif

    ctx->pc = 0x276060u;

    // 0x276060: 0x94840824  lhu         $a0, 0x824($a0)
    ctx->pc = 0x276060u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2084)));
    // 0x276064: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x276064u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x276068: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x276068u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27606c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27606Cu;
    {
        const bool branch_taken_0x27606c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27606Cu;
        // 0x276070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27606c) {
            ctx->pc = 0x276078u;
            goto label_276078;
        }
    }
    ctx->pc = 0x276074u;
    // 0x276074: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x276074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_276078:
    // 0x276078: 0x3e00008  jr          $ra
    ctx->pc = 0x276078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276080u;
}

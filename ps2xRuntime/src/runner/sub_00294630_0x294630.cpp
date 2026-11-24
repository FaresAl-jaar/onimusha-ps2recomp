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

// Function: sub_00294630
// Address: 0x294630 - 0x29466c
void sub_00294630_0x294630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294630_0x294630");
#endif

    switch (ctx->pc) {
        case 0x294638u: goto label_294638;
        default: break;
    }

    ctx->pc = 0x294630u;

    // 0x294630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x294630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294634: 0x0  nop
    ctx->pc = 0x294634u;
    // NOP
label_294638:
    // 0x294638: 0xac802950  sw          $zero, 0x2950($a0)
    ctx->pc = 0x294638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10576), GPR_U32(ctx, 0));
    // 0x29463c: 0xac802954  sw          $zero, 0x2954($a0)
    ctx->pc = 0x29463cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10580), GPR_U32(ctx, 0));
    // 0x294640: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x294640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x294644: 0xac802958  sw          $zero, 0x2958($a0)
    ctx->pc = 0x294644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10584), GPR_U32(ctx, 0));
    // 0x294648: 0x28a3000e  slti        $v1, $a1, 0xE
    ctx->pc = 0x294648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x29464c: 0xac80295c  sw          $zero, 0x295C($a0)
    ctx->pc = 0x29464cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10588), GPR_U32(ctx, 0));
    // 0x294650: 0xac802960  sw          $zero, 0x2960($a0)
    ctx->pc = 0x294650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10592), GPR_U32(ctx, 0));
    // 0x294654: 0xac802964  sw          $zero, 0x2964($a0)
    ctx->pc = 0x294654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10596), GPR_U32(ctx, 0));
    // 0x294658: 0xac802968  sw          $zero, 0x2968($a0)
    ctx->pc = 0x294658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10600), GPR_U32(ctx, 0));
    // 0x29465c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x29465Cu;
    {
        const bool branch_taken_0x29465c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x294660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29465Cu;
        // 0x294660: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29465c) {
            ctx->pc = 0x294638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294638;
        }
    }
    ctx->pc = 0x294664u;
    // 0x294664: 0x3e00008  jr          $ra
    ctx->pc = 0x294664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29466Cu;
}

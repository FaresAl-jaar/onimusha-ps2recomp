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

// Function: sub_001555A0
// Address: 0x1555a0 - 0x1555ac
void sub_001555A0_0x1555a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001555A0_0x1555a0");
#endif

    ctx->pc = 0x1555a0u;

    // 0x1555a0: 0x8f82803c  lw          $v0, -0x7FC4($gp)
    ctx->pc = 0x1555a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934588)));
    // 0x1555a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1555A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1555A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555A4u;
        // 0x1555a8: 0xaf85803c  sw          $a1, -0x7FC4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934588), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1555A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1555ACu;
}

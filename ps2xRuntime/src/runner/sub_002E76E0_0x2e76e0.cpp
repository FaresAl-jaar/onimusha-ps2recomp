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

// Function: sub_002E76E0
// Address: 0x2e76e0 - 0x2e76f4
void sub_002E76E0_0x2e76e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E76E0_0x2e76e0");
#endif

    ctx->pc = 0x2e76e0u;

    // 0x2e76e0: 0xa3808abb  sb          $zero, -0x7545($gp)
    ctx->pc = 0x2e76e0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937275), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e76e4: 0xa3808aba  sb          $zero, -0x7546($gp)
    ctx->pc = 0x2e76e4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937274), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e76e8: 0xa3808ab9  sb          $zero, -0x7547($gp)
    ctx->pc = 0x2e76e8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937273), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e76ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E76ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E76F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76ECu;
        // 0x2e76f0: 0xa3808ab8  sb          $zero, -0x7548($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937272), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E76ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E76F4u;
}

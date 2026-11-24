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

// Function: sub_003558D0
// Address: 0x3558d0 - 0x3558e0
void sub_003558D0_0x3558d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003558D0_0x3558d0");
#endif

    ctx->pc = 0x3558d0u;

    // 0x3558d0: 0xaf808bac  sw          $zero, -0x7454($gp)
    ctx->pc = 0x3558d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937516), GPR_U32(ctx, 0));
    // 0x3558d4: 0xaf808bb0  sw          $zero, -0x7450($gp)
    ctx->pc = 0x3558d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937520), GPR_U32(ctx, 0));
    // 0x3558d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3558D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3558DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3558D8u;
        // 0x3558dc: 0xaf808bb4  sw          $zero, -0x744C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3558D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3558E0u;
}

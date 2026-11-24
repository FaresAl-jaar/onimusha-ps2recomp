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

// Function: sub_0018F850
// Address: 0x18f850 - 0x18f86c
void sub_0018F850_0x18f850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F850_0x18f850");
#endif

    ctx->pc = 0x18f850u;

    // 0x18f850: 0xa38086f8  sb          $zero, -0x7908($gp)
    ctx->pc = 0x18f850u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936312), (uint8_t)GPR_U32(ctx, 0));
    // 0x18f854: 0xaf8086e4  sw          $zero, -0x791C($gp)
    ctx->pc = 0x18f854u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936292), GPR_U32(ctx, 0));
    // 0x18f858: 0xaf8086e8  sw          $zero, -0x7918($gp)
    ctx->pc = 0x18f858u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936296), GPR_U32(ctx, 0));
    // 0x18f85c: 0xa38086f4  sb          $zero, -0x790C($gp)
    ctx->pc = 0x18f85cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936308), (uint8_t)GPR_U32(ctx, 0));
    // 0x18f860: 0xa3808c88  sb          $zero, -0x7378($gp)
    ctx->pc = 0x18f860u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937736), (uint8_t)GPR_U32(ctx, 0));
    // 0x18f864: 0x3e00008  jr          $ra
    ctx->pc = 0x18F864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F864u;
        // 0x18f868: 0xa38086dc  sb          $zero, -0x7924($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936284), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F86Cu;
}

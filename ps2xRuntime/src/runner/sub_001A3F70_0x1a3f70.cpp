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

// Function: sub_001A3F70
// Address: 0x1a3f70 - 0x1a3f80
void sub_001A3F70_0x1a3f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3F70_0x1a3f70");
#endif

    ctx->pc = 0x1a3f70u;

    // 0x1a3f70: 0xaf808794  sw          $zero, -0x786C($gp)
    ctx->pc = 0x1a3f70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936468), GPR_U32(ctx, 0));
    // 0x1a3f74: 0xaf808798  sw          $zero, -0x7868($gp)
    ctx->pc = 0x1a3f74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 0));
    // 0x1a3f78: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F78u;
        // 0x1a3f7c: 0xaf80879c  sw          $zero, -0x7864($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3F80u;
}

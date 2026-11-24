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

// Function: sub_00364100
// Address: 0x364100 - 0x36410c
void sub_00364100_0x364100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364100_0x364100");
#endif

    ctx->pc = 0x364100u;

    // 0x364100: 0xa3848bcc  sb          $a0, -0x7434($gp)
    ctx->pc = 0x364100u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937548), (uint8_t)GPR_U32(ctx, 4));
    // 0x364104: 0x3e00008  jr          $ra
    ctx->pc = 0x364104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364104u;
        // 0x364108: 0xa3808bd0  sb          $zero, -0x7430($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937552), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36410Cu;
}

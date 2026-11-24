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

// Function: sub_003B5B30
// Address: 0x3b5b30 - 0x3b5b44
void sub_003B5B30_0x3b5b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5B30_0x3b5b30");
#endif

    ctx->pc = 0x3b5b30u;

    // 0x3b5b30: 0xa3848c90  sb          $a0, -0x7370($gp)
    ctx->pc = 0x3b5b30u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937744), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b5b34: 0xa3858c91  sb          $a1, -0x736F($gp)
    ctx->pc = 0x3b5b34u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937745), (uint8_t)GPR_U32(ctx, 5));
    // 0x3b5b38: 0xa3868c92  sb          $a2, -0x736E($gp)
    ctx->pc = 0x3b5b38u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937746), (uint8_t)GPR_U32(ctx, 6));
    // 0x3b5b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5B3Cu;
        // 0x3b5b40: 0xa3878c93  sb          $a3, -0x736D($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937747), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5B44u;
}

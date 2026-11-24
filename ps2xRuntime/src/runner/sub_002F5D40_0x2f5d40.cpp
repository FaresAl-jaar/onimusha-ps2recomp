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

// Function: sub_002F5D40
// Address: 0x2f5d40 - 0x2f5d4c
void sub_002F5D40_0x2f5d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5D40_0x2f5d40");
#endif

    ctx->pc = 0x2f5d40u;

    // 0x2f5d40: 0xaf848ac8  sw          $a0, -0x7538($gp)
    ctx->pc = 0x2f5d40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937288), GPR_U32(ctx, 4));
    // 0x2f5d44: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D44u;
        // 0x2f5d48: 0xaf858acc  sw          $a1, -0x7534($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937292), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5D4Cu;
}

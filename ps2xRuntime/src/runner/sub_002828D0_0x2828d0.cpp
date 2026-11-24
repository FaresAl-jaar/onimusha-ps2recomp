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

// Function: sub_002828D0
// Address: 0x2828d0 - 0x2828d8
void sub_002828D0_0x2828d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002828D0_0x2828d0");
#endif

    ctx->pc = 0x2828d0u;

    // 0x2828d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2828D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2828D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828D0u;
        // 0x2828d4: 0xa08007bf  sb          $zero, 0x7BF($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1983), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2828D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2828D8u;
}

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

// Function: sub_0030D7D0
// Address: 0x30d7d0 - 0x30d7d8
void sub_0030D7D0_0x30d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D7D0_0x30d7d0");
#endif

    ctx->pc = 0x30d7d0u;

    // 0x30d7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x30D7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D7D0u;
        // 0x30d7d4: 0xac800604  sw          $zero, 0x604($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D7D8u;
}

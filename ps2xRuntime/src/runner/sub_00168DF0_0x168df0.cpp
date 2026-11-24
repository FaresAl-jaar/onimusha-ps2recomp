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

// Function: sub_00168DF0
// Address: 0x168df0 - 0x168df8
void sub_00168DF0_0x168df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168DF0_0x168df0");
#endif

    ctx->pc = 0x168df0u;

    // 0x168df0: 0x3e00008  jr          $ra
    ctx->pc = 0x168DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DF0u;
        // 0x168df4: 0xaf808620  sw          $zero, -0x79E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936096), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168DF8u;
}

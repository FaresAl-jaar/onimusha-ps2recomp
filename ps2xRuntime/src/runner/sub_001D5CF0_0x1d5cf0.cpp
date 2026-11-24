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

// Function: sub_001D5CF0
// Address: 0x1d5cf0 - 0x1d5cfc
void sub_001D5CF0_0x1d5cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5CF0_0x1d5cf0");
#endif

    ctx->pc = 0x1d5cf0u;

    // 0x1d5cf0: 0xaf848810  sw          $a0, -0x77F0($gp)
    ctx->pc = 0x1d5cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936592), GPR_U32(ctx, 4));
    // 0x1d5cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CF4u;
        // 0x1d5cf8: 0xaf808814  sw          $zero, -0x77EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5CFCu;
}

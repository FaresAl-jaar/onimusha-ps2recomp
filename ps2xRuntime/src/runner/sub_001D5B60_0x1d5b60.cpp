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

// Function: sub_001D5B60
// Address: 0x1d5b60 - 0x1d5b6c
void sub_001D5B60_0x1d5b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5B60_0x1d5b60");
#endif

    ctx->pc = 0x1d5b60u;

    // 0x1d5b60: 0xaf848808  sw          $a0, -0x77F8($gp)
    ctx->pc = 0x1d5b60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 4));
    // 0x1d5b64: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B64u;
        // 0x1d5b68: 0xaf80880c  sw          $zero, -0x77F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5B6Cu;
}

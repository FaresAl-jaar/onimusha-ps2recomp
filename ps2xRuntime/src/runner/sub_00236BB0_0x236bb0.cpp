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

// Function: sub_00236BB0
// Address: 0x236bb0 - 0x236bbc
void sub_00236BB0_0x236bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236BB0_0x236bb0");
#endif

    ctx->pc = 0x236bb0u;

    // 0x236bb0: 0xac86004c  sw          $a2, 0x4C($a0)
    ctx->pc = 0x236bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 6));
    // 0x236bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x236BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BB4u;
        // 0x236bb8: 0xac850048  sw          $a1, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236BBCu;
}

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

// Function: sub_003ADAA0
// Address: 0x3adaa0 - 0x3adaac
void sub_003ADAA0_0x3adaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADAA0_0x3adaa0");
#endif

    ctx->pc = 0x3adaa0u;

    // 0x3adaa0: 0xa0800058  sb          $zero, 0x58($a0)
    ctx->pc = 0x3adaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x3adaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADAA4u;
        // 0x3adaa8: 0xa0800059  sb          $zero, 0x59($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADAACu;
}

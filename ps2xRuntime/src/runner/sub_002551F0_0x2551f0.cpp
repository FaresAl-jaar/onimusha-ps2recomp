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

// Function: sub_002551F0
// Address: 0x2551f0 - 0x255200
void sub_002551F0_0x2551f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002551F0_0x2551f0");
#endif

    ctx->pc = 0x2551f0u;

    // 0x2551f0: 0xa0801110  sb          $zero, 0x1110($a0)
    ctx->pc = 0x2551f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4368), (uint8_t)GPR_U32(ctx, 0));
    // 0x2551f4: 0xac801104  sw          $zero, 0x1104($a0)
    ctx->pc = 0x2551f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4356), GPR_U32(ctx, 0));
    // 0x2551f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2551F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2551FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551F8u;
        // 0x2551fc: 0xac801108  sw          $zero, 0x1108($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2551F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255200u;
}

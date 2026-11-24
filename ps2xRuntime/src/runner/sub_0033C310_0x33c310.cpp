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

// Function: sub_0033C310
// Address: 0x33c310 - 0x33c320
void sub_0033C310_0x33c310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C310_0x33c310");
#endif

    ctx->pc = 0x33c310u;

    // 0x33c310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33c310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c314: 0xa0830511  sb          $v1, 0x511($a0)
    ctx->pc = 0x33c314u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1297), (uint8_t)GPR_U32(ctx, 3));
    // 0x33c318: 0x3e00008  jr          $ra
    ctx->pc = 0x33C318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C318u;
        // 0x33c31c: 0xa0860512  sb          $a2, 0x512($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1298), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C320u;
}

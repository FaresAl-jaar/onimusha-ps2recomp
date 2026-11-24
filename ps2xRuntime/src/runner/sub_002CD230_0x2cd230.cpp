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

// Function: sub_002CD230
// Address: 0x2cd230 - 0x2cd240
void sub_002CD230_0x2cd230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD230_0x2cd230");
#endif

    ctx->pc = 0x2cd230u;

    // 0x2cd230: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cd230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd234: 0xa3808a80  sb          $zero, -0x7580($gp)
    ctx->pc = 0x2cd234u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937216), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd238: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD238u;
        // 0x2cd23c: 0xa3838a84  sb          $v1, -0x757C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937220), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD240u;
}

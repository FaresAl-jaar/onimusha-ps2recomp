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

// Function: sub_003E1530
// Address: 0x3e1530 - 0x3e1544
void sub_003E1530_0x3e1530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1530_0x3e1530");
#endif

    ctx->pc = 0x3e1530u;

    // 0x3e1530: 0x8f838cf8  lw          $v1, -0x7308($gp)
    ctx->pc = 0x3e1530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1534: 0xac6001e8  sw          $zero, 0x1E8($v1)
    ctx->pc = 0x3e1534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 0));
    // 0x3e1538: 0x8f838cf8  lw          $v1, -0x7308($gp)
    ctx->pc = 0x3e1538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e153c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E153Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E153Cu;
        // 0x3e1540: 0xa06001d4  sb          $zero, 0x1D4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 468), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E153Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1544u;
}

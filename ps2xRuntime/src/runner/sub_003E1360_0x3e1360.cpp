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

// Function: sub_003E1360
// Address: 0x3e1360 - 0x3e1370
void sub_003E1360_0x3e1360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1360_0x3e1360");
#endif

    ctx->pc = 0x3e1360u;

    // 0x3e1360: 0x8f838cf8  lw          $v1, -0x7308($gp)
    ctx->pc = 0x3e1360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1364: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e1364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e1368: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1368u;
        // 0x3e136c: 0xa0640291  sb          $a0, 0x291($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 657), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1370u;
}

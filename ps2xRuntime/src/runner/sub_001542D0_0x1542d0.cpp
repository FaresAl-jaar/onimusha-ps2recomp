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

// Function: sub_001542D0
// Address: 0x1542d0 - 0x1542dc
void sub_001542D0_0x1542d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001542D0_0x1542d0");
#endif

    ctx->pc = 0x1542d0u;

    // 0x1542d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1542d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1542d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1542D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1542D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542D4u;
        // 0x1542d8: 0xaf838040  sw          $v1, -0x7FC0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1542D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1542DCu;
}

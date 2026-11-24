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

// Function: sub_0035EF40
// Address: 0x35ef40 - 0x35ef50
void sub_0035EF40_0x35ef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EF40_0x35ef40");
#endif

    ctx->pc = 0x35ef40u;

    // 0x35ef40: 0xac850510  sw          $a1, 0x510($a0)
    ctx->pc = 0x35ef40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1296), GPR_U32(ctx, 5));
    // 0x35ef44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ef48: 0x3e00008  jr          $ra
    ctx->pc = 0x35EF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF48u;
        // 0x35ef4c: 0xa0830514  sb          $v1, 0x514($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EF50u;
}

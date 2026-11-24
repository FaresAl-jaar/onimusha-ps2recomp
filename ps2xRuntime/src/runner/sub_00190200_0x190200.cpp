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

// Function: sub_00190200
// Address: 0x190200 - 0x19020c
void sub_00190200_0x190200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190200_0x190200");
#endif

    ctx->pc = 0x190200u;

    // 0x190200: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x190200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190204: 0x3e00008  jr          $ra
    ctx->pc = 0x190204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190204u;
        // 0x190208: 0xaf838714  sw          $v1, -0x78EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19020Cu;
}

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

// Function: sub_0024FC50
// Address: 0x24fc50 - 0x24fc68
void sub_0024FC50_0x24fc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FC50_0x24fc50");
#endif

    ctx->pc = 0x24fc50u;

    // 0x24fc50: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x24fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x24fc54: 0x2463a848  addiu       $v1, $v1, -0x57B8
    ctx->pc = 0x24fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944840));
    // 0x24fc58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4DA848u));
    // 0x24fc5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24fc60: 0x3e00008  jr          $ra
    ctx->pc = 0x24FC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC60u;
        // 0x24fc64: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FC68u;
}

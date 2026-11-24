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

// Function: sub_002357D0
// Address: 0x2357d0 - 0x2357e8
void sub_002357D0_0x2357d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002357D0_0x2357d0");
#endif

    ctx->pc = 0x2357d0u;

    // 0x2357d0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2357d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2357d4: 0x24637558  addiu       $v1, $v1, 0x7558
    ctx->pc = 0x2357d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30040));
    // 0x2357d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2357d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C7558u));
    // 0x2357dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2357dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2357e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2357E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2357E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357E0u;
        // 0x2357e4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2357E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2357E8u;
}

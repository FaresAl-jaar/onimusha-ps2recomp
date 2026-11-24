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

// Function: sub_001D1740
// Address: 0x1d1740 - 0x1d175c
void sub_001D1740_0x1d1740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1740_0x1d1740");
#endif

    ctx->pc = 0x1d1740u;

    // 0x1d1740: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1d1740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1d1744: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1d1744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1d1748: 0x8c23fc90  lw          $v1, -0x370($at)
    ctx->pc = 0x1d1748u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81FC90u));
    // 0x1d174c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1d174cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d1750: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d1750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d1754: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1754u;
        // 0x1d1758: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D175Cu;
}

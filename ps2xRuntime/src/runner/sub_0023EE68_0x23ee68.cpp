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

// Function: sub_0023EE68
// Address: 0x23ee68 - 0x23ee84
void sub_0023EE68_0x23ee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EE68_0x23ee68");
#endif

    ctx->pc = 0x23ee68u;

    // 0x23ee68: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x23ee68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x23ee6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23ee6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ee70: 0x2484c4c0  addiu       $a0, $a0, -0x3B40
    ctx->pc = 0x23ee70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952128));
    // 0x23ee74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4CC4C0u));
    // 0x23ee78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23ee7c: 0x3e00008  jr          $ra
    ctx->pc = 0x23EE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE7Cu;
        // 0x23ee80: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23EE84u;
}

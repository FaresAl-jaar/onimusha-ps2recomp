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

// Function: sub_0024FC68
// Address: 0x24fc68 - 0x24fc80
void sub_0024FC68_0x24fc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FC68_0x24fc68");
#endif

    ctx->pc = 0x24fc68u;

    // 0x24fc68: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x24fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x24fc6c: 0x2463a848  addiu       $v1, $v1, -0x57B8
    ctx->pc = 0x24fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944840));
    // 0x24fc70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4DA848u));
    // 0x24fc74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24fc78: 0x3e00008  jr          $ra
    ctx->pc = 0x24FC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC78u;
        // 0x24fc7c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FC80u;
}

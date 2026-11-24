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

// Function: sub_001F37F8
// Address: 0x1f37f8 - 0x1f3818
void sub_001F37F8_0x1f37f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F37F8_0x1f37f8");
#endif

    switch (ctx->pc) {
        case 0x1f3808u: goto label_1f3808;
        default: break;
    }

    ctx->pc = 0x1f37f8u;

    // 0x1f37f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f37f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f37fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f37fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3800: 0xc07cdf0  jal         func_1F37C0
    ctx->pc = 0x1F3800u;
    SET_GPR_U32(ctx, 31, 0x1F3808u);
    ctx->pc = 0x1F37C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F37C0u, 0x1F3800u, 0x1F3808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3808u;
label_1f3808:
    // 0x1f3808: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f3808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f380c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f380cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3810: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3810u;
        // 0x1f3814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3818u;
}

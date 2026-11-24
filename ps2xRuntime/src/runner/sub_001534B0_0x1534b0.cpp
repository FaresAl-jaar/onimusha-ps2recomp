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

// Function: sub_001534B0
// Address: 0x1534b0 - 0x1534c4
void sub_001534B0_0x1534b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001534B0_0x1534b0");
#endif

    ctx->pc = 0x1534b0u;

    // 0x1534b0: 0x8f848048  lw          $a0, -0x7FB8($gp)
    ctx->pc = 0x1534b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934600)));
    // 0x1534b4: 0x8f83804c  lw          $v1, -0x7FB4($gp)
    ctx->pc = 0x1534b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934604)));
    // 0x1534b8: 0xaf838048  sw          $v1, -0x7FB8($gp)
    ctx->pc = 0x1534b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934600), GPR_U32(ctx, 3));
    // 0x1534bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1534BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1534C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534BCu;
        // 0x1534c0: 0xaf84804c  sw          $a0, -0x7FB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934604), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1534BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1534C4u;
}

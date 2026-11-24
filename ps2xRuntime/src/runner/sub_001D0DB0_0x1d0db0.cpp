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

// Function: sub_001D0DB0
// Address: 0x1d0db0 - 0x1d0dd4
void sub_001D0DB0_0x1d0db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0DB0_0x1d0db0");
#endif

    ctx->pc = 0x1d0db0u;

    // 0x1d0db0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d0db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0db4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1d0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d0db8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d0dbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d0dc0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d0dc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d0dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d0dc8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d0dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d0dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DCCu;
        // 0x1d0dd0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0DD4u;
}

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

// Function: sub_0014B6E0
// Address: 0x14b6e0 - 0x14b6fc
void sub_0014B6E0_0x14b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B6E0_0x14b6e0");
#endif

    ctx->pc = 0x14b6e0u;

    // 0x14b6e0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x14b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14b6e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14b6e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14b6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14b6ec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x14b6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b6f0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x14b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x14b6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6F4u;
        // 0x14b6f8: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B6FCu;
}

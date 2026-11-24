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

// Function: sub_00242A28
// Address: 0x242a28 - 0x242a40
void sub_00242A28_0x242a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242A28_0x242a28");
#endif

    ctx->pc = 0x242a28u;

    // 0x242a28: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x242a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x242a2c: 0x2463d6f8  addiu       $v1, $v1, -0x2908
    ctx->pc = 0x242a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956792));
    // 0x242a30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x242a30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CD6F8u));
    // 0x242a34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x242a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x242a38: 0x3e00008  jr          $ra
    ctx->pc = 0x242A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A38u;
        // 0x242a3c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242A40u;
}

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

// Function: sub_00237A18
// Address: 0x237a18 - 0x237a30
void sub_00237A18_0x237a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237A18_0x237a18");
#endif

    ctx->pc = 0x237a18u;

    // 0x237a18: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x237a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x237a1c: 0x24638044  addiu       $v1, $v1, -0x7FBC
    ctx->pc = 0x237a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934596));
    // 0x237a20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x237a20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C8044u));
    // 0x237a24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x237a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x237a28: 0x3e00008  jr          $ra
    ctx->pc = 0x237A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A28u;
        // 0x237a2c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237A30u;
}

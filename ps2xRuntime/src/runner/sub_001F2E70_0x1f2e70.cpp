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

// Function: sub_001F2E70
// Address: 0x1f2e70 - 0x1f2e90
void sub_001F2E70_0x1f2e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2E70_0x1f2e70");
#endif

    ctx->pc = 0x1f2e70u;

    // 0x1f2e70: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1f2e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x1f2e74: 0x244277e0  addiu       $v0, $v0, 0x77E0
    ctx->pc = 0x1f2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30688));
    // 0x1f2e78: 0xac8204d4  sw          $v0, 0x4D4($a0)
    ctx->pc = 0x1f2e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1236), GPR_U32(ctx, 2));
    // 0x1f2e7c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1f2e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x1f2e80: 0x24427390  addiu       $v0, $v0, 0x7390
    ctx->pc = 0x1f2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29584));
    // 0x1f2e84: 0xac8204d4  sw          $v0, 0x4D4($a0)
    ctx->pc = 0x1f2e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1236), GPR_U32(ctx, 2));
    // 0x1f2e88: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E88u;
        // 0x1f2e8c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2E90u;
}

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

// Function: sub_00201AA0
// Address: 0x201aa0 - 0x201abc
void sub_00201AA0_0x201aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201AA0_0x201aa0");
#endif

    ctx->pc = 0x201aa0u;

    // 0x201aa0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x201aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x201aa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201aa8: 0x248485a0  addiu       $a0, $a0, -0x7A60
    ctx->pc = 0x201aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935968));
    // 0x201aac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x201aacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B85A0u));
    // 0x201ab0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x201ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x201ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x201AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AB4u;
        // 0x201ab8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201ABCu;
}

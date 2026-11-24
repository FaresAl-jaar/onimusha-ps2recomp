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

// Function: sub_002571A0
// Address: 0x2571a0 - 0x2571b8
void sub_002571A0_0x2571a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002571A0_0x2571a0");
#endif

    ctx->pc = 0x2571a0u;

    // 0x2571a0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x2571a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2571a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2571a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2571a8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2571a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2571ac: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2571acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2571b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2571B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2571B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2571B0u;
        // 0x2571b4: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2571B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2571B8u;
}

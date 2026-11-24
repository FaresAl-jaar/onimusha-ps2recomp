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

// Function: sub_003E15C0
// Address: 0x3e15c0 - 0x3e15e4
void sub_003E15C0_0x3e15c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E15C0_0x3e15c0");
#endif

    switch (ctx->pc) {
        case 0x3e15d0u: goto label_3e15d0;
        default: break;
    }

    ctx->pc = 0x3e15c0u;

    // 0x3e15c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e15c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e15c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e15c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e15c8: 0xc0f84dc  jal         func_3E1370
    ctx->pc = 0x3E15C8u;
    SET_GPR_U32(ctx, 31, 0x3E15D0u);
    ctx->pc = 0x3E1370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1370u, 0x3E15C8u, 0x3E15D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E15D0u;
label_3e15d0:
    // 0x3e15d0: 0x8f838cf8  lw          $v1, -0x7308($gp)
    ctx->pc = 0x3e15d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e15d4: 0xa0600290  sb          $zero, 0x290($v1)
    ctx->pc = 0x3e15d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 656), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e15d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e15d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e15dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E15DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E15E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E15DCu;
        // 0x3e15e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E15DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E15E4u;
}

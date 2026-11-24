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

// Function: sub_00205E18
// Address: 0x205e18 - 0x205e38
void sub_00205E18_0x205e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205E18_0x205e18");
#endif

    switch (ctx->pc) {
        case 0x205e28u: goto label_205e28;
        default: break;
    }

    ctx->pc = 0x205e18u;

    // 0x205e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205e1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205e20: 0xc081544  jal         func_205510
    ctx->pc = 0x205E20u;
    SET_GPR_U32(ctx, 31, 0x205E28u);
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x205E20u, 0x205E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E28u;
label_205e28:
    // 0x205e28: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x205e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x205e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205e30: 0x3e00008  jr          $ra
    ctx->pc = 0x205E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205E30u;
        // 0x205e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205E38u;
}

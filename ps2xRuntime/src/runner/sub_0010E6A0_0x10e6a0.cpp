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

// Function: sub_0010E6A0
// Address: 0x10e6a0 - 0x10e6c8
void sub_0010E6A0_0x10e6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E6A0_0x10e6a0");
#endif

    switch (ctx->pc) {
        case 0x10e6b0u: goto label_10e6b0;
        default: break;
    }

    ctx->pc = 0x10e6a0u;

    // 0x10e6a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10e6a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e6a8: 0xc048e32  jal         func_1238C8
    ctx->pc = 0x10E6A8u;
    SET_GPR_U32(ctx, 31, 0x10E6B0u);
    ctx->pc = 0x1238C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238C8u, 0x10E6A8u, 0x10E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E6B0u;
label_10e6b0:
    // 0x10e6b0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10e6b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e6b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10e6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10e6bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10e6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x10E6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E6C0u;
        // 0x10e6c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E6C8u;
}

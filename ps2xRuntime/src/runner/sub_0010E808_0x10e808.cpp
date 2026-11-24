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

// Function: sub_0010E808
// Address: 0x10e808 - 0x10e830
void sub_0010E808_0x10e808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E808_0x10e808");
#endif

    switch (ctx->pc) {
        case 0x10e818u: goto label_10e818;
        default: break;
    }

    ctx->pc = 0x10e808u;

    // 0x10e808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10e80c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e810: 0xc048e32  jal         func_1238C8
    ctx->pc = 0x10E810u;
    SET_GPR_U32(ctx, 31, 0x10E818u);
    ctx->pc = 0x1238C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238C8u, 0x10E810u, 0x10E818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E818u;
label_10e818:
    // 0x10e818: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10e818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10e81c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e820: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10e820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10e824: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10e824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10e828: 0x3e00008  jr          $ra
    ctx->pc = 0x10E828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E828u;
        // 0x10e82c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E830u;
}

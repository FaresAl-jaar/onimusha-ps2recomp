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

// Function: sub_0020C628
// Address: 0x20c628 - 0x20c648
void sub_0020C628_0x20c628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C628_0x20c628");
#endif

    switch (ctx->pc) {
        case 0x20c638u: goto label_20c638;
        default: break;
    }

    ctx->pc = 0x20c628u;

    // 0x20c628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c62c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c630: 0xc081544  jal         func_205510
    ctx->pc = 0x20C630u;
    SET_GPR_U32(ctx, 31, 0x20C638u);
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x20C630u, 0x20C638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C638u;
label_20c638:
    // 0x20c638: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x20c638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x20c63c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c640: 0x3e00008  jr          $ra
    ctx->pc = 0x20C640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C640u;
        // 0x20c644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C648u;
}

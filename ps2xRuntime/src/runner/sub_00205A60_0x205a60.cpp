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

// Function: sub_00205A60
// Address: 0x205a60 - 0x205a80
void sub_00205A60_0x205a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205A60_0x205a60");
#endif

    switch (ctx->pc) {
        case 0x205a70u: goto label_205a70;
        default: break;
    }

    ctx->pc = 0x205a60u;

    // 0x205a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205a68: 0xc081544  jal         func_205510
    ctx->pc = 0x205A68u;
    SET_GPR_U32(ctx, 31, 0x205A70u);
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x205A68u, 0x205A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A70u;
label_205a70:
    // 0x205a70: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x205a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x205a74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205a78: 0x3e00008  jr          $ra
    ctx->pc = 0x205A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A78u;
        // 0x205a7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205A80u;
}

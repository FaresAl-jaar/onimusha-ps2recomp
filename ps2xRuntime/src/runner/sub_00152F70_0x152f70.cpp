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

// Function: sub_00152F70
// Address: 0x152f70 - 0x152f94
void sub_00152F70_0x152f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152F70_0x152f70");
#endif

    switch (ctx->pc) {
        case 0x152f80u: goto label_152f80;
        case 0x152f88u: goto label_152f88;
        default: break;
    }

    ctx->pc = 0x152f70u;

    // 0x152f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152f78: 0xc043808  jal         func_10E020
    ctx->pc = 0x152F78u;
    SET_GPR_U32(ctx, 31, 0x152F80u);
    ctx->pc = 0x152F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F78u;
    // 0x152f7c: 0x8f84858c  lw          $a0, -0x7A74($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x152F78u, 0x152F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F80u;
label_152f80:
    // 0x152f80: 0xc043800  jal         func_10E000
    ctx->pc = 0x152F80u;
    SET_GPR_U32(ctx, 31, 0x152F88u);
    ctx->pc = 0x152F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F80u;
    // 0x152f84: 0x8f848588  lw          $a0, -0x7A78($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x152F80u, 0x152F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F88u;
label_152f88:
    // 0x152f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x152F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F8Cu;
        // 0x152f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152F94u;
}

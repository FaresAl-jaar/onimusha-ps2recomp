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

// Function: sub_00114BA8
// Address: 0x114ba8 - 0x114bc4
void sub_00114BA8_0x114ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114BA8_0x114ba8");
#endif

    switch (ctx->pc) {
        case 0x114bb8u: goto label_114bb8;
        default: break;
    }

    ctx->pc = 0x114ba8u;

    // 0x114ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114bac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114bb0: 0xc045114  jal         func_114450
    ctx->pc = 0x114BB0u;
    SET_GPR_U32(ctx, 31, 0x114BB8u);
    ctx->pc = 0x114BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114BB0u;
    // 0x114bb4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114450u, 0x114BB0u, 0x114BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114BB8u;
label_114bb8:
    // 0x114bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x114BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BBCu;
        // 0x114bc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114BC4u;
}

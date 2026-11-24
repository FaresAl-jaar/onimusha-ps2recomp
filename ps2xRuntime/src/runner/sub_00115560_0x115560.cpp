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

// Function: sub_00115560
// Address: 0x115560 - 0x11557c
void sub_00115560_0x115560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115560_0x115560");
#endif

    switch (ctx->pc) {
        case 0x115570u: goto label_115570;
        default: break;
    }

    ctx->pc = 0x115560u;

    // 0x115560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115568: 0xc045114  jal         func_114450
    ctx->pc = 0x115568u;
    SET_GPR_U32(ctx, 31, 0x115570u);
    ctx->pc = 0x11556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115568u;
    // 0x11556c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114450u, 0x115568u, 0x115570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115570u;
label_115570:
    // 0x115570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115574: 0x3e00008  jr          $ra
    ctx->pc = 0x115574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115574u;
        // 0x115578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11557Cu;
}

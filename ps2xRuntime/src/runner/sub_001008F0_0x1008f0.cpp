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

// Function: sub_001008F0
// Address: 0x1008f0 - 0x10090c
void sub_001008F0_0x1008f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001008F0_0x1008f0");
#endif

    switch (ctx->pc) {
        case 0x100900u: goto label_100900;
        default: break;
    }

    ctx->pc = 0x1008f0u;

    // 0x1008f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1008f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1008f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1008f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1008f8: 0xc0488e2  jal         func_122388
    ctx->pc = 0x1008F8u;
    SET_GPR_U32(ctx, 31, 0x100900u);
    ctx->pc = 0x122388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122388u, 0x1008F8u, 0x100900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100900u;
label_100900:
    // 0x100900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100904: 0x3e00008  jr          $ra
    ctx->pc = 0x100904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100904u;
        // 0x100908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10090Cu;
}

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

// Function: sub_00266040
// Address: 0x266040 - 0x266064
void sub_00266040_0x266040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266040_0x266040");
#endif

    switch (ctx->pc) {
        case 0x266050u: goto label_266050;
        case 0x266058u: goto label_266058;
        default: break;
    }

    ctx->pc = 0x266040u;

    // 0x266040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x266044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266048: 0xc09ac28  jal         func_26B0A0
    ctx->pc = 0x266048u;
    SET_GPR_U32(ctx, 31, 0x266050u);
    ctx->pc = 0x26B0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B0A0u, 0x266048u, 0x266050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266050u;
label_266050:
    // 0x266050: 0xc0a43c0  jal         func_290F00
    ctx->pc = 0x266050u;
    SET_GPR_U32(ctx, 31, 0x266058u);
    ctx->pc = 0x290F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F00u, 0x266050u, 0x266058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266058u;
label_266058:
    // 0x266058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26605c: 0x3e00008  jr          $ra
    ctx->pc = 0x26605Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26605Cu;
        // 0x266060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26605Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266064u;
}

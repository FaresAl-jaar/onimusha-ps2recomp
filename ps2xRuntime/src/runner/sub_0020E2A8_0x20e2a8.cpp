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

// Function: sub_0020E2A8
// Address: 0x20e2a8 - 0x20e2c8
void sub_0020E2A8_0x20e2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E2A8_0x20e2a8");
#endif

    switch (ctx->pc) {
        case 0x20e2b8u: goto label_20e2b8;
        default: break;
    }

    ctx->pc = 0x20e2a8u;

    // 0x20e2a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20e2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20e2ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20e2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20e2b0: 0xc08e564  jal         func_239590
    ctx->pc = 0x20E2B0u;
    SET_GPR_U32(ctx, 31, 0x20E2B8u);
    ctx->pc = 0x239590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239590u, 0x20E2B0u, 0x20E2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E2B8u;
label_20e2b8:
    // 0x20e2b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20e2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e2bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20e2bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x20E2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2C0u;
        // 0x20e2c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E2C8u;
}

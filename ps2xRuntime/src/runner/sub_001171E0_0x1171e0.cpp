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

// Function: sub_001171E0
// Address: 0x1171e0 - 0x117200
void sub_001171E0_0x1171e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001171E0_0x1171e0");
#endif

    switch (ctx->pc) {
        case 0x1171f4u: goto label_1171f4;
        default: break;
    }

    ctx->pc = 0x1171e0u;

    // 0x1171e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1171e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1171e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1171e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1171e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1171e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1171ec: 0xc045bee  jal         func_116FB8
    ctx->pc = 0x1171ECu;
    SET_GPR_U32(ctx, 31, 0x1171F4u);
    ctx->pc = 0x1171F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1171ECu;
    // 0x1171f0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116FB8u, 0x1171ECu, 0x1171F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1171F4u;
label_1171f4:
    // 0x1171f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1171f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1171f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1171F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1171FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171F8u;
        // 0x1171fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1171F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117200u;
}

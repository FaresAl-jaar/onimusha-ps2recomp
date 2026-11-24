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

// Function: sub_001518B0
// Address: 0x1518b0 - 0x1518d4
void sub_001518B0_0x1518b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001518B0_0x1518b0");
#endif

    switch (ctx->pc) {
        case 0x1518c0u: goto label_1518c0;
        default: break;
    }

    ctx->pc = 0x1518b0u;

    // 0x1518b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1518b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1518b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1518b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1518b8: 0xc043804  jal         func_10E010
    ctx->pc = 0x1518B8u;
    SET_GPR_U32(ctx, 31, 0x1518C0u);
    ctx->pc = 0x1518BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1518B8u;
    // 0x1518bc: 0x8f84859c  lw          $a0, -0x7A64($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E010u, 0x1518B8u, 0x1518C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1518C0u;
label_1518c0:
    // 0x1518c0: 0xf  sync
    ctx->pc = 0x1518c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1518c4: 0x42000038  ei
    ctx->pc = 0x1518c4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1518c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1518c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1518cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1518CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1518D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1518CCu;
        // 0x1518d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1518CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1518D4u;
}

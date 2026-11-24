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

// Function: sub_001364C0
// Address: 0x1364c0 - 0x1364ec
void sub_001364C0_0x1364c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001364C0_0x1364c0");
#endif

    switch (ctx->pc) {
        case 0x1364d4u: goto label_1364d4;
        case 0x1364e0u: goto label_1364e0;
        default: break;
    }

    ctx->pc = 0x1364c0u;

    // 0x1364c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1364c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1364c4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1364c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1364c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1364c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1364cc: 0xc05dd84  jal         func_177610
    ctx->pc = 0x1364CCu;
    SET_GPR_U32(ctx, 31, 0x1364D4u);
    ctx->pc = 0x1364D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1364CCu;
    // 0x1364d0: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177610u, 0x1364CCu, 0x1364D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1364D4u;
label_1364d4:
    // 0x1364d4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1364d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1364d8: 0xc05dc54  jal         func_177150
    ctx->pc = 0x1364D8u;
    SET_GPR_U32(ctx, 31, 0x1364E0u);
    ctx->pc = 0x1364DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1364D8u;
    // 0x1364dc: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177150u, 0x1364D8u, 0x1364E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1364E0u;
label_1364e0:
    // 0x1364e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1364e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1364e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1364E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1364E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364E4u;
        // 0x1364e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1364E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1364ECu;
}

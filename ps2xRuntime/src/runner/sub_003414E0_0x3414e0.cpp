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

// Function: sub_003414E0
// Address: 0x3414e0 - 0x341514
void sub_003414E0_0x3414e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003414E0_0x3414e0");
#endif

    switch (ctx->pc) {
        case 0x341504u: goto label_341504;
        default: break;
    }

    ctx->pc = 0x3414e0u;

    // 0x3414e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3414e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3414e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3414e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3414e8: 0x94852ad4  lhu         $a1, 0x2AD4($a0)
    ctx->pc = 0x3414e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10964)));
    // 0x3414ec: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3414ECu;
    {
        const bool branch_taken_0x3414ec = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x3414ec) {
            ctx->pc = 0x341508u;
            goto label_341508;
        }
    }
    ctx->pc = 0x3414F4u;
    // 0x3414f4: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3414f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3414f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3414f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3414fc: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x3414FCu;
    SET_GPR_U32(ctx, 31, 0x341504u);
    ctx->pc = 0x341500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3414FCu;
    // 0x341500: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x3414FCu, 0x341504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341504u;
label_341504:
    // 0x341504: 0x0  nop
    ctx->pc = 0x341504u;
    // NOP
label_341508:
    // 0x341508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34150c: 0x3e00008  jr          $ra
    ctx->pc = 0x34150Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34150Cu;
        // 0x341510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34150Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341514u;
}

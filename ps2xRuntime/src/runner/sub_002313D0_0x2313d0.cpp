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

// Function: sub_002313D0
// Address: 0x2313d0 - 0x231408
void sub_002313D0_0x2313d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002313D0_0x2313d0");
#endif

    switch (ctx->pc) {
        case 0x2313e4u: goto label_2313e4;
        case 0x2313ecu: goto label_2313ec;
        case 0x2313f4u: goto label_2313f4;
        default: break;
    }

    ctx->pc = 0x2313d0u;

    // 0x2313d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2313d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2313d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2313d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2313d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2313d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2313dc: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x2313DCu;
    SET_GPR_U32(ctx, 31, 0x2313E4u);
    ctx->pc = 0x2313E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2313DCu;
    // 0x2313e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x2313DCu, 0x2313E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313E4u;
label_2313e4:
    // 0x2313e4: 0xc08c502  jal         func_231408
    ctx->pc = 0x2313E4u;
    SET_GPR_U32(ctx, 31, 0x2313ECu);
    ctx->pc = 0x2313E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2313E4u;
    // 0x2313e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231408u, 0x2313E4u, 0x2313ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313ECu;
label_2313ec:
    // 0x2313ec: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x2313ECu;
    SET_GPR_U32(ctx, 31, 0x2313F4u);
    ctx->pc = 0x2313F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2313ECu;
    // 0x2313f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x2313ECu, 0x2313F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313F4u;
label_2313f4:
    // 0x2313f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2313f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2313f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2313f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2313fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2313fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231400: 0x3e00008  jr          $ra
    ctx->pc = 0x231400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231400u;
        // 0x231404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231408u;
}

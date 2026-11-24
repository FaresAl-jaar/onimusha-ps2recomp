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

// Function: sub_0023B8D8
// Address: 0x23b8d8 - 0x23b910
void sub_0023B8D8_0x23b8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B8D8_0x23b8d8");
#endif

    switch (ctx->pc) {
        case 0x23b8ecu: goto label_23b8ec;
        case 0x23b8f4u: goto label_23b8f4;
        case 0x23b8fcu: goto label_23b8fc;
        default: break;
    }

    ctx->pc = 0x23b8d8u;

    // 0x23b8d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b8dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b8e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23b8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23b8e4: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23B8E4u;
    SET_GPR_U32(ctx, 31, 0x23B8ECu);
    ctx->pc = 0x23B8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B8E4u;
    // 0x23b8e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23B8E4u, 0x23B8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B8ECu;
label_23b8ec:
    // 0x23b8ec: 0xc08ee44  jal         func_23B910
    ctx->pc = 0x23B8ECu;
    SET_GPR_U32(ctx, 31, 0x23B8F4u);
    ctx->pc = 0x23B8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B8ECu;
    // 0x23b8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B910u, 0x23B8ECu, 0x23B8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B8F4u;
label_23b8f4:
    // 0x23b8f4: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23B8F4u;
    SET_GPR_U32(ctx, 31, 0x23B8FCu);
    ctx->pc = 0x23B8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B8F4u;
    // 0x23b8f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23B8F4u, 0x23B8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B8FCu;
label_23b8fc:
    // 0x23b8fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23b8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b900: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23b900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b908: 0x3e00008  jr          $ra
    ctx->pc = 0x23B908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B908u;
        // 0x23b90c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B910u;
}

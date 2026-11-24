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

// Function: sub_0023B298
// Address: 0x23b298 - 0x23b2d0
void sub_0023B298_0x23b298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B298_0x23b298");
#endif

    switch (ctx->pc) {
        case 0x23b2acu: goto label_23b2ac;
        case 0x23b2b4u: goto label_23b2b4;
        case 0x23b2bcu: goto label_23b2bc;
        default: break;
    }

    ctx->pc = 0x23b298u;

    // 0x23b298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b29c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b2a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23b2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23b2a4: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23B2A4u;
    SET_GPR_U32(ctx, 31, 0x23B2ACu);
    ctx->pc = 0x23B2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B2A4u;
    // 0x23b2a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23B2A4u, 0x23B2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2ACu;
label_23b2ac:
    // 0x23b2ac: 0xc08ecb4  jal         func_23B2D0
    ctx->pc = 0x23B2ACu;
    SET_GPR_U32(ctx, 31, 0x23B2B4u);
    ctx->pc = 0x23B2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B2ACu;
    // 0x23b2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B2D0u, 0x23B2ACu, 0x23B2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2B4u;
label_23b2b4:
    // 0x23b2b4: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23B2B4u;
    SET_GPR_U32(ctx, 31, 0x23B2BCu);
    ctx->pc = 0x23B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B2B4u;
    // 0x23b2b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23B2B4u, 0x23B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2BCu;
label_23b2bc:
    // 0x23b2bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23b2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b2c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23b2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b2c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b2c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x23B2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2C8u;
        // 0x23b2cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B2D0u;
}

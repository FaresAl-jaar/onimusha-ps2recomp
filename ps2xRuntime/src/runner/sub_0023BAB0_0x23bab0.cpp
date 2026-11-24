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

// Function: sub_0023BAB0
// Address: 0x23bab0 - 0x23bae8
void sub_0023BAB0_0x23bab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BAB0_0x23bab0");
#endif

    switch (ctx->pc) {
        case 0x23bac4u: goto label_23bac4;
        case 0x23baccu: goto label_23bacc;
        case 0x23bad4u: goto label_23bad4;
        default: break;
    }

    ctx->pc = 0x23bab0u;

    // 0x23bab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23bab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23bab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23bab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23bab8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23bab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23babc: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23BABCu;
    SET_GPR_U32(ctx, 31, 0x23BAC4u);
    ctx->pc = 0x23BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BABCu;
    // 0x23bac0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23BABCu, 0x23BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BAC4u;
label_23bac4:
    // 0x23bac4: 0xc08eeba  jal         func_23BAE8
    ctx->pc = 0x23BAC4u;
    SET_GPR_U32(ctx, 31, 0x23BACCu);
    ctx->pc = 0x23BAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BAC4u;
    // 0x23bac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BAE8u, 0x23BAC4u, 0x23BACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BACCu;
label_23bacc:
    // 0x23bacc: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23BACCu;
    SET_GPR_U32(ctx, 31, 0x23BAD4u);
    ctx->pc = 0x23BAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BACCu;
    // 0x23bad0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23BACCu, 0x23BAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BAD4u;
label_23bad4:
    // 0x23bad4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23bad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23bad8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23bad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23badc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23badcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bae0: 0x3e00008  jr          $ra
    ctx->pc = 0x23BAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BAE0u;
        // 0x23bae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BAE8u;
}

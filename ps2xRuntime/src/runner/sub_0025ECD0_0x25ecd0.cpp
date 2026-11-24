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

// Function: sub_0025ECD0
// Address: 0x25ecd0 - 0x25ed0c
void sub_0025ECD0_0x25ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025ECD0_0x25ecd0");
#endif

    switch (ctx->pc) {
        case 0x25ece8u: goto label_25ece8;
        case 0x25ecfcu: goto label_25ecfc;
        default: break;
    }

    ctx->pc = 0x25ecd0u;

    // 0x25ecd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ecd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25ecd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ecd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ecdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25ecdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ece0: 0xc07bd78  jal         func_1EF5E0
    ctx->pc = 0x25ECE0u;
    SET_GPR_U32(ctx, 31, 0x25ECE8u);
    ctx->pc = 0x25ECE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ECE0u;
    // 0x25ece4: 0x8c8400d0  lw          $a0, 0xD0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF5E0u, 0x25ECE0u, 0x25ECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECE8u;
label_25ece8:
    // 0x25ece8: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x25ece8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x25ecec: 0x26060070  addiu       $a2, $s0, 0x70
    ctx->pc = 0x25ececu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25ecf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25ecf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ecf4: 0xc07bbc8  jal         func_1EEF20
    ctx->pc = 0x25ECF4u;
    SET_GPR_U32(ctx, 31, 0x25ECFCu);
    ctx->pc = 0x25ECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ECF4u;
    // 0x25ecf8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEF20u, 0x25ECF4u, 0x25ECFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ECFCu;
label_25ecfc:
    // 0x25ecfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25ecfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ed00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ed00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ed04: 0x3e00008  jr          $ra
    ctx->pc = 0x25ED04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ED04u;
        // 0x25ed08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ED04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25ED0Cu;
}

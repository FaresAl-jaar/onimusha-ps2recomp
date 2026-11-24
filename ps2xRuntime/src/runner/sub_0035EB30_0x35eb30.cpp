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

// Function: sub_0035EB30
// Address: 0x35eb30 - 0x35eb84
void sub_0035EB30_0x35eb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EB30_0x35eb30");
#endif

    switch (ctx->pc) {
        case 0x35eb48u: goto label_35eb48;
        case 0x35eb5cu: goto label_35eb5c;
        default: break;
    }

    ctx->pc = 0x35eb30u;

    // 0x35eb30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35eb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35eb34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35eb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35eb38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35eb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35eb3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35eb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35eb40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35eb40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eb44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35eb44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35eb48:
    // 0x35eb48: 0x8e052af8  lw          $a1, 0x2AF8($s0)
    ctx->pc = 0x35eb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11000)));
    // 0x35eb4c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35EB4Cu;
    {
        const bool branch_taken_0x35eb4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB4Cu;
        // 0x35eb50: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eb4c) {
            ctx->pc = 0x35EB60u;
            goto label_35eb60;
        }
    }
    ctx->pc = 0x35EB54u;
    // 0x35eb54: 0xc0a739c  jal         func_29CE70
    ctx->pc = 0x35EB54u;
    SET_GPR_U32(ctx, 31, 0x35EB5Cu);
    ctx->pc = 0x35EB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EB54u;
    // 0x35eb58: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x35EB54u, 0x35EB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EB5Cu;
label_35eb5c:
    // 0x35eb5c: 0x0  nop
    ctx->pc = 0x35eb5cu;
    // NOP
label_35eb60:
    // 0x35eb60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35eb60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x35eb64: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x35eb64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35eb68: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x35EB68u;
    {
        const bool branch_taken_0x35eb68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB68u;
        // 0x35eb6c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eb68) {
            ctx->pc = 0x35EB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35eb48;
        }
    }
    ctx->pc = 0x35EB70u;
    // 0x35eb70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35eb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35eb74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35eb74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35eb78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35eb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35eb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x35EB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB7Cu;
        // 0x35eb80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EB84u;
}

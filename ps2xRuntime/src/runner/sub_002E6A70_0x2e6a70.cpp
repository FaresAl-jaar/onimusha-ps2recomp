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

// Function: sub_002E6A70
// Address: 0x2e6a70 - 0x2e6acc
void sub_002E6A70_0x2e6a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6A70_0x2e6a70");
#endif

    switch (ctx->pc) {
        case 0x2e6ab0u: goto label_2e6ab0;
        case 0x2e6ac0u: goto label_2e6ac0;
        default: break;
    }

    ctx->pc = 0x2e6a70u;

    // 0x2e6a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e6a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e6a74: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x2e6a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2e6a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e6a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e6a7c: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x2e6a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x2e6a80: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E6A80u;
    {
        const bool branch_taken_0x2e6a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A80u;
        // 0x2e6a84: 0x24020095  addiu       $v0, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a80) {
            ctx->pc = 0x2E6AA8u;
            goto label_2e6aa8;
        }
    }
    ctx->pc = 0x2E6A88u;
    // 0x2e6a88: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E6A88u;
    {
        const bool branch_taken_0x2e6a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e6a88) {
            ctx->pc = 0x2E6AA8u;
            goto label_2e6aa8;
        }
    }
    ctx->pc = 0x2E6A90u;
    // 0x2e6a90: 0x24020094  addiu       $v0, $zero, 0x94
    ctx->pc = 0x2e6a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x2e6a94: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6A94u;
    {
        const bool branch_taken_0x2e6a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e6a94) {
            ctx->pc = 0x2E6AA8u;
            goto label_2e6aa8;
        }
    }
    ctx->pc = 0x2E6A9Cu;
    // 0x2e6a9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6A9Cu;
    {
        const bool branch_taken_0x2e6a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a9c) {
            ctx->pc = 0x2E6AB8u;
            goto label_2e6ab8;
        }
    }
    ctx->pc = 0x2E6AA4u;
    // 0x2e6aa4: 0x0  nop
    ctx->pc = 0x2e6aa4u;
    // NOP
label_2e6aa8:
    // 0x2e6aa8: 0xc0b9a5c  jal         func_2E6970
    ctx->pc = 0x2E6AA8u;
    SET_GPR_U32(ctx, 31, 0x2E6AB0u);
    ctx->pc = 0x2E6970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6970u, 0x2E6AA8u, 0x2E6AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6AB0u;
label_2e6ab0:
    // 0x2e6ab0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6AB0u;
    {
        const bool branch_taken_0x2e6ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6ab0) {
            ctx->pc = 0x2E6AC0u;
            goto label_2e6ac0;
        }
    }
    ctx->pc = 0x2E6AB8u;
label_2e6ab8:
    // 0x2e6ab8: 0xc0a0458  jal         func_281160
    ctx->pc = 0x2E6AB8u;
    SET_GPR_U32(ctx, 31, 0x2E6AC0u);
    ctx->pc = 0x281160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281160u, 0x2E6AB8u, 0x2E6AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6AC0u;
label_2e6ac0:
    // 0x2e6ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e6ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6AC4u;
        // 0x2e6ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6ACCu;
}

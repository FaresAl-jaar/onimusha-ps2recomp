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

// Function: sub_003873E0
// Address: 0x3873e0 - 0x387428
void sub_003873E0_0x3873e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003873E0_0x3873e0");
#endif

    switch (ctx->pc) {
        case 0x3873f8u: goto label_3873f8;
        default: break;
    }

    ctx->pc = 0x3873e0u;

    // 0x3873e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3873e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3873e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3873e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3873e8: 0x8c8507c0  lw          $a1, 0x7C0($a0)
    ctx->pc = 0x3873e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1984)));
    // 0x3873ec: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3873ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3873f0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3873F0u;
    SET_GPR_U32(ctx, 31, 0x3873F8u);
    ctx->pc = 0x3873F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3873F0u;
    // 0x3873f4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3873F0u, 0x3873F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3873F8u;
label_3873f8:
    // 0x3873f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3873F8u;
    {
        const bool branch_taken_0x3873f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3873FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3873F8u;
        // 0x3873fc: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3873f8) {
            ctx->pc = 0x387418u;
            goto label_387418;
        }
    }
    ctx->pc = 0x387400u;
    // 0x387400: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x387400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x387404: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x387404u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x387408: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x387408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38740c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x387410: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x387410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x387414: 0x0  nop
    ctx->pc = 0x387414u;
    // NOP
label_387418:
    // 0x387418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x387418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38741c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x38741cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x387420: 0x3e00008  jr          $ra
    ctx->pc = 0x387420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387420u;
        // 0x387424: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387428u;
}

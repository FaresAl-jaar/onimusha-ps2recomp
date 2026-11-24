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

// Function: sub_002F0B70
// Address: 0x2f0b70 - 0x2f0bc4
void sub_002F0B70_0x2f0b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0B70_0x2f0b70");
#endif

    switch (ctx->pc) {
        case 0x2f0b80u: goto label_2f0b80;
        default: break;
    }

    ctx->pc = 0x2f0b70u;

    // 0x2f0b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f0b78: 0xc0973c8  jal         func_25CF20
    ctx->pc = 0x2F0B78u;
    SET_GPR_U32(ctx, 31, 0x2F0B80u);
    ctx->pc = 0x25CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CF20u, 0x2F0B78u, 0x2F0B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0B80u;
label_2f0b80:
    // 0x2f0b80: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F0B80u;
    {
        const bool branch_taken_0x2f0b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B80u;
        // 0x2f0b84: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b80) {
            ctx->pc = 0x2F0BB8u;
            goto label_2f0bb8;
        }
    }
    ctx->pc = 0x2F0B88u;
    // 0x2f0b88: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2f0b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2f0b8c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2f0b8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2f0b90: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2f0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f0b94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f0b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f0b98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f0b9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0B9Cu;
    {
        const bool branch_taken_0x2f0b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0b9c) {
            ctx->pc = 0x2F0BB8u;
            goto label_2f0bb8;
        }
    }
    ctx->pc = 0x2F0BA4u;
    // 0x2f0ba4: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x2f0ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2f0ba8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f0ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f0bac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f0bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f0bb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f0bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f0bb4: 0x0  nop
    ctx->pc = 0x2f0bb4u;
    // NOP
label_2f0bb8:
    // 0x2f0bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BBCu;
        // 0x2f0bc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0BC4u;
}

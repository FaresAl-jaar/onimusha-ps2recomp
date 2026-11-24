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

// Function: sub_0036C270
// Address: 0x36c270 - 0x36c2f8
void sub_0036C270_0x36c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C270_0x36c270");
#endif

    switch (ctx->pc) {
        case 0x36c2a4u: goto label_36c2a4;
        case 0x36c2d0u: goto label_36c2d0;
        default: break;
    }

    ctx->pc = 0x36c270u;

    // 0x36c270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36c270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36c274: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36c274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36c278: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36c27c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36c280: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36c284: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36c284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c288: 0x48040  sll         $s0, $a0, 1
    ctx->pc = 0x36c288u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x36c28c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x36c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x36c290: 0x84631eee  lh          $v1, 0x1EEE($v1)
    ctx->pc = 0x36c290u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 7918)));
    // 0x36c294: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36C294u;
    {
        const bool branch_taken_0x36c294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C294u;
        // 0x36c298: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c294) {
            ctx->pc = 0x36C2B8u;
            goto label_36c2b8;
        }
    }
    ctx->pc = 0x36C29Cu;
    // 0x36c29c: 0xc0db068  jal         func_36C1A0
    ctx->pc = 0x36C29Cu;
    SET_GPR_U32(ctx, 31, 0x36C2A4u);
    ctx->pc = 0x36C2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C29Cu;
    // 0x36c2a0: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C1A0u, 0x36C29Cu, 0x36C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2A4u;
label_36c2a4:
    // 0x36c2a4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c2a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36c2ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x36c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x36c2b0: 0xa4431eee  sh          $v1, 0x1EEE($v0)
    ctx->pc = 0x36c2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 7918), (uint16_t)GPR_U32(ctx, 3));
    // 0x36c2b4: 0x0  nop
    ctx->pc = 0x36c2b4u;
    // NOP
label_36c2b8:
    // 0x36c2b8: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36c2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c2bc: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x36c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x36c2c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36c2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36c2c4: 0x90451eac  lbu         $a1, 0x1EAC($v0)
    ctx->pc = 0x36c2c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7852)));
    // 0x36c2c8: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C2C8u;
    SET_GPR_U32(ctx, 31, 0x36C2D0u);
    ctx->pc = 0x36C2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C2C8u;
    // 0x36c2cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C2C8u, 0x36C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2D0u;
label_36c2d0:
    // 0x36c2d0: 0x8f848c00  lw          $a0, -0x7400($gp)
    ctx->pc = 0x36c2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c2d4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x36c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x36c2d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x36c2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36c2dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36c2e0: 0xac651d20  sw          $a1, 0x1D20($v1)
    ctx->pc = 0x36c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7456), GPR_U32(ctx, 5));
    // 0x36c2e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36c2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c2e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c2e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c2ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c2ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x36C2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C2F0u;
        // 0x36c2f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C2F8u;
}

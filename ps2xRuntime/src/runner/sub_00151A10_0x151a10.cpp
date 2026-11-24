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

// Function: sub_00151A10
// Address: 0x151a10 - 0x151ab4
void sub_00151A10_0x151a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151A10_0x151a10");
#endif

    switch (ctx->pc) {
        case 0x151a18u: goto label_151a18;
        case 0x151a30u: goto label_151a30;
        case 0x151a48u: goto label_151a48;
        case 0x151a50u: goto label_151a50;
        case 0x151a60u: goto label_151a60;
        case 0x151a78u: goto label_151a78;
        case 0x151a90u: goto label_151a90;
        case 0x151a98u: goto label_151a98;
        default: break;
    }

    ctx->pc = 0x151a10u;

    // 0x151a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x151a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x151a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_151a18:
    // 0x151a18: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x151a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x151a1c: 0x3c027777  lui         $v0, 0x7777
    ctx->pc = 0x151a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30583 << 16));
    // 0x151a20: 0x24847150  addiu       $a0, $a0, 0x7150
    ctx->pc = 0x151a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29008));
    // 0x151a24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a28: 0xc044752  jal         func_111D48
    ctx->pc = 0x151A28u;
    SET_GPR_U32(ctx, 31, 0x151A30u);
    ctx->pc = 0x151A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A28u;
    // 0x151a2c: 0x34457777  ori         $a1, $v0, 0x7777 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30583);
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D48u, 0x151A28u, 0x151A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A30u;
label_151a30:
    // 0x151a30: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x151A30u;
    {
        const bool branch_taken_0x151a30 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x151A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A30u;
        // 0x151a34: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151a30) {
            ctx->pc = 0x151A48u;
            goto label_151a48;
        }
    }
    ctx->pc = 0x151A38u;
    // 0x151a38: 0x3c027777  lui         $v0, 0x7777
    ctx->pc = 0x151a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30583 << 16));
    // 0x151a3c: 0x24844c30  addiu       $a0, $a0, 0x4C30
    ctx->pc = 0x151a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19504));
    // 0x151a40: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x151A40u;
    SET_GPR_U32(ctx, 31, 0x151A48u);
    ctx->pc = 0x151A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A40u;
    // 0x151a44: 0x34457777  ori         $a1, $v0, 0x7777 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30583);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x151A40u, 0x151A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A48u;
label_151a48:
    // 0x151a48: 0xc054628  jal         func_1518A0
    ctx->pc = 0x151A48u;
    SET_GPR_U32(ctx, 31, 0x151A50u);
    ctx->pc = 0x151A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A48u;
    // 0x151a4c: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x151A48u, 0x151A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A50u;
label_151a50:
    // 0x151a50: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x151a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x151a54: 0x8c227174  lw          $v0, 0x7174($at)
    ctx->pc = 0x151a54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7E7174u));
    // 0x151a58: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x151A58u;
    {
        const bool branch_taken_0x151a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151a58) {
            ctx->pc = 0x151A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151a18;
        }
    }
    ctx->pc = 0x151A60u;
label_151a60:
    // 0x151a60: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x151a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x151a64: 0x3c027777  lui         $v0, 0x7777
    ctx->pc = 0x151a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30583 << 16));
    // 0x151a68: 0x24847180  addiu       $a0, $a0, 0x7180
    ctx->pc = 0x151a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    // 0x151a6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a70: 0xc044752  jal         func_111D48
    ctx->pc = 0x151A70u;
    SET_GPR_U32(ctx, 31, 0x151A78u);
    ctx->pc = 0x151A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A70u;
    // 0x151a74: 0x34457778  ori         $a1, $v0, 0x7778 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30584);
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D48u, 0x151A70u, 0x151A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A78u;
label_151a78:
    // 0x151a78: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x151A78u;
    {
        const bool branch_taken_0x151a78 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x151A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A78u;
        // 0x151a7c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151a78) {
            ctx->pc = 0x151A90u;
            goto label_151a90;
        }
    }
    ctx->pc = 0x151A80u;
    // 0x151a80: 0x3c027777  lui         $v0, 0x7777
    ctx->pc = 0x151a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30583 << 16));
    // 0x151a84: 0x24844c30  addiu       $a0, $a0, 0x4C30
    ctx->pc = 0x151a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19504));
    // 0x151a88: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x151A88u;
    SET_GPR_U32(ctx, 31, 0x151A90u);
    ctx->pc = 0x151A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A88u;
    // 0x151a8c: 0x34457778  ori         $a1, $v0, 0x7778 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30584);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x151A88u, 0x151A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A90u;
label_151a90:
    // 0x151a90: 0xc054628  jal         func_1518A0
    ctx->pc = 0x151A90u;
    SET_GPR_U32(ctx, 31, 0x151A98u);
    ctx->pc = 0x151A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A90u;
    // 0x151a94: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x151A90u, 0x151A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A98u;
label_151a98:
    // 0x151a98: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x151a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x151a9c: 0x8c2371a4  lw          $v1, 0x71A4($at)
    ctx->pc = 0x151a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7E71A4u));
    // 0x151aa0: 0x1060ffef  beqz        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x151AA0u;
    {
        const bool branch_taken_0x151aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151aa0) {
            ctx->pc = 0x151A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151a60;
        }
    }
    ctx->pc = 0x151AA8u;
    // 0x151aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151aac: 0x3e00008  jr          $ra
    ctx->pc = 0x151AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AACu;
        // 0x151ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151AB4u;
}

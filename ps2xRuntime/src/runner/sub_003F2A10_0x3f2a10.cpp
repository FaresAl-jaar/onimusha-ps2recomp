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

// Function: sub_003F2A10
// Address: 0x3f2a10 - 0x3f2afc
void sub_003F2A10_0x3f2a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2A10_0x3f2a10");
#endif

    switch (ctx->pc) {
        case 0x3f2a28u: goto label_3f2a28;
        case 0x3f2a54u: goto label_3f2a54;
        case 0x3f2a68u: goto label_3f2a68;
        case 0x3f2a80u: goto label_3f2a80;
        case 0x3f2a98u: goto label_3f2a98;
        case 0x3f2ab0u: goto label_3f2ab0;
        case 0x3f2ac8u: goto label_3f2ac8;
        default: break;
    }

    ctx->pc = 0x3f2a10u;

    // 0x3f2a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f2a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f2a14: 0x240403f0  addiu       $a0, $zero, 0x3F0
    ctx->pc = 0x3f2a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    // 0x3f2a18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f2a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f2a1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f2a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f2a20: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x3F2A20u;
    SET_GPR_U32(ctx, 31, 0x3F2A28u);
    ctx->pc = 0x3F2A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2A20u;
    // 0x3f2a24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x3F2A20u, 0x3F2A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2A28u;
label_3f2a28:
    // 0x3f2a28: 0xaf828d34  sw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f2a28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937908), GPR_U32(ctx, 2));
    // 0x3f2a2c: 0x8f838d34  lw          $v1, -0x72CC($gp)
    ctx->pc = 0x3f2a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2a30: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3F2A30u;
    {
        const bool branch_taken_0x3f2a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A30u;
        // 0x3f2a34: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a30) {
            ctx->pc = 0x3F2AE8u;
            goto label_3f2ae8;
        }
    }
    ctx->pc = 0x3F2A38u;
    // 0x3f2a38: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3f2a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f2a3c: 0x8c3095c0  lw          $s0, -0x6A40($at)
    ctx->pc = 0x3f2a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940096)));
    // 0x3f2a40: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3f2a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x3f2a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2a48: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x3f2a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2a4c: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x3F2A4Cu;
    SET_GPR_U32(ctx, 31, 0x3F2A54u);
    ctx->pc = 0x3F2A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2A4Cu;
    // 0x3f2a50: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x3F2A4Cu, 0x3F2A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2A54u;
label_3f2a54:
    // 0x3f2a54: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3f2a54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3f2a58: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3f2a58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f2a5c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x3F2A5Cu;
    {
        const bool branch_taken_0x3f2a5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A5Cu;
        // 0x3f2a60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a5c) {
            ctx->pc = 0x3F2AE0u;
            goto label_3f2ae0;
        }
    }
    ctx->pc = 0x3F2A64u;
    // 0x3f2a64: 0x0  nop
    ctx->pc = 0x3f2a64u;
    // NOP
label_3f2a68:
    // 0x3f2a68: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F2A68u;
    {
        const bool branch_taken_0x3f2a68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F2A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A68u;
        // 0x3f2a6c: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a68) {
            ctx->pc = 0x3F2A80u;
            goto label_3f2a80;
        }
    }
    ctx->pc = 0x3F2A70u;
    // 0x3f2a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f2a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2a78: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3F2A78u;
    SET_GPR_U32(ctx, 31, 0x3F2A80u);
    ctx->pc = 0x3F2A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2A78u;
    // 0x3f2a7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3F2A78u, 0x3F2A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2A80u;
label_3f2a80:
    // 0x3f2a80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f2a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f2a84: 0x16250004  bne         $s1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F2A84u;
    {
        const bool branch_taken_0x3f2a84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x3F2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A84u;
        // 0x3f2a88: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a84) {
            ctx->pc = 0x3F2A98u;
            goto label_3f2a98;
        }
    }
    ctx->pc = 0x3F2A8Cu;
    // 0x3f2a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2a90: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3F2A90u;
    SET_GPR_U32(ctx, 31, 0x3F2A98u);
    ctx->pc = 0x3F2A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2A90u;
    // 0x3f2a94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3F2A90u, 0x3F2A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2A98u;
label_3f2a98:
    // 0x3f2a98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3f2a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f2a9c: 0x16250004  bne         $s1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F2A9Cu;
    {
        const bool branch_taken_0x3f2a9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x3F2AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2A9Cu;
        // 0x3f2aa0: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2a9c) {
            ctx->pc = 0x3F2AB0u;
            goto label_3f2ab0;
        }
    }
    ctx->pc = 0x3F2AA4u;
    // 0x3f2aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2aa8: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3F2AA8u;
    SET_GPR_U32(ctx, 31, 0x3F2AB0u);
    ctx->pc = 0x3F2AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2AA8u;
    // 0x3f2aac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3F2AA8u, 0x3F2AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2AB0u;
label_3f2ab0:
    // 0x3f2ab0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3f2ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f2ab4: 0x16250004  bne         $s1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F2AB4u;
    {
        const bool branch_taken_0x3f2ab4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x3F2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2AB4u;
        // 0x3f2ab8: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2ab4) {
            ctx->pc = 0x3F2AC8u;
            goto label_3f2ac8;
        }
    }
    ctx->pc = 0x3F2ABCu;
    // 0x3f2abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2ac0: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3F2AC0u;
    SET_GPR_U32(ctx, 31, 0x3F2AC8u);
    ctx->pc = 0x3F2AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2AC0u;
    // 0x3f2ac4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3F2AC0u, 0x3F2AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2AC8u;
label_3f2ac8:
    // 0x3f2ac8: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3f2ac8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3f2acc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3f2accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f2ad0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3f2ad0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f2ad4: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x3F2AD4u;
    {
        const bool branch_taken_0x3f2ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2ad4) {
            ctx->pc = 0x3F2A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f2a68;
        }
    }
    ctx->pc = 0x3F2ADCu;
    // 0x3f2adc: 0x0  nop
    ctx->pc = 0x3f2adcu;
    // NOP
label_3f2ae0:
    // 0x3f2ae0: 0x8f838d34  lw          $v1, -0x72CC($gp)
    ctx->pc = 0x3f2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x3f2ae4: 0xa0600390  sb          $zero, 0x390($v1)
    ctx->pc = 0x3f2ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 912), (uint8_t)GPR_U32(ctx, 0));
label_3f2ae8:
    // 0x3f2ae8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f2ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f2aec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f2aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f2af0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f2af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2af4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2AF4u;
        // 0x3f2af8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2AFCu;
}

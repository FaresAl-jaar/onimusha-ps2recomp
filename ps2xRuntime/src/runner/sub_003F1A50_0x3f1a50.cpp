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

// Function: sub_003F1A50
// Address: 0x3f1a50 - 0x3f1b0c
void sub_003F1A50_0x3f1a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1A50_0x3f1a50");
#endif

    switch (ctx->pc) {
        case 0x3f1a68u: goto label_3f1a68;
        case 0x3f1a94u: goto label_3f1a94;
        case 0x3f1aa8u: goto label_3f1aa8;
        case 0x3f1ac0u: goto label_3f1ac0;
        case 0x3f1ad8u: goto label_3f1ad8;
        default: break;
    }

    ctx->pc = 0x3f1a50u;

    // 0x3f1a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f1a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f1a54: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x3f1a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x3f1a58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f1a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f1a5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f1a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f1a60: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x3F1A60u;
    SET_GPR_U32(ctx, 31, 0x3F1A68u);
    ctx->pc = 0x3F1A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1A60u;
    // 0x3f1a64: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x3F1A60u, 0x3F1A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1A68u;
label_3f1a68:
    // 0x3f1a68: 0xaf828d2c  sw          $v0, -0x72D4($gp)
    ctx->pc = 0x3f1a68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937900), GPR_U32(ctx, 2));
    // 0x3f1a6c: 0x8f838d2c  lw          $v1, -0x72D4($gp)
    ctx->pc = 0x3f1a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f1a70: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3F1A70u;
    {
        const bool branch_taken_0x3f1a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A70u;
        // 0x3f1a74: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1a70) {
            ctx->pc = 0x3F1AF8u;
            goto label_3f1af8;
        }
    }
    ctx->pc = 0x3F1A78u;
    // 0x3f1a78: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f1a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f1a7c: 0x8c3095c0  lw          $s0, -0x6A40($at)
    ctx->pc = 0x3f1a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940096)));
    // 0x3f1a80: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3f1a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x3f1a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1a88: 0x8f828d2c  lw          $v0, -0x72D4($gp)
    ctx->pc = 0x3f1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f1a8c: 0xc0d6a60  jal         func_35A980
    ctx->pc = 0x3F1A8Cu;
    SET_GPR_U32(ctx, 31, 0x3F1A94u);
    ctx->pc = 0x3F1A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1A8Cu;
    // 0x3f1a90: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A980u, 0x3F1A8Cu, 0x3F1A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1A94u;
label_3f1a94:
    // 0x3f1a94: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3f1a94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3f1a98: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3f1a98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f1a9c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x3F1A9Cu;
    {
        const bool branch_taken_0x3f1a9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A9Cu;
        // 0x3f1aa0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1a9c) {
            ctx->pc = 0x3F1AF0u;
            goto label_3f1af0;
        }
    }
    ctx->pc = 0x3F1AA4u;
    // 0x3f1aa4: 0x0  nop
    ctx->pc = 0x3f1aa4u;
    // NOP
label_3f1aa8:
    // 0x3f1aa8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F1AA8u;
    {
        const bool branch_taken_0x3f1aa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1AA8u;
        // 0x3f1aac: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1aa8) {
            ctx->pc = 0x3F1AC0u;
            goto label_3f1ac0;
        }
    }
    ctx->pc = 0x3F1AB0u;
    // 0x3f1ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f1ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1ab8: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3F1AB8u;
    SET_GPR_U32(ctx, 31, 0x3F1AC0u);
    ctx->pc = 0x3F1ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1AB8u;
    // 0x3f1abc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3F1AB8u, 0x3F1AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1AC0u;
label_3f1ac0:
    // 0x3f1ac0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f1ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f1ac4: 0x16250004  bne         $s1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F1AC4u;
    {
        const bool branch_taken_0x3f1ac4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x3F1AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1AC4u;
        // 0x3f1ac8: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1ac4) {
            ctx->pc = 0x3F1AD8u;
            goto label_3f1ad8;
        }
    }
    ctx->pc = 0x3F1ACCu;
    // 0x3f1acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1ad0: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3F1AD0u;
    SET_GPR_U32(ctx, 31, 0x3F1AD8u);
    ctx->pc = 0x3F1AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1AD0u;
    // 0x3f1ad4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3F1AD0u, 0x3F1AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1AD8u;
label_3f1ad8:
    // 0x3f1ad8: 0x96030068  lhu         $v1, 0x68($s0)
    ctx->pc = 0x3f1ad8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3f1adc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3f1adcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f1ae0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3f1ae0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3f1ae4: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3F1AE4u;
    {
        const bool branch_taken_0x3f1ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f1ae4) {
            ctx->pc = 0x3F1AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f1aa8;
        }
    }
    ctx->pc = 0x3F1AECu;
    // 0x3f1aec: 0x0  nop
    ctx->pc = 0x3f1aecu;
    // NOP
label_3f1af0:
    // 0x3f1af0: 0x8f838d2c  lw          $v1, -0x72D4($gp)
    ctx->pc = 0x3f1af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x3f1af4: 0xa06001d0  sb          $zero, 0x1D0($v1)
    ctx->pc = 0x3f1af4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 464), (uint8_t)GPR_U32(ctx, 0));
label_3f1af8:
    // 0x3f1af8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f1af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f1afc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f1afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f1b00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f1b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f1b04: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1B04u;
        // 0x3f1b08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1B0Cu;
}

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

// Function: sub_0035AD50
// Address: 0x35ad50 - 0x35ae18
void sub_0035AD50_0x35ad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AD50_0x35ad50");
#endif

    switch (ctx->pc) {
        case 0x35ada8u: goto label_35ada8;
        case 0x35adc8u: goto label_35adc8;
        case 0x35adecu: goto label_35adec;
        case 0x35adf4u: goto label_35adf4;
        default: break;
    }

    ctx->pc = 0x35ad50u;

    // 0x35ad50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35ad50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35ad54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x35ad54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x35ad58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35ad58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35ad5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35ad5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35ad60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35ad60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35ad64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ad64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35ad68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ad68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35ad6c: 0x8c830154  lw          $v1, 0x154($a0)
    ctx->pc = 0x35ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x35ad70: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35ad70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35ad74: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x35ad74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35ad78: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x35AD78u;
    {
        const bool branch_taken_0x35ad78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD78u;
        // 0x35ad7c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ad78) {
            ctx->pc = 0x35ADF8u;
            goto label_35adf8;
        }
    }
    ctx->pc = 0x35AD80u;
    // 0x35ad80: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x35ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x35ad84: 0x8e830150  lw          $v1, 0x150($s4)
    ctx->pc = 0x35ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 336)));
    // 0x35ad88: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x35ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35ad8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x35ad8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ad90: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x35ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x35ad94: 0x96820068  lhu         $v0, 0x68($s4)
    ctx->pc = 0x35ad94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x35ad98: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x35ad98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35ad9c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x35AD9Cu;
    {
        const bool branch_taken_0x35ad9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD9Cu;
        // 0x35ada0: 0x649821  addu        $s3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ad9c) {
            ctx->pc = 0x35ADE0u;
            goto label_35ade0;
        }
    }
    ctx->pc = 0x35ADA4u;
    // 0x35ada4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35ada4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35ada8:
    // 0x35ada8: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x35ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x35adac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x35adacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35adb0: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x35adb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x35adb4: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35ADB4u;
    {
        const bool branch_taken_0x35adb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x35ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ADB4u;
        // 0x35adb8: 0x324500ff  andi        $a1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35adb4) {
            ctx->pc = 0x35ADC8u;
            goto label_35adc8;
        }
    }
    ctx->pc = 0x35ADBCu;
    // 0x35adbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35adbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35adc0: 0xc0d6afc  jal         func_35ABF0
    ctx->pc = 0x35ADC0u;
    SET_GPR_U32(ctx, 31, 0x35ADC8u);
    ctx->pc = 0x35ADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ADC0u;
    // 0x35adc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35ABF0u, 0x35ADC0u, 0x35ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ADC8u;
label_35adc8:
    // 0x35adc8: 0x96820068  lhu         $v0, 0x68($s4)
    ctx->pc = 0x35adc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x35adcc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x35adccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x35add0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x35add0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35add4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x35ADD4u;
    {
        const bool branch_taken_0x35add4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ADD4u;
        // 0x35add8: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35add4) {
            ctx->pc = 0x35ADA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ada8;
        }
    }
    ctx->pc = 0x35ADDCu;
    // 0x35addc: 0x0  nop
    ctx->pc = 0x35addcu;
    // NOP
label_35ade0:
    // 0x35ade0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35ade0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ade4: 0xc0d6c98  jal         func_35B260
    ctx->pc = 0x35ADE4u;
    SET_GPR_U32(ctx, 31, 0x35ADECu);
    ctx->pc = 0x35ADE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ADE4u;
    // 0x35ade8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B260u, 0x35ADE4u, 0x35ADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ADECu;
label_35adec:
    // 0x35adec: 0xc04150c  jal         func_105430
    ctx->pc = 0x35ADECu;
    SET_GPR_U32(ctx, 31, 0x35ADF4u);
    ctx->pc = 0x35ADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ADECu;
    // 0x35adf0: 0x26640040  addiu       $a0, $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x35ADECu, 0x35ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ADF4u;
label_35adf4:
    // 0x35adf4: 0xa26000d0  sb          $zero, 0xD0($s3)
    ctx->pc = 0x35adf4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 208), (uint8_t)GPR_U32(ctx, 0));
label_35adf8:
    // 0x35adf8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x35adf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35adfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35adfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35ae00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35ae00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35ae04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35ae04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ae08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35ae08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ae0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35ae0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ae10: 0x3e00008  jr          $ra
    ctx->pc = 0x35AE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AE10u;
        // 0x35ae14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AE18u;
}

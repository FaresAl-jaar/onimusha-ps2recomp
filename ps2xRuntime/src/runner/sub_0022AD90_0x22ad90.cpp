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

// Function: sub_0022AD90
// Address: 0x22ad90 - 0x22af10
void sub_0022AD90_0x22ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AD90_0x22ad90");
#endif

    switch (ctx->pc) {
        case 0x22ad90u: goto label_22ad90;
        case 0x22ad94u: goto label_22ad94;
        case 0x22ad98u: goto label_22ad98;
        case 0x22ad9cu: goto label_22ad9c;
        case 0x22ada0u: goto label_22ada0;
        case 0x22ada4u: goto label_22ada4;
        case 0x22ada8u: goto label_22ada8;
        case 0x22adacu: goto label_22adac;
        case 0x22adb0u: goto label_22adb0;
        case 0x22adb4u: goto label_22adb4;
        case 0x22adb8u: goto label_22adb8;
        case 0x22adbcu: goto label_22adbc;
        case 0x22adc0u: goto label_22adc0;
        case 0x22adc4u: goto label_22adc4;
        case 0x22adc8u: goto label_22adc8;
        case 0x22adccu: goto label_22adcc;
        case 0x22add0u: goto label_22add0;
        case 0x22add4u: goto label_22add4;
        case 0x22add8u: goto label_22add8;
        case 0x22addcu: goto label_22addc;
        case 0x22ade0u: goto label_22ade0;
        case 0x22ade4u: goto label_22ade4;
        case 0x22ade8u: goto label_22ade8;
        case 0x22adecu: goto label_22adec;
        case 0x22adf0u: goto label_22adf0;
        case 0x22adf4u: goto label_22adf4;
        case 0x22adf8u: goto label_22adf8;
        case 0x22adfcu: goto label_22adfc;
        case 0x22ae00u: goto label_22ae00;
        case 0x22ae04u: goto label_22ae04;
        case 0x22ae08u: goto label_22ae08;
        case 0x22ae0cu: goto label_22ae0c;
        case 0x22ae10u: goto label_22ae10;
        case 0x22ae14u: goto label_22ae14;
        case 0x22ae18u: goto label_22ae18;
        case 0x22ae1cu: goto label_22ae1c;
        case 0x22ae20u: goto label_22ae20;
        case 0x22ae24u: goto label_22ae24;
        case 0x22ae28u: goto label_22ae28;
        case 0x22ae2cu: goto label_22ae2c;
        case 0x22ae30u: goto label_22ae30;
        case 0x22ae34u: goto label_22ae34;
        case 0x22ae38u: goto label_22ae38;
        case 0x22ae3cu: goto label_22ae3c;
        case 0x22ae40u: goto label_22ae40;
        case 0x22ae44u: goto label_22ae44;
        case 0x22ae48u: goto label_22ae48;
        case 0x22ae4cu: goto label_22ae4c;
        case 0x22ae50u: goto label_22ae50;
        case 0x22ae54u: goto label_22ae54;
        case 0x22ae58u: goto label_22ae58;
        case 0x22ae5cu: goto label_22ae5c;
        case 0x22ae60u: goto label_22ae60;
        case 0x22ae64u: goto label_22ae64;
        case 0x22ae68u: goto label_22ae68;
        case 0x22ae6cu: goto label_22ae6c;
        case 0x22ae70u: goto label_22ae70;
        case 0x22ae74u: goto label_22ae74;
        case 0x22ae78u: goto label_22ae78;
        case 0x22ae7cu: goto label_22ae7c;
        case 0x22ae80u: goto label_22ae80;
        case 0x22ae84u: goto label_22ae84;
        case 0x22ae88u: goto label_22ae88;
        case 0x22ae8cu: goto label_22ae8c;
        case 0x22ae90u: goto label_22ae90;
        case 0x22ae94u: goto label_22ae94;
        case 0x22ae98u: goto label_22ae98;
        case 0x22ae9cu: goto label_22ae9c;
        case 0x22aea0u: goto label_22aea0;
        case 0x22aea4u: goto label_22aea4;
        case 0x22aea8u: goto label_22aea8;
        case 0x22aeacu: goto label_22aeac;
        case 0x22aeb0u: goto label_22aeb0;
        case 0x22aeb4u: goto label_22aeb4;
        case 0x22aeb8u: goto label_22aeb8;
        case 0x22aebcu: goto label_22aebc;
        case 0x22aec0u: goto label_22aec0;
        case 0x22aec4u: goto label_22aec4;
        case 0x22aec8u: goto label_22aec8;
        case 0x22aeccu: goto label_22aecc;
        case 0x22aed0u: goto label_22aed0;
        case 0x22aed4u: goto label_22aed4;
        case 0x22aed8u: goto label_22aed8;
        case 0x22aedcu: goto label_22aedc;
        case 0x22aee0u: goto label_22aee0;
        case 0x22aee4u: goto label_22aee4;
        case 0x22aee8u: goto label_22aee8;
        case 0x22aeecu: goto label_22aeec;
        case 0x22aef0u: goto label_22aef0;
        case 0x22aef4u: goto label_22aef4;
        case 0x22aef8u: goto label_22aef8;
        case 0x22aefcu: goto label_22aefc;
        case 0x22af00u: goto label_22af00;
        case 0x22af04u: goto label_22af04;
        case 0x22af08u: goto label_22af08;
        case 0x22af0cu: goto label_22af0c;
        default: break;
    }

    ctx->pc = 0x22ad90u;

label_22ad90:
    // 0x22ad90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22ad94:
    // 0x22ad94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ad98:
    // 0x22ad98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ad98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22ad9c:
    // 0x22ad9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22ad9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ada0:
    // 0x22ada0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22ada0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_22ada4:
    // 0x22ada4: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x22ada4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_22ada8:
    // 0x22ada8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22ada8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_22adac:
    // 0x22adac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22adacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_22adb0:
    // 0x22adb0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22adb4:
    // 0x22adb4: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
label_22adb8:
    if (ctx->pc == 0x22ADB8u) {
        ctx->pc = 0x22ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADB4u;
        // 0x22adb8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ADBCu;
        goto label_22adbc;
    }
    ctx->pc = 0x22ADB4u;
    {
        const bool branch_taken_0x22adb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADB4u;
        // 0x22adb8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22adb4) {
            ctx->pc = 0x22AED0u;
            goto label_22aed0;
        }
    }
    ctx->pc = 0x22ADBCu;
label_22adbc:
    // 0x22adbc: 0xc08f924  jal         func_23E490
label_22adc0:
    if (ctx->pc == 0x22ADC0u) {
        ctx->pc = 0x22ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADBCu;
        // 0x22adc0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ADC4u;
        goto label_22adc4;
    }
    ctx->pc = 0x22ADBCu;
    SET_GPR_U32(ctx, 31, 0x22ADC4u);
    ctx->pc = 0x22ADC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ADBCu;
    // 0x22adc0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E490u, 0x22ADBCu, 0x22ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADC4u;
label_22adc4:
    // 0x22adc4: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
label_22adc8:
    if (ctx->pc == 0x22ADC8u) {
        ctx->pc = 0x22ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADC4u;
        // 0x22adc8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ADCCu;
        goto label_22adcc;
    }
    ctx->pc = 0x22ADC4u;
    {
        const bool branch_taken_0x22adc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22adc4) {
            ctx->pc = 0x22ADC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22ADC4u;
            // 0x22adc8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AED0u;
            goto label_22aed0;
        }
    }
    ctx->pc = 0x22ADCCu;
label_22adcc:
    // 0x22adcc: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x22adccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_22add0:
    // 0x22add0: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x22add0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_22add4:
    // 0x22add4: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x22add4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_22add8:
    // 0x22add8: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x22add8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_22addc:
    // 0x22addc: 0x40f809  jalr        $v0
label_22ade0:
    if (ctx->pc == 0x22ADE0u) {
        ctx->pc = 0x22ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADDCu;
        // 0x22ade0: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ADE4u;
        goto label_22ade4;
    }
    ctx->pc = 0x22ADDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22ADE4u);
        ctx->pc = 0x22ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADDCu;
        // 0x22ade0: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ADDCu, 0x22ADE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22ADE4u;
label_22ade4:
    // 0x22ade4: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x22ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_22ade8:
    // 0x22ade8: 0x8e290020  lw          $t1, 0x20($s1)
    ctx->pc = 0x22ade8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_22adec:
    // 0x22adec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22adecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22adf0:
    // 0x22adf0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x22adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_22adf4:
    // 0x22adf4: 0x894023  subu        $t0, $a0, $t1
    ctx->pc = 0x22adf4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_22adf8:
    // 0x22adf8: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x22adf8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22adfc:
    // 0x22adfc: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x22adfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_22ae00:
    // 0x22ae00: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x22ae00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_22ae04:
    // 0x22ae04: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x22ae04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_22ae08:
    // 0x22ae08: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x22ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_22ae0c:
    // 0x22ae0c: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x22ae0cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_22ae10:
    // 0x22ae10: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x22ae10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_22ae14:
    // 0x22ae14: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x22ae14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
label_22ae18:
    // 0x22ae18: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x22ae18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_22ae1c:
    // 0x22ae1c: 0x14860018  bne         $a0, $a2, . + 4 + (0x18 << 2)
label_22ae20:
    if (ctx->pc == 0x22AE20u) {
        ctx->pc = 0x22AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE1Cu;
        // 0x22ae20: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AE24u;
        goto label_22ae24;
    }
    ctx->pc = 0x22AE1Cu;
    {
        const bool branch_taken_0x22ae1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x22AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE1Cu;
        // 0x22ae20: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae1c) {
            ctx->pc = 0x22AE80u;
            goto label_22ae80;
        }
    }
    ctx->pc = 0x22AE24u;
label_22ae24:
    // 0x22ae24: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x22ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_22ae28:
    // 0x22ae28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22ae28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ae2c:
    // 0x22ae2c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x22ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_22ae30:
    // 0x22ae30: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22ae34:
    // 0x22ae34: 0x1900001f  blez        $t0, . + 4 + (0x1F << 2)
label_22ae38:
    if (ctx->pc == 0x22AE38u) {
        ctx->pc = 0x22AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE34u;
        // 0x22ae38: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AE3Cu;
        goto label_22ae3c;
    }
    ctx->pc = 0x22AE34u;
    {
        const bool branch_taken_0x22ae34 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x22AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE34u;
        // 0x22ae38: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae34) {
            ctx->pc = 0x22AEB4u;
            goto label_22aeb4;
        }
    }
    ctx->pc = 0x22AE3Cu;
label_22ae3c:
    // 0x22ae3c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22ae3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22ae40:
    // 0x22ae40: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x22ae40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_22ae44:
    // 0x22ae44: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x22ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_22ae48:
    // 0x22ae48: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x22ae48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_22ae4c:
    // 0x22ae4c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x22ae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_22ae50:
    // 0x22ae50: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x22ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_22ae54:
    // 0x22ae54: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22ae54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22ae58:
    // 0x22ae58: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x22ae58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_22ae5c:
    // 0x22ae5c: 0xe8282a  slt         $a1, $a3, $t0
    ctx->pc = 0x22ae5cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_22ae60:
    // 0x22ae60: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x22ae60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_22ae64:
    // 0x22ae64: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x22ae64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_22ae68:
    // 0x22ae68: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x22ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_22ae6c:
    // 0x22ae6c: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
label_22ae70:
    if (ctx->pc == 0x22AE70u) {
        ctx->pc = 0x22AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE6Cu;
        // 0x22ae70: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AE74u;
        goto label_22ae74;
    }
    ctx->pc = 0x22AE6Cu;
    {
        const bool branch_taken_0x22ae6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE6Cu;
        // 0x22ae70: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae6c) {
            ctx->pc = 0x22AE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ae40;
        }
    }
    ctx->pc = 0x22AE74u;
label_22ae74:
    // 0x22ae74: 0x1000000f  b           . + 4 + (0xF << 2)
label_22ae78:
    if (ctx->pc == 0x22AE78u) {
        ctx->pc = 0x22AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE74u;
        // 0x22ae78: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AE7Cu;
        goto label_22ae7c;
    }
    ctx->pc = 0x22AE74u;
    {
        const bool branch_taken_0x22ae74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE74u;
        // 0x22ae78: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae74) {
            ctx->pc = 0x22AEB4u;
            goto label_22aeb4;
        }
    }
    ctx->pc = 0x22AE7Cu;
label_22ae7c:
    // 0x22ae7c: 0x0  nop
    ctx->pc = 0x22ae7cu;
    // NOP
label_22ae80:
    // 0x22ae80: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_22ae84:
    if (ctx->pc == 0x22AE84u) {
        ctx->pc = 0x22AE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE80u;
        // 0x22ae84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AE88u;
        goto label_22ae88;
    }
    ctx->pc = 0x22AE80u;
    {
        const bool branch_taken_0x22ae80 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x22AE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE80u;
        // 0x22ae84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae80) {
            ctx->pc = 0x22AEB4u;
            goto label_22aeb4;
        }
    }
    ctx->pc = 0x22AE88u;
label_22ae88:
    // 0x22ae88: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x22ae88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_22ae8c:
    // 0x22ae8c: 0x0  nop
    ctx->pc = 0x22ae8cu;
    // NOP
label_22ae90:
    // 0x22ae90: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x22ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_22ae94:
    // 0x22ae94: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22ae94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22ae98:
    // 0x22ae98: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x22ae98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_22ae9c:
    // 0x22ae9c: 0xe8202a  slt         $a0, $a3, $t0
    ctx->pc = 0x22ae9cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_22aea0:
    // 0x22aea0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_22aea4:
    // 0x22aea4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x22aea4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_22aea8:
    // 0x22aea8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_22aeac:
    if (ctx->pc == 0x22AEACu) {
        ctx->pc = 0x22AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEA8u;
        // 0x22aeac: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AEB0u;
        goto label_22aeb0;
    }
    ctx->pc = 0x22AEA8u;
    {
        const bool branch_taken_0x22aea8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEA8u;
        // 0x22aeac: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aea8) {
            ctx->pc = 0x22AE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ae90;
        }
    }
    ctx->pc = 0x22AEB0u;
label_22aeb0:
    // 0x22aeb0: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x22aeb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22aeb4:
    // 0x22aeb4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x22aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_22aeb8:
    // 0x22aeb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22aebc:
    // 0x22aebc: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x22aebcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_22aec0:
    // 0x22aec0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x22aec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_22aec4:
    // 0x22aec4: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x22aec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_22aec8:
    // 0x22aec8: 0xae080090  sw          $t0, 0x90($s0)
    ctx->pc = 0x22aec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
label_22aecc:
    // 0x22aecc: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x22aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_22aed0:
    // 0x22aed0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22aed4:
    // 0x22aed4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_22aed8:
    if (ctx->pc == 0x22AED8u) {
        ctx->pc = 0x22AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AED4u;
        // 0x22aed8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AEDCu;
        goto label_22aedc;
    }
    ctx->pc = 0x22AED4u;
    {
        const bool branch_taken_0x22aed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22aed4) {
            ctx->pc = 0x22AED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AED4u;
            // 0x22aed8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AEFCu;
            goto label_22aefc;
        }
    }
    ctx->pc = 0x22AEDCu;
label_22aedc:
    // 0x22aedc: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x22aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_22aee0:
    // 0x22aee0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x22aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_22aee4:
    // 0x22aee4: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x22aee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_22aee8:
    // 0x22aee8: 0x60f809  jalr        $v1
label_22aeec:
    if (ctx->pc == 0x22AEECu) {
        ctx->pc = 0x22AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEE8u;
        // 0x22aeec: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AEF0u;
        goto label_22aef0;
    }
    ctx->pc = 0x22AEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22AEF0u);
        ctx->pc = 0x22AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEE8u;
        // 0x22aeec: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AEE8u, 0x22AEF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22AEF0u;
label_22aef0:
    // 0x22aef0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22aef4:
    // 0x22aef4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x22aef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_22aef8:
    // 0x22aef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22aef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22aefc:
    // 0x22aefc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22aefcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22af00:
    // 0x22af00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22af00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22af04:
    // 0x22af04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22af04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_22af08:
    // 0x22af08: 0x3e00008  jr          $ra
label_22af0c:
    if (ctx->pc == 0x22AF0Cu) {
        ctx->pc = 0x22AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF08u;
        // 0x22af0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AF10u;
        goto label_fallthrough_0x22af08;
    }
    ctx->pc = 0x22AF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF08u;
        // 0x22af0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22af08:
    ctx->pc = 0x22AF10u;
}

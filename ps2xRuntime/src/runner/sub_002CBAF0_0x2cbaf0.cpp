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

// Function: sub_002CBAF0
// Address: 0x2cbaf0 - 0x2cbdd4
void sub_002CBAF0_0x2cbaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBAF0_0x2cbaf0");
#endif

    switch (ctx->pc) {
        case 0x2cbbdcu: goto label_2cbbdc;
        case 0x2cbc2cu: goto label_2cbc2c;
        default: break;
    }

    ctx->pc = 0x2cbaf0u;

    // 0x2cbaf0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2cbaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2cbaf4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2cbaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2cbaf8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2cbaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2cbafc: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x2cbafcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2cbb00: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2cbb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2cbb04: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cbb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2cbb08: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2cbb08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cbb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cbb10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2cbb10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cbb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cbb18: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2cbb18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cbb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cbb20: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBB20u;
    {
        const bool branch_taken_0x2cbb20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB20u;
        // 0x2cbb24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb20) {
            ctx->pc = 0x2CBB38u;
            goto label_2cbb38;
        }
    }
    ctx->pc = 0x2CBB28u;
    // 0x2cbb28: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x2cbb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x2cbb2c: 0x24426bd0  addiu       $v0, $v0, 0x6BD0
    ctx->pc = 0x2cbb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27600));
    // 0x2cbb30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cbb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cbb34: 0x90540000  lbu         $s4, 0x0($v0)
    ctx->pc = 0x2cbb34u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2cbb38:
    // 0x2cbb38: 0x329100ff  andi        $s1, $s4, 0xFF
    ctx->pc = 0x2cbb38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2cbb3c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2cbb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2cbb40: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2cbb40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2cbb44: 0x244211b0  addiu       $v0, $v0, 0x11B0
    ctx->pc = 0x2cbb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4528));
    // 0x2cbb48: 0x2a210040  slti        $at, $s1, 0x40
    ctx->pc = 0x2cbb48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2cbb4c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2cbb4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cbb50: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CBB50u;
    {
        const bool branch_taken_0x2cbb50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB50u;
        // 0x2cbb54: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb50) {
            ctx->pc = 0x2CBB70u;
            goto label_2cbb70;
        }
    }
    ctx->pc = 0x2CBB58u;
    // 0x2cbb58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cbb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbb5c: 0xa3a20070  sb          $v0, 0x70($sp)
    ctx->pc = 0x2cbb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cbb60: 0x92420005  lbu         $v0, 0x5($s2)
    ctx->pc = 0x2cbb60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x2cbb64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CBB64u;
    {
        const bool branch_taken_0x2cbb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB64u;
        // 0x2cbb68: 0xa3a20077  sb          $v0, 0x77($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb64) {
            ctx->pc = 0x2CBB80u;
            goto label_2cbb80;
        }
    }
    ctx->pc = 0x2CBB6Cu;
    // 0x2cbb6c: 0x0  nop
    ctx->pc = 0x2cbb6cu;
    // NOP
label_2cbb70:
    // 0x2cbb70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cbb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cbb74: 0xa3a20070  sb          $v0, 0x70($sp)
    ctx->pc = 0x2cbb74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cbb78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cbb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbb7c: 0xa3a20077  sb          $v0, 0x77($sp)
    ctx->pc = 0x2cbb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 2));
label_2cbb80:
    // 0x2cbb80: 0xa3b40071  sb          $s4, 0x71($sp)
    ctx->pc = 0x2cbb80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 113), (uint8_t)GPR_U32(ctx, 20));
    // 0x2cbb84: 0xa3a00072  sb          $zero, 0x72($sp)
    ctx->pc = 0x2cbb84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbb88: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x2cbb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
    // 0x2cbb8c: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x2cbb8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2cbb90: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2cbb90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb94: 0x93a50070  lbu         $a1, 0x70($sp)
    ctx->pc = 0x2cbb94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cbb98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cbb98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbb9c: 0x240800fe  addiu       $t0, $zero, 0xFE
    ctx->pc = 0x2cbb9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x2cbba0: 0xa3a20073  sb          $v0, 0x73($sp)
    ctx->pc = 0x2cbba0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 115), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cbba4: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x2cbba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2cbba8: 0xa3a20074  sb          $v0, 0x74($sp)
    ctx->pc = 0x2cbba8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cbbac: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x2cbbacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2cbbb0: 0xa3a20075  sb          $v0, 0x75($sp)
    ctx->pc = 0x2cbbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 117), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cbbb4: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x2cbbb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2cbbb8: 0xa3a20076  sb          $v0, 0x76($sp)
    ctx->pc = 0x2cbbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cbbbc: 0x92420006  lbu         $v0, 0x6($s2)
    ctx->pc = 0x2cbbbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2cbbc0: 0xa3a20078  sb          $v0, 0x78($sp)
    ctx->pc = 0x2cbbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cbbc4: 0x92420007  lbu         $v0, 0x7($s2)
    ctx->pc = 0x2cbbc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x2cbbc8: 0xa3a20079  sb          $v0, 0x79($sp)
    ctx->pc = 0x2cbbc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 121), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cbbcc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2cbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2cbbd0: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x2cbbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x2cbbd4: 0xc050ed4  jal         func_143B50
    ctx->pc = 0x2CBBD4u;
    SET_GPR_U32(ctx, 31, 0x2CBBDCu);
    ctx->pc = 0x2CBBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBBD4u;
    // 0x2cbbd8: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x2CBBD4u, 0x2CBBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBBDCu;
label_2cbbdc:
    // 0x2cbbdc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBBDCu;
    {
        const bool branch_taken_0x2cbbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbbdc) {
            ctx->pc = 0x2CBBF0u;
            goto label_2cbbf0;
        }
    }
    ctx->pc = 0x2CBBE4u;
    // 0x2cbbe4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2CBBE4u;
    {
        const bool branch_taken_0x2cbbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBBE4u;
        // 0x2cbbe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbbe4) {
            ctx->pc = 0x2CBDB0u;
            goto label_2cbdb0;
        }
    }
    ctx->pc = 0x2CBBECu;
    // 0x2cbbec: 0x0  nop
    ctx->pc = 0x2cbbecu;
    // NOP
label_2cbbf0:
    // 0x2cbbf0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2cbbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cbbf4: 0xaf808a30  sw          $zero, -0x75D0($gp)
    ctx->pc = 0x2cbbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 0));
    // 0x2cbbf8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2cbbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2cbbfc: 0xaf828a2c  sw          $v0, -0x75D4($gp)
    ctx->pc = 0x2cbbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 2));
    // 0x2cbc00: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2cbc00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc04: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2cbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2cbc08: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x2cbc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    // 0x2cbc0c: 0x93a50070  lbu         $a1, 0x70($sp)
    ctx->pc = 0x2cbc0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cbc10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cbc10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc14: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x2cbc14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2cbc18: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x2cbc18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x2cbc1c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2cbc1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc20: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2cbc20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbc24: 0xc0510e0  jal         func_144380
    ctx->pc = 0x2CBC24u;
    SET_GPR_U32(ctx, 31, 0x2CBC2Cu);
    ctx->pc = 0x2CBC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBC24u;
    // 0x2cbc28: 0xaf828a34  sw          $v0, -0x75CC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x2CBC24u, 0x2CBC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC2Cu;
label_2cbc2c:
    // 0x2cbc2c: 0xaf808a2c  sw          $zero, -0x75D4($gp)
    ctx->pc = 0x2cbc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 0));
    // 0x2cbc30: 0xaf808a30  sw          $zero, -0x75D0($gp)
    ctx->pc = 0x2cbc30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 0));
    // 0x2cbc34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBC34u;
    {
        const bool branch_taken_0x2cbc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC34u;
        // 0x2cbc38: 0xaf808a34  sw          $zero, -0x75CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc34) {
            ctx->pc = 0x2CBC48u;
            goto label_2cbc48;
        }
    }
    ctx->pc = 0x2CBC3Cu;
    // 0x2cbc3c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2CBC3Cu;
    {
        const bool branch_taken_0x2cbc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC3Cu;
        // 0x2cbc40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc3c) {
            ctx->pc = 0x2CBDB0u;
            goto label_2cbdb0;
        }
    }
    ctx->pc = 0x2CBC44u;
    // 0x2cbc44: 0x0  nop
    ctx->pc = 0x2cbc44u;
    // NOP
label_2cbc48:
    // 0x2cbc48: 0xa055000b  sb          $s5, 0xB($v0)
    ctx->pc = 0x2cbc48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 21));
    // 0x2cbc4c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cbc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cbc50: 0x2a230040  slti        $v1, $s1, 0x40
    ctx->pc = 0x2cbc50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2cbc54: 0xa044000a  sb          $a0, 0xA($v0)
    ctx->pc = 0x2cbc54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cbc58: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CBC58u;
    {
        const bool branch_taken_0x2cbc58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC58u;
        // 0x2cbc5c: 0xa04408e8  sb          $a0, 0x8E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2280), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc58) {
            ctx->pc = 0x2CBCB0u;
            goto label_2cbcb0;
        }
    }
    ctx->pc = 0x2CBC60u;
    // 0x2cbc60: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CBC60u;
    {
        const bool branch_taken_0x2cbc60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbc60) {
            ctx->pc = 0x2CBCA8u;
            goto label_2cbca8;
        }
    }
    ctx->pc = 0x2CBC68u;
    // 0x2cbc68: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x2cbc68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2cbc6c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2cbc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2cbc70: 0xa0442b1c  sb          $a0, 0x2B1C($v0)
    ctx->pc = 0x2cbc70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11036), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cbc74: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2cbc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2cbc78: 0xac442b18  sw          $a0, 0x2B18($v0)
    ctx->pc = 0x2cbc78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11032), GPR_U32(ctx, 4));
    // 0x2cbc7c: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x2cbc7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2cbc80: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2CBC80u;
    {
        const bool branch_taken_0x2cbc80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cbc80) {
            ctx->pc = 0x2CBCB0u;
            goto label_2cbcb0;
        }
    }
    ctx->pc = 0x2CBC88u;
    // 0x2cbc88: 0x8c4306c8  lw          $v1, 0x6C8($v0)
    ctx->pc = 0x2cbc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1736)));
    // 0x2cbc8c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x2cbc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x2cbc90: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2cbc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2cbc94: 0xac4306c8  sw          $v1, 0x6C8($v0)
    ctx->pc = 0x2cbc94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1736), GPR_U32(ctx, 3));
    // 0x2cbc98: 0x8c4306cc  lw          $v1, 0x6CC($v0)
    ctx->pc = 0x2cbc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1740)));
    // 0x2cbc9c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2cbc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2cbca0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2CBCA0u;
    {
        const bool branch_taken_0x2cbca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCA0u;
        // 0x2cbca4: 0xac4306cc  sw          $v1, 0x6CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbca0) {
            ctx->pc = 0x2CBDB0u;
            goto label_2cbdb0;
        }
    }
    ctx->pc = 0x2CBCA8u;
label_2cbca8:
    // 0x2cbca8: 0xa0402b1c  sb          $zero, 0x2B1C($v0)
    ctx->pc = 0x2cbca8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbcac: 0xac402b18  sw          $zero, 0x2B18($v0)
    ctx->pc = 0x2cbcacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11032), GPR_U32(ctx, 0));
label_2cbcb0:
    // 0x2cbcb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cbcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cbcb4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x2cbcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2cbcb8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBCB8u;
    {
        const bool branch_taken_0x2cbcb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbcb8) {
            ctx->pc = 0x2CBCD0u;
            goto label_2cbcd0;
        }
    }
    ctx->pc = 0x2CBCC0u;
    // 0x2cbcc0: 0xac40085c  sw          $zero, 0x85C($v0)
    ctx->pc = 0x2cbcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2140), GPR_U32(ctx, 0));
    // 0x2cbcc4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cbcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cbcc8: 0xac430860  sw          $v1, 0x860($v0)
    ctx->pc = 0x2cbcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2144), GPR_U32(ctx, 3));
    // 0x2cbccc: 0xac430864  sw          $v1, 0x864($v0)
    ctx->pc = 0x2cbcccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2148), GPR_U32(ctx, 3));
label_2cbcd0:
    // 0x2cbcd0: 0x240300b6  addiu       $v1, $zero, 0xB6
    ctx->pc = 0x2cbcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x2cbcd4: 0x12230034  beq         $s1, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2CBCD4u;
    {
        const bool branch_taken_0x2cbcd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CBCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCD4u;
        // 0x2cbcd8: 0x240300b5  addiu       $v1, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbcd4) {
            ctx->pc = 0x2CBDA8u;
            goto label_2cbda8;
        }
    }
    ctx->pc = 0x2CBCDCu;
    // 0x2cbcdc: 0x12230032  beq         $s1, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CBCDCu;
    {
        const bool branch_taken_0x2cbcdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cbcdc) {
            ctx->pc = 0x2CBDA8u;
            goto label_2cbda8;
        }
    }
    ctx->pc = 0x2CBCE4u;
    // 0x2cbce4: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x2cbce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2cbce8: 0x12230027  beq         $s1, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2CBCE8u;
    {
        const bool branch_taken_0x2cbce8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CBCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCE8u;
        // 0x2cbcec: 0x2403007b  addiu       $v1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbce8) {
            ctx->pc = 0x2CBD88u;
            goto label_2cbd88;
        }
    }
    ctx->pc = 0x2CBCF0u;
    // 0x2cbcf0: 0x12230025  beq         $s1, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2CBCF0u;
    {
        const bool branch_taken_0x2cbcf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cbcf0) {
            ctx->pc = 0x2CBD88u;
            goto label_2cbd88;
        }
    }
    ctx->pc = 0x2CBCF8u;
    // 0x2cbcf8: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x2cbcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x2cbcfc: 0x12230022  beq         $s1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2CBCFCu;
    {
        const bool branch_taken_0x2cbcfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCFCu;
        // 0x2cbd00: 0x24030043  addiu       $v1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbcfc) {
            ctx->pc = 0x2CBD88u;
            goto label_2cbd88;
        }
    }
    ctx->pc = 0x2CBD04u;
    // 0x2cbd04: 0x12230020  beq         $s1, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2CBD04u;
    {
        const bool branch_taken_0x2cbd04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cbd04) {
            ctx->pc = 0x2CBD88u;
            goto label_2cbd88;
        }
    }
    ctx->pc = 0x2CBD0Cu;
    // 0x2cbd0c: 0x240300ac  addiu       $v1, $zero, 0xAC
    ctx->pc = 0x2cbd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x2cbd10: 0x1223001d  beq         $s1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CBD10u;
    {
        const bool branch_taken_0x2cbd10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CBD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD10u;
        // 0x2cbd14: 0x240300e8  addiu       $v1, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd10) {
            ctx->pc = 0x2CBD88u;
            goto label_2cbd88;
        }
    }
    ctx->pc = 0x2CBD18u;
    // 0x2cbd18: 0x1223001b  beq         $s1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CBD18u;
    {
        const bool branch_taken_0x2cbd18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cbd18) {
            ctx->pc = 0x2CBD88u;
            goto label_2cbd88;
        }
    }
    ctx->pc = 0x2CBD20u;
    // 0x2cbd20: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2cbd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2cbd24: 0x12230018  beq         $s1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2CBD24u;
    {
        const bool branch_taken_0x2cbd24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CBD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD24u;
        // 0x2cbd28: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd24) {
            ctx->pc = 0x2CBD88u;
            goto label_2cbd88;
        }
    }
    ctx->pc = 0x2CBD2Cu;
    // 0x2cbd2c: 0x12230016  beq         $s1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CBD2Cu;
    {
        const bool branch_taken_0x2cbd2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cbd2c) {
            ctx->pc = 0x2CBD88u;
            goto label_2cbd88;
        }
    }
    ctx->pc = 0x2CBD34u;
    // 0x2cbd34: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x2cbd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2cbd38: 0x12230013  beq         $s1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CBD38u;
    {
        const bool branch_taken_0x2cbd38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CBD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD38u;
        // 0x2cbd3c: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd38) {
            ctx->pc = 0x2CBD88u;
            goto label_2cbd88;
        }
    }
    ctx->pc = 0x2CBD40u;
    // 0x2cbd40: 0x12230011  beq         $s1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CBD40u;
    {
        const bool branch_taken_0x2cbd40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cbd40) {
            ctx->pc = 0x2CBD88u;
            goto label_2cbd88;
        }
    }
    ctx->pc = 0x2CBD48u;
    // 0x2cbd48: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x2cbd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2cbd4c: 0x1223000e  beq         $s1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2CBD4Cu;
    {
        const bool branch_taken_0x2cbd4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CBD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD4Cu;
        // 0x2cbd50: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd4c) {
            ctx->pc = 0x2CBD88u;
            goto label_2cbd88;
        }
    }
    ctx->pc = 0x2CBD54u;
    // 0x2cbd54: 0x1223000c  beq         $s1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2CBD54u;
    {
        const bool branch_taken_0x2cbd54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cbd54) {
            ctx->pc = 0x2CBD88u;
            goto label_2cbd88;
        }
    }
    ctx->pc = 0x2CBD5Cu;
    // 0x2cbd5c: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2cbd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2cbd60: 0x12230009  beq         $s1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CBD60u;
    {
        const bool branch_taken_0x2cbd60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CBD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD60u;
        // 0x2cbd64: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd60) {
            ctx->pc = 0x2CBD88u;
            goto label_2cbd88;
        }
    }
    ctx->pc = 0x2CBD68u;
    // 0x2cbd68: 0x12230007  beq         $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CBD68u;
    {
        const bool branch_taken_0x2cbd68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cbd68) {
            ctx->pc = 0x2CBD88u;
            goto label_2cbd88;
        }
    }
    ctx->pc = 0x2CBD70u;
    // 0x2cbd70: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2cbd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2cbd74: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBD74u;
    {
        const bool branch_taken_0x2cbd74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cbd74) {
            ctx->pc = 0x2CBD88u;
            goto label_2cbd88;
        }
    }
    ctx->pc = 0x2CBD7Cu;
    // 0x2cbd7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CBD7Cu;
    {
        const bool branch_taken_0x2cbd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbd7c) {
            ctx->pc = 0x2CBDB0u;
            goto label_2cbdb0;
        }
    }
    ctx->pc = 0x2CBD84u;
    // 0x2cbd84: 0x0  nop
    ctx->pc = 0x2cbd84u;
    // NOP
label_2cbd88:
    // 0x2cbd88: 0x8c4306c8  lw          $v1, 0x6C8($v0)
    ctx->pc = 0x2cbd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1736)));
    // 0x2cbd8c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x2cbd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x2cbd90: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2cbd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2cbd94: 0xac4306c8  sw          $v1, 0x6C8($v0)
    ctx->pc = 0x2cbd94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1736), GPR_U32(ctx, 3));
    // 0x2cbd98: 0x8c4306cc  lw          $v1, 0x6CC($v0)
    ctx->pc = 0x2cbd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1740)));
    // 0x2cbd9c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2cbd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2cbda0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBDA0u;
    {
        const bool branch_taken_0x2cbda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDA0u;
        // 0x2cbda4: 0xac4306cc  sw          $v1, 0x6CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbda0) {
            ctx->pc = 0x2CBDB0u;
            goto label_2cbdb0;
        }
    }
    ctx->pc = 0x2CBDA8u;
label_2cbda8:
    // 0x2cbda8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cbda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbdac: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x2cbdacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
label_2cbdb0:
    // 0x2cbdb0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2cbdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cbdb4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2cbdb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cbdb8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cbdb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cbdbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cbdbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cbdc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cbdc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbdc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cbdc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbdc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cbdc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDCCu;
        // 0x2cbdd0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBDD4u;
}

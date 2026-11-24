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

// Function: sub_0027DF20
// Address: 0x27df20 - 0x27e45c
void sub_0027DF20_0x27df20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DF20_0x27df20");
#endif

    switch (ctx->pc) {
        case 0x27df70u: goto label_27df70;
        case 0x27dfb0u: goto label_27dfb0;
        case 0x27dff8u: goto label_27dff8;
        case 0x27e038u: goto label_27e038;
        case 0x27e074u: goto label_27e074;
        case 0x27e088u: goto label_27e088;
        case 0x27e0d0u: goto label_27e0d0;
        case 0x27e0e0u: goto label_27e0e0;
        case 0x27e0f0u: goto label_27e0f0;
        case 0x27e100u: goto label_27e100;
        case 0x27e114u: goto label_27e114;
        case 0x27e168u: goto label_27e168;
        case 0x27e190u: goto label_27e190;
        case 0x27e1a8u: goto label_27e1a8;
        case 0x27e200u: goto label_27e200;
        case 0x27e234u: goto label_27e234;
        case 0x27e248u: goto label_27e248;
        case 0x27e258u: goto label_27e258;
        case 0x27e2a8u: goto label_27e2a8;
        case 0x27e2d0u: goto label_27e2d0;
        case 0x27e2e8u: goto label_27e2e8;
        case 0x27e368u: goto label_27e368;
        case 0x27e374u: goto label_27e374;
        case 0x27e384u: goto label_27e384;
        case 0x27e398u: goto label_27e398;
        case 0x27e3acu: goto label_27e3ac;
        default: break;
    }

    ctx->pc = 0x27df20u;

    // 0x27df20: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x27df20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x27df24: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27df24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x27df28: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x27df28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x27df2c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x27df2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x27df30: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x27df30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x27df34: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x27df34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x27df38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27df38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x27df3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27df3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x27df40: 0x3c14008c  lui         $s4, 0x8C
    ctx->pc = 0x27df40u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)140 << 16));
    // 0x27df44: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27df44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27df48: 0x269459f0  addiu       $s4, $s4, 0x59F0
    ctx->pc = 0x27df48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 23024));
    // 0x27df4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27df4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27df50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27df50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27df54: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x27df54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27df58: 0x97858920  lhu         $a1, -0x76E0($gp)
    ctx->pc = 0x27df58u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x27df5c: 0x10a00132  beqz        $a1, . + 4 + (0x132 << 2)
    ctx->pc = 0x27DF5Cu;
    {
        const bool branch_taken_0x27df5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF5Cu;
        // 0x27df60: 0xa7808928  sh          $zero, -0x76D8($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936872), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df5c) {
            ctx->pc = 0x27E428u;
            goto label_27e428;
        }
    }
    ctx->pc = 0x27DF64u;
    // 0x27df64: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x27df64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x27df68: 0x10200125  beqz        $at, . + 4 + (0x125 << 2)
    ctx->pc = 0x27DF68u;
    {
        const bool branch_taken_0x27df68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF68u;
        // 0x27df6c: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df68) {
            ctx->pc = 0x27E400u;
            goto label_27e400;
        }
    }
    ctx->pc = 0x27DF70u;
label_27df70:
    // 0x27df70: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27df70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27df74: 0x8fb300e0  lw          $s3, 0xE0($sp)
    ctx->pc = 0x27df74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27df78: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x27df78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27df7c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27df80: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x27df80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x27df84: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x27df84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x27df88: 0x24630950  addiu       $v1, $v1, 0x950
    ctx->pc = 0x27df88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2384));
    // 0x27df8c: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x27df8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27df90: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x27df90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x27df94: 0x8cd60000  lw          $s6, 0x0($a2)
    ctx->pc = 0x27df94u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27df98: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x27df98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df9c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x27df9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27dfa0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x27DFA0u;
    {
        const bool branch_taken_0x27dfa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFA0u;
        // 0x27dfa4: 0x8cd50008  lw          $s5, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfa0) {
            ctx->pc = 0x27DFE0u;
            goto label_27dfe0;
        }
    }
    ctx->pc = 0x27DFA8u;
    // 0x27dfa8: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x27dfa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x27dfac: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x27dfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27dfb0:
    // 0x27dfb0: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x27dfb0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27dfb4: 0xdcc30050  ld          $v1, 0x50($a2)
    ctx->pc = 0x27dfb4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x27dfb8: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27DFB8u;
    {
        const bool branch_taken_0x27dfb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27dfb8) {
            ctx->pc = 0x27DFE0u;
            goto label_27dfe0;
        }
    }
    ctx->pc = 0x27DFC0u;
    // 0x27dfc0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27dfc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27dfc8: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x27dfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x27dfcc: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27dfd0: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x27dfd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x27dfd4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x27DFD4u;
    {
        const bool branch_taken_0x27dfd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFD4u;
        // 0x27dfd8: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfd4) {
            ctx->pc = 0x27DFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27dfb0;
        }
    }
    ctx->pc = 0x27DFDCu;
    // 0x27dfdc: 0x0  nop
    ctx->pc = 0x27dfdcu;
    // NOP
label_27dfe0:
    // 0x27dfe0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27dfe4: 0x247e0001  addiu       $fp, $v1, 0x1
    ctx->pc = 0x27dfe4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27dfe8: 0x27e082a  slt         $at, $s3, $fp
    ctx->pc = 0x27dfe8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x27dfec: 0x102000fc  beqz        $at, . + 4 + (0xFC << 2)
    ctx->pc = 0x27DFECu;
    {
        const bool branch_taken_0x27dfec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dfec) {
            ctx->pc = 0x27E3E0u;
            goto label_27e3e0;
        }
    }
    ctx->pc = 0x27DFF4u;
    // 0x27dff4: 0x0  nop
    ctx->pc = 0x27dff4u;
    // NOP
label_27dff8:
    // 0x27dff8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x27dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x27dffc: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x27dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x27e000: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x27e000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x27e004: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x27e004u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x27e008: 0x24630950  addiu       $v1, $v1, 0x950
    ctx->pc = 0x27e008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2384));
    // 0x27e00c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27e00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27e010: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27e010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27e014: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x27e014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x27e018: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x27e018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27e01c: 0x90630040  lbu         $v1, 0x40($v1)
    ctx->pc = 0x27e01cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x27e020: 0x1064006d  beq         $v1, $a0, . + 4 + (0x6D << 2)
    ctx->pc = 0x27E020u;
    {
        const bool branch_taken_0x27e020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x27e020) {
            ctx->pc = 0x27E1D8u;
            goto label_27e1d8;
        }
    }
    ctx->pc = 0x27E028u;
    // 0x27e028: 0x97838924  lhu         $v1, -0x76DC($gp)
    ctx->pc = 0x27e028u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936868)));
    // 0x27e02c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x27e02cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27e030: 0x102000e7  beqz        $at, . + 4 + (0xE7 << 2)
    ctx->pc = 0x27E030u;
    {
        const bool branch_taken_0x27e030 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E030u;
        // 0x27e034: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e030) {
            ctx->pc = 0x27E3D0u;
            goto label_27e3d0;
        }
    }
    ctx->pc = 0x27E038u;
label_27e038:
    // 0x27e038: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x27e038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x27e03c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x27e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x27e040: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27e040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e044: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x27e044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x27e048: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27e048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27e04c: 0x244231a0  addiu       $v0, $v0, 0x31A0
    ctx->pc = 0x27e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12704));
    // 0x27e050: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27e050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e054: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x27e054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e058: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x27e058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e05c: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x27e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x27e060: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x27e060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x27e064: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x27e064u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27e068: 0x8e170000  lw          $s7, 0x0($s0)
    ctx->pc = 0x27e068u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27e06c: 0xc09f734  jal         func_27DCD0
    ctx->pc = 0x27E06Cu;
    SET_GPR_U32(ctx, 31, 0x27E074u);
    ctx->pc = 0x27E070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E06Cu;
    // 0x27e070: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCD0u, 0x27E06Cu, 0x27E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E074u;
label_27e074:
    // 0x27e074: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x27E074u;
    {
        const bool branch_taken_0x27e074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E074u;
        // 0x27e078: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e074) {
            ctx->pc = 0x27E140u;
            goto label_27e140;
        }
    }
    ctx->pc = 0x27E07Cu;
    // 0x27e07c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27e07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e080: 0xc09e794  jal         func_279E50
    ctx->pc = 0x27E080u;
    SET_GPR_U32(ctx, 31, 0x27E088u);
    ctx->pc = 0x27E084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E080u;
    // 0x27e084: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E50u, 0x27E080u, 0x27E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E088u;
label_27e088:
    // 0x27e088: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x27E088u;
    {
        const bool branch_taken_0x27e088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e088) {
            ctx->pc = 0x27E1B8u;
            goto label_27e1b8;
        }
    }
    ctx->pc = 0x27E090u;
    // 0x27e090: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x27e090u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27e094: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x27e094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x27e098: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x27e098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x27e09c: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x27e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x27e0a0: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x27e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x27e0a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27e0a8: 0x24420950  addiu       $v0, $v0, 0x950
    ctx->pc = 0x27e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2384));
    // 0x27e0ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27e0acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e0b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e0b4: 0x7e850010  sq          $a1, 0x10($s4)
    ctx->pc = 0x27e0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 5));
    // 0x27e0b8: 0xa2930002  sb          $s3, 0x2($s4)
    ctx->pc = 0x27e0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x27e0bc: 0xa2920003  sb          $s2, 0x3($s4)
    ctx->pc = 0x27e0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x27e0c0: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x27e0c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e0c4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x27e0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27e0c8: 0xc09f950  jal         func_27E540
    ctx->pc = 0x27E0C8u;
    SET_GPR_U32(ctx, 31, 0x27E0D0u);
    ctx->pc = 0x27E0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0C8u;
    // 0x27e0cc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E540u, 0x27E0C8u, 0x27E0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0D0u;
label_27e0d0:
    // 0x27e0d0: 0x26a401c0  addiu       $a0, $s5, 0x1C0
    ctx->pc = 0x27e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 448));
    // 0x27e0d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27e0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e0d8: 0xc09f93c  jal         func_27E4F0
    ctx->pc = 0x27E0D8u;
    SET_GPR_U32(ctx, 31, 0x27E0E0u);
    ctx->pc = 0x27E0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0D8u;
    // 0x27e0dc: 0xa2800000  sb          $zero, 0x0($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E4F0u, 0x27E0D8u, 0x27E0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0E0u;
label_27e0e0:
    // 0x27e0e0: 0x12b60003  beq         $s5, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E0E0u;
    {
        const bool branch_taken_0x27e0e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 22));
        ctx->pc = 0x27E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0E0u;
        // 0x27e0e4: 0x26c401c0  addiu       $a0, $s6, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0e0) {
            ctx->pc = 0x27E0F0u;
            goto label_27e0f0;
        }
    }
    ctx->pc = 0x27E0E8u;
    // 0x27e0e8: 0xc09f93c  jal         func_27E4F0
    ctx->pc = 0x27E0E8u;
    SET_GPR_U32(ctx, 31, 0x27E0F0u);
    ctx->pc = 0x27E0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0E8u;
    // 0x27e0ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E4F0u, 0x27E0E8u, 0x27E0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E0F0u;
label_27e0f0:
    // 0x27e0f0: 0x12370005  beq         $s1, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E0F0u;
    {
        const bool branch_taken_0x27e0f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        ctx->pc = 0x27E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0F0u;
        // 0x27e0f4: 0x26e401c0  addiu       $a0, $s7, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0f0) {
            ctx->pc = 0x27E108u;
            goto label_27e108;
        }
    }
    ctx->pc = 0x27E0F8u;
    // 0x27e0f8: 0xc09f948  jal         func_27E520
    ctx->pc = 0x27E0F8u;
    SET_GPR_U32(ctx, 31, 0x27E100u);
    ctx->pc = 0x27E0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0F8u;
    // 0x27e0fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E520u, 0x27E0F8u, 0x27E100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E100u;
label_27e100:
    // 0x27e100: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27E100u;
    {
        const bool branch_taken_0x27e100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e100) {
            ctx->pc = 0x27E118u;
            goto label_27e118;
        }
    }
    ctx->pc = 0x27E108u;
label_27e108:
    // 0x27e108: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x27e108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x27e10c: 0xc09f948  jal         func_27E520
    ctx->pc = 0x27E10Cu;
    SET_GPR_U32(ctx, 31, 0x27E114u);
    ctx->pc = 0x27E110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E10Cu;
    // 0x27e110: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E520u, 0x27E10Cu, 0x27E114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E114u;
label_27e114:
    // 0x27e114: 0x0  nop
    ctx->pc = 0x27e114u;
    // NOP
label_27e118:
    // 0x27e118: 0x97848928  lhu         $a0, -0x76D8($gp)
    ctx->pc = 0x27e118u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936872)));
    // 0x27e11c: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x27e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x27e120: 0x27d3ffff  addiu       $s3, $fp, -0x1
    ctx->pc = 0x27e120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x27e124: 0x246359f0  addiu       $v1, $v1, 0x59F0
    ctx->pc = 0x27e124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23024));
    // 0x27e128: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27e128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27e12c: 0xa7848928  sh          $a0, -0x76D8($gp)
    ctx->pc = 0x27e12cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936872), (uint16_t)GPR_U32(ctx, 4));
    // 0x27e130: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x27e130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x27e134: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x27e134u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x27e138: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x27e138u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27e13c: 0x0  nop
    ctx->pc = 0x27e13cu;
    // NOP
label_27e140:
    // 0x27e140: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x27e140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27e144: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x27e144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27e148: 0x90630232  lbu         $v1, 0x232($v1)
    ctx->pc = 0x27e148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 562)));
    // 0x27e14c: 0x146000b2  bnez        $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x27E14Cu;
    {
        const bool branch_taken_0x27e14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e14c) {
            ctx->pc = 0x27E418u;
            goto label_27e418;
        }
    }
    ctx->pc = 0x27E154u;
    // 0x27e154: 0x97838924  lhu         $v1, -0x76DC($gp)
    ctx->pc = 0x27e154u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936868)));
    // 0x27e158: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x27e158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27e15c: 0x245082a  slt         $at, $s2, $a1
    ctx->pc = 0x27e15cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x27e160: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x27E160u;
    {
        const bool branch_taken_0x27e160 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e160) {
            ctx->pc = 0x27E1B8u;
            goto label_27e1b8;
        }
    }
    ctx->pc = 0x27E168u;
label_27e168:
    // 0x27e168: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27e168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27e16c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x27e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x27e170: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x27E170u;
    {
        const bool branch_taken_0x27e170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27e170) {
            ctx->pc = 0x27E1B8u;
            goto label_27e1b8;
        }
    }
    ctx->pc = 0x27E178u;
    // 0x27e178: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27e178u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27e17c: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x27e17cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x27e180: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27E180u;
    {
        const bool branch_taken_0x27e180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E180u;
        // 0x27e184: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e180) {
            ctx->pc = 0x27E168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e168;
        }
    }
    ctx->pc = 0x27E188u;
    // 0x27e188: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27E188u;
    {
        const bool branch_taken_0x27e188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e188) {
            ctx->pc = 0x27E1B8u;
            goto label_27e1b8;
        }
    }
    ctx->pc = 0x27E190u;
label_27e190:
    // 0x27e190: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x27e190u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27e194: 0xde030050  ld          $v1, 0x50($s0)
    ctx->pc = 0x27e194u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x27e198: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E198u;
    {
        const bool branch_taken_0x27e198 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27e198) {
            ctx->pc = 0x27E1B8u;
            goto label_27e1b8;
        }
    }
    ctx->pc = 0x27E1A0u;
    // 0x27e1a0: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x27e1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x27e1a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27e1a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_27e1a8:
    // 0x27e1a8: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x27e1a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x27e1ac: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27E1ACu;
    {
        const bool branch_taken_0x27e1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e1ac) {
            ctx->pc = 0x27E190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e190;
        }
    }
    ctx->pc = 0x27E1B4u;
    // 0x27e1b4: 0x0  nop
    ctx->pc = 0x27e1b4u;
    // NOP
label_27e1b8:
    // 0x27e1b8: 0x97838924  lhu         $v1, -0x76DC($gp)
    ctx->pc = 0x27e1b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936868)));
    // 0x27e1bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27e1bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27e1c0: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x27e1c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27e1c4: 0x1460ff9c  bnez        $v1, . + 4 + (-0x64 << 2)
    ctx->pc = 0x27E1C4u;
    {
        const bool branch_taken_0x27e1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e1c4) {
            ctx->pc = 0x27E038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e038;
        }
    }
    ctx->pc = 0x27E1CCu;
    // 0x27e1cc: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x27E1CCu;
    {
        const bool branch_taken_0x27e1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e1cc) {
            ctx->pc = 0x27E3D0u;
            goto label_27e3d0;
        }
    }
    ctx->pc = 0x27E1D4u;
    // 0x27e1d4: 0x0  nop
    ctx->pc = 0x27e1d4u;
    // NOP
label_27e1d8:
    // 0x27e1d8: 0x3c034cbe  lui         $v1, 0x4CBE
    ctx->pc = 0x27e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19646 << 16));
    // 0x27e1dc: 0x3464bc14  ori         $a0, $v1, 0xBC14
    ctx->pc = 0x27e1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48148);
    // 0x27e1e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27e1e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e1e4: 0x97838924  lhu         $v1, -0x76DC($gp)
    ctx->pc = 0x27e1e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936868)));
    // 0x27e1e8: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x27e1e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27e1ec: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x27e1ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27e1f0: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x27E1F0u;
    {
        const bool branch_taken_0x27e1f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1F0u;
        // 0x27e1f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1f0) {
            ctx->pc = 0x27E310u;
            goto label_27e310;
        }
    }
    ctx->pc = 0x27E1F8u;
    // 0x27e1f8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x27e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27e1fc: 0x24570020  addiu       $s7, $v0, 0x20
    ctx->pc = 0x27e1fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_27e200:
    // 0x27e200: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x27e200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27e204: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x27e204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27e208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27e208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e20c: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x27e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x27e210: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27e210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27e214: 0x244231a0  addiu       $v0, $v0, 0x31A0
    ctx->pc = 0x27e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12704));
    // 0x27e218: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27e218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e21c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x27e21cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e220: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x27e220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x27e224: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x27e224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x27e228: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x27e228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27e22c: 0xc09f734  jal         func_27DCD0
    ctx->pc = 0x27E22Cu;
    SET_GPR_U32(ctx, 31, 0x27E234u);
    ctx->pc = 0x27E230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E22Cu;
    // 0x27e230: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCD0u, 0x27E22Cu, 0x27E234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E234u;
label_27e234:
    // 0x27e234: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27E234u;
    {
        const bool branch_taken_0x27e234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E234u;
        // 0x27e238: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e234) {
            ctx->pc = 0x27E280u;
            goto label_27e280;
        }
    }
    ctx->pc = 0x27E23Cu;
    // 0x27e23c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27e23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e240: 0xc09e794  jal         func_279E50
    ctx->pc = 0x27E240u;
    SET_GPR_U32(ctx, 31, 0x27E248u);
    ctx->pc = 0x27E244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E240u;
    // 0x27e244: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279E50u, 0x27E240u, 0x27E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E248u;
label_27e248:
    // 0x27e248: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x27E248u;
    {
        const bool branch_taken_0x27e248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E248u;
        // 0x27e24c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e248) {
            ctx->pc = 0x27E2F8u;
            goto label_27e2f8;
        }
    }
    ctx->pc = 0x27E250u;
    // 0x27e250: 0xc09e738  jal         func_279CE0
    ctx->pc = 0x27E250u;
    SET_GPR_U32(ctx, 31, 0x27E258u);
    ctx->pc = 0x27E254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E250u;
    // 0x27e254: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279CE0u, 0x27E250u, 0x27E258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E258u;
label_27e258:
    // 0x27e258: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x27e258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27e25c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x27E25Cu;
    {
        const bool branch_taken_0x27e25c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27e25c) {
            ctx->pc = 0x27E2F8u;
            goto label_27e2f8;
        }
    }
    ctx->pc = 0x27E264u;
    // 0x27e264: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x27e264u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x27e268: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27e268u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27e26c: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x27e26cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x27e270: 0x7e830010  sq          $v1, 0x10($s4)
    ctx->pc = 0x27e270u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 3));
    // 0x27e274: 0xa2930002  sb          $s3, 0x2($s4)
    ctx->pc = 0x27e274u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x27e278: 0xa2900003  sb          $s0, 0x3($s4)
    ctx->pc = 0x27e278u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x27e27c: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x27e27cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
label_27e280:
    // 0x27e280: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x27e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27e284: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x27e284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27e288: 0x90630232  lbu         $v1, 0x232($v1)
    ctx->pc = 0x27e288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 562)));
    // 0x27e28c: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x27E28Cu;
    {
        const bool branch_taken_0x27e28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e28c) {
            ctx->pc = 0x27E408u;
            goto label_27e408;
        }
    }
    ctx->pc = 0x27E294u;
    // 0x27e294: 0x97838924  lhu         $v1, -0x76DC($gp)
    ctx->pc = 0x27e294u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936868)));
    // 0x27e298: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x27e298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27e29c: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x27e29cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x27e2a0: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x27E2A0u;
    {
        const bool branch_taken_0x27e2a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e2a0) {
            ctx->pc = 0x27E2F8u;
            goto label_27e2f8;
        }
    }
    ctx->pc = 0x27E2A8u;
label_27e2a8:
    // 0x27e2a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27e2ac: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x27e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x27e2b0: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x27E2B0u;
    {
        const bool branch_taken_0x27e2b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27e2b0) {
            ctx->pc = 0x27E2F8u;
            goto label_27e2f8;
        }
    }
    ctx->pc = 0x27E2B8u;
    // 0x27e2b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27e2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27e2bc: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x27e2bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x27e2c0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27E2C0u;
    {
        const bool branch_taken_0x27e2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2C0u;
        // 0x27e2c4: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e2c0) {
            ctx->pc = 0x27E2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e2a8;
        }
    }
    ctx->pc = 0x27E2C8u;
    // 0x27e2c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27E2C8u;
    {
        const bool branch_taken_0x27e2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e2c8) {
            ctx->pc = 0x27E2F8u;
            goto label_27e2f8;
        }
    }
    ctx->pc = 0x27E2D0u;
label_27e2d0:
    // 0x27e2d0: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x27e2d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27e2d4: 0xde230050  ld          $v1, 0x50($s1)
    ctx->pc = 0x27e2d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x27e2d8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27E2D8u;
    {
        const bool branch_taken_0x27e2d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27e2d8) {
            ctx->pc = 0x27E2F8u;
            goto label_27e2f8;
        }
    }
    ctx->pc = 0x27E2E0u;
    // 0x27e2e0: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x27e2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x27e2e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27e2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27e2e8:
    // 0x27e2e8: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x27e2e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x27e2ec: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27E2ECu;
    {
        const bool branch_taken_0x27e2ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e2ec) {
            ctx->pc = 0x27E2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e2d0;
        }
    }
    ctx->pc = 0x27E2F4u;
    // 0x27e2f4: 0x0  nop
    ctx->pc = 0x27e2f4u;
    // NOP
label_27e2f8:
    // 0x27e2f8: 0x97838924  lhu         $v1, -0x76DC($gp)
    ctx->pc = 0x27e2f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936868)));
    // 0x27e2fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27e2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27e300: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x27e300u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27e304: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x27E304u;
    {
        const bool branch_taken_0x27e304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e304) {
            ctx->pc = 0x27E200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e200;
        }
    }
    ctx->pc = 0x27E30Cu;
    // 0x27e30c: 0x0  nop
    ctx->pc = 0x27e30cu;
    // NOP
label_27e310:
    // 0x27e310: 0x1240002f  beqz        $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x27E310u;
    {
        const bool branch_taken_0x27e310 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e310) {
            ctx->pc = 0x27E3D0u;
            goto label_27e3d0;
        }
    }
    ctx->pc = 0x27E318u;
    // 0x27e318: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x27e318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27e31c: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x27e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x27e320: 0x246331a0  addiu       $v1, $v1, 0x31A0
    ctx->pc = 0x27e320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12704));
    // 0x27e324: 0x92840003  lbu         $a0, 0x3($s4)
    ctx->pc = 0x27e324u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x27e328: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27e328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e32c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x27e32cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e330: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x27e330u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e334: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x27e334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27e338: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27e338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27e33c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27e340: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27e340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27e344: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x27e344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27e348: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x27e348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27e34c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27e350: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27e350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27e354: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27e354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27e358: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x27e358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27e35c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x27e35cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e360: 0xc09f950  jal         func_27E540
    ctx->pc = 0x27E360u;
    SET_GPR_U32(ctx, 31, 0x27E368u);
    ctx->pc = 0x27E364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E360u;
    // 0x27e364: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E540u, 0x27E360u, 0x27E368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E368u;
label_27e368:
    // 0x27e368: 0x26a401c0  addiu       $a0, $s5, 0x1C0
    ctx->pc = 0x27e368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 448));
    // 0x27e36c: 0xc09f93c  jal         func_27E4F0
    ctx->pc = 0x27E36Cu;
    SET_GPR_U32(ctx, 31, 0x27E374u);
    ctx->pc = 0x27E370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E36Cu;
    // 0x27e370: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E4F0u, 0x27E36Cu, 0x27E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E374u;
label_27e374:
    // 0x27e374: 0x12b60004  beq         $s5, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E374u;
    {
        const bool branch_taken_0x27e374 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 22));
        ctx->pc = 0x27E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E374u;
        // 0x27e378: 0x26c401c0  addiu       $a0, $s6, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e374) {
            ctx->pc = 0x27E388u;
            goto label_27e388;
        }
    }
    ctx->pc = 0x27E37Cu;
    // 0x27e37c: 0xc09f93c  jal         func_27E4F0
    ctx->pc = 0x27E37Cu;
    SET_GPR_U32(ctx, 31, 0x27E384u);
    ctx->pc = 0x27E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E37Cu;
    // 0x27e380: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E4F0u, 0x27E37Cu, 0x27E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E384u;
label_27e384:
    // 0x27e384: 0x0  nop
    ctx->pc = 0x27e384u;
    // NOP
label_27e388:
    // 0x27e388: 0x12110005  beq         $s0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27E388u;
    {
        const bool branch_taken_0x27e388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x27E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E388u;
        // 0x27e38c: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e388) {
            ctx->pc = 0x27E3A0u;
            goto label_27e3a0;
        }
    }
    ctx->pc = 0x27E390u;
    // 0x27e390: 0xc09f948  jal         func_27E520
    ctx->pc = 0x27E390u;
    SET_GPR_U32(ctx, 31, 0x27E398u);
    ctx->pc = 0x27E394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E390u;
    // 0x27e394: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E520u, 0x27E390u, 0x27E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E398u;
label_27e398:
    // 0x27e398: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27E398u;
    {
        const bool branch_taken_0x27e398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e398) {
            ctx->pc = 0x27E3B0u;
            goto label_27e3b0;
        }
    }
    ctx->pc = 0x27E3A0u;
label_27e3a0:
    // 0x27e3a0: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x27e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x27e3a4: 0xc09f948  jal         func_27E520
    ctx->pc = 0x27E3A4u;
    SET_GPR_U32(ctx, 31, 0x27E3ACu);
    ctx->pc = 0x27E3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E3A4u;
    // 0x27e3a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E520u, 0x27E3A4u, 0x27E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E3ACu;
label_27e3ac:
    // 0x27e3ac: 0x0  nop
    ctx->pc = 0x27e3acu;
    // NOP
label_27e3b0:
    // 0x27e3b0: 0x97848928  lhu         $a0, -0x76D8($gp)
    ctx->pc = 0x27e3b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936872)));
    // 0x27e3b4: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x27e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x27e3b8: 0x246359f0  addiu       $v1, $v1, 0x59F0
    ctx->pc = 0x27e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23024));
    // 0x27e3bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27e3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27e3c0: 0xa7848928  sh          $a0, -0x76D8($gp)
    ctx->pc = 0x27e3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936872), (uint16_t)GPR_U32(ctx, 4));
    // 0x27e3c4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x27e3c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x27e3c8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x27e3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x27e3cc: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x27e3ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27e3d0:
    // 0x27e3d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27e3d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x27e3d4: 0x27e182a  slt         $v1, $s3, $fp
    ctx->pc = 0x27e3d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x27e3d8: 0x1460ff07  bnez        $v1, . + 4 + (-0xF9 << 2)
    ctx->pc = 0x27E3D8u;
    {
        const bool branch_taken_0x27e3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e3d8) {
            ctx->pc = 0x27DFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27dff8;
        }
    }
    ctx->pc = 0x27E3E0u;
label_27e3e0:
    // 0x27e3e0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27e3e4: 0x97858920  lhu         $a1, -0x76E0($gp)
    ctx->pc = 0x27e3e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x27e3e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27e3ec: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x27e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x27e3f0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27e3f4: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x27e3f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x27e3f8: 0x1460fedd  bnez        $v1, . + 4 + (-0x123 << 2)
    ctx->pc = 0x27E3F8u;
    {
        const bool branch_taken_0x27e3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e3f8) {
            ctx->pc = 0x27DF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27df70;
        }
    }
    ctx->pc = 0x27E400u;
label_27e400:
    // 0x27e400: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27E400u;
    {
        const bool branch_taken_0x27e400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e400) {
            ctx->pc = 0x27E428u;
            goto label_27e428;
        }
    }
    ctx->pc = 0x27E408u;
label_27e408:
    // 0x27e408: 0x97838924  lhu         $v1, -0x76DC($gp)
    ctx->pc = 0x27e408u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936868)));
    // 0x27e40c: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x27E40Cu;
    {
        const bool branch_taken_0x27e40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E40Cu;
        // 0x27e410: 0x2465ffff  addiu       $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e40c) {
            ctx->pc = 0x27E2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e2e8;
        }
    }
    ctx->pc = 0x27E414u;
    // 0x27e414: 0x0  nop
    ctx->pc = 0x27e414u;
    // NOP
label_27e418:
    // 0x27e418: 0x97838924  lhu         $v1, -0x76DC($gp)
    ctx->pc = 0x27e418u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936868)));
    // 0x27e41c: 0x1000ff62  b           . + 4 + (-0x9E << 2)
    ctx->pc = 0x27E41Cu;
    {
        const bool branch_taken_0x27e41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E41Cu;
        // 0x27e420: 0x2465ffff  addiu       $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e41c) {
            ctx->pc = 0x27E1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e1a8;
        }
    }
    ctx->pc = 0x27E424u;
    // 0x27e424: 0x0  nop
    ctx->pc = 0x27e424u;
    // NOP
label_27e428:
    // 0x27e428: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27e428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27e42c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x27e42cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27e430: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27e430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27e434: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x27e434u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27e438: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27e438u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27e43c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x27e43cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27e440: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27e440u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27e444: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27e444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27e448: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27e448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e44c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27e44cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e450: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27e450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e454: 0x3e00008  jr          $ra
    ctx->pc = 0x27E454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E454u;
        // 0x27e458: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E45Cu;
}

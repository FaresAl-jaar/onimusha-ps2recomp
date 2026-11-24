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

// Function: sub_0027ECE0
// Address: 0x27ece0 - 0x27eea4
void sub_0027ECE0_0x27ece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027ECE0_0x27ece0");
#endif

    switch (ctx->pc) {
        case 0x27ed78u: goto label_27ed78;
        case 0x27ed88u: goto label_27ed88;
        case 0x27ed98u: goto label_27ed98;
        case 0x27edd8u: goto label_27edd8;
        default: break;
    }

    ctx->pc = 0x27ece0u;

    // 0x27ece0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x27ece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x27ece4: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x27ece4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x27ece8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27ece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x27ecec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27ececu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27ecf0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x27ecf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x27ecf4: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x27ecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27ecf8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x27ecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x27ecfc: 0x24830194  addiu       $v1, $a0, 0x194
    ctx->pc = 0x27ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 404));
    // 0x27ed00: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x27ed00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x27ed04: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x27ed04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed08: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x27ed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x27ed0c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x27ed0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed10: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27ed10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x27ed14: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x27ed14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed18: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27ed18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x27ed1c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x27ed1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27ed20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27ed24: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27ed24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27ed28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27ed28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27ed2c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x27ed2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x27ed30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27ed34: 0xafaa00cc  sw          $t2, 0xCC($sp)
    ctx->pc = 0x27ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 10));
    // 0x27ed38: 0xa3ab00cb  sb          $t3, 0xCB($sp)
    ctx->pc = 0x27ed38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 203), (uint8_t)GPR_U32(ctx, 11));
    // 0x27ed3c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x27ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x27ed40: 0x8c840194  lw          $a0, 0x194($a0)
    ctx->pc = 0x27ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x27ed44: 0x1080004a  beqz        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x27ED44u;
    {
        const bool branch_taken_0x27ed44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED44u;
        // 0x27ed48: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed44) {
            ctx->pc = 0x27EE70u;
            goto label_27ee70;
        }
    }
    ctx->pc = 0x27ED4Cu;
    // 0x27ed4c: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x27ed4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x27ed50: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x27ed50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x27ed54: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x27ed54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27ed58: 0x90960004  lbu         $s6, 0x4($a0)
    ctx->pc = 0x27ed58u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27ed5c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x27ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x27ed60: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x27ed60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x27ed64: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x27ed64u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x27ed68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27ed6c: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x27ed6cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27ed70: 0xc0765c4  jal         func_1D9710
    ctx->pc = 0x27ED70u;
    SET_GPR_U32(ctx, 31, 0x27ED78u);
    ctx->pc = 0x27ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED70u;
    // 0x27ed74: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9710u, 0x27ED70u, 0x27ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED78u;
label_27ed78:
    // 0x27ed78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27ed78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed7c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x27ed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x27ed80: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x27ED80u;
    SET_GPR_U32(ctx, 31, 0x27ED88u);
    ctx->pc = 0x27ED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ED80u;
    // 0x27ed84: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x27ED80u, 0x27ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED88u;
label_27ed88:
    // 0x27ed88: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x27ed88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x27ed8c: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x27ED8Cu;
    {
        const bool branch_taken_0x27ed8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED8Cu;
        // 0x27ed90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed8c) {
            ctx->pc = 0x27EE70u;
            goto label_27ee70;
        }
    }
    ctx->pc = 0x27ED94u;
    // 0x27ed94: 0x0  nop
    ctx->pc = 0x27ed94u;
    // NOP
label_27ed98:
    // 0x27ed98: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x27ed98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x27ed9c: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x27ED9Cu;
    {
        const bool branch_taken_0x27ed9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ed9c) {
            ctx->pc = 0x27EE58u;
            goto label_27ee58;
        }
    }
    ctx->pc = 0x27EDA4u;
    // 0x27eda4: 0x97888920  lhu         $t0, -0x76E0($gp)
    ctx->pc = 0x27eda4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x27eda8: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x27eda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x27edac: 0x24630950  addiu       $v1, $v1, 0x950
    ctx->pc = 0x27edacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2384));
    // 0x27edb0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x27edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x27edb4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x27edb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x27edb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27edb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27edbc: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x27edbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x27edc0: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x27edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x27edc4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x27edc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x27edc8: 0xa7828920  sh          $v0, -0x76E0($gp)
    ctx->pc = 0x27edc8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936864), (uint16_t)GPR_U32(ctx, 2));
    // 0x27edcc: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x27edccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x27edd0: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x27EDD0u;
    SET_GPR_U32(ctx, 31, 0x27EDD8u);
    ctx->pc = 0x27EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EDD0u;
    // 0x27edd4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x27EDD0u, 0x27EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDD8u;
label_27edd8:
    // 0x27edd8: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x27edd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x27eddc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EDDCu;
    {
        const bool branch_taken_0x27eddc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x27EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDDCu;
        // 0x27ede0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eddc) {
            ctx->pc = 0x27EDF0u;
            goto label_27edf0;
        }
    }
    ctx->pc = 0x27EDE4u;
    // 0x27ede4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27ede4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ede8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27EDE8u;
    {
        const bool branch_taken_0x27ede8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDE8u;
        // 0x27edec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ede8) {
            ctx->pc = 0x27EE08u;
            goto label_27ee08;
        }
    }
    ctx->pc = 0x27EDF0u;
label_27edf0:
    // 0x27edf0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x27edf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27edf4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x27edf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x27edf8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27edf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27edfc: 0x0  nop
    ctx->pc = 0x27edfcu;
    // NOP
    // 0x27ee00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27ee00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27ee04: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27ee04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_27ee08:
    // 0x27ee08: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x27ee08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27ee0c: 0x27a3015c  addiu       $v1, $sp, 0x15C
    ctx->pc = 0x27ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x27ee10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ee14: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27ee14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x27ee18: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x27ee18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
    // 0x27ee1c: 0xae370000  sw          $s7, 0x0($s1)
    ctx->pc = 0x27ee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
    // 0x27ee20: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x27ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27ee24: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x27ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x27ee28: 0xa23e0005  sb          $fp, 0x5($s1)
    ctx->pc = 0x27ee28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 30));
    // 0x27ee2c: 0xa2350004  sb          $s5, 0x4($s1)
    ctx->pc = 0x27ee2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 21));
    // 0x27ee30: 0xa2200006  sb          $zero, 0x6($s1)
    ctx->pc = 0x27ee30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ee34: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x27ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x27ee38: 0xa2230007  sb          $v1, 0x7($s1)
    ctx->pc = 0x27ee38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x27ee3c: 0xa2240040  sb          $a0, 0x40($s1)
    ctx->pc = 0x27ee3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x27ee40: 0x7ba30150  lq          $v1, 0x150($sp)
    ctx->pc = 0x27ee40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x27ee44: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x27ee44u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x27ee48: 0x93a300cb  lbu         $v1, 0xCB($sp)
    ctx->pc = 0x27ee48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 203)));
    // 0x27ee4c: 0xa2230042  sb          $v1, 0x42($s1)
    ctx->pc = 0x27ee4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 3));
    // 0x27ee50: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x27ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x27ee54: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x27ee54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_27ee58:
    // 0x27ee58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27ee58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27ee5c: 0x256182a  slt         $v1, $s2, $s6
    ctx->pc = 0x27ee5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x27ee60: 0x139842  srl         $s3, $s3, 1
    ctx->pc = 0x27ee60u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x27ee64: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x27EE64u;
    {
        const bool branch_taken_0x27ee64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE64u;
        // 0x27ee68: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ee64) {
            ctx->pc = 0x27ED98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27ed98;
        }
    }
    ctx->pc = 0x27EE6Cu;
    // 0x27ee6c: 0x0  nop
    ctx->pc = 0x27ee6cu;
    // NOP
label_27ee70:
    // 0x27ee70: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27ee70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27ee74: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x27ee74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27ee78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27ee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27ee7c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x27ee7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27ee80: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27ee80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27ee84: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x27ee84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27ee88: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27ee88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27ee8c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27ee8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ee90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27ee90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ee94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27ee94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ee98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27ee98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ee9c: 0x3e00008  jr          $ra
    ctx->pc = 0x27EE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE9Cu;
        // 0x27eea0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EEA4u;
}

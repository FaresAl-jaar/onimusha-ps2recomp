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

// Function: sub_0030DF40
// Address: 0x30df40 - 0x30e660
void sub_0030DF40_0x30df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DF40_0x30df40");
#endif

    switch (ctx->pc) {
        case 0x30dfbcu: goto label_30dfbc;
        case 0x30dfc8u: goto label_30dfc8;
        case 0x30e184u: goto label_30e184;
        case 0x30e208u: goto label_30e208;
        case 0x30e238u: goto label_30e238;
        case 0x30e270u: goto label_30e270;
        case 0x30e288u: goto label_30e288;
        case 0x30e35cu: goto label_30e35c;
        case 0x30e400u: goto label_30e400;
        case 0x30e4bcu: goto label_30e4bc;
        case 0x30e520u: goto label_30e520;
        case 0x30e5dcu: goto label_30e5dc;
        default: break;
    }

    ctx->pc = 0x30df40u;

    // 0x30df40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x30df40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x30df44: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x30df44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x30df48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x30df48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x30df4c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x30df4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x30df50: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x30df50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x30df54: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x30df54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x30df58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30df58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30df5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30df5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30df60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30df60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30df64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30df64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30df68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30df68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30df6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30df6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30df70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30df70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30df74: 0x8c22fd84  lw          $v0, -0x27C($at)
    ctx->pc = 0x30df74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8DFD84u));
    // 0x30df78: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x30df78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x30df7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30DF7Cu;
    {
        const bool branch_taken_0x30df7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF7Cu;
        // 0x30df80: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df7c) {
            ctx->pc = 0x30DFA0u;
            goto label_30dfa0;
        }
    }
    ctx->pc = 0x30DF84u;
    // 0x30df84: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30df88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30df88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30df8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30df8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30df90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30df90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30df94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30DF94u;
    {
        const bool branch_taken_0x30df94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF94u;
        // 0x30df98: 0x24500004  addiu       $s0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df94) {
            ctx->pc = 0x30DFA8u;
            goto label_30dfa8;
        }
    }
    ctx->pc = 0x30DF9Cu;
    // 0x30df9c: 0x0  nop
    ctx->pc = 0x30df9cu;
    // NOP
label_30dfa0:
    // 0x30dfa0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30dfa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dfa4: 0x0  nop
    ctx->pc = 0x30dfa4u;
    // NOP
label_30dfa8:
    // 0x30dfa8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x30dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x30dfac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30dfacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30dfb0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x30dfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30dfb4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x30DFB4u;
    SET_GPR_U32(ctx, 31, 0x30DFBCu);
    ctx->pc = 0x30DFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DFB4u;
    // 0x30dfb8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x30DFB4u, 0x30DFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DFBCu;
label_30dfbc:
    // 0x30dfbc: 0x8e560604  lw          $s6, 0x604($s2)
    ctx->pc = 0x30dfbcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
    // 0x30dfc0: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x30DFC0u;
    {
        const bool branch_taken_0x30dfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFC0u;
        // 0x30dfc4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dfc0) {
            ctx->pc = 0x30E1C8u;
            goto label_30e1c8;
        }
    }
    ctx->pc = 0x30DFC8u;
label_30dfc8:
    // 0x30dfc8: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x30dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x30dfcc: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x30dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x30dfd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30dfd4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x30dfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x30dfd8: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x30dfd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x30dfdc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30DFDCu;
    {
        const bool branch_taken_0x30dfdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30dfdc) {
            ctx->pc = 0x30DFF8u;
            goto label_30dff8;
        }
    }
    ctx->pc = 0x30DFE4u;
    // 0x30dfe4: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x30dfe4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30dfe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dfec: 0x14830074  bne         $a0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x30DFECu;
    {
        const bool branch_taken_0x30dfec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30dfec) {
            ctx->pc = 0x30E1C0u;
            goto label_30e1c0;
        }
    }
    ctx->pc = 0x30DFF4u;
    // 0x30dff4: 0x0  nop
    ctx->pc = 0x30dff4u;
    // NOP
label_30dff8:
    // 0x30dff8: 0x8e440600  lw          $a0, 0x600($s2)
    ctx->pc = 0x30dff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x30dffc: 0x152980  sll         $a1, $s5, 6
    ctx->pc = 0x30dffcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x30e000: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x30e000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30e004: 0x85a021  addu        $s4, $a0, $a1
    ctx->pc = 0x30e004u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30e008: 0x92840022  lbu         $a0, 0x22($s4)
    ctx->pc = 0x30e008u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x30e00c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30e00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30e010: 0x31efe  dsrl32      $v1, $v1, 27
    ctx->pc = 0x30e010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 27));
    // 0x30e014: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30e014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30e018: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x30E018u;
    {
        const bool branch_taken_0x30e018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e018) {
            ctx->pc = 0x30E1C0u;
            goto label_30e1c0;
        }
    }
    ctx->pc = 0x30E020u;
    // 0x30e020: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x30e020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x30e024: 0x14600066  bnez        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x30E024u;
    {
        const bool branch_taken_0x30e024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e024) {
            ctx->pc = 0x30E1C0u;
            goto label_30e1c0;
        }
    }
    ctx->pc = 0x30E02Cu;
    // 0x30e02c: 0x92830034  lbu         $v1, 0x34($s4)
    ctx->pc = 0x30e02cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x30e030: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x30E030u;
    {
        const bool branch_taken_0x30e030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e030) {
            ctx->pc = 0x30E1C0u;
            goto label_30e1c0;
        }
    }
    ctx->pc = 0x30E038u;
    // 0x30e038: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x30e038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x30e03c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E03Cu;
    {
        const bool branch_taken_0x30e03c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x30E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E03Cu;
        // 0x30e040: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e03c) {
            ctx->pc = 0x30E050u;
            goto label_30e050;
        }
    }
    ctx->pc = 0x30E044u;
    // 0x30e044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30e044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e048: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30E048u;
    {
        const bool branch_taken_0x30e048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E048u;
        // 0x30e04c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e048) {
            ctx->pc = 0x30E068u;
            goto label_30e068;
        }
    }
    ctx->pc = 0x30E050u;
label_30e050:
    // 0x30e050: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30e050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x30e054: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x30e054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30e058: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30e058u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e05c: 0x0  nop
    ctx->pc = 0x30e05cu;
    // NOP
    // 0x30e060: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x30e060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30e064: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30e064u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30e068:
    // 0x30e068: 0xc6810030  lwc1        $f1, 0x30($s4)
    ctx->pc = 0x30e068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e06c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x30e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x30e070: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30e070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e074: 0x0  nop
    ctx->pc = 0x30e074u;
    // NOP
    // 0x30e078: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30e078u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30e07c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30e07cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e080: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30E080u;
    {
        const bool branch_taken_0x30e080 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e080) {
            ctx->pc = 0x30E098u;
            goto label_30e098;
        }
    }
    ctx->pc = 0x30E088u;
    // 0x30e088: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30e088u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30e08c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x30e08cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30e090: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30E090u;
    {
        const bool branch_taken_0x30e090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E090u;
        // 0x30e094: 0x92830023  lbu         $v1, 0x23($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e090) {
            ctx->pc = 0x30E0B4u;
            goto label_30e0b4;
        }
    }
    ctx->pc = 0x30E098u;
label_30e098:
    // 0x30e098: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30e098u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30e09c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x30e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x30e0a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30e0a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30e0a4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x30e0a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30e0a8: 0x0  nop
    ctx->pc = 0x30e0a8u;
    // NOP
    // 0x30e0ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x30e0acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30e0b0: 0x92830023  lbu         $v1, 0x23($s4)
    ctx->pc = 0x30e0b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 35)));
label_30e0b4:
    // 0x30e0b4: 0x309300ff  andi        $s3, $a0, 0xFF
    ctx->pc = 0x30e0b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x30e0b8: 0x73082a  slt         $at, $v1, $s3
    ctx->pc = 0x30e0b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x30e0bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x30E0BCu;
    {
        const bool branch_taken_0x30e0bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e0bc) {
            ctx->pc = 0x30E0C8u;
            goto label_30e0c8;
        }
    }
    ctx->pc = 0x30E0C4u;
    // 0x30e0c4: 0xa2930023  sb          $s3, 0x23($s4)
    ctx->pc = 0x30e0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 35), (uint8_t)GPR_U32(ctx, 19));
label_30e0c8:
    // 0x30e0c8: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x30e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x30e0cc: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x30e0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x30e0d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30e0d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30e0d8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x30e0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x30e0dc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x30e0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e0e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30e0e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e0e4: 0x0  nop
    ctx->pc = 0x30e0e4u;
    // NOP
    // 0x30e0e8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x30e0e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e0ec: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x30E0ECu;
    {
        const bool branch_taken_0x30e0ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e0ec) {
            ctx->pc = 0x30E1C0u;
            goto label_30e1c0;
        }
    }
    ctx->pc = 0x30E0F4u;
    // 0x30e0f4: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E0F4u;
    {
        const bool branch_taken_0x30e0f4 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x30E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E0F4u;
        // 0x30e0f8: 0x46010041  sub.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e0f4) {
            ctx->pc = 0x30E108u;
            goto label_30e108;
        }
    }
    ctx->pc = 0x30E0FCu;
    // 0x30e0fc: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x30e0fcu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e100: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30E100u;
    {
        const bool branch_taken_0x30e100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E100u;
        // 0x30e104: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e100) {
            ctx->pc = 0x30E124u;
            goto label_30e124;
        }
    }
    ctx->pc = 0x30E108u;
label_30e108:
    // 0x30e108: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x30e108u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x30e10c: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x30e10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x30e110: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30e110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e114: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30e114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e118: 0x0  nop
    ctx->pc = 0x30e118u;
    // NOP
    // 0x30e11c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30e11cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30e120: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30e120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30e124:
    // 0x30e124: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x30e124u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30e128: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x30e128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x30e12c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30e12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e130: 0x0  nop
    ctx->pc = 0x30e130u;
    // NOP
    // 0x30e134: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30e134u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e138: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30E138u;
    {
        const bool branch_taken_0x30e138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e138) {
            ctx->pc = 0x30E150u;
            goto label_30e150;
        }
    }
    ctx->pc = 0x30E140u;
    // 0x30e140: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30e140u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30e144: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30e144u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30e148: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30E148u;
    {
        const bool branch_taken_0x30e148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E148u;
        // 0x30e14c: 0x8e860028  lw          $a2, 0x28($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e148) {
            ctx->pc = 0x30E16Cu;
            goto label_30e16c;
        }
    }
    ctx->pc = 0x30E150u;
label_30e150:
    // 0x30e150: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30e150u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30e154: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30e154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x30e158: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30e158u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30e15c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30e15cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30e160: 0x0  nop
    ctx->pc = 0x30e160u;
    // NOP
    // 0x30e164: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30e164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e168: 0x8e860028  lw          $a2, 0x28($s4)
    ctx->pc = 0x30e168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_30e16c:
    // 0x30e16c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x30e16cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x30e170: 0x8e87002c  lw          $a3, 0x2C($s4)
    ctx->pc = 0x30e170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x30e174: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x30e174u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30e178: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x30e178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x30e17c: 0xc0c6534  jal         func_3194D0
    ctx->pc = 0x30E17Cu;
    SET_GPR_U32(ctx, 31, 0x30E184u);
    ctx->pc = 0x30E180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E17Cu;
    // 0x30e180: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194D0u, 0x30E17Cu, 0x30E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E184u;
label_30e184:
    // 0x30e184: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30E184u;
    {
        const bool branch_taken_0x30e184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E184u;
        // 0x30e188: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e184) {
            ctx->pc = 0x30E1C0u;
            goto label_30e1c0;
        }
    }
    ctx->pc = 0x30E18Cu;
    // 0x30e18c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x30e18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30e190: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x30e190u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30e194: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x30e194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x30e198: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x30e198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x30e19c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30e19cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e1a0: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x30e1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x30e1a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30e1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30e1a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30e1a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e1ac: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x30e1acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30e1b0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x30e1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x30e1b4: 0xa0530034  sb          $s3, 0x34($v0)
    ctx->pc = 0x30e1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 19));
    // 0x30e1b8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x30e1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x30e1bc: 0x0  nop
    ctx->pc = 0x30e1bcu;
    // NOP
label_30e1c0:
    // 0x30e1c0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x30e1c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x30e1c4: 0x0  nop
    ctx->pc = 0x30e1c4u;
    // NOP
label_30e1c8:
    // 0x30e1c8: 0x2b6182b  sltu        $v1, $s5, $s6
    ctx->pc = 0x30e1c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x30e1cc: 0x1460ff7e  bnez        $v1, . + 4 + (-0x82 << 2)
    ctx->pc = 0x30E1CCu;
    {
        const bool branch_taken_0x30e1cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e1cc) {
            ctx->pc = 0x30DFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30dfc8;
        }
    }
    ctx->pc = 0x30E1D4u;
    // 0x30e1d4: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x30e1d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30e1d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30e1dc: 0x108300ce  beq         $a0, $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x30E1DCu;
    {
        const bool branch_taken_0x30e1dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E1DCu;
        // 0x30e1e0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e1dc) {
            ctx->pc = 0x30E518u;
            goto label_30e518;
        }
    }
    ctx->pc = 0x30E1E4u;
    // 0x30e1e4: 0x10830084  beq         $a0, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x30E1E4u;
    {
        const bool branch_taken_0x30e1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30e1e4) {
            ctx->pc = 0x30E3F8u;
            goto label_30e3f8;
        }
    }
    ctx->pc = 0x30E1ECu;
    // 0x30e1ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30e1f0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E1F0u;
    {
        const bool branch_taken_0x30e1f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30e1f0) {
            ctx->pc = 0x30E200u;
            goto label_30e200;
        }
    }
    ctx->pc = 0x30E1F8u;
    // 0x30e1f8: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x30E1F8u;
    {
        const bool branch_taken_0x30e1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e1f8) {
            ctx->pc = 0x30E630u;
            goto label_30e630;
        }
    }
    ctx->pc = 0x30E200u;
label_30e200:
    // 0x30e200: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30E200u;
    {
        const bool branch_taken_0x30e200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E200u;
        // 0x30e204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e200) {
            ctx->pc = 0x30E220u;
            goto label_30e220;
        }
    }
    ctx->pc = 0x30E208u;
label_30e208:
    // 0x30e208: 0x8e440600  lw          $a0, 0x600($s2)
    ctx->pc = 0x30e208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x30e20c: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x30e20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x30e210: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30e210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30e214: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30e214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30e218: 0xa4600020  sh          $zero, 0x20($v1)
    ctx->pc = 0x30e218u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e21c: 0x0  nop
    ctx->pc = 0x30e21cu;
    // NOP
label_30e220:
    // 0x30e220: 0xb6182b  sltu        $v1, $a1, $s6
    ctx->pc = 0x30e220u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x30e224: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30E224u;
    {
        const bool branch_taken_0x30e224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E224u;
        // 0x30e228: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e224) {
            ctx->pc = 0x30E208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e208;
        }
    }
    ctx->pc = 0x30E22Cu;
    // 0x30e22c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x30E22Cu;
    {
        const bool branch_taken_0x30e22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e22c) {
            ctx->pc = 0x30E3D8u;
            goto label_30e3d8;
        }
    }
    ctx->pc = 0x30E234u;
    // 0x30e234: 0x0  nop
    ctx->pc = 0x30e234u;
    // NOP
label_30e238:
    // 0x30e238: 0x240322b0  addiu       $v1, $zero, 0x22B0
    ctx->pc = 0x30e238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8880));
    // 0x30e23c: 0x2a32018  mult        $a0, $s5, $v1
    ctx->pc = 0x30e23cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30e240: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x30e240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x30e244: 0x24639648  addiu       $v1, $v1, -0x69B8
    ctx->pc = 0x30e244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940232));
    // 0x30e248: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30e248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30e24c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30e250: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x30e250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x30e254: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x30E254u;
    {
        const bool branch_taken_0x30e254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e254) {
            ctx->pc = 0x30E3D0u;
            goto label_30e3d0;
        }
    }
    ctx->pc = 0x30E25Cu;
    // 0x30e25c: 0x8c7e0008  lw          $fp, 0x8($v1)
    ctx->pc = 0x30e25cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x30e260: 0x13c0005b  beqz        $fp, . + 4 + (0x5B << 2)
    ctx->pc = 0x30E260u;
    {
        const bool branch_taken_0x30e260 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E260u;
        // 0x30e264: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e260) {
            ctx->pc = 0x30E3D0u;
            goto label_30e3d0;
        }
    }
    ctx->pc = 0x30E268u;
    // 0x30e268: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x30E268u;
    {
        const bool branch_taken_0x30e268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e268) {
            ctx->pc = 0x30E3C0u;
            goto label_30e3c0;
        }
    }
    ctx->pc = 0x30E270u;
label_30e270:
    // 0x30e270: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x30e270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x30e274: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x30e274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x30e278: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x30e278u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e27c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x30E27Cu;
    {
        const bool branch_taken_0x30e27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E27Cu;
        // 0x30e280: 0x24730010  addiu       $s3, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e27c) {
            ctx->pc = 0x30E3B0u;
            goto label_30e3b0;
        }
    }
    ctx->pc = 0x30E284u;
    // 0x30e284: 0x0  nop
    ctx->pc = 0x30e284u;
    // NOP
label_30e288:
    // 0x30e288: 0x8e430600  lw          $v1, 0x600($s2)
    ctx->pc = 0x30e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x30e28c: 0x172980  sll         $a1, $s7, 6
    ctx->pc = 0x30e28cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x30e290: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x30e290u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30e294: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30e294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30e298: 0x90650022  lbu         $a1, 0x22($v1)
    ctx->pc = 0x30e298u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x30e29c: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x30e29cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x30e2a0: 0x426fe  dsrl32      $a0, $a0, 27
    ctx->pc = 0x30e2a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 27));
    // 0x30e2a4: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x30e2a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x30e2a8: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x30E2A8u;
    {
        const bool branch_taken_0x30e2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e2a8) {
            ctx->pc = 0x30E3A8u;
            goto label_30e3a8;
        }
    }
    ctx->pc = 0x30E2B0u;
    // 0x30e2b0: 0x94660020  lhu         $a2, 0x20($v1)
    ctx->pc = 0x30e2b0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x30e2b4: 0x96640030  lhu         $a0, 0x30($s3)
    ctx->pc = 0x30e2b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x30e2b8: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x30e2b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x30e2bc: 0x1480003a  bnez        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x30E2BCu;
    {
        const bool branch_taken_0x30e2bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e2bc) {
            ctx->pc = 0x30E3A8u;
            goto label_30e3a8;
        }
    }
    ctx->pc = 0x30E2C4u;
    // 0x30e2c4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x30e2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e2c8: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x30e2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e2cc: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x30e2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e2d0: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x30e2d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x30e2d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30e2d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e2d8: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x30E2D8u;
    {
        const bool branch_taken_0x30e2d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e2d8) {
            ctx->pc = 0x30E3A8u;
            goto label_30e3a8;
        }
    }
    ctx->pc = 0x30E2E0u;
    // 0x30e2e0: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x30e2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e2e4: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x30e2e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x30e2e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30e2e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e2ec: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x30E2ECu;
    {
        const bool branch_taken_0x30e2ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e2ec) {
            ctx->pc = 0x30E3A8u;
            goto label_30e3a8;
        }
    }
    ctx->pc = 0x30E2F4u;
    // 0x30e2f4: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x30e2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e2f8: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x30e2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e2fc: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x30e2fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x30e300: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30e300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e304: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x30E304u;
    {
        const bool branch_taken_0x30e304 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e304) {
            ctx->pc = 0x30E3A8u;
            goto label_30e3a8;
        }
    }
    ctx->pc = 0x30E30Cu;
    // 0x30e30c: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x30e30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e310: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x30e310u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x30e314: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30e314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e318: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x30E318u;
    {
        const bool branch_taken_0x30e318 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e318) {
            ctx->pc = 0x30E3A8u;
            goto label_30e3a8;
        }
    }
    ctx->pc = 0x30E320u;
    // 0x30e320: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x30e320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e324: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x30e324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e328: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x30e328u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x30e32c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30e32cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e330: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x30E330u;
    {
        const bool branch_taken_0x30e330 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e330) {
            ctx->pc = 0x30E3A8u;
            goto label_30e3a8;
        }
    }
    ctx->pc = 0x30E338u;
    // 0x30e338: 0x96620032  lhu         $v0, 0x32($s3)
    ctx->pc = 0x30e338u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
    // 0x30e33c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x30e33cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x30e340: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x30e340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x30e344: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x30e344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x30e348: 0xa4620020  sh          $v0, 0x20($v1)
    ctx->pc = 0x30e348u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x30e34c: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x30e34cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x30e350: 0x8c67002c  lw          $a3, 0x2C($v1)
    ctx->pc = 0x30e350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x30e354: 0xc0c6534  jal         func_3194D0
    ctx->pc = 0x30E354u;
    SET_GPR_U32(ctx, 31, 0x30E35Cu);
    ctx->pc = 0x30E358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E354u;
    // 0x30e358: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194D0u, 0x30E354u, 0x30E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E35Cu;
label_30e35c:
    // 0x30e35c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30E35Cu;
    {
        const bool branch_taken_0x30e35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E35Cu;
        // 0x30e360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e35c) {
            ctx->pc = 0x30E3A8u;
            goto label_30e3a8;
        }
    }
    ctx->pc = 0x30E364u;
    // 0x30e364: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x30e364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30e368: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30e368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e36c: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x30e36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30e370: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x30e370u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30e374: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x30e374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x30e378: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x30e378u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x30e37c: 0x151c00  sll         $v1, $s5, 16
    ctx->pc = 0x30e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x30e380: 0x7a650000  lq          $a1, 0x0($s3)
    ctx->pc = 0x30e380u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30e384: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x30e384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x30e388: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x30e388u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x30e38c: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x30e38cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x30e390: 0xa0440033  sb          $a0, 0x33($v0)
    ctx->pc = 0x30e390u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 51), (uint8_t)GPR_U32(ctx, 4));
    // 0x30e394: 0x92640036  lbu         $a0, 0x36($s3)
    ctx->pc = 0x30e394u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x30e398: 0xa0440032  sb          $a0, 0x32($v0)
    ctx->pc = 0x30e398u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 4));
    // 0x30e39c: 0x96640034  lhu         $a0, 0x34($s3)
    ctx->pc = 0x30e39cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x30e3a0: 0xa4440030  sh          $a0, 0x30($v0)
    ctx->pc = 0x30e3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x30e3a4: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x30e3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
label_30e3a8:
    // 0x30e3a8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x30e3a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x30e3ac: 0x0  nop
    ctx->pc = 0x30e3acu;
    // NOP
label_30e3b0:
    // 0x30e3b0: 0x2f6182b  sltu        $v1, $s7, $s6
    ctx->pc = 0x30e3b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x30e3b4: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x30E3B4u;
    {
        const bool branch_taken_0x30e3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e3b4) {
            ctx->pc = 0x30E288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e288;
        }
    }
    ctx->pc = 0x30E3BCu;
    // 0x30e3bc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x30e3bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_30e3c0:
    // 0x30e3c0: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x30e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x30e3c4: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x30e3c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30e3c8: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
    ctx->pc = 0x30E3C8u;
    {
        const bool branch_taken_0x30e3c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e3c8) {
            ctx->pc = 0x30E270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e270;
        }
    }
    ctx->pc = 0x30E3D0u;
label_30e3d0:
    // 0x30e3d0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x30e3d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x30e3d4: 0x0  nop
    ctx->pc = 0x30e3d4u;
    // NOP
label_30e3d8:
    // 0x30e3d8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x30e3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x30e3dc: 0x902395a1  lbu         $v1, -0x6A5F($at)
    ctx->pc = 0x30e3dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x30e3e0: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x30e3e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30e3e4: 0x1460ff94  bnez        $v1, . + 4 + (-0x6C << 2)
    ctx->pc = 0x30E3E4u;
    {
        const bool branch_taken_0x30e3e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e3e4) {
            ctx->pc = 0x30E238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e238;
        }
    }
    ctx->pc = 0x30E3ECu;
    // 0x30e3ec: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x30E3ECu;
    {
        const bool branch_taken_0x30e3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e3ec) {
            ctx->pc = 0x30E630u;
            goto label_30e630;
        }
    }
    ctx->pc = 0x30E3F4u;
    // 0x30e3f4: 0x0  nop
    ctx->pc = 0x30e3f4u;
    // NOP
label_30e3f8:
    // 0x30e3f8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x30E3F8u;
    {
        const bool branch_taken_0x30e3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E3F8u;
        // 0x30e3fc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e3f8) {
            ctx->pc = 0x30E500u;
            goto label_30e500;
        }
    }
    ctx->pc = 0x30E400u;
label_30e400:
    // 0x30e400: 0x8e440600  lw          $a0, 0x600($s2)
    ctx->pc = 0x30e400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x30e404: 0x142980  sll         $a1, $s4, 6
    ctx->pc = 0x30e404u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x30e408: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x30e408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30e40c: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x30e40cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30e410: 0x90e40022  lbu         $a0, 0x22($a3)
    ctx->pc = 0x30e410u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 34)));
    // 0x30e414: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30e414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30e418: 0x31efe  dsrl32      $v1, $v1, 27
    ctx->pc = 0x30e418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 27));
    // 0x30e41c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30e41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30e420: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x30E420u;
    {
        const bool branch_taken_0x30e420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e420) {
            ctx->pc = 0x30E4F8u;
            goto label_30e4f8;
        }
    }
    ctx->pc = 0x30E428u;
    // 0x30e428: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x30e428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x30e42c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E42Cu;
    {
        const bool branch_taken_0x30e42c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x30E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E42Cu;
        // 0x30e430: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e42c) {
            ctx->pc = 0x30E440u;
            goto label_30e440;
        }
    }
    ctx->pc = 0x30E434u;
    // 0x30e434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30e434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e438: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30E438u;
    {
        const bool branch_taken_0x30e438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E438u;
        // 0x30e43c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e438) {
            ctx->pc = 0x30E458u;
            goto label_30e458;
        }
    }
    ctx->pc = 0x30E440u;
label_30e440:
    // 0x30e440: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30e440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30e444: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30e444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30e448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e44c: 0x0  nop
    ctx->pc = 0x30e44cu;
    // NOP
    // 0x30e450: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x30e450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30e454: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30e454u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30e458:
    // 0x30e458: 0xc4e10030  lwc1        $f1, 0x30($a3)
    ctx->pc = 0x30e458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e45c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x30e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x30e460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30e460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e464: 0x0  nop
    ctx->pc = 0x30e464u;
    // NOP
    // 0x30e468: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30e468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30e46c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30e46cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e470: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30E470u;
    {
        const bool branch_taken_0x30e470 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e470) {
            ctx->pc = 0x30E488u;
            goto label_30e488;
        }
    }
    ctx->pc = 0x30E478u;
    // 0x30e478: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30e478u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30e47c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30e47cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30e480: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30E480u;
    {
        const bool branch_taken_0x30e480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E480u;
        // 0x30e484: 0x8ce60028  lw          $a2, 0x28($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e480) {
            ctx->pc = 0x30E4A4u;
            goto label_30e4a4;
        }
    }
    ctx->pc = 0x30E488u;
label_30e488:
    // 0x30e488: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30e488u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30e48c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x30e490: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30e490u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30e494: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30e494u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30e498: 0x0  nop
    ctx->pc = 0x30e498u;
    // NOP
    // 0x30e49c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30e49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e4a0: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x30e4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_30e4a4:
    // 0x30e4a4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x30e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x30e4a8: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x30e4a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30e4ac: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x30e4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x30e4b0: 0x8ce7002c  lw          $a3, 0x2C($a3)
    ctx->pc = 0x30e4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x30e4b4: 0xc0c6534  jal         func_3194D0
    ctx->pc = 0x30E4B4u;
    SET_GPR_U32(ctx, 31, 0x30E4BCu);
    ctx->pc = 0x30E4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E4B4u;
    // 0x30e4b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194D0u, 0x30E4B4u, 0x30E4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E4BCu;
label_30e4bc:
    // 0x30e4bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30E4BCu;
    {
        const bool branch_taken_0x30e4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E4BCu;
        // 0x30e4c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e4bc) {
            ctx->pc = 0x30E4F8u;
            goto label_30e4f8;
        }
    }
    ctx->pc = 0x30E4C4u;
    // 0x30e4c4: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x30e4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x30e4c8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x30e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30e4cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e4d0: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x30e4d0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30e4d4: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x30e4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x30e4d8: 0xa0430013  sb          $v1, 0x13($v0)
    ctx->pc = 0x30e4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x30e4dc: 0xa0530012  sb          $s3, 0x12($v0)
    ctx->pc = 0x30e4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 18), (uint8_t)GPR_U32(ctx, 19));
    // 0x30e4e0: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x30e4e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x30e4e4: 0xa0430011  sb          $v1, 0x11($v0)
    ctx->pc = 0x30e4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x30e4e8: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x30e4e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x30e4ec: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x30e4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x30e4f0: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x30e4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e4f4: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x30e4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_30e4f8:
    // 0x30e4f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x30e4f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x30e4fc: 0x0  nop
    ctx->pc = 0x30e4fcu;
    // NOP
label_30e500:
    // 0x30e500: 0x296182b  sltu        $v1, $s4, $s6
    ctx->pc = 0x30e500u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x30e504: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x30E504u;
    {
        const bool branch_taken_0x30e504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e504) {
            ctx->pc = 0x30E400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e400;
        }
    }
    ctx->pc = 0x30E50Cu;
    // 0x30e50c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x30E50Cu;
    {
        const bool branch_taken_0x30e50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e50c) {
            ctx->pc = 0x30E630u;
            goto label_30e630;
        }
    }
    ctx->pc = 0x30E514u;
    // 0x30e514: 0x0  nop
    ctx->pc = 0x30e514u;
    // NOP
label_30e518:
    // 0x30e518: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x30E518u;
    {
        const bool branch_taken_0x30e518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E518u;
        // 0x30e51c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e518) {
            ctx->pc = 0x30E620u;
            goto label_30e620;
        }
    }
    ctx->pc = 0x30E520u;
label_30e520:
    // 0x30e520: 0x8e440600  lw          $a0, 0x600($s2)
    ctx->pc = 0x30e520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x30e524: 0x142980  sll         $a1, $s4, 6
    ctx->pc = 0x30e524u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x30e528: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x30e528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30e52c: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x30e52cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30e530: 0x90e40022  lbu         $a0, 0x22($a3)
    ctx->pc = 0x30e530u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 34)));
    // 0x30e534: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x30e534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x30e538: 0x31efe  dsrl32      $v1, $v1, 27
    ctx->pc = 0x30e538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 27));
    // 0x30e53c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30e53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30e540: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x30E540u;
    {
        const bool branch_taken_0x30e540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e540) {
            ctx->pc = 0x30E618u;
            goto label_30e618;
        }
    }
    ctx->pc = 0x30E548u;
    // 0x30e548: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x30e548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x30e54c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30E54Cu;
    {
        const bool branch_taken_0x30e54c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x30E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E54Cu;
        // 0x30e550: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e54c) {
            ctx->pc = 0x30E560u;
            goto label_30e560;
        }
    }
    ctx->pc = 0x30E554u;
    // 0x30e554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30e554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e558: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30E558u;
    {
        const bool branch_taken_0x30e558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E558u;
        // 0x30e55c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e558) {
            ctx->pc = 0x30E578u;
            goto label_30e578;
        }
    }
    ctx->pc = 0x30E560u;
label_30e560:
    // 0x30e560: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30e560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30e564: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30e564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30e568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e56c: 0x0  nop
    ctx->pc = 0x30e56cu;
    // NOP
    // 0x30e570: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x30e570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30e574: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x30e574u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_30e578:
    // 0x30e578: 0xc4e10030  lwc1        $f1, 0x30($a3)
    ctx->pc = 0x30e578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e57c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x30e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x30e580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30e580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e584: 0x0  nop
    ctx->pc = 0x30e584u;
    // NOP
    // 0x30e588: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30e588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30e58c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30e58cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e590: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30E590u;
    {
        const bool branch_taken_0x30e590 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e590) {
            ctx->pc = 0x30E5A8u;
            goto label_30e5a8;
        }
    }
    ctx->pc = 0x30E598u;
    // 0x30e598: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30e598u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30e59c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30e59cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30e5a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30E5A0u;
    {
        const bool branch_taken_0x30e5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E5A0u;
        // 0x30e5a4: 0x8ce60028  lw          $a2, 0x28($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e5a0) {
            ctx->pc = 0x30E5C4u;
            goto label_30e5c4;
        }
    }
    ctx->pc = 0x30E5A8u;
label_30e5a8:
    // 0x30e5a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30e5a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30e5ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x30e5b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30e5b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30e5b4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30e5b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30e5b8: 0x0  nop
    ctx->pc = 0x30e5b8u;
    // NOP
    // 0x30e5bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30e5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e5c0: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x30e5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_30e5c4:
    // 0x30e5c4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x30e5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x30e5c8: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x30e5c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30e5cc: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x30e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x30e5d0: 0x8ce7002c  lw          $a3, 0x2C($a3)
    ctx->pc = 0x30e5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x30e5d4: 0xc0c6534  jal         func_3194D0
    ctx->pc = 0x30E5D4u;
    SET_GPR_U32(ctx, 31, 0x30E5DCu);
    ctx->pc = 0x30E5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E5D4u;
    // 0x30e5d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3194D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3194D0u, 0x30E5D4u, 0x30E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E5DCu;
label_30e5dc:
    // 0x30e5dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30E5DCu;
    {
        const bool branch_taken_0x30e5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E5DCu;
        // 0x30e5e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e5dc) {
            ctx->pc = 0x30E618u;
            goto label_30e618;
        }
    }
    ctx->pc = 0x30E5E4u;
    // 0x30e5e4: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x30e5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x30e5e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x30e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30e5ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e5f0: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x30e5f0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30e5f4: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x30e5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x30e5f8: 0xa0430013  sb          $v1, 0x13($v0)
    ctx->pc = 0x30e5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x30e5fc: 0xa0530012  sb          $s3, 0x12($v0)
    ctx->pc = 0x30e5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 18), (uint8_t)GPR_U32(ctx, 19));
    // 0x30e600: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x30e600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x30e604: 0xa0430011  sb          $v1, 0x11($v0)
    ctx->pc = 0x30e604u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x30e608: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x30e608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x30e60c: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x30e60cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x30e610: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x30e610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e614: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x30e614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_30e618:
    // 0x30e618: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x30e618u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x30e61c: 0x0  nop
    ctx->pc = 0x30e61cu;
    // NOP
label_30e620:
    // 0x30e620: 0x296182b  sltu        $v1, $s4, $s6
    ctx->pc = 0x30e620u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x30e624: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x30E624u;
    {
        const bool branch_taken_0x30e624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e624) {
            ctx->pc = 0x30E520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e520;
        }
    }
    ctx->pc = 0x30E62Cu;
    // 0x30e62c: 0x0  nop
    ctx->pc = 0x30e62cu;
    // NOP
label_30e630:
    // 0x30e630: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x30e630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30e634: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x30e634u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30e638: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x30e638u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30e63c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x30e63cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30e640: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30e640u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30e644: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30e644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30e648: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30e648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30e64c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30e64cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30e650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30e654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e658: 0x3e00008  jr          $ra
    ctx->pc = 0x30E658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E658u;
        // 0x30e65c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E660u;
}

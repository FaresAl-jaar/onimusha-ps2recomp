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

// Function: sub_0013DF70
// Address: 0x13df70 - 0x13e194
void sub_0013DF70_0x13df70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DF70_0x13df70");
#endif

    switch (ctx->pc) {
        case 0x13e054u: goto label_13e054;
        case 0x13e180u: goto label_13e180;
        default: break;
    }

    ctx->pc = 0x13df70u;

    // 0x13df70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13df70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13df74: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13df74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x13df78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13df78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13df7c: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x13df7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13df80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13df80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13df84: 0x24426710  addiu       $v0, $v0, 0x6710
    ctx->pc = 0x13df84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26384));
    // 0x13df88: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x13df88u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13df8c: 0x78a60010  lq          $a2, 0x10($a1)
    ctx->pc = 0x13df8cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x13df90: 0x78a40020  lq          $a0, 0x20($a1)
    ctx->pc = 0x13df90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x13df94: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x13df94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x13df98: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x13df98u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x13df9c: 0x7d060010  sq          $a2, 0x10($t0)
    ctx->pc = 0x13df9cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 6));
    // 0x13dfa0: 0x7d040020  sq          $a0, 0x20($t0)
    ctx->pc = 0x13dfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 4));
    // 0x13dfa4: 0x7d030030  sq          $v1, 0x30($t0)
    ctx->pc = 0x13dfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 48), GPR_VEC(ctx, 3));
    // 0x13dfa8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13dfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13dfac: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x13dfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13dfb0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x13dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13dfb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13dfb8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13dfbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13dfc0: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x13DFC0u;
    {
        const bool branch_taken_0x13dfc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DFC0u;
        // 0x13dfc4: 0x245000c0  addiu       $s0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dfc0) {
            ctx->pc = 0x13E060u;
            goto label_13e060;
        }
    }
    ctx->pc = 0x13DFC8u;
    // 0x13dfc8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DFC8u;
    {
        const bool branch_taken_0x13dfc8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x13DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DFC8u;
        // 0x13dfcc: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dfc8) {
            ctx->pc = 0x13DFDCu;
            goto label_13dfdc;
        }
    }
    ctx->pc = 0x13DFD0u;
    // 0x13dfd0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x13dfd0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13dfd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13DFD4u;
    {
        const bool branch_taken_0x13dfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DFD4u;
        // 0x13dfd8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dfd4) {
            ctx->pc = 0x13DFF4u;
            goto label_13dff4;
        }
    }
    ctx->pc = 0x13DFDCu;
label_13dfdc:
    // 0x13dfdc: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x13dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x13dfe0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13dfe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13dfe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13dfe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13dfe8: 0x0  nop
    ctx->pc = 0x13dfe8u;
    // NOP
    // 0x13dfec: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x13dfecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x13dff0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x13dff0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_13dff4:
    // 0x13dff4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x13dff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13dff8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x13dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x13dffc: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x13dffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x13e000: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x13e000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x13e004: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13e004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13e008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e00c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x13e00cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x13e010: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x13e010u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x13e014: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13e014u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13e018: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x13E018u;
    {
        const bool branch_taken_0x13e018 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13e018) {
            ctx->pc = 0x13E030u;
            goto label_13e030;
        }
    }
    ctx->pc = 0x13E020u;
    // 0x13e020: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13e020u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13e024: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x13e024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13e028: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13E028u;
    {
        const bool branch_taken_0x13e028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E028u;
        // 0x13e02c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e028) {
            ctx->pc = 0x13E04Cu;
            goto label_13e04c;
        }
    }
    ctx->pc = 0x13E030u;
label_13e030:
    // 0x13e030: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13e030u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13e034: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13e034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x13e038: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13e038u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13e03c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x13e03cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13e040: 0x0  nop
    ctx->pc = 0x13e040u;
    // NOP
    // 0x13e044: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x13e044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x13e048: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13e048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e04c:
    // 0x13e04c: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x13E04Cu;
    SET_GPR_U32(ctx, 31, 0x13E054u);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x13E04Cu, 0x13E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E054u;
label_13e054:
    // 0x13e054: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13E054u;
    {
        const bool branch_taken_0x13e054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e054) {
            ctx->pc = 0x13E068u;
            goto label_13e068;
        }
    }
    ctx->pc = 0x13E05Cu;
    // 0x13e05c: 0x0  nop
    ctx->pc = 0x13e05cu;
    // NOP
label_13e060:
    // 0x13e060: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13e060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e064: 0x0  nop
    ctx->pc = 0x13e064u;
    // NOP
label_13e068:
    // 0x13e068: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x13e068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x13e06c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e070: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x13e070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x13e074: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13e074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13e078: 0xa2020049  sb          $v0, 0x49($s0)
    ctx->pc = 0x13e078u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 2));
    // 0x13e07c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13e080: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x13e080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x13e084: 0x97a2002e  lhu         $v0, 0x2E($sp)
    ctx->pc = 0x13e084u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 46)));
    // 0x13e088: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x13e088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x13e08c: 0xa2000048  sb          $zero, 0x48($s0)
    ctx->pc = 0x13e08cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x13e090: 0x87a30028  lh          $v1, 0x28($sp)
    ctx->pc = 0x13e090u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13e094: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13e094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13e098: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x13e098u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13e09c: 0x0  nop
    ctx->pc = 0x13e09cu;
    // NOP
    // 0x13e0a0: 0x0  nop
    ctx->pc = 0x13e0a0u;
    // NOP
    // 0x13e0a4: 0x1012  mflo        $v0
    ctx->pc = 0x13e0a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x13e0a8: 0xa602004a  sh          $v0, 0x4A($s0)
    ctx->pc = 0x13e0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 74), (uint16_t)GPR_U32(ctx, 2));
    // 0x13e0ac: 0x87a3002a  lh          $v1, 0x2A($sp)
    ctx->pc = 0x13e0acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 42)));
    // 0x13e0b0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13e0b4: 0x7062001a  div1        $zero, $v1, $v0
    ctx->pc = 0x13e0b4u;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 3); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x13e0b8: 0x0  nop
    ctx->pc = 0x13e0b8u;
    // NOP
    // 0x13e0bc: 0x0  nop
    ctx->pc = 0x13e0bcu;
    // NOP
    // 0x13e0c0: 0x70001012  mflo1       $v0
    ctx->pc = 0x13e0c0u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x13e0c4: 0xa602004c  sh          $v0, 0x4C($s0)
    ctx->pc = 0x13e0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 2));
    // 0x13e0c8: 0x87a3002c  lh          $v1, 0x2C($sp)
    ctx->pc = 0x13e0c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13e0cc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13e0d0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x13e0d0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13e0d4: 0x0  nop
    ctx->pc = 0x13e0d4u;
    // NOP
    // 0x13e0d8: 0x0  nop
    ctx->pc = 0x13e0d8u;
    // NOP
    // 0x13e0dc: 0x1012  mflo        $v0
    ctx->pc = 0x13e0dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x13e0e0: 0xa602004e  sh          $v0, 0x4E($s0)
    ctx->pc = 0x13e0e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 2));
    // 0x13e0e4: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x13e0e4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e0e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13e0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e0ec: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x13e0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13e0f0: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x13e0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13e0f4: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x13e0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x13e0f8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x13e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13e0fc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x13e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13e100: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x13e100u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
    // 0x13e104: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13e104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e108: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x13e108u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13e10c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13e10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13e110: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x13e110u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x13e114: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x13e114u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e118: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x13e118u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x13e11c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13e11cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e120: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13e120u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e124: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13e124u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13e128: 0xfa030000  sqc2        $vf3, 0x0($s0)
    ctx->pc = 0x13e128u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13e12c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13e130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13e130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13e134: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13e134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13e138: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E138u;
    {
        const bool branch_taken_0x13e138 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x13E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E138u;
        // 0x13e13c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e138) {
            ctx->pc = 0x13E14Cu;
            goto label_13e14c;
        }
    }
    ctx->pc = 0x13E140u;
    // 0x13e140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e144: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13E144u;
    {
        const bool branch_taken_0x13e144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E144u;
        // 0x13e148: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e144) {
            ctx->pc = 0x13E164u;
            goto label_13e164;
        }
    }
    ctx->pc = 0x13E14Cu;
label_13e14c:
    // 0x13e14c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13e14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13e150: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13e150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13e154: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13e154u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e158: 0x0  nop
    ctx->pc = 0x13e158u;
    // NOP
    // 0x13e15c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13e15cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13e160: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x13e160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_13e164:
    // 0x13e164: 0x0  nop
    ctx->pc = 0x13e164u;
    // NOP
    // 0x13e168: 0x0  nop
    ctx->pc = 0x13e168u;
    // NOP
    // 0x13e16c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x13e16cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13e170: 0x0  nop
    ctx->pc = 0x13e170u;
    // NOP
    // 0x13e174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e178: 0xc0414dc  jal         func_105370
    ctx->pc = 0x13E178u;
    SET_GPR_U32(ctx, 31, 0x13E180u);
    ctx->pc = 0x13E17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E178u;
    // 0x13e17c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x13E178u, 0x13E180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E180u;
label_13e180:
    // 0x13e180: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13e180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e184: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13e184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e18c: 0x3e00008  jr          $ra
    ctx->pc = 0x13E18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E18Cu;
        // 0x13e190: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E194u;
}

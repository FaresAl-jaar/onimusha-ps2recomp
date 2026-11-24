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

// Function: sub_0038AE60
// Address: 0x38ae60 - 0x38b1cc
void sub_0038AE60_0x38ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038AE60_0x38ae60");
#endif

    switch (ctx->pc) {
        case 0x38afc0u: goto label_38afc0;
        case 0x38afdcu: goto label_38afdc;
        case 0x38afecu: goto label_38afec;
        case 0x38b038u: goto label_38b038;
        case 0x38b090u: goto label_38b090;
        case 0x38b120u: goto label_38b120;
        case 0x38b18cu: goto label_38b18c;
        default: break;
    }

    ctx->pc = 0x38ae60u;

    // 0x38ae60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38ae60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x38ae64: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x38ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x38ae68: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38ae68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x38ae6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38ae6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38ae70: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x38ae70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x38ae74: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x38ae74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x38ae78: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x38ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x38ae7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38ae7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x38ae80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38ae80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38ae84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38ae84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38ae88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38ae88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38ae8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38ae8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38ae90: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x38ae90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38ae94: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38ae94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38ae98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38ae98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38ae9c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38AE9Cu;
    {
        const bool branch_taken_0x38ae9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AE9Cu;
        // 0x38aea0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ae9c) {
            ctx->pc = 0x38AEB4u;
            goto label_38aeb4;
        }
    }
    ctx->pc = 0x38AEA4u;
    // 0x38aea4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38aea4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38aea8: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x38aea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x38aeac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38AEACu;
    {
        const bool branch_taken_0x38aeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEACu;
        // 0x38aeb0: 0x3c0340c0  lui         $v1, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aeac) {
            ctx->pc = 0x38AED0u;
            goto label_38aed0;
        }
    }
    ctx->pc = 0x38AEB4u;
label_38aeb4:
    // 0x38aeb4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38aeb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38aeb8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38aebc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38aebcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38aec0: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x38aec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x38aec4: 0x0  nop
    ctx->pc = 0x38aec4u;
    // NOP
    // 0x38aec8: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x38aec8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x38aecc: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x38aeccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
label_38aed0:
    // 0x38aed0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x38aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x38aed4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38aed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38aed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38aed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38aedc: 0x0  nop
    ctx->pc = 0x38aedcu;
    // NOP
    // 0x38aee0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38aee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38aee4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38aee4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38aee8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38AEE8u;
    {
        const bool branch_taken_0x38aee8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38aee8) {
            ctx->pc = 0x38AF00u;
            goto label_38af00;
        }
    }
    ctx->pc = 0x38AEF0u;
    // 0x38aef0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38aef0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38aef4: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x38aef4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x38aef8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38AEF8u;
    {
        const bool branch_taken_0x38aef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEF8u;
        // 0x38aefc: 0x3c033e4c  lui         $v1, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aef8) {
            ctx->pc = 0x38AF1Cu;
            goto label_38af1c;
        }
    }
    ctx->pc = 0x38AF00u;
label_38af00:
    // 0x38af00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38af00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38af04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38af04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38af08: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38af08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38af0c: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x38af0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x38af10: 0x0  nop
    ctx->pc = 0x38af10u;
    // NOP
    // 0x38af14: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x38af14u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x38af18: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x38af18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_38af1c:
    // 0x38af1c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x38af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x38af20: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x38af20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x38af24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38af24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38af28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38af28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38af2c: 0x0  nop
    ctx->pc = 0x38af2cu;
    // NOP
    // 0x38af30: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38af30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38af34: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38af34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38af38: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38AF38u;
    {
        const bool branch_taken_0x38af38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38af38) {
            ctx->pc = 0x38AF50u;
            goto label_38af50;
        }
    }
    ctx->pc = 0x38AF40u;
    // 0x38af40: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38af40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38af44: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x38af44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x38af48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38AF48u;
    {
        const bool branch_taken_0x38af48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF48u;
        // 0x38af4c: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38af48) {
            ctx->pc = 0x38AF6Cu;
            goto label_38af6c;
        }
    }
    ctx->pc = 0x38AF50u;
label_38af50:
    // 0x38af50: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38af50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38af54: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38af54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38af58: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38af58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38af5c: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x38af5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x38af60: 0x0  nop
    ctx->pc = 0x38af60u;
    // NOP
    // 0x38af64: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x38af64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x38af68: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x38af68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_38af6c:
    // 0x38af6c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x38af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x38af70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38af70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38af74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38af74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38af78: 0x0  nop
    ctx->pc = 0x38af78u;
    // NOP
    // 0x38af7c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x38af7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x38af80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x38af80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38af84: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x38AF84u;
    {
        const bool branch_taken_0x38af84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38af84) {
            ctx->pc = 0x38AF9Cu;
            goto label_38af9c;
        }
    }
    ctx->pc = 0x38AF8Cu;
    // 0x38af8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38af8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38af90: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x38af90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x38af94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38AF94u;
    {
        const bool branch_taken_0x38af94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF94u;
        // 0x38af98: 0x86b000c2  lh          $s0, 0xC2($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 194)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38af94) {
            ctx->pc = 0x38AFB8u;
            goto label_38afb8;
        }
    }
    ctx->pc = 0x38AF9Cu;
label_38af9c:
    // 0x38af9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x38af9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x38afa0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38afa4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38afa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x38afa8: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x38afa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x38afac: 0x0  nop
    ctx->pc = 0x38afacu;
    // NOP
    // 0x38afb0: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x38afb0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x38afb4: 0x86b000c2  lh          $s0, 0xC2($s5)
    ctx->pc = 0x38afb4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 194)));
label_38afb8:
    // 0x38afb8: 0xc0e2d08  jal         func_38B420
    ctx->pc = 0x38AFB8u;
    SET_GPR_U32(ctx, 31, 0x38AFC0u);
    ctx->pc = 0x38AFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AFB8u;
    // 0x38afbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x38AFB8u, 0x38AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AFC0u;
label_38afc0:
    // 0x38afc0: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x38afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x38afc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38afc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38afc8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x38afc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x38afcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x38afccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38afd0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x38afd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38afd4: 0xc0e2cd4  jal         func_38B350
    ctx->pc = 0x38AFD4u;
    SET_GPR_U32(ctx, 31, 0x38AFDCu);
    ctx->pc = 0x38AFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AFD4u;
    // 0x38afd8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B350u, 0x38AFD4u, 0x38AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AFDCu;
label_38afdc:
    // 0x38afdc: 0xa6a200c2  sh          $v0, 0xC2($s5)
    ctx->pc = 0x38afdcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x38afe0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x38afe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38afe4: 0xc0e2df4  jal         func_38B7D0
    ctx->pc = 0x38AFE4u;
    SET_GPR_U32(ctx, 31, 0x38AFECu);
    ctx->pc = 0x38AFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AFE4u;
    // 0x38afe8: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B7D0u, 0x38AFE4u, 0x38AFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AFECu;
label_38afec:
    // 0x38afec: 0x92a30119  lbu         $v1, 0x119($s5)
    ctx->pc = 0x38afecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 281)));
    // 0x38aff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38aff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aff4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38aff8: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x38AFF8u;
    {
        const bool branch_taken_0x38aff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38aff8) {
            ctx->pc = 0x38B110u;
            goto label_38b110;
        }
    }
    ctx->pc = 0x38B000u;
    // 0x38b000: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38b004: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x38B004u;
    {
        const bool branch_taken_0x38b004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B004u;
        // 0x38b008: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b004) {
            ctx->pc = 0x38B080u;
            goto label_38b080;
        }
    }
    ctx->pc = 0x38B00Cu;
    // 0x38b00c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x38B00Cu;
    {
        const bool branch_taken_0x38b00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38b00c) {
            ctx->pc = 0x38B050u;
            goto label_38b050;
        }
    }
    ctx->pc = 0x38B014u;
    // 0x38b014: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38B014u;
    {
        const bool branch_taken_0x38b014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b014) {
            ctx->pc = 0x38B028u;
            goto label_38b028;
        }
    }
    ctx->pc = 0x38B01Cu;
    // 0x38b01c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x38B01Cu;
    {
        const bool branch_taken_0x38b01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b01c) {
            ctx->pc = 0x38B1A0u;
            goto label_38b1a0;
        }
    }
    ctx->pc = 0x38B024u;
    // 0x38b024: 0x0  nop
    ctx->pc = 0x38b024u;
    // NOP
label_38b028:
    // 0x38b028: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x38b028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x38b02c: 0x24050f20  addiu       $a1, $zero, 0xF20
    ctx->pc = 0x38b02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3872));
    // 0x38b030: 0xc0d165c  jal         func_345970
    ctx->pc = 0x38B030u;
    SET_GPR_U32(ctx, 31, 0x38B038u);
    ctx->pc = 0x38B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B030u;
    // 0x38b034: 0x24060440  addiu       $a2, $zero, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345970u, 0x38B030u, 0x38B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B038u;
label_38b038:
    // 0x38b038: 0x92a20119  lbu         $v0, 0x119($s5)
    ctx->pc = 0x38b038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 281)));
    // 0x38b03c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38b040: 0xa2a20119  sb          $v0, 0x119($s5)
    ctx->pc = 0x38b040u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 281), (uint8_t)GPR_U32(ctx, 2));
    // 0x38b044: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x38B044u;
    {
        const bool branch_taken_0x38b044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B044u;
        // 0x38b048: 0xa6b42ac8  sh          $s4, 0x2AC8($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 10952), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b044) {
            ctx->pc = 0x38B1A0u;
            goto label_38b1a0;
        }
    }
    ctx->pc = 0x38B04Cu;
    // 0x38b04c: 0x0  nop
    ctx->pc = 0x38b04cu;
    // NOP
label_38b050:
    // 0x38b050: 0x86a22ac8  lh          $v0, 0x2AC8($s5)
    ctx->pc = 0x38b050u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10952)));
    // 0x38b054: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38b054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38b058: 0xa6a22ac8  sh          $v0, 0x2AC8($s5)
    ctx->pc = 0x38b058u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 10952), (uint16_t)GPR_U32(ctx, 2));
    // 0x38b05c: 0x86a22ac8  lh          $v0, 0x2AC8($s5)
    ctx->pc = 0x38b05cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10952)));
    // 0x38b060: 0x1c40004f  bgtz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x38B060u;
    {
        const bool branch_taken_0x38b060 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x38b060) {
            ctx->pc = 0x38B1A0u;
            goto label_38b1a0;
        }
    }
    ctx->pc = 0x38B068u;
    // 0x38b068: 0xa6b32ac8  sh          $s3, 0x2AC8($s5)
    ctx->pc = 0x38b068u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 10952), (uint16_t)GPR_U32(ctx, 19));
    // 0x38b06c: 0xa6b22aca  sh          $s2, 0x2ACA($s5)
    ctx->pc = 0x38b06cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 10954), (uint16_t)GPR_U32(ctx, 18));
    // 0x38b070: 0x92a20119  lbu         $v0, 0x119($s5)
    ctx->pc = 0x38b070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 281)));
    // 0x38b074: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38b074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38b078: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x38B078u;
    {
        const bool branch_taken_0x38b078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B078u;
        // 0x38b07c: 0xa2a20119  sb          $v0, 0x119($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 281), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b078) {
            ctx->pc = 0x38B1A0u;
            goto label_38b1a0;
        }
    }
    ctx->pc = 0x38B080u;
label_38b080:
    // 0x38b080: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x38b080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x38b084: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38b084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38b088: 0xc0d051c  jal         func_341470
    ctx->pc = 0x38B088u;
    SET_GPR_U32(ctx, 31, 0x38B090u);
    ctx->pc = 0x38B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B088u;
    // 0x38b08c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341470u, 0x38B088u, 0x38B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B090u;
label_38b090:
    // 0x38b090: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38B090u;
    {
        const bool branch_taken_0x38b090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b090) {
            ctx->pc = 0x38B0A0u;
            goto label_38b0a0;
        }
    }
    ctx->pc = 0x38B098u;
    // 0x38b098: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x38B098u;
    {
        const bool branch_taken_0x38b098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B098u;
        // 0x38b09c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b098) {
            ctx->pc = 0x38B1A8u;
            goto label_38b1a8;
        }
    }
    ctx->pc = 0x38B0A0u;
label_38b0a0:
    // 0x38b0a0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x38B0A0u;
    {
        const bool branch_taken_0x38b0a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b0a0) {
            ctx->pc = 0x38B0D8u;
            goto label_38b0d8;
        }
    }
    ctx->pc = 0x38B0A8u;
    // 0x38b0a8: 0x86a22aca  lh          $v0, 0x2ACA($s5)
    ctx->pc = 0x38b0a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10954)));
    // 0x38b0ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38b0b0: 0xa6a22aca  sh          $v0, 0x2ACA($s5)
    ctx->pc = 0x38b0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 10954), (uint16_t)GPR_U32(ctx, 2));
    // 0x38b0b4: 0x86a22aca  lh          $v0, 0x2ACA($s5)
    ctx->pc = 0x38b0b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10954)));
    // 0x38b0b8: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38B0B8u;
    {
        const bool branch_taken_0x38b0b8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x38b0b8) {
            ctx->pc = 0x38B0E0u;
            goto label_38b0e0;
        }
    }
    ctx->pc = 0x38B0C0u;
    // 0x38b0c0: 0x92a20119  lbu         $v0, 0x119($s5)
    ctx->pc = 0x38b0c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 281)));
    // 0x38b0c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38b0c8: 0xa2a20119  sb          $v0, 0x119($s5)
    ctx->pc = 0x38b0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 281), (uint8_t)GPR_U32(ctx, 2));
    // 0x38b0cc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x38B0CCu;
    {
        const bool branch_taken_0x38b0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B0CCu;
        // 0x38b0d0: 0xa6b12ac8  sh          $s1, 0x2AC8($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 10952), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b0cc) {
            ctx->pc = 0x38B1A0u;
            goto label_38b1a0;
        }
    }
    ctx->pc = 0x38B0D4u;
    // 0x38b0d4: 0x0  nop
    ctx->pc = 0x38b0d4u;
    // NOP
label_38b0d8:
    // 0x38b0d8: 0xa6b22aca  sh          $s2, 0x2ACA($s5)
    ctx->pc = 0x38b0d8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 10954), (uint16_t)GPR_U32(ctx, 18));
    // 0x38b0dc: 0x0  nop
    ctx->pc = 0x38b0dcu;
    // NOP
label_38b0e0:
    // 0x38b0e0: 0x86a22ac8  lh          $v0, 0x2AC8($s5)
    ctx->pc = 0x38b0e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10952)));
    // 0x38b0e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38b0e8: 0xa6a22ac8  sh          $v0, 0x2AC8($s5)
    ctx->pc = 0x38b0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 10952), (uint16_t)GPR_U32(ctx, 2));
    // 0x38b0ec: 0x86a22ac8  lh          $v0, 0x2AC8($s5)
    ctx->pc = 0x38b0ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10952)));
    // 0x38b0f0: 0x1c40002b  bgtz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x38B0F0u;
    {
        const bool branch_taken_0x38b0f0 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x38b0f0) {
            ctx->pc = 0x38B1A0u;
            goto label_38b1a0;
        }
    }
    ctx->pc = 0x38B0F8u;
    // 0x38b0f8: 0x92a20119  lbu         $v0, 0x119($s5)
    ctx->pc = 0x38b0f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 281)));
    // 0x38b0fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38b0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38b100: 0xa2a20119  sb          $v0, 0x119($s5)
    ctx->pc = 0x38b100u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 281), (uint8_t)GPR_U32(ctx, 2));
    // 0x38b104: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x38B104u;
    {
        const bool branch_taken_0x38b104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B104u;
        // 0x38b108: 0xa6b12ac8  sh          $s1, 0x2AC8($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 10952), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b104) {
            ctx->pc = 0x38B1A0u;
            goto label_38b1a0;
        }
    }
    ctx->pc = 0x38B10Cu;
    // 0x38b10c: 0x0  nop
    ctx->pc = 0x38b10cu;
    // NOP
label_38b110:
    // 0x38b110: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x38b110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x38b114: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38b114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38b118: 0xc0d051c  jal         func_341470
    ctx->pc = 0x38B118u;
    SET_GPR_U32(ctx, 31, 0x38B120u);
    ctx->pc = 0x38B11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B118u;
    // 0x38b11c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341470u, 0x38B118u, 0x38B120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B120u;
label_38b120:
    // 0x38b120: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38B120u;
    {
        const bool branch_taken_0x38b120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b120) {
            ctx->pc = 0x38B130u;
            goto label_38b130;
        }
    }
    ctx->pc = 0x38B128u;
    // 0x38b128: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x38B128u;
    {
        const bool branch_taken_0x38b128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B128u;
        // 0x38b12c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b128) {
            ctx->pc = 0x38B1A8u;
            goto label_38b1a8;
        }
    }
    ctx->pc = 0x38B130u;
label_38b130:
    // 0x38b130: 0x86a32ac8  lh          $v1, 0x2AC8($s5)
    ctx->pc = 0x38b130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10952)));
    // 0x38b134: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x38b134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x38b138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38b138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38b13c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x38b13cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38b140: 0x0  nop
    ctx->pc = 0x38b140u;
    // NOP
    // 0x38b144: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x38b144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x38b148: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x38b148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x38b14c: 0xa6a22ac8  sh          $v0, 0x2AC8($s5)
    ctx->pc = 0x38b14cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 10952), (uint16_t)GPR_U32(ctx, 2));
    // 0x38b150: 0x86a22ac8  lh          $v0, 0x2AC8($s5)
    ctx->pc = 0x38b150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10952)));
    // 0x38b154: 0x8ea4004c  lw          $a0, 0x4C($s5)
    ctx->pc = 0x38b154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x38b158: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x38b158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x38b15c: 0x0  nop
    ctx->pc = 0x38b15cu;
    // NOP
    // 0x38b160: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x38b160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x38b164: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x38b164u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x38b168: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x38b168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x38b16c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38b16cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x38b170: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x38b170u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x38b174: 0x0  nop
    ctx->pc = 0x38b174u;
    // NOP
    // 0x38b178: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38b178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x38b17c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38b17cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38b180: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38b180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x38b184: 0xc0a85ec  jal         func_2A17B0
    ctx->pc = 0x38B184u;
    SET_GPR_U32(ctx, 31, 0x38B18Cu);
    ctx->pc = 0x38B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B184u;
    // 0x38b188: 0x34450064  ori         $a1, $v0, 0x64 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A17B0u, 0x38B184u, 0x38B18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B18Cu;
label_38b18c:
    // 0x38b18c: 0x86a22ac8  lh          $v0, 0x2AC8($s5)
    ctx->pc = 0x38b18cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10952)));
    // 0x38b190: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38B190u;
    {
        const bool branch_taken_0x38b190 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x38B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B190u;
        // 0x38b194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b190) {
            ctx->pc = 0x38B1A0u;
            goto label_38b1a0;
        }
    }
    ctx->pc = 0x38B198u;
    // 0x38b198: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38B198u;
    {
        const bool branch_taken_0x38b198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b198) {
            ctx->pc = 0x38B1A8u;
            goto label_38b1a8;
        }
    }
    ctx->pc = 0x38B1A0u;
label_38b1a0:
    // 0x38b1a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38b1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b1a4: 0x0  nop
    ctx->pc = 0x38b1a4u;
    // NOP
label_38b1a8:
    // 0x38b1a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38b1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38b1ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x38b1acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38b1b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x38b1b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38b1b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38b1b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38b1b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38b1b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38b1bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38b1bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b1c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38b1c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x38B1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B1C4u;
        // 0x38b1c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B1CCu;
}

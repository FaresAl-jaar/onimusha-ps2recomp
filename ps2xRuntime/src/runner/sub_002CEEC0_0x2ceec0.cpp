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

// Function: sub_002CEEC0
// Address: 0x2ceec0 - 0x2cf0e4
void sub_002CEEC0_0x2ceec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEEC0_0x2ceec0");
#endif

    switch (ctx->pc) {
        case 0x2ceef8u: goto label_2ceef8;
        case 0x2ceff8u: goto label_2ceff8;
        case 0x2cf038u: goto label_2cf038;
        case 0x2cf084u: goto label_2cf084;
        default: break;
    }

    ctx->pc = 0x2ceec0u;

    // 0x2ceec0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ceec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ceec4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ceec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ceec8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ceec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2ceecc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ceeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ceed0: 0x30b700ff  andi        $s7, $a1, 0xFF
    ctx->pc = 0x2ceed0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ceed4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ceed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ceed8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2ceed8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceedc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ceedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ceee0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ceee0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceee4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ceee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ceee8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ceee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ceeec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ceeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ceef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ceef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ceef4: 0x0  nop
    ctx->pc = 0x2ceef4u;
    // NOP
label_2ceef8:
    // 0x2ceef8: 0x2b61821  addu        $v1, $s5, $s6
    ctx->pc = 0x2ceef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x2ceefc: 0x906a2b5c  lbu         $t2, 0x2B5C($v1)
    ctx->pc = 0x2ceefcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11100)));
    // 0x2cef00: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2cef00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2cef04: 0x26c60004  addiu       $a2, $s6, 0x4
    ctx->pc = 0x2cef04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x2cef08: 0x24a55a30  addiu       $a1, $a1, 0x5A30
    ctx->pc = 0x2cef08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23088));
    // 0x2cef0c: 0x2a62021  addu        $a0, $s5, $a2
    ctx->pc = 0x2cef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x2cef10: 0x90882b5c  lbu         $t0, 0x2B5C($a0)
    ctx->pc = 0x2cef10u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11100)));
    // 0x2cef14: 0x161840  sll         $v1, $s6, 1
    ctx->pc = 0x2cef14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x2cef18: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2cef18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cef1c: 0x94690000  lhu         $t1, 0x0($v1)
    ctx->pc = 0x2cef1cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cef20: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2cef20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2cef24: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2cef24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cef28: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x2cef28u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cef2c: 0x1494818  mult        $t1, $t2, $t1
    ctx->pc = 0x2cef2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2cef30: 0x26c30008  addiu       $v1, $s6, 0x8
    ctx->pc = 0x2cef30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2cef34: 0x71073818  mult1       $a3, $t0, $a3
    ctx->pc = 0x2cef34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2cef38: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x2cef38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2cef3c: 0x94021  addu        $t0, $zero, $t1
    ctx->pc = 0x2cef3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x2cef40: 0x90862b5c  lbu         $a2, 0x2B5C($a0)
    ctx->pc = 0x2cef40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11100)));
    // 0x2cef44: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2cef44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2cef48: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2cef48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cef4c: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x2cef4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2cef50: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x2cef50u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cef54: 0x92a40002  lbu         $a0, 0x2($s5)
    ctx->pc = 0x2cef54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x2cef58: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x2cef58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2cef5c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2cef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2cef60: 0x24635a20  addiu       $v1, $v1, 0x5A20
    ctx->pc = 0x2cef60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23072));
    // 0x2cef64: 0x2484ff94  addiu       $a0, $a0, -0x6C
    ctx->pc = 0x2cef64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967188));
    // 0x2cef68: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x2cef68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2cef6c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2cef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2cef70: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x2cef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x2cef74: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2cef74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cef78: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CEF78u;
    {
        const bool branch_taken_0x2cef78 = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x2CEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF78u;
        // 0x2cef7c: 0x642821  addu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef78) {
            ctx->pc = 0x2CEF8Cu;
            goto label_2cef8c;
        }
    }
    ctx->pc = 0x2CEF80u;
    // 0x2cef80: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2cef80u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cef84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CEF84u;
    {
        const bool branch_taken_0x2cef84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEF84u;
        // 0x2cef88: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef84) {
            ctx->pc = 0x2CEFA8u;
            goto label_2cefa8;
        }
    }
    ctx->pc = 0x2CEF8Cu;
label_2cef8c:
    // 0x2cef8c: 0x82042  srl         $a0, $t0, 1
    ctx->pc = 0x2cef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x2cef90: 0x31030001  andi        $v1, $t0, 0x1
    ctx->pc = 0x2cef90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x2cef94: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2cef94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2cef98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2cef98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cef9c: 0x0  nop
    ctx->pc = 0x2cef9cu;
    // NOP
    // 0x2cefa0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2cefa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2cefa4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2cefa4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2cefa8:
    // 0x2cefa8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2cefa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cefac: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2cefacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2cefb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cefb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cefb4: 0x0  nop
    ctx->pc = 0x2cefb4u;
    // NOP
    // 0x2cefb8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2cefb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2cefbc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cefbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cefc0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CEFC0u;
    {
        const bool branch_taken_0x2cefc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cefc0) {
            ctx->pc = 0x2CEFD8u;
            goto label_2cefd8;
        }
    }
    ctx->pc = 0x2CEFC8u;
    // 0x2cefc8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cefc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cefcc: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x2cefccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x2cefd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CEFD0u;
    {
        const bool branch_taken_0x2cefd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEFD0u;
        // 0x2cefd4: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cefd0) {
            ctx->pc = 0x2CEFF4u;
            goto label_2ceff4;
        }
    }
    ctx->pc = 0x2CEFD8u;
label_2cefd8:
    // 0x2cefd8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cefd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cefdc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2cefdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2cefe0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cefe0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cefe4: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x2cefe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x2cefe8: 0x0  nop
    ctx->pc = 0x2cefe8u;
    // NOP
    // 0x2cefec: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x2cefecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x2ceff0: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x2ceff0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ceff4:
    // 0x2ceff4: 0x26d10008  addiu       $s1, $s6, 0x8
    ctx->pc = 0x2ceff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_2ceff8:
    // 0x2ceff8: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2ceff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2ceffc: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x2ceffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2cf000: 0x24635a30  addiu       $v1, $v1, 0x5A30
    ctx->pc = 0x2cf000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23088));
    // 0x2cf004: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cf004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf008: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2cf008u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf00c: 0x203001b  divu        $zero, $s0, $v1
    ctx->pc = 0x2cf00cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x2cf010: 0x0  nop
    ctx->pc = 0x2cf010u;
    // NOP
    // 0x2cf014: 0x0  nop
    ctx->pc = 0x2cf014u;
    // NOP
    // 0x2cf018: 0x9812  mflo        $s3
    ctx->pc = 0x2cf018u;
    SET_GPR_U64(ctx, 19, ctx->lo);
    // 0x2cf01c: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x2cf01cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cf020: 0x1a60001d  blez        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CF020u;
    {
        const bool branch_taken_0x2cf020 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x2CF024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF020u;
        // 0x2cf024: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf020) {
            ctx->pc = 0x2CF098u;
            goto label_2cf098;
        }
    }
    ctx->pc = 0x2CF028u;
    // 0x2cf028: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x2cf028u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2cf02c: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CF02Cu;
    {
        const bool branch_taken_0x2cf02c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF02Cu;
        // 0x2cf030: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf02c) {
            ctx->pc = 0x2CF098u;
            goto label_2cf098;
        }
    }
    ctx->pc = 0x2CF034u;
    // 0x2cf034: 0x0  nop
    ctx->pc = 0x2cf034u;
    // NOP
label_2cf038:
    // 0x2cf038: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2cf038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2cf03c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2cf03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2cf040: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x2cf040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2cf044: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x2cf044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2cf048: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2cf048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cf04c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2cf04cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cf050: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cf050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cf054: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2cf054u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2cf058: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x2cf058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x2cf05c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2cf05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2cf060: 0x92a508e8  lbu         $a1, 0x8E8($s5)
    ctx->pc = 0x2cf060u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2280)));
    // 0x2cf064: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x2cf064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2cf068: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2cf068u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2cf06c: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x2cf06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x2cf070: 0x24420294  addiu       $v0, $v0, 0x294
    ctx->pc = 0x2cf070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 660));
    // 0x2cf074: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2cf074u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cf078: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2cf078u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2cf07c: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x2CF07Cu;
    SET_GPR_U32(ctx, 31, 0x2CF084u);
    ctx->pc = 0x2CF080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF07Cu;
    // 0x2cf080: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x2CF07Cu, 0x2CF084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF084u;
label_2cf084:
    // 0x2cf084: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2cf084u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2cf088: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x2cf088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2cf08c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2CF08Cu;
    {
        const bool branch_taken_0x2cf08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf08c) {
            ctx->pc = 0x2CF038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf038;
        }
    }
    ctx->pc = 0x2CF094u;
    // 0x2cf094: 0x0  nop
    ctx->pc = 0x2cf094u;
    // NOP
label_2cf098:
    // 0x2cf098: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2cf098u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2cf09c: 0x681ffd6  bgez        $s4, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2CF09Cu;
    {
        const bool branch_taken_0x2cf09c = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x2CF0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF09Cu;
        // 0x2cf0a0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf09c) {
            ctx->pc = 0x2CEFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ceff8;
        }
    }
    ctx->pc = 0x2CF0A4u;
    // 0x2cf0a4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2cf0a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2cf0a8: 0x2ac30004  slti        $v1, $s6, 0x4
    ctx->pc = 0x2cf0a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2cf0ac: 0x1460ff92  bnez        $v1, . + 4 + (-0x6E << 2)
    ctx->pc = 0x2CF0ACu;
    {
        const bool branch_taken_0x2cf0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0ACu;
        // 0x2cf0b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf0ac) {
            ctx->pc = 0x2CEEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ceef8;
        }
    }
    ctx->pc = 0x2CF0B4u;
    // 0x2cf0b4: 0xa2a32b5b  sb          $v1, 0x2B5B($s5)
    ctx->pc = 0x2cf0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 11099), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cf0b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2cf0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cf0bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2cf0bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cf0c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2cf0c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cf0c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2cf0c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cf0c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cf0c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cf0cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cf0ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cf0d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cf0d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf0d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cf0d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf0d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF0DCu;
        // 0x2cf0e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF0E4u;
}

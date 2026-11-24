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

// Function: sub_00341800
// Address: 0x341800 - 0x3419d8
void sub_00341800_0x341800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341800_0x341800");
#endif

    switch (ctx->pc) {
        case 0x341960u: goto label_341960;
        default: break;
    }

    ctx->pc = 0x341800u;

    // 0x341800: 0x83828b98  lb          $v0, -0x7468($gp)
    ctx->pc = 0x341800u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937496)));
    // 0x341804: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x341804u;
    {
        const bool branch_taken_0x341804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341804) {
            ctx->pc = 0x341948u;
            goto label_341948;
        }
    }
    ctx->pc = 0x34180Cu;
    // 0x34180c: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x34180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341810: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x341810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x341814: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x341814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x341818: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x341818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x34181c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x34181cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x341820: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x341820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x341824: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x341824u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x341828: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x341828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34182c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34182cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341830: 0x0  nop
    ctx->pc = 0x341830u;
    // NOP
    // 0x341834: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x341834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x341838: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x341838u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34183c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x34183Cu;
    {
        const bool branch_taken_0x34183c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34183c) {
            ctx->pc = 0x341854u;
            goto label_341854;
        }
    }
    ctx->pc = 0x341844u;
    // 0x341844: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341844u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x341848: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x341848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x34184c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34184Cu;
    {
        const bool branch_taken_0x34184c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34184Cu;
        // 0x341850: 0x3c0241a0  lui         $v0, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34184c) {
            ctx->pc = 0x341870u;
            goto label_341870;
        }
    }
    ctx->pc = 0x341854u;
label_341854:
    // 0x341854: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x341854u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341858: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x341858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x34185c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34185cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x341860: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x341860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x341864: 0x0  nop
    ctx->pc = 0x341864u;
    // NOP
    // 0x341868: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x341868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34186c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x34186cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_341870:
    // 0x341870: 0x3c010065  lui         $at, 0x65
    ctx->pc = 0x341870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)101 << 16));
    // 0x341874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341878: 0xa0237904  sb          $v1, 0x7904($at)
    ctx->pc = 0x341878u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x657904u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x657904u, _value); } while (0);
    // 0x34187c: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x34187cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x341880: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x341880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x341884: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x341884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x341888: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x341888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x34188c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34188cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x341890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341894: 0x0  nop
    ctx->pc = 0x341894u;
    // NOP
    // 0x341898: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x341898u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x34189c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34189cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3418a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3418A0u;
    {
        const bool branch_taken_0x3418a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3418a0) {
            ctx->pc = 0x3418B8u;
            goto label_3418b8;
        }
    }
    ctx->pc = 0x3418A8u;
    // 0x3418a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3418a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3418ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3418acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3418b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3418B0u;
    {
        const bool branch_taken_0x3418b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3418B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3418B0u;
        // 0x3418b4: 0x3c024234  lui         $v0, 0x4234 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3418b0) {
            ctx->pc = 0x3418D4u;
            goto label_3418d4;
        }
    }
    ctx->pc = 0x3418B8u;
label_3418b8:
    // 0x3418b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3418b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3418bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3418bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3418c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3418c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3418c4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3418c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3418c8: 0x0  nop
    ctx->pc = 0x3418c8u;
    // NOP
    // 0x3418cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3418ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3418d0: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x3418d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_3418d4:
    // 0x3418d4: 0x3c010065  lui         $at, 0x65
    ctx->pc = 0x3418d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)101 << 16));
    // 0x3418d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3418d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3418dc: 0xa023790a  sb          $v1, 0x790A($at)
    ctx->pc = 0x3418dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x65790Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x65790Au, _value); } while (0);
    // 0x3418e0: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x3418e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3418e4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3418e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3418e8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3418e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3418ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3418ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3418f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3418f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3418f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3418f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3418f8: 0x0  nop
    ctx->pc = 0x3418f8u;
    // NOP
    // 0x3418fc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3418fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x341900: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x341900u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341904: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x341904u;
    {
        const bool branch_taken_0x341904 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x341904) {
            ctx->pc = 0x34191Cu;
            goto label_34191c;
        }
    }
    ctx->pc = 0x34190Cu;
    // 0x34190c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34190cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x341910: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x341910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x341914: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x341914u;
    {
        const bool branch_taken_0x341914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341914) {
            ctx->pc = 0x341934u;
            goto label_341934;
        }
    }
    ctx->pc = 0x34191Cu;
label_34191c:
    // 0x34191c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34191cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341920: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x341920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x341924: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341924u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x341928: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x341928u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x34192c: 0x0  nop
    ctx->pc = 0x34192cu;
    // NOP
    // 0x341930: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x341930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_341934:
    // 0x341934: 0x3c010065  lui         $at, 0x65
    ctx->pc = 0x341934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)101 << 16));
    // 0x341938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x341938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34193c: 0xa0237910  sb          $v1, 0x7910($at)
    ctx->pc = 0x34193cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x657910u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x657910u, _value); } while (0);
    // 0x341940: 0xa3828b98  sb          $v0, -0x7468($gp)
    ctx->pc = 0x341940u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937496), (uint8_t)GPR_U32(ctx, 2));
    // 0x341944: 0x0  nop
    ctx->pc = 0x341944u;
    // NOP
label_341948:
    // 0x341948: 0x3c080065  lui         $t0, 0x65
    ctx->pc = 0x341948u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)101 << 16));
    // 0x34194c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34194cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341950: 0x25087900  addiu       $t0, $t0, 0x7900
    ctx->pc = 0x341950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30976));
    // 0x341954: 0x24a40100  addiu       $a0, $a1, 0x100
    ctx->pc = 0x341954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x341958: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x341958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34195c: 0x0  nop
    ctx->pc = 0x34195cu;
    // NOP
label_341960:
    // 0x341960: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x341960u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x341964: 0x14820014  bne         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x341964u;
    {
        const bool branch_taken_0x341964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x341964) {
            ctx->pc = 0x3419B8u;
            goto label_3419b8;
        }
    }
    ctx->pc = 0x34196Cu;
    // 0x34196c: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x34196cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x341970: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x341970u;
    {
        const bool branch_taken_0x341970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x341970) {
            ctx->pc = 0x341980u;
            goto label_341980;
        }
    }
    ctx->pc = 0x341978u;
    // 0x341978: 0x14c2000f  bne         $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x341978u;
    {
        const bool branch_taken_0x341978 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x341978) {
            ctx->pc = 0x3419B8u;
            goto label_3419b8;
        }
    }
    ctx->pc = 0x341980u;
label_341980:
    // 0x341980: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x341980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x341984: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x341984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x341988: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x341988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x34198c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x34198cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x341990: 0x24637904  addiu       $v1, $v1, 0x7904
    ctx->pc = 0x341990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30980));
    // 0x341994: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x341994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x341998: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x341998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34199c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x34199cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3419a0: 0x24427905  addiu       $v0, $v0, 0x7905
    ctx->pc = 0x3419a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30981));
    // 0x3419a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3419a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3419a8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3419a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x3419ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3419ACu;
    {
        const bool branch_taken_0x3419ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3419B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419ACu;
        // 0x3419b0: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3419ac) {
            ctx->pc = 0x3419D0u;
            goto label_3419d0;
        }
    }
    ctx->pc = 0x3419B4u;
    // 0x3419b4: 0x0  nop
    ctx->pc = 0x3419b4u;
    // NOP
label_3419b8:
    // 0x3419b8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3419b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3419bc: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x3419bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3419c0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3419C0u;
    {
        const bool branch_taken_0x3419c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3419C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419C0u;
        // 0x3419c4: 0x25080006  addiu       $t0, $t0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3419c0) {
            ctx->pc = 0x341960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341960;
        }
    }
    ctx->pc = 0x3419C8u;
    // 0x3419c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3419c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3419cc: 0x0  nop
    ctx->pc = 0x3419ccu;
    // NOP
label_3419d0:
    // 0x3419d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3419D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3419D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3419D8u;
}

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

// Function: sub_0031E720
// Address: 0x31e720 - 0x31e940
void sub_0031E720_0x31e720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E720_0x31e720");
#endif

    switch (ctx->pc) {
        case 0x31e8fcu: goto label_31e8fc;
        case 0x31e918u: goto label_31e918;
        case 0x31e92cu: goto label_31e92c;
        default: break;
    }

    ctx->pc = 0x31e720u;

    // 0x31e720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31e720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31e724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31e724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31e728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31e728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31e72c: 0x83838b48  lb          $v1, -0x74B8($gp)
    ctx->pc = 0x31e72cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937416)));
    // 0x31e730: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x31E730u;
    {
        const bool branch_taken_0x31e730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E730u;
        // 0x31e734: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e730) {
            ctx->pc = 0x31E7A0u;
            goto label_31e7a0;
        }
    }
    ctx->pc = 0x31E738u;
    // 0x31e738: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x31e738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e73c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x31e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x31e740: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x31e740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x31e744: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x31e744u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31e748: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x31e748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x31e74c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e74cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e750: 0x0  nop
    ctx->pc = 0x31e750u;
    // NOP
    // 0x31e754: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x31e754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x31e758: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31e758u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e75c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31E75Cu;
    {
        const bool branch_taken_0x31e75c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e75c) {
            ctx->pc = 0x31E774u;
            goto label_31e774;
        }
    }
    ctx->pc = 0x31E764u;
    // 0x31e764: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e764u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31e768: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31e768u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31e76c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31E76Cu;
    {
        const bool branch_taken_0x31e76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e76c) {
            ctx->pc = 0x31E78Cu;
            goto label_31e78c;
        }
    }
    ctx->pc = 0x31E774u;
label_31e774:
    // 0x31e774: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31e774u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31e778: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31e778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31e77c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e77cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31e780: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31e780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31e784: 0x0  nop
    ctx->pc = 0x31e784u;
    // NOP
    // 0x31e788: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31e788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_31e78c:
    // 0x31e78c: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x31e78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x31e790: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31e790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e794: 0xa424c9d0  sh          $a0, -0x3630($at)
    ctx->pc = 0x31e794u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x67C9D0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x67C9D0u, _value); } while (0);
    // 0x31e798: 0xa3838b48  sb          $v1, -0x74B8($gp)
    ctx->pc = 0x31e798u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937416), (uint8_t)GPR_U32(ctx, 3));
    // 0x31e79c: 0x0  nop
    ctx->pc = 0x31e79cu;
    // NOP
label_31e7a0:
    // 0x31e7a0: 0x83838b4c  lb          $v1, -0x74B4($gp)
    ctx->pc = 0x31e7a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937420)));
    // 0x31e7a4: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x31E7A4u;
    {
        const bool branch_taken_0x31e7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e7a4) {
            ctx->pc = 0x31E810u;
            goto label_31e810;
        }
    }
    ctx->pc = 0x31E7ACu;
    // 0x31e7ac: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x31e7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e7b0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x31e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x31e7b4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x31e7b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31e7b8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x31e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x31e7bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e7bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e7c0: 0x0  nop
    ctx->pc = 0x31e7c0u;
    // NOP
    // 0x31e7c4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x31e7c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x31e7c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31e7c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e7cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31E7CCu;
    {
        const bool branch_taken_0x31e7cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e7cc) {
            ctx->pc = 0x31E7E4u;
            goto label_31e7e4;
        }
    }
    ctx->pc = 0x31E7D4u;
    // 0x31e7d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e7d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31e7d8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31e7d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31e7dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31E7DCu;
    {
        const bool branch_taken_0x31e7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e7dc) {
            ctx->pc = 0x31E7FCu;
            goto label_31e7fc;
        }
    }
    ctx->pc = 0x31E7E4u;
label_31e7e4:
    // 0x31e7e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31e7e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31e7e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31e7ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e7ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31e7f0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31e7f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31e7f4: 0x0  nop
    ctx->pc = 0x31e7f4u;
    // NOP
    // 0x31e7f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31e7f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_31e7fc:
    // 0x31e7fc: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x31e7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x31e800: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31e800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e804: 0xa424c9d8  sh          $a0, -0x3628($at)
    ctx->pc = 0x31e804u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x67C9D8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x67C9D8u, _value); } while (0);
    // 0x31e808: 0xa3838b4c  sb          $v1, -0x74B4($gp)
    ctx->pc = 0x31e808u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937420), (uint8_t)GPR_U32(ctx, 3));
    // 0x31e80c: 0x0  nop
    ctx->pc = 0x31e80cu;
    // NOP
label_31e810:
    // 0x31e810: 0x92050821  lbu         $a1, 0x821($s0)
    ctx->pc = 0x31e810u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x31e814: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31e814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31e818: 0x10a3003b  beq         $a1, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x31E818u;
    {
        const bool branch_taken_0x31e818 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x31E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E818u;
        // 0x31e81c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e818) {
            ctx->pc = 0x31E908u;
            goto label_31e908;
        }
    }
    ctx->pc = 0x31E820u;
    // 0x31e820: 0x10a40013  beq         $a1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x31E820u;
    {
        const bool branch_taken_0x31e820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x31e820) {
            ctx->pc = 0x31E870u;
            goto label_31e870;
        }
    }
    ctx->pc = 0x31E828u;
    // 0x31e828: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E828u;
    {
        const bool branch_taken_0x31e828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e828) {
            ctx->pc = 0x31E838u;
            goto label_31e838;
        }
    }
    ctx->pc = 0x31E830u;
    // 0x31e830: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x31E830u;
    {
        const bool branch_taken_0x31e830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e830) {
            ctx->pc = 0x31E930u;
            goto label_31e930;
        }
    }
    ctx->pc = 0x31E838u;
label_31e838:
    // 0x31e838: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x31e838u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e83c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x31e83cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e840: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31e840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31e844: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x31e844u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x31e848: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31e848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31e84c: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x31e84cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e850: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x31e850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x31e854: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x31e854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x31e858: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x31e858u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x31e85c: 0x7e032b20  sq          $v1, 0x2B20($s0)
    ctx->pc = 0x31e85cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 11040), GPR_VEC(ctx, 3));
    // 0x31e860: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x31e860u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x31e864: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x31E864u;
    {
        const bool branch_taken_0x31e864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E864u;
        // 0x31e868: 0xa600082e  sh          $zero, 0x82E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2094), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e864) {
            ctx->pc = 0x31E930u;
            goto label_31e930;
        }
    }
    ctx->pc = 0x31E86Cu;
    // 0x31e86c: 0x0  nop
    ctx->pc = 0x31e86cu;
    // NOP
label_31e870:
    // 0x31e870: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x31e870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x31e874: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x31e874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31e878: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x31e878u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31e87c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x31e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x31e880: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x31e880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x31e884: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x31e884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x31e888: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x31e888u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x31e88c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x31e88cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e894: 0x0  nop
    ctx->pc = 0x31e894u;
    // NOP
    // 0x31e898: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x31e898u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x31e89c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31e89cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e8a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31E8A0u;
    {
        const bool branch_taken_0x31e8a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8A0u;
        // 0x31e8a4: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8a0) {
            ctx->pc = 0x31E8B8u;
            goto label_31e8b8;
        }
    }
    ctx->pc = 0x31E8A8u;
    // 0x31e8a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e8a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31e8ac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31e8acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31e8b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31E8B0u;
    {
        const bool branch_taken_0x31e8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8B0u;
        // 0x31e8b4: 0xa4082b  sltu        $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8b0) {
            ctx->pc = 0x31E8D4u;
            goto label_31e8d4;
        }
    }
    ctx->pc = 0x31E8B8u;
label_31e8b8:
    // 0x31e8b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31e8b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31e8bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31e8c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e8c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31e8c4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31e8c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31e8c8: 0x0  nop
    ctx->pc = 0x31e8c8u;
    // NOP
    // 0x31e8cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31e8ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x31e8d0: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x31e8d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_31e8d4:
    // 0x31e8d4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E8D4u;
    {
        const bool branch_taken_0x31e8d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e8d4) {
            ctx->pc = 0x31E8E8u;
            goto label_31e8e8;
        }
    }
    ctx->pc = 0x31E8DCu;
    // 0x31e8dc: 0x92032ab0  lbu         $v1, 0x2AB0($s0)
    ctx->pc = 0x31e8dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x31e8e0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x31e8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x31e8e4: 0xa2032ab0  sb          $v1, 0x2AB0($s0)
    ctx->pc = 0x31e8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10928), (uint8_t)GPR_U32(ctx, 3));
label_31e8e8:
    // 0x31e8e8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x31e8e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x31e8ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x31E8ECu;
    {
        const bool branch_taken_0x31e8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8ECu;
        // 0x31e8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8ec) {
            ctx->pc = 0x31E930u;
            goto label_31e930;
        }
    }
    ctx->pc = 0x31E8F4u;
    // 0x31e8f4: 0xc0a012c  jal         func_2804B0
    ctx->pc = 0x31E8F4u;
    SET_GPR_U32(ctx, 31, 0x31E8FCu);
    ctx->pc = 0x2804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804B0u, 0x31E8F4u, 0x31E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E8FCu;
label_31e8fc:
    // 0x31e8fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31E8FCu;
    {
        const bool branch_taken_0x31e8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e8fc) {
            ctx->pc = 0x31E930u;
            goto label_31e930;
        }
    }
    ctx->pc = 0x31E904u;
    // 0x31e904: 0x0  nop
    ctx->pc = 0x31e904u;
    // NOP
label_31e908:
    // 0x31e908: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x31e908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x31e90c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31e90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31e910: 0xc0c78c0  jal         func_31E300
    ctx->pc = 0x31E910u;
    SET_GPR_U32(ctx, 31, 0x31E918u);
    ctx->pc = 0x31E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E910u;
    // 0x31e914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E300u, 0x31E910u, 0x31E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E918u;
label_31e918:
    // 0x31e918: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x31e918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x31e91c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E91Cu;
    {
        const bool branch_taken_0x31e91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E91Cu;
        // 0x31e920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e91c) {
            ctx->pc = 0x31E930u;
            goto label_31e930;
        }
    }
    ctx->pc = 0x31E924u;
    // 0x31e924: 0xc0a012c  jal         func_2804B0
    ctx->pc = 0x31E924u;
    SET_GPR_U32(ctx, 31, 0x31E92Cu);
    ctx->pc = 0x2804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804B0u, 0x31E924u, 0x31E92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E92Cu;
label_31e92c:
    // 0x31e92c: 0x0  nop
    ctx->pc = 0x31e92cu;
    // NOP
label_31e930:
    // 0x31e930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31e934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e938: 0x3e00008  jr          $ra
    ctx->pc = 0x31E938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E938u;
        // 0x31e93c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E940u;
}

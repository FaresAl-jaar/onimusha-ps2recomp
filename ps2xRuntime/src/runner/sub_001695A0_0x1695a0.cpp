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

// Function: sub_001695A0
// Address: 0x1695a0 - 0x169da4
void sub_001695A0_0x1695a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001695A0_0x1695a0");
#endif

    switch (ctx->pc) {
        case 0x16970cu: goto label_16970c;
        case 0x169730u: goto label_169730;
        case 0x169798u: goto label_169798;
        case 0x169978u: goto label_169978;
        case 0x1699bcu: goto label_1699bc;
        case 0x169d74u: goto label_169d74;
        default: break;
    }

    ctx->pc = 0x1695a0u;

    // 0x1695a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1695a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1695a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1695a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1695a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1695a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1695ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1695acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1695b0: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x1695b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1695b4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1695b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1695b8: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1695B8u;
    {
        const bool branch_taken_0x1695b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1695BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695B8u;
        // 0x1695bc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695b8) {
            ctx->pc = 0x169668u;
            goto label_169668;
        }
    }
    ctx->pc = 0x1695C0u;
    // 0x1695c0: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x1695c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1695c4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1695C4u;
    {
        const bool branch_taken_0x1695c4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1695C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695C4u;
        // 0x1695c8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695c4) {
            ctx->pc = 0x1695D8u;
            goto label_1695d8;
        }
    }
    ctx->pc = 0x1695CCu;
    // 0x1695cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1695ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1695d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1695D0u;
    {
        const bool branch_taken_0x1695d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1695D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695D0u;
        // 0x1695d4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695d0) {
            ctx->pc = 0x1695F0u;
            goto label_1695f0;
        }
    }
    ctx->pc = 0x1695D8u;
label_1695d8:
    // 0x1695d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1695d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1695dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1695dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1695e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1695e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1695e4: 0x0  nop
    ctx->pc = 0x1695e4u;
    // NOP
    // 0x1695e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1695e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1695ec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1695ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1695f0:
    // 0x1695f0: 0x3c033db5  lui         $v1, 0x3DB5
    ctx->pc = 0x1695f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15797 << 16));
    // 0x1695f4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1695f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1695f8: 0x34630481  ori         $v1, $v1, 0x481
    ctx->pc = 0x1695f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1153);
    // 0x1695fc: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x1695fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x169600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x169600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169604: 0x24846ba0  addiu       $a0, $a0, 0x6BA0
    ctx->pc = 0x169604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27552));
    // 0x169608: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x169608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16960c: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x16960cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x169610: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x169610u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x169614: 0xd8a90000  lqc2        $vf9, 0x0($a1)
    ctx->pc = 0x169614u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169618: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x169618u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16961c: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x16961cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x169620: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x169620u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x169624: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x169624u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x169628: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x169628u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16962c: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x16962cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x169630: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x169630u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x169634: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x169634u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x169638: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x169638u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x16963c: 0x4a0002ff  vnop
    ctx->pc = 0x16963cu;
    // NOP operation, no action needed for VU0
    // 0x169640: 0x4a0002ff  vnop
    ctx->pc = 0x169640u;
    // NOP operation, no action needed for VU0
    // 0x169644: 0x4a0002ff  vnop
    ctx->pc = 0x169644u;
    // NOP operation, no action needed for VU0
    // 0x169648: 0x4a0002ff  vnop
    ctx->pc = 0x169648u;
    // NOP operation, no action needed for VU0
    // 0x16964c: 0x4a0002ff  vnop
    ctx->pc = 0x16964cu;
    // NOP operation, no action needed for VU0
    // 0x169650: 0x48448800  cfc2.ni     $a0, $vi17
    ctx->pc = 0x169650u;
    SET_GPR_U32(ctx, 4, ctx->vu0_mac_flags);
    // 0x169654: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x169654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x169658: 0xae23005c  sw          $v1, 0x5C($s1)
    ctx->pc = 0x169658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
    // 0x16965c: 0x308300f0  andi        $v1, $a0, 0xF0
    ctx->pc = 0x16965cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x169660: 0x146001cb  bnez        $v1, . + 4 + (0x1CB << 2)
    ctx->pc = 0x169660u;
    {
        const bool branch_taken_0x169660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169660) {
            ctx->pc = 0x169D90u;
            goto label_169d90;
        }
    }
    ctx->pc = 0x169668u;
label_169668:
    // 0x169668: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x169668u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16966c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x16966cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x169670: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x169670u;
    {
        const bool branch_taken_0x169670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169670u;
        // 0x169674: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169670) {
            ctx->pc = 0x1696C8u;
            goto label_1696c8;
        }
    }
    ctx->pc = 0x169678u;
    // 0x169678: 0xc4230380  lwc1        $f3, 0x380($at)
    ctx->pc = 0x169678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16967c: 0xc6240050  lwc1        $f4, 0x50($s1)
    ctx->pc = 0x16967cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x169680: 0xc6220058  lwc1        $f2, 0x58($s1)
    ctx->pc = 0x169680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x169684: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169688: 0xc4210388  lwc1        $f1, 0x388($at)
    ctx->pc = 0x169688u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000388u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16968c: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x16968cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x169690: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x169690u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x169694: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169698: 0xc4200390  lwc1        $f0, 0x390($at)
    ctx->pc = 0x169698u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000390u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16969c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x16969cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1696a0: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x1696a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x1696a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1696a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1696a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1696A8u;
    {
        const bool branch_taken_0x1696a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1696ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696A8u;
        // 0x1696ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1696a8) {
            ctx->pc = 0x1696B8u;
            goto label_1696b8;
        }
    }
    ctx->pc = 0x1696B0u;
    // 0x1696b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1696B0u;
    {
        const bool branch_taken_0x1696b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1696b0) {
            ctx->pc = 0x1696C0u;
            goto label_1696c0;
        }
    }
    ctx->pc = 0x1696B8u;
label_1696b8:
    // 0x1696b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1696b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696bc: 0x0  nop
    ctx->pc = 0x1696bcu;
    // NOP
label_1696c0:
    // 0x1696c0: 0x146001b3  bnez        $v1, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x1696C0u;
    {
        const bool branch_taken_0x1696c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1696c0) {
            ctx->pc = 0x169D90u;
            goto label_169d90;
        }
    }
    ctx->pc = 0x1696C8u;
label_1696c8:
    // 0x1696c8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1696c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1696cc: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x1696ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1696d0: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x1696d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1696d4: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x1696d4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1696d8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1696d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1696dc: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x1696dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x1696e0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1696e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1696e4: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x1696e4u;
    runtime->Store128(rdram, ctx, 0x70000040u, GPR_VEC(ctx, 8));
    // 0x1696e8: 0x34440140  ori         $a0, $v0, 0x140
    ctx->pc = 0x1696e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)320);
    // 0x1696ec: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1696ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1696f0: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x1696f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1696f4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1696f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1696f8: 0x344702b0  ori         $a3, $v0, 0x2B0
    ctx->pc = 0x1696f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)688);
    // 0x1696fc: 0x8622002c  lh          $v0, 0x2C($s1)
    ctx->pc = 0x1696fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x169700: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x169700u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x169704: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x169704u;
    SET_GPR_U32(ctx, 31, 0x16970Cu);
    ctx->pc = 0x169708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169704u;
    // 0x169708: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x169704u, 0x16970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16970Cu;
label_16970c:
    // 0x16970c: 0x104001a0  beqz        $v0, . + 4 + (0x1A0 << 2)
    ctx->pc = 0x16970Cu;
    {
        const bool branch_taken_0x16970c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16970c) {
            ctx->pc = 0x169D90u;
            goto label_169d90;
        }
    }
    ctx->pc = 0x169714u;
    // 0x169714: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x169714u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x169718: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x169718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x16971c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x16971Cu;
    {
        const bool branch_taken_0x16971c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16971Cu;
        // 0x169720: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16971c) {
            ctx->pc = 0x1697E8u;
            goto label_1697e8;
        }
    }
    ctx->pc = 0x169724u;
    // 0x169724: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x169724u;
    {
        const bool branch_taken_0x169724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169724) {
            ctx->pc = 0x1697D0u;
            goto label_1697d0;
        }
    }
    ctx->pc = 0x16972Cu;
    // 0x16972c: 0x0  nop
    ctx->pc = 0x16972cu;
    // NOP
label_169730:
    // 0x169730: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x169730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x169734: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x169734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x169738: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x169738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16973c: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x16973cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169740: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x169740u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x169744: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x169744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x169748: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x169748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16974c: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x16974cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x169750: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x169750u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x169754: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x169754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x169758: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x169758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16975c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x16975cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169760: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x169760u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169764: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x169764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x169768: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x169768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16976c: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x16976cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169770: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x169770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x169774: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x169774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x169778: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x169778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16977c: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x16977cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
    // 0x169780: 0x344202a0  ori         $v0, $v0, 0x2A0
    ctx->pc = 0x169780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x169784: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x169784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169788: 0x8622002c  lh          $v0, 0x2C($s1)
    ctx->pc = 0x169788u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x16978c: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x16978cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x169790: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x169790u;
    SET_GPR_U32(ctx, 31, 0x169798u);
    ctx->pc = 0x169794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169790u;
    // 0x169794: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x169790u, 0x169798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169798u;
label_169798:
    // 0x169798: 0x1040017d  beqz        $v0, . + 4 + (0x17D << 2)
    ctx->pc = 0x169798u;
    {
        const bool branch_taken_0x169798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169798u;
        // 0x16979c: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169798) {
            ctx->pc = 0x169D90u;
            goto label_169d90;
        }
    }
    ctx->pc = 0x1697A0u;
    // 0x1697a0: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x1697a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1697a4: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x1697a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1697a8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1697a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1697ac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1697acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1697b0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1697b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1697b4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1697b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1697b8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1697b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1697bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1697bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1697c0: 0x14600173  bnez        $v1, . + 4 + (0x173 << 2)
    ctx->pc = 0x1697C0u;
    {
        const bool branch_taken_0x1697c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1697c0) {
            ctx->pc = 0x169D90u;
            goto label_169d90;
        }
    }
    ctx->pc = 0x1697C8u;
    // 0x1697c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1697c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1697cc: 0x0  nop
    ctx->pc = 0x1697ccu;
    // NOP
label_1697d0:
    // 0x1697d0: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1697d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1697d4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1697D4u;
    {
        const bool branch_taken_0x1697d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1697d4) {
            ctx->pc = 0x169730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169730;
        }
    }
    ctx->pc = 0x1697DCu;
    // 0x1697dc: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1697DCu;
    {
        const bool branch_taken_0x1697dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1697dc) {
            ctx->pc = 0x169A00u;
            goto label_169a00;
        }
    }
    ctx->pc = 0x1697E4u;
    // 0x1697e4: 0x0  nop
    ctx->pc = 0x1697e4u;
    // NOP
label_1697e8:
    // 0x1697e8: 0x8625004a  lh          $a1, 0x4A($s1)
    ctx->pc = 0x1697e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x1697ec: 0x9624002a  lhu         $a0, 0x2A($s1)
    ctx->pc = 0x1697ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x1697f0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1697f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1697f4: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x1697f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x1697f8: 0x96220028  lhu         $v0, 0x28($s1)
    ctx->pc = 0x1697f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1697fc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1697fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x169800: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x169800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x169804: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x169804u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x169808: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x169808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x16980c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16980cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x169810: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x169814: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169814u;
    {
        const bool branch_taken_0x169814 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x169818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169814u;
        // 0x169818: 0xc4610000  lwc1        $f1, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169814) {
            ctx->pc = 0x169828u;
            goto label_169828;
        }
    }
    ctx->pc = 0x16981Cu;
    // 0x16981c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16981cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169820: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169820u;
    {
        const bool branch_taken_0x169820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169820u;
        // 0x169824: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169820) {
            ctx->pc = 0x169844u;
            goto label_169844;
        }
    }
    ctx->pc = 0x169828u;
label_169828:
    // 0x169828: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x169828u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x16982c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16982cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x169830: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x169830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x169834: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x169834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169838: 0x0  nop
    ctx->pc = 0x169838u;
    // NOP
    // 0x16983c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16983cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x169840: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x169840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_169844:
    // 0x169844: 0x8625004a  lh          $a1, 0x4A($s1)
    ctx->pc = 0x169844u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x169848: 0x3c023db5  lui         $v0, 0x3DB5
    ctx->pc = 0x169848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15797 << 16));
    // 0x16984c: 0x9624002a  lhu         $a0, 0x2A($s1)
    ctx->pc = 0x16984cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x169850: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x169850u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x169854: 0x34460481  ori         $a2, $v0, 0x481
    ctx->pc = 0x169854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1153);
    // 0x169858: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x169858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x16985c: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x16985cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x169860: 0x96220028  lhu         $v0, 0x28($s1)
    ctx->pc = 0x169860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x169864: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x169864u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169868: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x169868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16986c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x16986cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x169870: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x169870u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x169874: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x169874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x169878: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x169878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x16987c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16987cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x169880: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x169880u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x169884: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x169888: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169888u;
    {
        const bool branch_taken_0x169888 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x16988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169888u;
        // 0x16988c: 0xc4610000  lwc1        $f1, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169888) {
            ctx->pc = 0x16989Cu;
            goto label_16989c;
        }
    }
    ctx->pc = 0x169890u;
    // 0x169890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169894: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169894u;
    {
        const bool branch_taken_0x169894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169894u;
        // 0x169898: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169894) {
            ctx->pc = 0x1698B8u;
            goto label_1698b8;
        }
    }
    ctx->pc = 0x16989Cu;
label_16989c:
    // 0x16989c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x16989cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1698a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1698a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1698a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1698a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1698a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1698a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1698ac: 0x0  nop
    ctx->pc = 0x1698acu;
    // NOP
    // 0x1698b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1698b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1698b4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1698b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1698b8:
    // 0x1698b8: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1698b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1698bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1698bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1698c0: 0x3c023db5  lui         $v0, 0x3DB5
    ctx->pc = 0x1698c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15797 << 16));
    // 0x1698c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1698c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1698c8: 0x34420481  ori         $v0, $v0, 0x481
    ctx->pc = 0x1698c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1153);
    // 0x1698cc: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x1698ccu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1698d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1698d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1698d4: 0x0  nop
    ctx->pc = 0x1698d4u;
    // NOP
    // 0x1698d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1698d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1698dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1698dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1698e0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1698e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1698e4: 0xe4200000  swc1        $f0, 0x0($at)
    ctx->pc = 0x1698e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000000u, bits); }
    // 0x1698e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1698e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1698ec: 0xc4200048  lwc1        $f0, 0x48($at)
    ctx->pc = 0x1698ecu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1698f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1698f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1698f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1698f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1698f8: 0xe4200008  swc1        $f0, 0x8($at)
    ctx->pc = 0x1698f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000008u, bits); }
    // 0x1698fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1698fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169900: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x169900u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169904: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x169904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x169908: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16990c: 0xe4200010  swc1        $f0, 0x10($at)
    ctx->pc = 0x16990cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000010u, bits); }
    // 0x169910: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169914: 0xc4200048  lwc1        $f0, 0x48($at)
    ctx->pc = 0x169914u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169918: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x169918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x16991c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16991cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169920: 0xe4200018  swc1        $f0, 0x18($at)
    ctx->pc = 0x169920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000018u, bits); }
    // 0x169924: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169928: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x169928u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16992c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16992cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x169930: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169934: 0xe4200020  swc1        $f0, 0x20($at)
    ctx->pc = 0x169934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000020u, bits); }
    // 0x169938: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16993c: 0xc4200048  lwc1        $f0, 0x48($at)
    ctx->pc = 0x16993cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169940: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x169940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x169944: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169948: 0xe4200028  swc1        $f0, 0x28($at)
    ctx->pc = 0x169948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000028u, bits); }
    // 0x16994c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16994cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169950: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x169950u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169954: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x169954u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x169958: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16995c: 0xe4200030  swc1        $f0, 0x30($at)
    ctx->pc = 0x16995cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000030u, bits); }
    // 0x169960: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169964: 0xc4200048  lwc1        $f0, 0x48($at)
    ctx->pc = 0x169964u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169968: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x169968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16996c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16996cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169970: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x169970u;
    {
        const bool branch_taken_0x169970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169970u;
        // 0x169974: 0xe4200038  swc1        $f0, 0x38($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169970) {
            ctx->pc = 0x1699F0u;
            goto label_1699f0;
        }
    }
    ctx->pc = 0x169978u;
label_169978:
    // 0x169978: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16997c: 0xc4200044  lwc1        $f0, 0x44($at)
    ctx->pc = 0x16997cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000044u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169980: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x169980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x169984: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x169984u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x169988: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x169988u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16998c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x16998cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x169990: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x169990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x169994: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x169994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x169998: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x169998u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x16999c: 0x344202a0  ori         $v0, $v0, 0x2A0
    ctx->pc = 0x16999cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x1699a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1699a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1699a4: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x1699a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1699a8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1699a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1699ac: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x1699acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x1699b0: 0x8628002c  lh          $t0, 0x2C($s1)
    ctx->pc = 0x1699b0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1699b4: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x1699B4u;
    SET_GPR_U32(ctx, 31, 0x1699BCu);
    ctx->pc = 0x1699B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1699B4u;
    // 0x1699b8: 0x24c669a0  addiu       $a2, $a2, 0x69A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x1699B4u, 0x1699BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1699BCu;
label_1699bc:
    // 0x1699bc: 0x104000f4  beqz        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x1699BCu;
    {
        const bool branch_taken_0x1699bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1699C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699BCu;
        // 0x1699c0: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699bc) {
            ctx->pc = 0x169D90u;
            goto label_169d90;
        }
    }
    ctx->pc = 0x1699C4u;
    // 0x1699c4: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x1699c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1699c8: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x1699c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1699cc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1699ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1699d0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1699d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1699d4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1699d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1699d8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1699d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1699dc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1699dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1699e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1699e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1699e4: 0x146000ea  bnez        $v1, . + 4 + (0xEA << 2)
    ctx->pc = 0x1699E4u;
    {
        const bool branch_taken_0x1699e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1699e4) {
            ctx->pc = 0x169D90u;
            goto label_169d90;
        }
    }
    ctx->pc = 0x1699ECu;
    // 0x1699ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1699ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1699f0:
    // 0x1699f0: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1699f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1699f4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1699F4u;
    {
        const bool branch_taken_0x1699f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1699f4) {
            ctx->pc = 0x169978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169978;
        }
    }
    ctx->pc = 0x1699FCu;
    // 0x1699fc: 0x0  nop
    ctx->pc = 0x1699fcu;
    // NOP
label_169a00:
    // 0x169a00: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x169a00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x169a04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x169a08: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x169a08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x169a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169a10: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x169a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x169a14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169a18: 0x9102000b  lbu         $v0, 0xB($t0)
    ctx->pc = 0x169a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 11)));
    // 0x169a1c: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x169a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x169a20: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x169a20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169a24: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x169a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x169a28: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x169a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x169a2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x169a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x169a30: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x169a30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x169a34: 0xe43021  addu        $a2, $a3, $a0
    ctx->pc = 0x169a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x169a38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x169a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x169a3c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x169a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x169a40: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x169a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x169a44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x169a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x169a48: 0xc34821  addu        $t1, $a2, $v1
    ctx->pc = 0x169a48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x169a4c: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x169a4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x169a50: 0x46010143  div.s       $f5, $f0, $f1
    ctx->pc = 0x169a50u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x169a54: 0x0  nop
    ctx->pc = 0x169a54u;
    // NOP
    // 0x169a58: 0x0  nop
    ctx->pc = 0x169a58u;
    // NOP
    // 0x169a5c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169A5Cu;
    {
        const bool branch_taken_0x169a5c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x169a5c) {
            ctx->pc = 0x169A70u;
            goto label_169a70;
        }
    }
    ctx->pc = 0x169A64u;
    // 0x169a64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169a68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169A68u;
    {
        const bool branch_taken_0x169a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A68u;
        // 0x169a6c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a68) {
            ctx->pc = 0x169A8Cu;
            goto label_169a8c;
        }
    }
    ctx->pc = 0x169A70u;
label_169a70:
    // 0x169a70: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x169a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x169a74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x169a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x169a78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x169a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x169a7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x169a7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169a80: 0x0  nop
    ctx->pc = 0x169a80u;
    // NOP
    // 0x169a84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x169a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x169a88: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x169a88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_169a8c:
    // 0x169a8c: 0x46050102  mul.s       $f4, $f0, $f5
    ctx->pc = 0x169a8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x169a90: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x169a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x169a94: 0x95260004  lhu         $a2, 0x4($t1)
    ctx->pc = 0x169a94u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x169a98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169a9c: 0x85250008  lh          $a1, 0x8($t1)
    ctx->pc = 0x169a9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x169aa0: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x169aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x169aa4: 0x95220006  lhu         $v0, 0x6($t1)
    ctx->pc = 0x169aa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x169aa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x169aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169aac: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x169aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x169ab0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x169ab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x169ab4: 0x0  nop
    ctx->pc = 0x169ab4u;
    // NOP
    // 0x169ab8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x169ab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x169abc: 0x90e3000c  lbu         $v1, 0xC($a3)
    ctx->pc = 0x169abcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x169ac0: 0x460128c2  mul.s       $f3, $f5, $f1
    ctx->pc = 0x169ac0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x169ac4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x169ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x169ac8: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x169ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x169acc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x169accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x169ad0: 0x0  nop
    ctx->pc = 0x169ad0u;
    // NOP
    // 0x169ad4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x169ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x169ad8: 0x46010143  div.s       $f5, $f0, $f1
    ctx->pc = 0x169ad8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x169adc: 0x0  nop
    ctx->pc = 0x169adcu;
    // NOP
    // 0x169ae0: 0x0  nop
    ctx->pc = 0x169ae0u;
    // NOP
    // 0x169ae4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169AE4u;
    {
        const bool branch_taken_0x169ae4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x169ae4) {
            ctx->pc = 0x169AF8u;
            goto label_169af8;
        }
    }
    ctx->pc = 0x169AECu;
    // 0x169aec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169af0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169AF0u;
    {
        const bool branch_taken_0x169af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AF0u;
        // 0x169af4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169af0) {
            ctx->pc = 0x169B14u;
            goto label_169b14;
        }
    }
    ctx->pc = 0x169AF8u;
label_169af8:
    // 0x169af8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x169af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x169afc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x169afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x169b00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x169b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x169b04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x169b04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169b08: 0x0  nop
    ctx->pc = 0x169b08u;
    // NOP
    // 0x169b0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x169b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x169b10: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x169b10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_169b14:
    // 0x169b14: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x169b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x169b18: 0x3c023c40  lui         $v0, 0x3C40
    ctx->pc = 0x169b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15424 << 16));
    // 0x169b1c: 0x8c26fc90  lw          $a2, -0x370($at)
    ctx->pc = 0x169b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81FC90u));
    // 0x169b20: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x169b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x169b24: 0x95280006  lhu         $t0, 0x6($t1)
    ctx->pc = 0x169b24u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x169b28: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x169b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x169b2c: 0x8527000a  lh          $a3, 0xA($t1)
    ctx->pc = 0x169b2cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x169b30: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x169b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x169b34: 0x34420054  ori         $v0, $v0, 0x54
    ctx->pc = 0x169b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)84);
    // 0x169b38: 0x2484aed0  addiu       $a0, $a0, -0x5130
    ctx->pc = 0x169b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946512));
    // 0x169b3c: 0x46050082  mul.s       $f2, $f0, $f5
    ctx->pc = 0x169b3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x169b40: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x169b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x169b44: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169b48: 0xc58024  and         $s0, $a2, $a1
    ctx->pc = 0x169b48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x169b4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x169b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x169b50: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x169b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x169b54: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x169b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x169b58: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x169b58u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169b5c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x169b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x169b60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x169b60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x169b64: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x169b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x169b68: 0x94230100  lhu         $v1, 0x100($at)
    ctx->pc = 0x169b68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 256)));
    // 0x169b6c: 0x46002842  mul.s       $f1, $f5, $f0
    ctx->pc = 0x169b6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x169b70: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169b74: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x169b74u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x169b78: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x169b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x169b7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169b80: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x169b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x169b84: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x169b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x169b88: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x169b88u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x169b8c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x169b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x169b90: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169b94: 0x94230110  lhu         $v1, 0x110($at)
    ctx->pc = 0x169b94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000110u));
    // 0x169b98: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169b9c: 0x8c220114  lw          $v0, 0x114($at)
    ctx->pc = 0x169b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x169ba0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x169ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x169ba4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169ba8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x169ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x169bac: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x169bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x169bb0: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x169bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x169bb4: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x169bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x169bb8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169bbc: 0x94230120  lhu         $v1, 0x120($at)
    ctx->pc = 0x169bbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000120u));
    // 0x169bc0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169bc4: 0x8c220124  lw          $v0, 0x124($at)
    ctx->pc = 0x169bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000124u)); // MMIO: 0x70000124
    // 0x169bc8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x169bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x169bcc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169bd0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x169bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x169bd4: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x169bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x169bd8: 0x8c220128  lw          $v0, 0x128($at)
    ctx->pc = 0x169bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x169bdc: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x169bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x169be0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169be4: 0x94230130  lhu         $v1, 0x130($at)
    ctx->pc = 0x169be4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000130u));
    // 0x169be8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169bec: 0x8c220134  lw          $v0, 0x134($at)
    ctx->pc = 0x169becu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000134u)); // MMIO: 0x70000134
    // 0x169bf0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x169bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x169bf4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169bf8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x169bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x169bfc: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x169bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x169c00: 0x8c220138  lw          $v0, 0x138($at)
    ctx->pc = 0x169c00u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000138u)); // MMIO: 0x70000138
    // 0x169c04: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x169c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x169c08: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169c0c: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x169c0cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169c10: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x169c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x169c14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169c18: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x169c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x169c1c: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x169c1cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169c20: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x169c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x169c24: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169c28: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x169c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x169c2c: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x169c2cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169c30: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x169c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x169c34: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169c38: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x169c38u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169c3c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x169c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x169c40: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169c44: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x169c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x169c48: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x169c48u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169c4c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x169c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x169c50: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169c54: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x169c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x169c58: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x169c58u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169c5c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x169c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x169c60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169c64: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x169c64u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169c68: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x169c68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x169c6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169c70: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x169c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x169c74: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x169c74u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169c78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x169c78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x169c7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169c80: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x169c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x169c84: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x169c84u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169c88: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x169c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x169c8c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169c90: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x169c90u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169c94: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x169c94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x169c98: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169c9c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x169c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x169ca0: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x169ca0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169ca4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x169ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x169ca8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169cac: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x169cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x169cb0: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x169cb0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169cb4: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x169cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x169cb8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169cbc: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x169cbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x169cc0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x169cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x169cc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x169cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x169cc8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x169cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x169ccc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x169cccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169cd0: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x169cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x169cd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x169cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x169cd8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x169cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x169cdc: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x169cdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x169ce0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x169ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x169ce4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x169ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x169ce8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x169ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169cec: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x169cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x169cf0: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x169cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x169cf4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x169cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x169cf8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x169cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x169cfc: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x169cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x169d00: 0x92220013  lbu         $v0, 0x13($s1)
    ctx->pc = 0x169d00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x169d04: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x169d04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x169d08: 0x8c230108  lw          $v1, 0x108($at)
    ctx->pc = 0x169d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 264)));
    // 0x169d0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169d10: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x169d10u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x169d14: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x169d14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x169d18: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x169D18u;
    {
        const bool branch_taken_0x169d18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d18) {
            ctx->pc = 0x169D28u;
            goto label_169d28;
        }
    }
    ctx->pc = 0x169D20u;
    // 0x169d20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x169D20u;
    {
        const bool branch_taken_0x169d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d20) {
            ctx->pc = 0x169D30u;
            goto label_169d30;
        }
    }
    ctx->pc = 0x169D28u;
label_169d28:
    // 0x169d28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x169d28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d2c: 0x0  nop
    ctx->pc = 0x169d2cu;
    // NOP
label_169d30:
    // 0x169d30: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169d34: 0x8c220128  lw          $v0, 0x128($at)
    ctx->pc = 0x169d34u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x169d38: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x169d38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x169d3c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x169D3Cu;
    {
        const bool branch_taken_0x169d3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d3c) {
            ctx->pc = 0x169D48u;
            goto label_169d48;
        }
    }
    ctx->pc = 0x169D44u;
    // 0x169d44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x169d44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169d48:
    // 0x169d48: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169d4c: 0x8c220138  lw          $v0, 0x138($at)
    ctx->pc = 0x169d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000138u)); // MMIO: 0x70000138
    // 0x169d50: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x169d50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x169d54: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x169D54u;
    {
        const bool branch_taken_0x169d54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d54) {
            ctx->pc = 0x169D60u;
            goto label_169d60;
        }
    }
    ctx->pc = 0x169D5Cu;
    // 0x169d5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x169d5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169d60:
    // 0x169d60: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x169d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x169d64: 0x33183  sra         $a2, $v1, 6
    ctx->pc = 0x169d64u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 6));
    // 0x169d68: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x169d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x169d6c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x169D6Cu;
    SET_GPR_U32(ctx, 31, 0x169D74u);
    ctx->pc = 0x169D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D6Cu;
    // 0x169d70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x169D6Cu, 0x169D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D74u;
label_169d74:
    // 0x169d74: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x169d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x169d78: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x169d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x169d7c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x169d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x169d80: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x169d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x169d84: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x169d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x169d88: 0xac24fc90  sw          $a0, -0x370($at)
    ctx->pc = 0x169d88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
    // 0x169d8c: 0x0  nop
    ctx->pc = 0x169d8cu;
    // NOP
label_169d90:
    // 0x169d90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x169d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169d94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x169D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D9Cu;
        // 0x169da0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169DA4u;
}

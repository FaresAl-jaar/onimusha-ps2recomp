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

// Function: sub_0016BD20
// Address: 0x16bd20 - 0x16d97c
void sub_0016BD20_0x16bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BD20_0x16bd20");
#endif

    switch (ctx->pc) {
        case 0x16bea4u: goto label_16bea4;
        case 0x16bec8u: goto label_16bec8;
        case 0x16bf30u: goto label_16bf30;
        case 0x16c118u: goto label_16c118;
        case 0x16c15cu: goto label_16c15c;
        case 0x16c57cu: goto label_16c57c;
        case 0x16c5d8u: goto label_16c5d8;
        case 0x16c618u: goto label_16c618;
        case 0x16c65cu: goto label_16c65c;
        case 0x16c6a0u: goto label_16c6a0;
        case 0x16c6d0u: goto label_16c6d0;
        case 0x16c700u: goto label_16c700;
        case 0x16c9bcu: goto label_16c9bc;
        case 0x16cbb4u: goto label_16cbb4;
        case 0x16ce3cu: goto label_16ce3c;
        case 0x16d034u: goto label_16d034;
        case 0x16d2bcu: goto label_16d2bc;
        case 0x16d4b4u: goto label_16d4b4;
        case 0x16d73cu: goto label_16d73c;
        case 0x16d934u: goto label_16d934;
        default: break;
    }

    ctx->pc = 0x16bd20u;

    // 0x16bd20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16bd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16bd24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16bd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16bd28: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16bd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16bd2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16bd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16bd30: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x16bd30u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x16bd34: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x16bd34u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x16bd38: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x16bd38u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x16bd3c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16bd3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x16bd40: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16bd40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16bd44: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16bd44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x16bd48: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x16bd48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16bd4c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x16bd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x16bd50: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x16BD50u;
    {
        const bool branch_taken_0x16bd50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD50u;
        // 0x16bd54: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd50) {
            ctx->pc = 0x16BE00u;
            goto label_16be00;
        }
    }
    ctx->pc = 0x16BD58u;
    // 0x16bd58: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x16bd58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x16bd5c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BD5Cu;
    {
        const bool branch_taken_0x16bd5c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x16BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD5Cu;
        // 0x16bd60: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd5c) {
            ctx->pc = 0x16BD70u;
            goto label_16bd70;
        }
    }
    ctx->pc = 0x16BD64u;
    // 0x16bd64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16bd64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bd68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16BD68u;
    {
        const bool branch_taken_0x16bd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD68u;
        // 0x16bd6c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd68) {
            ctx->pc = 0x16BD88u;
            goto label_16bd88;
        }
    }
    ctx->pc = 0x16BD70u;
label_16bd70:
    // 0x16bd70: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x16bd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16bd74: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16bd74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16bd78: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16bd78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bd7c: 0x0  nop
    ctx->pc = 0x16bd7cu;
    // NOP
    // 0x16bd80: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16bd80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16bd84: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x16bd84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_16bd88:
    // 0x16bd88: 0x3c033db5  lui         $v1, 0x3DB5
    ctx->pc = 0x16bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15797 << 16));
    // 0x16bd8c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x16bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x16bd90: 0x34630481  ori         $v1, $v1, 0x481
    ctx->pc = 0x16bd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1153);
    // 0x16bd94: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x16bd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x16bd98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16bd98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bd9c: 0x24846ba0  addiu       $a0, $a0, 0x6BA0
    ctx->pc = 0x16bd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27552));
    // 0x16bda0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16bda0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16bda4: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x16bda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x16bda8: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x16bda8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x16bdac: 0xd8a90000  lqc2        $vf9, 0x0($a1)
    ctx->pc = 0x16bdacu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16bdb0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x16bdb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16bdb4: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x16bdb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16bdb8: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x16bdb8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x16bdbc: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x16bdbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x16bdc0: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x16bdc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16bdc4: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x16bdc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16bdc8: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x16bdc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16bdcc: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x16bdccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16bdd0: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x16bdd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x16bdd4: 0x4a0002ff  vnop
    ctx->pc = 0x16bdd4u;
    // NOP operation, no action needed for VU0
    // 0x16bdd8: 0x4a0002ff  vnop
    ctx->pc = 0x16bdd8u;
    // NOP operation, no action needed for VU0
    // 0x16bddc: 0x4a0002ff  vnop
    ctx->pc = 0x16bddcu;
    // NOP operation, no action needed for VU0
    // 0x16bde0: 0x4a0002ff  vnop
    ctx->pc = 0x16bde0u;
    // NOP operation, no action needed for VU0
    // 0x16bde4: 0x4a0002ff  vnop
    ctx->pc = 0x16bde4u;
    // NOP operation, no action needed for VU0
    // 0x16bde8: 0x48448800  cfc2.ni     $a0, $vi17
    ctx->pc = 0x16bde8u;
    SET_GPR_U32(ctx, 4, ctx->vu0_mac_flags);
    // 0x16bdec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16bdf0: 0xae23005c  sw          $v1, 0x5C($s1)
    ctx->pc = 0x16bdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
    // 0x16bdf4: 0x308300f0  andi        $v1, $a0, 0xF0
    ctx->pc = 0x16bdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x16bdf8: 0x146006d5  bnez        $v1, . + 4 + (0x6D5 << 2)
    ctx->pc = 0x16BDF8u;
    {
        const bool branch_taken_0x16bdf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bdf8) {
            ctx->pc = 0x16D950u;
            goto label_16d950;
        }
    }
    ctx->pc = 0x16BE00u;
label_16be00:
    // 0x16be00: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x16be00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16be04: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x16be04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x16be08: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16BE08u;
    {
        const bool branch_taken_0x16be08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE08u;
        // 0x16be0c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be08) {
            ctx->pc = 0x16BE60u;
            goto label_16be60;
        }
    }
    ctx->pc = 0x16BE10u;
    // 0x16be10: 0xc4230380  lwc1        $f3, 0x380($at)
    ctx->pc = 0x16be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16be14: 0xc6240050  lwc1        $f4, 0x50($s1)
    ctx->pc = 0x16be14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16be18: 0xc6220058  lwc1        $f2, 0x58($s1)
    ctx->pc = 0x16be18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16be1c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16be1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16be20: 0xc4210388  lwc1        $f1, 0x388($at)
    ctx->pc = 0x16be20u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000388u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16be24: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x16be24u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x16be28: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x16be28u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x16be2c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16be2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16be30: 0xc4200390  lwc1        $f0, 0x390($at)
    ctx->pc = 0x16be30u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000390u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16be34: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x16be34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x16be38: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x16be38u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x16be3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16be3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16be40: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16BE40u;
    {
        const bool branch_taken_0x16be40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE40u;
        // 0x16be44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be40) {
            ctx->pc = 0x16BE50u;
            goto label_16be50;
        }
    }
    ctx->pc = 0x16BE48u;
    // 0x16be48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16BE48u;
    {
        const bool branch_taken_0x16be48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16be48) {
            ctx->pc = 0x16BE58u;
            goto label_16be58;
        }
    }
    ctx->pc = 0x16BE50u;
label_16be50:
    // 0x16be50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16be50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be54: 0x0  nop
    ctx->pc = 0x16be54u;
    // NOP
label_16be58:
    // 0x16be58: 0x146006bd  bnez        $v1, . + 4 + (0x6BD << 2)
    ctx->pc = 0x16BE58u;
    {
        const bool branch_taken_0x16be58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16be58) {
            ctx->pc = 0x16D950u;
            goto label_16d950;
        }
    }
    ctx->pc = 0x16BE60u;
label_16be60:
    // 0x16be60: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16be60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16be64: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x16be64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x16be68: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x16be68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x16be6c: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x16be6cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16be70: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16be70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16be74: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16be74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16be78: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16be78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16be7c: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x16be7cu;
    runtime->Store128(rdram, ctx, 0x70000040u, GPR_VEC(ctx, 8));
    // 0x16be80: 0x34440140  ori         $a0, $v0, 0x140
    ctx->pc = 0x16be80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)320);
    // 0x16be84: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16be84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16be88: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x16be88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x16be8c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16be90: 0x344702b0  ori         $a3, $v0, 0x2B0
    ctx->pc = 0x16be90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)688);
    // 0x16be94: 0x8622002c  lh          $v0, 0x2C($s1)
    ctx->pc = 0x16be94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x16be98: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x16be98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16be9c: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16BE9Cu;
    SET_GPR_U32(ctx, 31, 0x16BEA4u);
    ctx->pc = 0x16BEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BE9Cu;
    // 0x16bea0: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16BE9Cu, 0x16BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BEA4u;
label_16bea4:
    // 0x16bea4: 0x104006aa  beqz        $v0, . + 4 + (0x6AA << 2)
    ctx->pc = 0x16BEA4u;
    {
        const bool branch_taken_0x16bea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bea4) {
            ctx->pc = 0x16D950u;
            goto label_16d950;
        }
    }
    ctx->pc = 0x16BEACu;
    // 0x16beac: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x16beacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16beb0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x16beb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x16beb4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x16BEB4u;
    {
        const bool branch_taken_0x16beb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEB4u;
        // 0x16beb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16beb4) {
            ctx->pc = 0x16BF88u;
            goto label_16bf88;
        }
    }
    ctx->pc = 0x16BEBCu;
    // 0x16bebc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x16BEBCu;
    {
        const bool branch_taken_0x16bebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bebc) {
            ctx->pc = 0x16BF70u;
            goto label_16bf70;
        }
    }
    ctx->pc = 0x16BEC4u;
    // 0x16bec4: 0x0  nop
    ctx->pc = 0x16bec4u;
    // NOP
label_16bec8:
    // 0x16bec8: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x16bec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x16becc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x16beccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16bed0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16bed4: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x16bed4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bed8: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x16bed8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16bedc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16bee0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x16bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16bee4: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x16bee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x16bee8: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x16bee8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16beec: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16beecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16bef0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x16bef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16bef4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x16bef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bef8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16bef8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16befc: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x16befcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x16bf00: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16bf04: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x16bf04u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bf08: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16bf08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16bf0c: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16bf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16bf10: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16bf14: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x16bf14u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
    // 0x16bf18: 0x344202a0  ori         $v0, $v0, 0x2A0
    ctx->pc = 0x16bf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x16bf1c: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x16bf1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bf20: 0x8622002c  lh          $v0, 0x2C($s1)
    ctx->pc = 0x16bf20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x16bf24: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x16bf24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bf28: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16BF28u;
    SET_GPR_U32(ctx, 31, 0x16BF30u);
    ctx->pc = 0x16BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BF28u;
    // 0x16bf2c: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16BF28u, 0x16BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF30u;
label_16bf30:
    // 0x16bf30: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16bf34: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x16bf34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16bf38: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x16bf38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x16bf3c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x16bf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16bf40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16BF40u;
    {
        const bool branch_taken_0x16bf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF40u;
        // 0x16bf44: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf40) {
            ctx->pc = 0x16BF68u;
            goto label_16bf68;
        }
    }
    ctx->pc = 0x16BF48u;
    // 0x16bf48: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16bf4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x16bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x16bf50: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x16bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16bf54: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x16bf54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16bf58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16bf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16bf5c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BF5Cu;
    {
        const bool branch_taken_0x16bf5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bf5c) {
            ctx->pc = 0x16BF68u;
            goto label_16bf68;
        }
    }
    ctx->pc = 0x16BF64u;
    // 0x16bf64: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x16bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_16bf68:
    // 0x16bf68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16bf68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16bf6c: 0x0  nop
    ctx->pc = 0x16bf6cu;
    // NOP
label_16bf70:
    // 0x16bf70: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x16bf70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16bf74: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x16BF74u;
    {
        const bool branch_taken_0x16bf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bf74) {
            ctx->pc = 0x16BEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bec8;
        }
    }
    ctx->pc = 0x16BF7Cu;
    // 0x16bf7c: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x16BF7Cu;
    {
        const bool branch_taken_0x16bf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bf7c) {
            ctx->pc = 0x16C1B0u;
            goto label_16c1b0;
        }
    }
    ctx->pc = 0x16BF84u;
    // 0x16bf84: 0x0  nop
    ctx->pc = 0x16bf84u;
    // NOP
label_16bf88:
    // 0x16bf88: 0x8625004a  lh          $a1, 0x4A($s1)
    ctx->pc = 0x16bf88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x16bf8c: 0x9624002a  lhu         $a0, 0x2A($s1)
    ctx->pc = 0x16bf8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x16bf90: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x16bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x16bf94: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x16bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x16bf98: 0x96220028  lhu         $v0, 0x28($s1)
    ctx->pc = 0x16bf98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x16bf9c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x16bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16bfa0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x16bfa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x16bfa4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x16bfa4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x16bfa8: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x16bfa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x16bfac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16bfacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16bfb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16bfb4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BFB4u;
    {
        const bool branch_taken_0x16bfb4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x16BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFB4u;
        // 0x16bfb8: 0xc4610000  lwc1        $f1, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bfb4) {
            ctx->pc = 0x16BFC8u;
            goto label_16bfc8;
        }
    }
    ctx->pc = 0x16BFBCu;
    // 0x16bfbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16bfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bfc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16BFC0u;
    {
        const bool branch_taken_0x16bfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFC0u;
        // 0x16bfc4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bfc0) {
            ctx->pc = 0x16BFE4u;
            goto label_16bfe4;
        }
    }
    ctx->pc = 0x16BFC8u;
label_16bfc8:
    // 0x16bfc8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x16bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x16bfcc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16bfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16bfd0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16bfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16bfd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16bfd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bfd8: 0x0  nop
    ctx->pc = 0x16bfd8u;
    // NOP
    // 0x16bfdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16bfdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16bfe0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16bfe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16bfe4:
    // 0x16bfe4: 0x8625004a  lh          $a1, 0x4A($s1)
    ctx->pc = 0x16bfe4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x16bfe8: 0x3c023db5  lui         $v0, 0x3DB5
    ctx->pc = 0x16bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15797 << 16));
    // 0x16bfec: 0x9624002a  lhu         $a0, 0x2A($s1)
    ctx->pc = 0x16bfecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x16bff0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x16bff0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16bff4: 0x34460481  ori         $a2, $v0, 0x481
    ctx->pc = 0x16bff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1153);
    // 0x16bff8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x16bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x16bffc: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x16bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x16c000: 0x96220028  lhu         $v0, 0x28($s1)
    ctx->pc = 0x16c000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x16c004: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x16c004u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c008: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x16c008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16c00c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x16c00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x16c010: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x16c010u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x16c014: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x16c014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x16c018: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x16c018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x16c01c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16c01cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16c020: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x16c020u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16c024: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16c028: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C028u;
    {
        const bool branch_taken_0x16c028 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x16C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C028u;
        // 0x16c02c: 0xc4610000  lwc1        $f1, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c028) {
            ctx->pc = 0x16C03Cu;
            goto label_16c03c;
        }
    }
    ctx->pc = 0x16C030u;
    // 0x16c030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c034: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16C034u;
    {
        const bool branch_taken_0x16c034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C034u;
        // 0x16c038: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c034) {
            ctx->pc = 0x16C058u;
            goto label_16c058;
        }
    }
    ctx->pc = 0x16C03Cu;
label_16c03c:
    // 0x16c03c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x16c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x16c040: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16c040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16c044: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16c044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16c048: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16c048u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c04c: 0x0  nop
    ctx->pc = 0x16c04cu;
    // NOP
    // 0x16c050: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16c050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16c054: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16c054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16c058:
    // 0x16c058: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x16c058u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16c05c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c060: 0x3c023db5  lui         $v0, 0x3DB5
    ctx->pc = 0x16c060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15797 << 16));
    // 0x16c064: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16c064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c068: 0x34420481  ori         $v0, $v0, 0x481
    ctx->pc = 0x16c068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1153);
    // 0x16c06c: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x16c06cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16c070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16c074: 0x0  nop
    ctx->pc = 0x16c074u;
    // NOP
    // 0x16c078: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16c078u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x16c07c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c080: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x16c080u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x16c084: 0xe4200000  swc1        $f0, 0x0($at)
    ctx->pc = 0x16c084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000000u, bits); }
    // 0x16c088: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c08c: 0xc4200048  lwc1        $f0, 0x48($at)
    ctx->pc = 0x16c08cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c090: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c094: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c098: 0xe4200008  swc1        $f0, 0x8($at)
    ctx->pc = 0x16c098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000008u, bits); }
    // 0x16c09c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c0a0: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x16c0a0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c0a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16c0a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16c0a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c0ac: 0xe4200010  swc1        $f0, 0x10($at)
    ctx->pc = 0x16c0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000010u, bits); }
    // 0x16c0b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c0b4: 0xc4200048  lwc1        $f0, 0x48($at)
    ctx->pc = 0x16c0b4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c0b8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x16c0b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x16c0bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c0c0: 0xe4200018  swc1        $f0, 0x18($at)
    ctx->pc = 0x16c0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000018u, bits); }
    // 0x16c0c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c0c8: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x16c0c8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c0cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16c0ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16c0d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c0d4: 0xe4200020  swc1        $f0, 0x20($at)
    ctx->pc = 0x16c0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000020u, bits); }
    // 0x16c0d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c0dc: 0xc4200048  lwc1        $f0, 0x48($at)
    ctx->pc = 0x16c0dcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c0e0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x16c0e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x16c0e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c0e8: 0xe4200028  swc1        $f0, 0x28($at)
    ctx->pc = 0x16c0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000028u, bits); }
    // 0x16c0ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c0f0: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x16c0f0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c0f4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x16c0f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x16c0f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c0fc: 0xe4200030  swc1        $f0, 0x30($at)
    ctx->pc = 0x16c0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000030u, bits); }
    // 0x16c100: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c104: 0xc4200048  lwc1        $f0, 0x48($at)
    ctx->pc = 0x16c104u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c108: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16c108u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16c10c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c110: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x16C110u;
    {
        const bool branch_taken_0x16c110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C110u;
        // 0x16c114: 0xe4200038  swc1        $f0, 0x38($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c110) {
            ctx->pc = 0x16C1A0u;
            goto label_16c1a0;
        }
    }
    ctx->pc = 0x16C118u;
label_16c118:
    // 0x16c118: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c11c: 0xc4200044  lwc1        $f0, 0x44($at)
    ctx->pc = 0x16c11cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000044u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c120: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c124: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x16c124u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16c128: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16c128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16c12c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x16c12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16c130: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x16c130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x16c134: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x16c134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c138: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x16c138u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x16c13c: 0x344202a0  ori         $v0, $v0, 0x2A0
    ctx->pc = 0x16c13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x16c140: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16c140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16c144: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x16c144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c148: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x16c148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x16c14c: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x16c14cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x16c150: 0x8628002c  lh          $t0, 0x2C($s1)
    ctx->pc = 0x16c150u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x16c154: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16C154u;
    SET_GPR_U32(ctx, 31, 0x16C15Cu);
    ctx->pc = 0x16C158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C154u;
    // 0x16c158: 0x24c669a0  addiu       $a2, $a2, 0x69A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16C154u, 0x16C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C15Cu;
label_16c15c:
    // 0x16c15c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16c160: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x16c160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16c164: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x16c164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x16c168: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x16c168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c16c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16C16Cu;
    {
        const bool branch_taken_0x16c16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C16Cu;
        // 0x16c170: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c16c) {
            ctx->pc = 0x16C198u;
            goto label_16c198;
        }
    }
    ctx->pc = 0x16C174u;
    // 0x16c174: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16c174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16c178: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x16c178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x16c17c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x16c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16c180: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x16c180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16c184: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16c184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16c188: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C188u;
    {
        const bool branch_taken_0x16c188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c188) {
            ctx->pc = 0x16C198u;
            goto label_16c198;
        }
    }
    ctx->pc = 0x16C190u;
    // 0x16c190: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x16c190u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x16c194: 0x0  nop
    ctx->pc = 0x16c194u;
    // NOP
label_16c198:
    // 0x16c198: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16c198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16c19c: 0x0  nop
    ctx->pc = 0x16c19cu;
    // NOP
label_16c1a0:
    // 0x16c1a0: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x16c1a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16c1a4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x16C1A4u;
    {
        const bool branch_taken_0x16c1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c1a4) {
            ctx->pc = 0x16C118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c118;
        }
    }
    ctx->pc = 0x16C1ACu;
    // 0x16c1ac: 0x0  nop
    ctx->pc = 0x16c1acu;
    // NOP
label_16c1b0:
    // 0x16c1b0: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x16c1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16c1b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16c1b8: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x16c1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x16c1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c1c0: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x16c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x16c1c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c1c8: 0x9102000b  lbu         $v0, 0xB($t0)
    ctx->pc = 0x16c1c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 11)));
    // 0x16c1cc: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x16c1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x16c1d0: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x16c1d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16c1d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x16c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16c1d8: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x16c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x16c1dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16c1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16c1e0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x16c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16c1e4: 0xe43021  addu        $a2, $a3, $a0
    ctx->pc = 0x16c1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x16c1e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16c1e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16c1ec: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x16c1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x16c1f0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16c1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16c1f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16c1f8: 0xc34821  addu        $t1, $a2, $v1
    ctx->pc = 0x16c1f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16c1fc: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x16c1fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x16c200: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x16c200u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x16c204: 0x0  nop
    ctx->pc = 0x16c204u;
    // NOP
    // 0x16c208: 0x0  nop
    ctx->pc = 0x16c208u;
    // NOP
    // 0x16c20c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C20Cu;
    {
        const bool branch_taken_0x16c20c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x16c20c) {
            ctx->pc = 0x16C220u;
            goto label_16c220;
        }
    }
    ctx->pc = 0x16C214u;
    // 0x16c214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c218: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16C218u;
    {
        const bool branch_taken_0x16c218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C218u;
        // 0x16c21c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c218) {
            ctx->pc = 0x16C23Cu;
            goto label_16c23c;
        }
    }
    ctx->pc = 0x16C220u;
label_16c220:
    // 0x16c220: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x16c220u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x16c224: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16c224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16c228: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16c228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16c22c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16c22cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c230: 0x0  nop
    ctx->pc = 0x16c230u;
    // NOP
    // 0x16c234: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16c234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16c238: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16c238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16c23c:
    // 0x16c23c: 0x46030642  mul.s       $f25, $f0, $f3
    ctx->pc = 0x16c23cu;
    ctx->f[25] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x16c240: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16c240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16c244: 0x95270004  lhu         $a3, 0x4($t1)
    ctx->pc = 0x16c244u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x16c248: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x16c248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x16c24c: 0x85260008  lh          $a2, 0x8($t1)
    ctx->pc = 0x16c24cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x16c250: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16c250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c254: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x16c254u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16c258: 0x95220006  lhu         $v0, 0x6($t1)
    ctx->pc = 0x16c258u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x16c25c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16c25cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c260: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x16c260u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16c264: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x16c264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x16c268: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16c268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16c26c: 0x0  nop
    ctx->pc = 0x16c26cu;
    // NOP
    // 0x16c270: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16c270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16c274: 0x9103000c  lbu         $v1, 0xC($t0)
    ctx->pc = 0x16c274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x16c278: 0x46011e02  mul.s       $f24, $f3, $f1
    ctx->pc = 0x16c278u;
    ctx->f[24] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x16c27c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x16c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x16c280: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x16c280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x16c284: 0x4618c8c0  add.s       $f3, $f25, $f24
    ctx->pc = 0x16c284u;
    ctx->f[3] = FPU_ADD_S(ctx->f[25], ctx->f[24]);
    // 0x16c288: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16c288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16c28c: 0x46031542  mul.s       $f21, $f2, $f3
    ctx->pc = 0x16c28cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x16c290: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16c290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16c294: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x16c294u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x16c298: 0x0  nop
    ctx->pc = 0x16c298u;
    // NOP
    // 0x16c29c: 0x0  nop
    ctx->pc = 0x16c29cu;
    // NOP
    // 0x16c2a0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C2A0u;
    {
        const bool branch_taken_0x16c2a0 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x16c2a0) {
            ctx->pc = 0x16C2B4u;
            goto label_16c2b4;
        }
    }
    ctx->pc = 0x16C2A8u;
    // 0x16c2a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16c2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c2ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16C2ACu;
    {
        const bool branch_taken_0x16c2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2ACu;
        // 0x16c2b0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c2ac) {
            ctx->pc = 0x16C2D0u;
            goto label_16c2d0;
        }
    }
    ctx->pc = 0x16C2B4u;
label_16c2b4:
    // 0x16c2b4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x16c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x16c2b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16c2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16c2bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16c2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16c2c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16c2c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c2c4: 0x0  nop
    ctx->pc = 0x16c2c4u;
    // NOP
    // 0x16c2c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16c2c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16c2cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16c2ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16c2d0:
    // 0x16c2d0: 0x460305c2  mul.s       $f23, $f0, $f3
    ctx->pc = 0x16c2d0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x16c2d4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x16c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x16c2d8: 0x95250006  lhu         $a1, 0x6($t1)
    ctx->pc = 0x16c2d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x16c2dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c2e0: 0x8524000a  lh          $a0, 0xA($t1)
    ctx->pc = 0x16c2e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x16c2e4: 0x8c22010c  lw          $v0, 0x10C($at)
    ctx->pc = 0x16c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000010Cu)); // MMIO: 0x7000010c
    // 0x16c2e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16c2e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16c2ec: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x16c2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16c2f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16c2f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16c2f4: 0x0  nop
    ctx->pc = 0x16c2f4u;
    // NOP
    // 0x16c2f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16c2f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16c2fc: 0x46011d82  mul.s       $f22, $f3, $f1
    ctx->pc = 0x16c2fcu;
    ctx->f[22] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x16c300: 0x4616b840  add.s       $f1, $f23, $f22
    ctx->pc = 0x16c300u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
    // 0x16c304: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x16C304u;
    {
        const bool branch_taken_0x16c304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C304u;
        // 0x16c308: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c304) {
            ctx->pc = 0x16C598u;
            goto label_16c598;
        }
    }
    ctx->pc = 0x16C30Cu;
    // 0x16c30c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c310: 0x8c22011c  lw          $v0, 0x11C($at)
    ctx->pc = 0x16c310u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000011Cu)); // MMIO: 0x7000011c
    // 0x16c314: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x16C314u;
    {
        const bool branch_taken_0x16c314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C314u;
        // 0x16c318: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c314) {
            ctx->pc = 0x16C598u;
            goto label_16c598;
        }
    }
    ctx->pc = 0x16C31Cu;
    // 0x16c31c: 0x8c22012c  lw          $v0, 0x12C($at)
    ctx->pc = 0x16c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 300))); // MMIO: 0x7000012c
    // 0x16c320: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x16C320u;
    {
        const bool branch_taken_0x16c320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c320) {
            ctx->pc = 0x16C598u;
            goto label_16c598;
        }
    }
    ctx->pc = 0x16C328u;
    // 0x16c328: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c32c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x16c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000013Cu)); // MMIO: 0x7000013c
    // 0x16c330: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x16C330u;
    {
        const bool branch_taken_0x16c330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C330u;
        // 0x16c334: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c330) {
            ctx->pc = 0x16C598u;
            goto label_16c598;
        }
    }
    ctx->pc = 0x16C338u;
    // 0x16c338: 0x3c023c40  lui         $v0, 0x3C40
    ctx->pc = 0x16c338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15424 << 16));
    // 0x16c33c: 0x8c26fc90  lw          $a2, -0x370($at)
    ctx->pc = 0x16c33cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966416)));
    // 0x16c340: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x16c340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x16c344: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x16c344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16c348: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16c348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16c34c: 0x34420054  ori         $v0, $v0, 0x54
    ctx->pc = 0x16c34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)84);
    // 0x16c350: 0x2484aed0  addiu       $a0, $a0, -0x5130
    ctx->pc = 0x16c350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946512));
    // 0x16c354: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x16c354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x16c358: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c35c: 0xc58024  and         $s0, $a2, $a1
    ctx->pc = 0x16c35cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x16c360: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x16c360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16c364: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16c364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16c368: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16c36c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16c370: 0x94230100  lhu         $v1, 0x100($at)
    ctx->pc = 0x16c370u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 256)));
    // 0x16c374: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c378: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x16c378u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16c37c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16c380: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c384: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16c384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16c388: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16c388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16c38c: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x16c390: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16c390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16c394: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c398: 0x94230110  lhu         $v1, 0x110($at)
    ctx->pc = 0x16c398u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000110u));
    // 0x16c39c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c3a0: 0x8c220114  lw          $v0, 0x114($at)
    ctx->pc = 0x16c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x16c3a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16c3a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c3ac: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16c3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16c3b0: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16c3b4: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x16c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16c3b8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16c3bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c3c0: 0x94230120  lhu         $v1, 0x120($at)
    ctx->pc = 0x16c3c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000120u));
    // 0x16c3c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c3c8: 0x8c220124  lw          $v0, 0x124($at)
    ctx->pc = 0x16c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000124u)); // MMIO: 0x70000124
    // 0x16c3cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16c3d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c3d4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16c3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16c3d8: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16c3dc: 0x8c220128  lw          $v0, 0x128($at)
    ctx->pc = 0x16c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x16c3e0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16c3e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c3e8: 0x94230130  lhu         $v1, 0x130($at)
    ctx->pc = 0x16c3e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000130u));
    // 0x16c3ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c3f0: 0x8c220134  lw          $v0, 0x134($at)
    ctx->pc = 0x16c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000134u)); // MMIO: 0x70000134
    // 0x16c3f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16c3f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c3fc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16c3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16c400: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x16c400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x16c404: 0x8c220138  lw          $v0, 0x138($at)
    ctx->pc = 0x16c404u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000138u)); // MMIO: 0x70000138
    // 0x16c408: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x16c408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x16c40c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c410: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16c410u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c414: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x16c414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x16c418: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c41c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16c41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16c420: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16c420u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c424: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16c424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x16c428: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c42c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x16c42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x16c430: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16c430u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c434: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16c434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16c438: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c43c: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16c43cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c440: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16c440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16c444: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c448: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16c448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x16c44c: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16c44cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c450: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16c450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x16c454: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c458: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x16c458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x16c45c: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16c45cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c460: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16c460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16c464: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c468: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x16c468u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c46c: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x16c46cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x16c470: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c474: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x16c474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x16c478: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x16c478u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c47c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16c47cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16c480: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c484: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x16c484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16c488: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x16c488u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c48c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16c48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16c490: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c494: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16c494u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c498: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16c498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16c49c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c4a0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x16c4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x16c4a4: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16c4a4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c4a8: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16c4a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16c4ac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c4b0: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x16c4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x16c4b4: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16c4b4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c4b8: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x16c4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x16c4bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c4c0: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16c4c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16c4c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16c4c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16c4cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16c4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c4d0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16c4d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c4d4: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16c4d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16c4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16c4dc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16c4e0: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16c4e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16c4e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16c4e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16c4ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c4f0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16c4f4: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16c4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16c4f8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16c4fc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16c4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16c500: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16c500u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16c504: 0x92220013  lbu         $v0, 0x13($s1)
    ctx->pc = 0x16c504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x16c508: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x16c508u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x16c50c: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 264)));
    // 0x16c510: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c514: 0x8c230118  lw          $v1, 0x118($at)
    ctx->pc = 0x16c514u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16c518: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x16c518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16c51c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C51Cu;
    {
        const bool branch_taken_0x16c51c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c51c) {
            ctx->pc = 0x16C530u;
            goto label_16c530;
        }
    }
    ctx->pc = 0x16C524u;
    // 0x16c524: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16C524u;
    {
        const bool branch_taken_0x16c524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c524) {
            ctx->pc = 0x16C538u;
            goto label_16c538;
        }
    }
    ctx->pc = 0x16C52Cu;
    // 0x16c52c: 0x0  nop
    ctx->pc = 0x16c52cu;
    // NOP
label_16c530:
    // 0x16c530: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16c530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c534: 0x0  nop
    ctx->pc = 0x16c534u;
    // NOP
label_16c538:
    // 0x16c538: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c53c: 0x8c230128  lw          $v1, 0x128($at)
    ctx->pc = 0x16c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x16c540: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16c540u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c544: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C544u;
    {
        const bool branch_taken_0x16c544 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c544) {
            ctx->pc = 0x16C550u;
            goto label_16c550;
        }
    }
    ctx->pc = 0x16C54Cu;
    // 0x16c54c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16c54cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16c550:
    // 0x16c550: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c554: 0x8c230138  lw          $v1, 0x138($at)
    ctx->pc = 0x16c554u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000138u)); // MMIO: 0x70000138
    // 0x16c558: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16c558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c55c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C55Cu;
    {
        const bool branch_taken_0x16c55c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c55c) {
            ctx->pc = 0x16C568u;
            goto label_16c568;
        }
    }
    ctx->pc = 0x16C564u;
    // 0x16c564: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16c564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16c568:
    // 0x16c568: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16c568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16c56c: 0x23183  sra         $a2, $v0, 6
    ctx->pc = 0x16c56cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    // 0x16c570: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16c570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16c574: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16C574u;
    SET_GPR_U32(ctx, 31, 0x16C57Cu);
    ctx->pc = 0x16C578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C574u;
    // 0x16c578: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16C574u, 0x16C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C57Cu;
label_16c57c:
    // 0x16c57c: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x16c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x16c580: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16c580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16c584: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16c584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16c588: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16c588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16c58c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16c58cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16c590: 0x100004ef  b           . + 4 + (0x4EF << 2)
    ctx->pc = 0x16C590u;
    {
        const bool branch_taken_0x16c590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C590u;
        // 0x16c594: 0xac24fc90  sw          $a0, -0x370($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c590) {
            ctx->pc = 0x16D950u;
            goto label_16d950;
        }
    }
    ctx->pc = 0x16C598u;
label_16c598:
    // 0x16c598: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c59c: 0x34440050  ori         $a0, $v0, 0x50
    ctx->pc = 0x16c59cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x16c5a0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16c5a4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c5a8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16c5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16c5ac: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16c5acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000000u));
    // 0x16c5b0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16c5b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000020u));
    // 0x16c5b4: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x16c5b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16c5b8: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x16c5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16c5bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16c5c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16c5c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16c5c4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c5c8: 0x34440050  ori         $a0, $v0, 0x50
    ctx->pc = 0x16c5c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x16c5cc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c5d0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x16C5D0u;
    SET_GPR_U32(ctx, 31, 0x16C5D8u);
    ctx->pc = 0x16C5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C5D0u;
    // 0x16c5d4: 0x34450050  ori         $a1, $v0, 0x50 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x16C5D0u, 0x16C5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C5D8u;
label_16c5d8:
    // 0x16c5d8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c5dc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16c5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16c5e0: 0x34440060  ori         $a0, $v0, 0x60
    ctx->pc = 0x16c5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x16c5e4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c5e8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x16c5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x16c5ec: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16c5ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000000u));
    // 0x16c5f0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16c5f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000010u));
    // 0x16c5f4: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x16c5f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16c5f8: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x16c5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16c5fc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16c600: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16c600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16c604: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c608: 0x34440060  ori         $a0, $v0, 0x60
    ctx->pc = 0x16c608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x16c60c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c610: 0xc0414dc  jal         func_105370
    ctx->pc = 0x16C610u;
    SET_GPR_U32(ctx, 31, 0x16C618u);
    ctx->pc = 0x16C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C610u;
    // 0x16c614: 0x34450060  ori         $a1, $v0, 0x60 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x16C610u, 0x16C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C618u;
label_16c618:
    // 0x16c618: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16c618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16c61c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c620: 0x34640070  ori         $a0, $v1, 0x70
    ctx->pc = 0x16c620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x16c624: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x16c624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16c628: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c62c: 0x34420030  ori         $v0, $v0, 0x30
    ctx->pc = 0x16c62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x16c630: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16c630u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000020u));
    // 0x16c634: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16c634u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000030u));
    // 0x16c638: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x16c638u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16c63c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x16c63cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16c640: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16c640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16c644: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16c644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16c648: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c64c: 0x34440070  ori         $a0, $v0, 0x70
    ctx->pc = 0x16c64cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x16c650: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c654: 0xc0414dc  jal         func_105370
    ctx->pc = 0x16C654u;
    SET_GPR_U32(ctx, 31, 0x16C65Cu);
    ctx->pc = 0x16C658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C654u;
    // 0x16c658: 0x34450070  ori         $a1, $v0, 0x70 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x16C654u, 0x16C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C65Cu;
label_16c65c:
    // 0x16c65c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16c660: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c664: 0x34640080  ori         $a0, $v1, 0x80
    ctx->pc = 0x16c664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x16c668: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x16c668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x16c66c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c670: 0x34420030  ori         $v0, $v0, 0x30
    ctx->pc = 0x16c670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x16c674: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16c674u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000010u));
    // 0x16c678: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16c678u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000030u));
    // 0x16c67c: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x16c67cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16c680: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x16c680u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16c684: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16c684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16c688: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16c688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16c68c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c690: 0x34440080  ori         $a0, $v0, 0x80
    ctx->pc = 0x16c690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x16c694: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c698: 0xc0414dc  jal         func_105370
    ctx->pc = 0x16C698u;
    SET_GPR_U32(ctx, 31, 0x16C6A0u);
    ctx->pc = 0x16C69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C698u;
    // 0x16c69c: 0x34450080  ori         $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x16C698u, 0x16C6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C6A0u;
label_16c6a0:
    // 0x16c6a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16c6a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c6a8: 0xac23008c  sw          $v1, 0x8C($at)
    ctx->pc = 0x16c6a8u;
    runtime->Store32(rdram, ctx, 0x7000008Cu, GPR_U32(ctx, 3)); // MMIO: 0x7000008c
    // 0x16c6ac: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x16c6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16c6b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c6b4: 0xac23007c  sw          $v1, 0x7C($at)
    ctx->pc = 0x16c6b4u;
    runtime->Store32(rdram, ctx, 0x7000007Cu, GPR_U32(ctx, 3)); // MMIO: 0x7000007c
    // 0x16c6b8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c6bc: 0xac23006c  sw          $v1, 0x6C($at)
    ctx->pc = 0x16c6bcu;
    runtime->Store32(rdram, ctx, 0x7000006Cu, GPR_U32(ctx, 3)); // MMIO: 0x7000006c
    // 0x16c6c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c6c4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x16C6C4u;
    {
        const bool branch_taken_0x16c6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6C4u;
        // 0x16c6c8: 0xac23005c  sw          $v1, 0x5C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c6c4) {
            ctx->pc = 0x16C740u;
            goto label_16c740;
        }
    }
    ctx->pc = 0x16C6CCu;
    // 0x16c6cc: 0x0  nop
    ctx->pc = 0x16c6ccu;
    // NOP
label_16c6d0:
    // 0x16c6d0: 0x8628002c  lh          $t0, 0x2C($s1)
    ctx->pc = 0x16c6d0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x16c6d4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16c6d8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x16c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16c6dc: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x16c6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x16c6e0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x16c6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16c6e4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x16c6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c6e8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16c6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16c6ec: 0x344202a0  ori         $v0, $v0, 0x2A0
    ctx->pc = 0x16c6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x16c6f0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16c6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16c6f4: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16c6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16c6f8: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16C6F8u;
    SET_GPR_U32(ctx, 31, 0x16C700u);
    ctx->pc = 0x16C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C6F8u;
    // 0x16c6fc: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16C6F8u, 0x16C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C700u;
label_16c700:
    // 0x16c700: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16c700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16c704: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x16c704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16c708: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x16c708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x16c70c: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x16c70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c710: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16C710u;
    {
        const bool branch_taken_0x16c710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C710u;
        // 0x16c714: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c710) {
            ctx->pc = 0x16C738u;
            goto label_16c738;
        }
    }
    ctx->pc = 0x16C718u;
    // 0x16c718: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x16c718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16c71c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x16c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x16c720: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x16c720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x16c724: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x16c724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x16c728: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16c728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16c72c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C72Cu;
    {
        const bool branch_taken_0x16c72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c72c) {
            ctx->pc = 0x16C738u;
            goto label_16c738;
        }
    }
    ctx->pc = 0x16C734u;
    // 0x16c734: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x16c734u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_16c738:
    // 0x16c738: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16c738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16c73c: 0x0  nop
    ctx->pc = 0x16c73cu;
    // NOP
label_16c740:
    // 0x16c740: 0x2a030009  slti        $v1, $s0, 0x9
    ctx->pc = 0x16c740u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x16c744: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x16C744u;
    {
        const bool branch_taken_0x16c744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C744u;
        // 0x16c748: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c744) {
            ctx->pc = 0x16C6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c6d0;
        }
    }
    ctx->pc = 0x16C74Cu;
    // 0x16c74c: 0x8c23016c  lw          $v1, 0x16C($at)
    ctx->pc = 0x16c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 364))); // MMIO: 0x7000016c
    // 0x16c750: 0x1060011f  beqz        $v1, . + 4 + (0x11F << 2)
    ctx->pc = 0x16C750u;
    {
        const bool branch_taken_0x16c750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c750) {
            ctx->pc = 0x16CBD0u;
            goto label_16cbd0;
        }
    }
    ctx->pc = 0x16C758u;
    // 0x16c758: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c75c: 0x8c23015c  lw          $v1, 0x15C($at)
    ctx->pc = 0x16c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000015Cu)); // MMIO: 0x7000015c
    // 0x16c760: 0x1060011b  beqz        $v1, . + 4 + (0x11B << 2)
    ctx->pc = 0x16C760u;
    {
        const bool branch_taken_0x16c760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C760u;
        // 0x16c764: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c760) {
            ctx->pc = 0x16CBD0u;
            goto label_16cbd0;
        }
    }
    ctx->pc = 0x16C768u;
    // 0x16c768: 0x8c22010c  lw          $v0, 0x10C($at)
    ctx->pc = 0x16c768u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 268))); // MMIO: 0x7000010c
    // 0x16c76c: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x16C76Cu;
    {
        const bool branch_taken_0x16c76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c76c) {
            ctx->pc = 0x16C9D8u;
            goto label_16c9d8;
        }
    }
    ctx->pc = 0x16C774u;
    // 0x16c774: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16c774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16c778: 0x3c023c40  lui         $v0, 0x3C40
    ctx->pc = 0x16c778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15424 << 16));
    // 0x16c77c: 0x8c26fc90  lw          $a2, -0x370($at)
    ctx->pc = 0x16c77cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16c780: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x16c780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x16c784: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x16c784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16c788: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16c788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16c78c: 0x34420054  ori         $v0, $v0, 0x54
    ctx->pc = 0x16c78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)84);
    // 0x16c790: 0x2484aed0  addiu       $a0, $a0, -0x5130
    ctx->pc = 0x16c790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946512));
    // 0x16c794: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x16c794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x16c798: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c79c: 0xc58024  and         $s0, $a2, $a1
    ctx->pc = 0x16c79cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x16c7a0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x16c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16c7a4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16c7a8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16c7ac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16c7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16c7b0: 0x94230100  lhu         $v1, 0x100($at)
    ctx->pc = 0x16c7b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 256)));
    // 0x16c7b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c7b8: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x16c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16c7bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16c7c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c7c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16c7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16c7c8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16c7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16c7cc: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x16c7d0: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16c7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16c7d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c7d8: 0x94230160  lhu         $v1, 0x160($at)
    ctx->pc = 0x16c7d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000160u));
    // 0x16c7dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c7e0: 0x8c220164  lw          $v0, 0x164($at)
    ctx->pc = 0x16c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000164u)); // MMIO: 0x70000164
    // 0x16c7e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16c7e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c7ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16c7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16c7f0: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16c7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16c7f4: 0x8c220168  lw          $v0, 0x168($at)
    ctx->pc = 0x16c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000168u)); // MMIO: 0x70000168
    // 0x16c7f8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16c7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16c7fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c800: 0x94230150  lhu         $v1, 0x150($at)
    ctx->pc = 0x16c800u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000150u));
    // 0x16c804: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c808: 0x8c220154  lw          $v0, 0x154($at)
    ctx->pc = 0x16c808u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000154u)); // MMIO: 0x70000154
    // 0x16c80c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16c810: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c814: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16c814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16c818: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16c818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16c81c: 0x8c220158  lw          $v0, 0x158($at)
    ctx->pc = 0x16c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000158u)); // MMIO: 0x70000158
    // 0x16c820: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16c820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16c824: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c828: 0x94230140  lhu         $v1, 0x140($at)
    ctx->pc = 0x16c828u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000140u));
    // 0x16c82c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c830: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x16c830u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000144u)); // MMIO: 0x70000144
    // 0x16c834: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16c834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16c838: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c83c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16c83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16c840: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x16c840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x16c844: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16c844u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16c848: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x16c848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x16c84c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c850: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16c850u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c854: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x16c854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x16c858: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c85c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16c85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16c860: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16c860u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c864: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16c864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x16c868: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c86c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x16c86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x16c870: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16c870u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c874: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16c874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16c878: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c87c: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16c87cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c880: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16c880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16c884: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c888: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16c888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x16c88c: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16c88cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c890: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16c890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x16c894: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c898: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x16c898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x16c89c: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16c89cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c8a0: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16c8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16c8a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c8a8: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16c8a8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c8ac: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x16c8acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x16c8b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c8b4: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x16c8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x16c8b8: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16c8b8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c8bc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16c8bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16c8c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c8c4: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x16c8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16c8c8: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16c8c8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c8cc: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16c8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16c8d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c8d4: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16c8d4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c8d8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16c8d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16c8dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c8e0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x16c8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x16c8e4: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16c8e4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c8e8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16c8e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16c8ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c8f0: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x16c8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x16c8f4: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16c8f4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c8f8: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x16c8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x16c8fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c900: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16c900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16c904: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16c904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16c908: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16c908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16c90c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16c910: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16c910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c914: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16c914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16c918: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16c918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16c91c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16c920: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16c920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16c924: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16c924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16c928: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16c928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16c92c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c930: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16c930u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16c934: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16c934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16c938: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16c938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16c93c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16c93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16c940: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16c940u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16c944: 0x92220013  lbu         $v0, 0x13($s1)
    ctx->pc = 0x16c944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x16c948: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x16c948u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x16c94c: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 264)));
    // 0x16c950: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c954: 0x8c230168  lw          $v1, 0x168($at)
    ctx->pc = 0x16c954u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000168u)); // MMIO: 0x70000168
    // 0x16c958: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x16c958u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16c95c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C95Cu;
    {
        const bool branch_taken_0x16c95c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c95c) {
            ctx->pc = 0x16C970u;
            goto label_16c970;
        }
    }
    ctx->pc = 0x16C964u;
    // 0x16c964: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16C964u;
    {
        const bool branch_taken_0x16c964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c964) {
            ctx->pc = 0x16C978u;
            goto label_16c978;
        }
    }
    ctx->pc = 0x16C96Cu;
    // 0x16c96c: 0x0  nop
    ctx->pc = 0x16c96cu;
    // NOP
label_16c970:
    // 0x16c970: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16c970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c974: 0x0  nop
    ctx->pc = 0x16c974u;
    // NOP
label_16c978:
    // 0x16c978: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c97c: 0x8c230158  lw          $v1, 0x158($at)
    ctx->pc = 0x16c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000158u)); // MMIO: 0x70000158
    // 0x16c980: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16c980u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c984: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C984u;
    {
        const bool branch_taken_0x16c984 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c984) {
            ctx->pc = 0x16C990u;
            goto label_16c990;
        }
    }
    ctx->pc = 0x16C98Cu;
    // 0x16c98c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16c98cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16c990:
    // 0x16c990: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16c994: 0x8c230148  lw          $v1, 0x148($at)
    ctx->pc = 0x16c994u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16c998: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16c998u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16c99c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16C99Cu;
    {
        const bool branch_taken_0x16c99c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c99c) {
            ctx->pc = 0x16C9A8u;
            goto label_16c9a8;
        }
    }
    ctx->pc = 0x16C9A4u;
    // 0x16c9a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16c9a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16c9a8:
    // 0x16c9a8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16c9ac: 0x23183  sra         $a2, $v0, 6
    ctx->pc = 0x16c9acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    // 0x16c9b0: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16c9b4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16C9B4u;
    SET_GPR_U32(ctx, 31, 0x16C9BCu);
    ctx->pc = 0x16C9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C9B4u;
    // 0x16c9b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16C9B4u, 0x16C9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C9BCu;
label_16c9bc:
    // 0x16c9bc: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x16c9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x16c9c0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16c9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16c9c4: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16c9c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16c9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16c9cc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16c9ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16c9d0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x16C9D0u;
    {
        const bool branch_taken_0x16c9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C9D0u;
        // 0x16c9d4: 0xac24fc90  sw          $a0, -0x370($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c9d0) {
            ctx->pc = 0x16CBD0u;
            goto label_16cbd0;
        }
    }
    ctx->pc = 0x16C9D8u;
label_16c9d8:
    // 0x16c9d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16c9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16c9dc: 0x8c26fc90  lw          $a2, -0x370($at)
    ctx->pc = 0x16c9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16c9e0: 0x3c023838  lui         $v0, 0x3838
    ctx->pc = 0x16c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14392 << 16));
    // 0x16c9e4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x16c9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x16c9e8: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x16c9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16c9ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16c9f0: 0x34420053  ori         $v0, $v0, 0x53
    ctx->pc = 0x16c9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)83);
    // 0x16c9f4: 0x2484aed0  addiu       $a0, $a0, -0x5130
    ctx->pc = 0x16c9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946512));
    // 0x16c9f8: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x16c9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x16c9fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16c9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ca00: 0xc58024  and         $s0, $a2, $a1
    ctx->pc = 0x16ca00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x16ca04: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x16ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16ca08: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16ca0c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16ca10: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16ca10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16ca14: 0x94230150  lhu         $v1, 0x150($at)
    ctx->pc = 0x16ca14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 336)));
    // 0x16ca18: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ca18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ca1c: 0x8c220154  lw          $v0, 0x154($at)
    ctx->pc = 0x16ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000154u)); // MMIO: 0x70000154
    // 0x16ca20: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16ca24: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ca24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ca28: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16ca28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16ca2c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16ca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16ca30: 0x8c220158  lw          $v0, 0x158($at)
    ctx->pc = 0x16ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000158u)); // MMIO: 0x70000158
    // 0x16ca34: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16ca34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16ca38: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ca38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ca3c: 0x94230160  lhu         $v1, 0x160($at)
    ctx->pc = 0x16ca3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000160u));
    // 0x16ca40: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ca40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ca44: 0x8c220164  lw          $v0, 0x164($at)
    ctx->pc = 0x16ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000164u)); // MMIO: 0x70000164
    // 0x16ca48: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16ca4c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ca4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ca50: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16ca50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16ca54: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16ca58: 0x8c220168  lw          $v0, 0x168($at)
    ctx->pc = 0x16ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000168u)); // MMIO: 0x70000168
    // 0x16ca5c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16ca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16ca60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ca60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ca64: 0x94230140  lhu         $v1, 0x140($at)
    ctx->pc = 0x16ca64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000140u));
    // 0x16ca68: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ca68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ca6c: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x16ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000144u)); // MMIO: 0x70000144
    // 0x16ca70: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16ca74: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ca74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ca78: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16ca78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16ca7c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16ca80: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16ca84: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16ca84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16ca88: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ca88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ca8c: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16ca8cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ca90: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x16ca90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x16ca94: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ca94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ca98: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16ca98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16ca9c: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16ca9cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16caa0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16caa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16caa4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16caa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16caa8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x16caa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x16caac: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16caacu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cab0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16cab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16cab4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cab8: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16cab8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cabc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16cabcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16cac0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cac4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16cac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x16cac8: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16cac8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cacc: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16caccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x16cad0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cad4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x16cad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x16cad8: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16cad8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cadc: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16cadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16cae0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cae4: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16cae4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cae8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16cae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16caec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16caecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16caf0: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x16caf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x16caf4: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16caf4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16caf8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16caf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16cafc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cb00: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x16cb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16cb04: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16cb04u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cb08: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16cb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16cb0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cb10: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16cb10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16cb14: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16cb18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16cb1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16cb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16cb20: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16cb20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16cb24: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16cb28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16cb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16cb2c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16cb30: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16cb30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16cb34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16cb38: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16cb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16cb3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cb40: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16cb44: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16cb44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16cb48: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16cb4c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16cb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16cb50: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16cb50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16cb54: 0x92220013  lbu         $v0, 0x13($s1)
    ctx->pc = 0x16cb54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x16cb58: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x16cb58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x16cb5c: 0x8c220158  lw          $v0, 0x158($at)
    ctx->pc = 0x16cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 344)));
    // 0x16cb60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cb64: 0x8c230168  lw          $v1, 0x168($at)
    ctx->pc = 0x16cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000168u)); // MMIO: 0x70000168
    // 0x16cb68: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x16cb68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16cb6c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x16CB6Cu;
    {
        const bool branch_taken_0x16cb6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cb6c) {
            ctx->pc = 0x16CB80u;
            goto label_16cb80;
        }
    }
    ctx->pc = 0x16CB74u;
    // 0x16cb74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16CB74u;
    {
        const bool branch_taken_0x16cb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cb74) {
            ctx->pc = 0x16CB88u;
            goto label_16cb88;
        }
    }
    ctx->pc = 0x16CB7Cu;
    // 0x16cb7c: 0x0  nop
    ctx->pc = 0x16cb7cu;
    // NOP
label_16cb80:
    // 0x16cb80: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16cb80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cb84: 0x0  nop
    ctx->pc = 0x16cb84u;
    // NOP
label_16cb88:
    // 0x16cb88: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cb8c: 0x8c230148  lw          $v1, 0x148($at)
    ctx->pc = 0x16cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16cb90: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16cb90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16cb94: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16CB94u;
    {
        const bool branch_taken_0x16cb94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cb94) {
            ctx->pc = 0x16CBA0u;
            goto label_16cba0;
        }
    }
    ctx->pc = 0x16CB9Cu;
    // 0x16cb9c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16cb9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16cba0:
    // 0x16cba0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16cba4: 0x23183  sra         $a2, $v0, 6
    ctx->pc = 0x16cba4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    // 0x16cba8: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16cbac: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16CBACu;
    SET_GPR_U32(ctx, 31, 0x16CBB4u);
    ctx->pc = 0x16CBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CBACu;
    // 0x16cbb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16CBACu, 0x16CBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CBB4u;
label_16cbb4:
    // 0x16cbb4: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x16cbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x16cbb8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16cbbc: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16cbc0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16cbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16cbc4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16cbc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16cbc8: 0xac24fc90  sw          $a0, -0x370($at)
    ctx->pc = 0x16cbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
    // 0x16cbcc: 0x0  nop
    ctx->pc = 0x16cbccu;
    // NOP
label_16cbd0:
    // 0x16cbd0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cbd4: 0x8c23018c  lw          $v1, 0x18C($at)
    ctx->pc = 0x16cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000018Cu)); // MMIO: 0x7000018c
    // 0x16cbd8: 0x1060011d  beqz        $v1, . + 4 + (0x11D << 2)
    ctx->pc = 0x16CBD8u;
    {
        const bool branch_taken_0x16cbd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBD8u;
        // 0x16cbdc: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cbd8) {
            ctx->pc = 0x16D050u;
            goto label_16d050;
        }
    }
    ctx->pc = 0x16CBE0u;
    // 0x16cbe0: 0x8c23016c  lw          $v1, 0x16C($at)
    ctx->pc = 0x16cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 364))); // MMIO: 0x7000016c
    // 0x16cbe4: 0x1060011a  beqz        $v1, . + 4 + (0x11A << 2)
    ctx->pc = 0x16CBE4u;
    {
        const bool branch_taken_0x16cbe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cbe4) {
            ctx->pc = 0x16D050u;
            goto label_16d050;
        }
    }
    ctx->pc = 0x16CBECu;
    // 0x16cbec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cbecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cbf0: 0x8c22011c  lw          $v0, 0x11C($at)
    ctx->pc = 0x16cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000011Cu)); // MMIO: 0x7000011c
    // 0x16cbf4: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x16CBF4u;
    {
        const bool branch_taken_0x16cbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBF4u;
        // 0x16cbf8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cbf4) {
            ctx->pc = 0x16CE58u;
            goto label_16ce58;
        }
    }
    ctx->pc = 0x16CBFCu;
    // 0x16cbfc: 0x3c023c40  lui         $v0, 0x3C40
    ctx->pc = 0x16cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15424 << 16));
    // 0x16cc00: 0x8c26fc90  lw          $a2, -0x370($at)
    ctx->pc = 0x16cc00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966416)));
    // 0x16cc04: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x16cc04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x16cc08: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x16cc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16cc0c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16cc10: 0x34420054  ori         $v0, $v0, 0x54
    ctx->pc = 0x16cc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)84);
    // 0x16cc14: 0x2484aed0  addiu       $a0, $a0, -0x5130
    ctx->pc = 0x16cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946512));
    // 0x16cc18: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x16cc18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x16cc1c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cc20: 0xc58024  and         $s0, $a2, $a1
    ctx->pc = 0x16cc20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x16cc24: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x16cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16cc28: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16cc2c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16cc30: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16cc34: 0x94230110  lhu         $v1, 0x110($at)
    ctx->pc = 0x16cc34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 272)));
    // 0x16cc38: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cc3c: 0x8c220114  lw          $v0, 0x114($at)
    ctx->pc = 0x16cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x16cc40: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16cc44: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cc48: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16cc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16cc4c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16cc50: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x16cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16cc54: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16cc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16cc58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cc58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cc5c: 0x94230180  lhu         $v1, 0x180($at)
    ctx->pc = 0x16cc5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000180u));
    // 0x16cc60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cc60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cc64: 0x8c220184  lw          $v0, 0x184($at)
    ctx->pc = 0x16cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000184u)); // MMIO: 0x70000184
    // 0x16cc68: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16cc6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cc70: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16cc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16cc74: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16cc78: 0x8c220188  lw          $v0, 0x188($at)
    ctx->pc = 0x16cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000188u)); // MMIO: 0x70000188
    // 0x16cc7c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16cc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16cc80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cc84: 0x94230160  lhu         $v1, 0x160($at)
    ctx->pc = 0x16cc84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000160u));
    // 0x16cc88: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cc88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cc8c: 0x8c220164  lw          $v0, 0x164($at)
    ctx->pc = 0x16cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000164u)); // MMIO: 0x70000164
    // 0x16cc90: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16cc94: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cc94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cc98: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16cc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16cc9c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16cc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16cca0: 0x8c220168  lw          $v0, 0x168($at)
    ctx->pc = 0x16cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000168u)); // MMIO: 0x70000168
    // 0x16cca4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16cca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16cca8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ccac: 0x94230140  lhu         $v1, 0x140($at)
    ctx->pc = 0x16ccacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000140u));
    // 0x16ccb0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ccb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ccb4: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x16ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000144u)); // MMIO: 0x70000144
    // 0x16ccb8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16ccbc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ccbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ccc0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16ccc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16ccc4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x16ccc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x16ccc8: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16cccc: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x16ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x16ccd0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ccd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ccd4: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16ccd4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ccd8: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16ccd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16ccdc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ccdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cce0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16cce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16cce4: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16cce4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cce8: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16cce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x16ccec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ccecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ccf0: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x16ccf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x16ccf4: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16ccf4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ccf8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16ccf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16ccfc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ccfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cd00: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16cd00u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cd04: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16cd04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16cd08: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cd0c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16cd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x16cd10: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16cd10u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cd14: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16cd14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16cd18: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cd1c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x16cd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x16cd20: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16cd20u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cd24: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16cd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16cd28: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cd28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cd2c: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16cd2cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cd30: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16cd30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16cd34: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cd38: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x16cd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x16cd3c: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16cd3cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cd40: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16cd40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x16cd44: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cd48: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x16cd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16cd4c: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16cd4cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cd50: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16cd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16cd54: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cd58: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16cd58u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cd5c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16cd5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16cd60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cd64: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x16cd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x16cd68: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16cd68u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cd6c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16cd6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16cd70: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cd74: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x16cd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x16cd78: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16cd78u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cd7c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x16cd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x16cd80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cd84: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16cd84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16cd88: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16cd8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16cd90: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16cd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16cd94: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16cd94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16cd98: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16cd9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16cd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16cda0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16cda4: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16cda4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16cda8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16cdac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16cdb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cdb4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16cdb8: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16cdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16cdbc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16cdc0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16cdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16cdc4: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16cdc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16cdc8: 0x92220013  lbu         $v0, 0x13($s1)
    ctx->pc = 0x16cdc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x16cdcc: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x16cdccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x16cdd0: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x16cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 280)));
    // 0x16cdd4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cdd8: 0x8c230188  lw          $v1, 0x188($at)
    ctx->pc = 0x16cdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000188u)); // MMIO: 0x70000188
    // 0x16cddc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x16cddcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16cde0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CDE0u;
    {
        const bool branch_taken_0x16cde0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cde0) {
            ctx->pc = 0x16CDF0u;
            goto label_16cdf0;
        }
    }
    ctx->pc = 0x16CDE8u;
    // 0x16cde8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16CDE8u;
    {
        const bool branch_taken_0x16cde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cde8) {
            ctx->pc = 0x16CDF8u;
            goto label_16cdf8;
        }
    }
    ctx->pc = 0x16CDF0u;
label_16cdf0:
    // 0x16cdf0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16cdf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cdf4: 0x0  nop
    ctx->pc = 0x16cdf4u;
    // NOP
label_16cdf8:
    // 0x16cdf8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cdf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cdfc: 0x8c230168  lw          $v1, 0x168($at)
    ctx->pc = 0x16cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000168u)); // MMIO: 0x70000168
    // 0x16ce00: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16ce00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16ce04: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16CE04u;
    {
        const bool branch_taken_0x16ce04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ce04) {
            ctx->pc = 0x16CE10u;
            goto label_16ce10;
        }
    }
    ctx->pc = 0x16CE0Cu;
    // 0x16ce0c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16ce0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16ce10:
    // 0x16ce10: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ce10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ce14: 0x8c230148  lw          $v1, 0x148($at)
    ctx->pc = 0x16ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16ce18: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16ce18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16ce1c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16CE1Cu;
    {
        const bool branch_taken_0x16ce1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ce1c) {
            ctx->pc = 0x16CE28u;
            goto label_16ce28;
        }
    }
    ctx->pc = 0x16CE24u;
    // 0x16ce24: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16ce24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16ce28:
    // 0x16ce28: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16ce2c: 0x23183  sra         $a2, $v0, 6
    ctx->pc = 0x16ce2cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    // 0x16ce30: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16ce30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16ce34: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16CE34u;
    SET_GPR_U32(ctx, 31, 0x16CE3Cu);
    ctx->pc = 0x16CE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE34u;
    // 0x16ce38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16CE34u, 0x16CE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE3Cu;
label_16ce3c:
    // 0x16ce3c: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x16ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x16ce40: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16ce44: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16ce44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16ce48: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16ce48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16ce4c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16ce4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16ce50: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x16CE50u;
    {
        const bool branch_taken_0x16ce50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE50u;
        // 0x16ce54: 0xac24fc90  sw          $a0, -0x370($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ce50) {
            ctx->pc = 0x16D050u;
            goto label_16d050;
        }
    }
    ctx->pc = 0x16CE58u;
label_16ce58:
    // 0x16ce58: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16ce58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16ce5c: 0x8c26fc90  lw          $a2, -0x370($at)
    ctx->pc = 0x16ce5cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16ce60: 0x3c023838  lui         $v0, 0x3838
    ctx->pc = 0x16ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14392 << 16));
    // 0x16ce64: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x16ce64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x16ce68: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x16ce68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16ce6c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16ce70: 0x34420053  ori         $v0, $v0, 0x53
    ctx->pc = 0x16ce70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)83);
    // 0x16ce74: 0x2484aed0  addiu       $a0, $a0, -0x5130
    ctx->pc = 0x16ce74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946512));
    // 0x16ce78: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x16ce78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x16ce7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ce7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ce80: 0xc58024  and         $s0, $a2, $a1
    ctx->pc = 0x16ce80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x16ce84: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x16ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16ce88: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16ce8c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16ce90: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16ce94: 0x94230160  lhu         $v1, 0x160($at)
    ctx->pc = 0x16ce94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 352)));
    // 0x16ce98: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ce98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ce9c: 0x8c220164  lw          $v0, 0x164($at)
    ctx->pc = 0x16ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000164u)); // MMIO: 0x70000164
    // 0x16cea0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16cea4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cea8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16cea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16ceac: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16ceb0: 0x8c220168  lw          $v0, 0x168($at)
    ctx->pc = 0x16ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000168u)); // MMIO: 0x70000168
    // 0x16ceb4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16ceb8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ceb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cebc: 0x94230180  lhu         $v1, 0x180($at)
    ctx->pc = 0x16cebcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000180u));
    // 0x16cec0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cec4: 0x8c220184  lw          $v0, 0x184($at)
    ctx->pc = 0x16cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000184u)); // MMIO: 0x70000184
    // 0x16cec8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16cecc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ceccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ced0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16ced0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16ced4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16ced4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16ced8: 0x8c220188  lw          $v0, 0x188($at)
    ctx->pc = 0x16ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000188u)); // MMIO: 0x70000188
    // 0x16cedc: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16cee0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cee4: 0x94230140  lhu         $v1, 0x140($at)
    ctx->pc = 0x16cee4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000140u));
    // 0x16cee8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ceec: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x16ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000144u)); // MMIO: 0x70000144
    // 0x16cef0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16cef4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cef8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16cef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16cefc: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16cf00: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16cf04: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16cf08: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cf08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cf0c: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16cf0cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf10: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16cf10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16cf14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cf14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cf18: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16cf18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16cf1c: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16cf1cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf20: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16cf20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x16cf24: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cf24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cf28: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x16cf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x16cf2c: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16cf2cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf30: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16cf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16cf34: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cf38: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16cf38u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf3c: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16cf3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16cf40: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cf44: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16cf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x16cf48: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16cf48u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf4c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16cf4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16cf50: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cf54: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x16cf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x16cf58: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16cf58u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf5c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16cf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16cf60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cf60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cf64: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16cf64u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf68: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16cf68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16cf6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cf6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cf70: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x16cf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x16cf74: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16cf74u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf78: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16cf78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16cf7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cf7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cf80: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x16cf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16cf84: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16cf84u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cf88: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16cf88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16cf8c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cf8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cf90: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16cf90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16cf94: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16cf98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16cf9c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16cfa0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16cfa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16cfa4: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16cfa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16cfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16cfac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16cfb0: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16cfb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16cfb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16cfb8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16cfbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16cfc0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16cfc4: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16cfc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16cfc8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16cfcc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16cfccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16cfd0: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16cfd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16cfd4: 0x92220013  lbu         $v0, 0x13($s1)
    ctx->pc = 0x16cfd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x16cfd8: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x16cfd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x16cfdc: 0x8c220168  lw          $v0, 0x168($at)
    ctx->pc = 0x16cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 360)));
    // 0x16cfe0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16cfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16cfe4: 0x8c230188  lw          $v1, 0x188($at)
    ctx->pc = 0x16cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000188u)); // MMIO: 0x70000188
    // 0x16cfe8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x16cfe8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16cfec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x16CFECu;
    {
        const bool branch_taken_0x16cfec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cfec) {
            ctx->pc = 0x16D000u;
            goto label_16d000;
        }
    }
    ctx->pc = 0x16CFF4u;
    // 0x16cff4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16CFF4u;
    {
        const bool branch_taken_0x16cff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cff4) {
            ctx->pc = 0x16D008u;
            goto label_16d008;
        }
    }
    ctx->pc = 0x16CFFCu;
    // 0x16cffc: 0x0  nop
    ctx->pc = 0x16cffcu;
    // NOP
label_16d000:
    // 0x16d000: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16d000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d004: 0x0  nop
    ctx->pc = 0x16d004u;
    // NOP
label_16d008:
    // 0x16d008: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d00c: 0x8c230148  lw          $v1, 0x148($at)
    ctx->pc = 0x16d00cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16d010: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16d010u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d014: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D014u;
    {
        const bool branch_taken_0x16d014 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d014) {
            ctx->pc = 0x16D020u;
            goto label_16d020;
        }
    }
    ctx->pc = 0x16D01Cu;
    // 0x16d01c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16d01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16d020:
    // 0x16d020: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16d020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16d024: 0x23183  sra         $a2, $v0, 6
    ctx->pc = 0x16d024u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    // 0x16d028: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16d028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16d02c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16D02Cu;
    SET_GPR_U32(ctx, 31, 0x16D034u);
    ctx->pc = 0x16D030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D02Cu;
    // 0x16d030: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16D02Cu, 0x16D034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D034u;
label_16d034:
    // 0x16d034: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x16d034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x16d038: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16d038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16d03c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16d03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16d040: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16d040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16d044: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16d044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16d048: 0xac24fc90  sw          $a0, -0x370($at)
    ctx->pc = 0x16d048u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
    // 0x16d04c: 0x0  nop
    ctx->pc = 0x16d04cu;
    // NOP
label_16d050:
    // 0x16d050: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d054: 0x8c23017c  lw          $v1, 0x17C($at)
    ctx->pc = 0x16d054u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000017Cu)); // MMIO: 0x7000017c
    // 0x16d058: 0x1060011d  beqz        $v1, . + 4 + (0x11D << 2)
    ctx->pc = 0x16D058u;
    {
        const bool branch_taken_0x16d058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D058u;
        // 0x16d05c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d058) {
            ctx->pc = 0x16D4D0u;
            goto label_16d4d0;
        }
    }
    ctx->pc = 0x16D060u;
    // 0x16d060: 0x8c23018c  lw          $v1, 0x18C($at)
    ctx->pc = 0x16d060u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 396))); // MMIO: 0x7000018c
    // 0x16d064: 0x1060011a  beqz        $v1, . + 4 + (0x11A << 2)
    ctx->pc = 0x16D064u;
    {
        const bool branch_taken_0x16d064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d064) {
            ctx->pc = 0x16D4D0u;
            goto label_16d4d0;
        }
    }
    ctx->pc = 0x16D06Cu;
    // 0x16d06c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d070: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x16d070u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000013Cu)); // MMIO: 0x7000013c
    // 0x16d074: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x16D074u;
    {
        const bool branch_taken_0x16d074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D074u;
        // 0x16d078: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d074) {
            ctx->pc = 0x16D2D8u;
            goto label_16d2d8;
        }
    }
    ctx->pc = 0x16D07Cu;
    // 0x16d07c: 0x3c023c40  lui         $v0, 0x3C40
    ctx->pc = 0x16d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15424 << 16));
    // 0x16d080: 0x8c26fc90  lw          $a2, -0x370($at)
    ctx->pc = 0x16d080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966416)));
    // 0x16d084: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x16d084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x16d088: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x16d088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16d08c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16d090: 0x34420054  ori         $v0, $v0, 0x54
    ctx->pc = 0x16d090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)84);
    // 0x16d094: 0x2484aed0  addiu       $a0, $a0, -0x5130
    ctx->pc = 0x16d094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946512));
    // 0x16d098: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x16d098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x16d09c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d0a0: 0xc58024  and         $s0, $a2, $a1
    ctx->pc = 0x16d0a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x16d0a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x16d0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16d0a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16d0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16d0ac: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16d0b0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16d0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16d0b4: 0x94230130  lhu         $v1, 0x130($at)
    ctx->pc = 0x16d0b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 304)));
    // 0x16d0b8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d0bc: 0x8c220134  lw          $v0, 0x134($at)
    ctx->pc = 0x16d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000134u)); // MMIO: 0x70000134
    // 0x16d0c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16d0c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d0c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16d0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16d0cc: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16d0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16d0d0: 0x8c220138  lw          $v0, 0x138($at)
    ctx->pc = 0x16d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000138u)); // MMIO: 0x70000138
    // 0x16d0d4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16d0d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d0dc: 0x94230170  lhu         $v1, 0x170($at)
    ctx->pc = 0x16d0dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000170u));
    // 0x16d0e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d0e4: 0x8c220174  lw          $v0, 0x174($at)
    ctx->pc = 0x16d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000174u)); // MMIO: 0x70000174
    // 0x16d0e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16d0ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d0f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16d0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16d0f4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16d0f8: 0x8c220178  lw          $v0, 0x178($at)
    ctx->pc = 0x16d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000178u)); // MMIO: 0x70000178
    // 0x16d0fc: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16d100: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d104: 0x94230180  lhu         $v1, 0x180($at)
    ctx->pc = 0x16d104u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000180u));
    // 0x16d108: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d10c: 0x8c220184  lw          $v0, 0x184($at)
    ctx->pc = 0x16d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000184u)); // MMIO: 0x70000184
    // 0x16d110: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16d110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16d114: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d118: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16d118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16d11c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16d11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16d120: 0x8c220188  lw          $v0, 0x188($at)
    ctx->pc = 0x16d120u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000188u)); // MMIO: 0x70000188
    // 0x16d124: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16d124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16d128: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d12c: 0x94230140  lhu         $v1, 0x140($at)
    ctx->pc = 0x16d12cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000140u));
    // 0x16d130: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d134: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x16d134u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000144u)); // MMIO: 0x70000144
    // 0x16d138: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16d138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16d13c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d140: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16d140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16d144: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x16d144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x16d148: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16d148u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16d14c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x16d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x16d150: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d154: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16d154u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d158: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16d158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16d15c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d160: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16d160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16d164: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16d164u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d168: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16d168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16d16c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d170: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x16d170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x16d174: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16d174u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d178: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16d178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16d17c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d180: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16d180u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d184: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16d184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16d188: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d18c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16d18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x16d190: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16d190u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d194: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16d194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16d198: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d19c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x16d19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x16d1a0: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16d1a0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d1a4: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16d1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16d1a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d1ac: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16d1acu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d1b0: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16d1b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16d1b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d1b8: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x16d1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x16d1bc: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16d1bcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d1c0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16d1c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16d1c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d1c8: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x16d1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16d1cc: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16d1ccu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d1d0: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16d1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16d1d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d1d8: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16d1d8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d1dc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16d1dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16d1e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d1e4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x16d1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x16d1e8: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16d1e8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d1ec: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16d1ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16d1f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d1f4: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x16d1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x16d1f8: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16d1f8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d1fc: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x16d1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x16d200: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d204: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16d204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16d208: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16d20c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16d210: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16d210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d214: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16d214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d218: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16d218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16d21c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16d21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16d220: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16d220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16d224: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16d224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16d228: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d22c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16d230: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16d230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d234: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16d234u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16d238: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16d238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16d23c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16d240: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16d240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16d244: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16d244u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16d248: 0x92220013  lbu         $v0, 0x13($s1)
    ctx->pc = 0x16d248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x16d24c: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x16d24cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x16d250: 0x8c220138  lw          $v0, 0x138($at)
    ctx->pc = 0x16d250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 312)));
    // 0x16d254: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d258: 0x8c230178  lw          $v1, 0x178($at)
    ctx->pc = 0x16d258u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000178u)); // MMIO: 0x70000178
    // 0x16d25c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x16d25cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16d260: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D260u;
    {
        const bool branch_taken_0x16d260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d260) {
            ctx->pc = 0x16D270u;
            goto label_16d270;
        }
    }
    ctx->pc = 0x16D268u;
    // 0x16d268: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16D268u;
    {
        const bool branch_taken_0x16d268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d268) {
            ctx->pc = 0x16D278u;
            goto label_16d278;
        }
    }
    ctx->pc = 0x16D270u;
label_16d270:
    // 0x16d270: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16d270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d274: 0x0  nop
    ctx->pc = 0x16d274u;
    // NOP
label_16d278:
    // 0x16d278: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d27c: 0x8c230188  lw          $v1, 0x188($at)
    ctx->pc = 0x16d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000188u)); // MMIO: 0x70000188
    // 0x16d280: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16d280u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d284: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D284u;
    {
        const bool branch_taken_0x16d284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d284) {
            ctx->pc = 0x16D290u;
            goto label_16d290;
        }
    }
    ctx->pc = 0x16D28Cu;
    // 0x16d28c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16d28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16d290:
    // 0x16d290: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d294: 0x8c230148  lw          $v1, 0x148($at)
    ctx->pc = 0x16d294u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16d298: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16d298u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d29c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D29Cu;
    {
        const bool branch_taken_0x16d29c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d29c) {
            ctx->pc = 0x16D2A8u;
            goto label_16d2a8;
        }
    }
    ctx->pc = 0x16D2A4u;
    // 0x16d2a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16d2a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16d2a8:
    // 0x16d2a8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16d2ac: 0x23183  sra         $a2, $v0, 6
    ctx->pc = 0x16d2acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    // 0x16d2b0: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16d2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16d2b4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16D2B4u;
    SET_GPR_U32(ctx, 31, 0x16D2BCu);
    ctx->pc = 0x16D2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D2B4u;
    // 0x16d2b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16D2B4u, 0x16D2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D2BCu;
label_16d2bc:
    // 0x16d2bc: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x16d2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x16d2c0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16d2c4: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16d2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16d2c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16d2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16d2cc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16d2ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16d2d0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x16D2D0u;
    {
        const bool branch_taken_0x16d2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2D0u;
        // 0x16d2d4: 0xac24fc90  sw          $a0, -0x370($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2d0) {
            ctx->pc = 0x16D4D0u;
            goto label_16d4d0;
        }
    }
    ctx->pc = 0x16D2D8u;
label_16d2d8:
    // 0x16d2d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16d2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16d2dc: 0x8c26fc90  lw          $a2, -0x370($at)
    ctx->pc = 0x16d2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16d2e0: 0x3c023838  lui         $v0, 0x3838
    ctx->pc = 0x16d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14392 << 16));
    // 0x16d2e4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x16d2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x16d2e8: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x16d2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16d2ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16d2f0: 0x34420053  ori         $v0, $v0, 0x53
    ctx->pc = 0x16d2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)83);
    // 0x16d2f4: 0x2484aed0  addiu       $a0, $a0, -0x5130
    ctx->pc = 0x16d2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946512));
    // 0x16d2f8: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x16d2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x16d2fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d300: 0xc58024  and         $s0, $a2, $a1
    ctx->pc = 0x16d300u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x16d304: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x16d304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16d308: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16d308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16d30c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16d310: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16d310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16d314: 0x94230180  lhu         $v1, 0x180($at)
    ctx->pc = 0x16d314u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 384)));
    // 0x16d318: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d31c: 0x8c220184  lw          $v0, 0x184($at)
    ctx->pc = 0x16d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000184u)); // MMIO: 0x70000184
    // 0x16d320: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16d320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16d324: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d328: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16d328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16d32c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16d32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16d330: 0x8c220188  lw          $v0, 0x188($at)
    ctx->pc = 0x16d330u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000188u)); // MMIO: 0x70000188
    // 0x16d334: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16d334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16d338: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d33c: 0x94230170  lhu         $v1, 0x170($at)
    ctx->pc = 0x16d33cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000170u));
    // 0x16d340: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d344: 0x8c220174  lw          $v0, 0x174($at)
    ctx->pc = 0x16d344u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000174u)); // MMIO: 0x70000174
    // 0x16d348: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16d348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16d34c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d350: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16d350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16d354: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16d354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16d358: 0x8c220178  lw          $v0, 0x178($at)
    ctx->pc = 0x16d358u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000178u)); // MMIO: 0x70000178
    // 0x16d35c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16d35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16d360: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d364: 0x94230140  lhu         $v1, 0x140($at)
    ctx->pc = 0x16d364u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000140u));
    // 0x16d368: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d36c: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x16d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000144u)); // MMIO: 0x70000144
    // 0x16d370: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16d370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16d374: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d378: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16d378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16d37c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16d380: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16d380u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16d384: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16d384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16d388: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d38c: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16d38cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d390: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16d390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16d394: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d398: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16d398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16d39c: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16d39cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d3a0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16d3a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16d3a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d3a8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x16d3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x16d3ac: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16d3acu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d3b0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16d3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16d3b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d3b8: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16d3b8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d3bc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16d3bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16d3c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d3c4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16d3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x16d3c8: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16d3c8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d3cc: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16d3ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16d3d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d3d4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x16d3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x16d3d8: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16d3d8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d3dc: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16d3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16d3e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d3e4: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16d3e4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d3e8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16d3e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16d3ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d3f0: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x16d3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x16d3f4: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16d3f4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d3f8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16d3f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16d3fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d400: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x16d400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16d404: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16d404u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d408: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16d408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16d40c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d410: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16d410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16d414: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16d414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16d418: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16d418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16d41c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d420: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16d420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d424: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16d424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16d428: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16d428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16d42c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16d42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16d430: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16d430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16d434: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d438: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16d438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16d43c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d440: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16d440u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16d444: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16d444u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16d448: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16d448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16d44c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16d44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16d450: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16d450u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16d454: 0x92220013  lbu         $v0, 0x13($s1)
    ctx->pc = 0x16d454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x16d458: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x16d458u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x16d45c: 0x8c220188  lw          $v0, 0x188($at)
    ctx->pc = 0x16d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 392)));
    // 0x16d460: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d464: 0x8c230178  lw          $v1, 0x178($at)
    ctx->pc = 0x16d464u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000178u)); // MMIO: 0x70000178
    // 0x16d468: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x16d468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16d46c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D46Cu;
    {
        const bool branch_taken_0x16d46c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d46c) {
            ctx->pc = 0x16D480u;
            goto label_16d480;
        }
    }
    ctx->pc = 0x16D474u;
    // 0x16d474: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D474u;
    {
        const bool branch_taken_0x16d474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d474) {
            ctx->pc = 0x16D488u;
            goto label_16d488;
        }
    }
    ctx->pc = 0x16D47Cu;
    // 0x16d47c: 0x0  nop
    ctx->pc = 0x16d47cu;
    // NOP
label_16d480:
    // 0x16d480: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16d480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d484: 0x0  nop
    ctx->pc = 0x16d484u;
    // NOP
label_16d488:
    // 0x16d488: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d48c: 0x8c230148  lw          $v1, 0x148($at)
    ctx->pc = 0x16d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16d490: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16d490u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d494: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D494u;
    {
        const bool branch_taken_0x16d494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d494) {
            ctx->pc = 0x16D4A0u;
            goto label_16d4a0;
        }
    }
    ctx->pc = 0x16D49Cu;
    // 0x16d49c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16d49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16d4a0:
    // 0x16d4a0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16d4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16d4a4: 0x23183  sra         $a2, $v0, 6
    ctx->pc = 0x16d4a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    // 0x16d4a8: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16d4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16d4ac: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16D4ACu;
    SET_GPR_U32(ctx, 31, 0x16D4B4u);
    ctx->pc = 0x16D4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D4ACu;
    // 0x16d4b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16D4ACu, 0x16D4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4B4u;
label_16d4b4:
    // 0x16d4b4: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x16d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x16d4b8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16d4bc: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16d4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16d4c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16d4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16d4c4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16d4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16d4c8: 0xac24fc90  sw          $a0, -0x370($at)
    ctx->pc = 0x16d4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
    // 0x16d4cc: 0x0  nop
    ctx->pc = 0x16d4ccu;
    // NOP
label_16d4d0:
    // 0x16d4d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d4d4: 0x8c23015c  lw          $v1, 0x15C($at)
    ctx->pc = 0x16d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000015Cu)); // MMIO: 0x7000015c
    // 0x16d4d8: 0x1060011d  beqz        $v1, . + 4 + (0x11D << 2)
    ctx->pc = 0x16D4D8u;
    {
        const bool branch_taken_0x16d4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D4D8u;
        // 0x16d4dc: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4d8) {
            ctx->pc = 0x16D950u;
            goto label_16d950;
        }
    }
    ctx->pc = 0x16D4E0u;
    // 0x16d4e0: 0x8c23017c  lw          $v1, 0x17C($at)
    ctx->pc = 0x16d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 380))); // MMIO: 0x7000017c
    // 0x16d4e4: 0x1060011a  beqz        $v1, . + 4 + (0x11A << 2)
    ctx->pc = 0x16D4E4u;
    {
        const bool branch_taken_0x16d4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d4e4) {
            ctx->pc = 0x16D950u;
            goto label_16d950;
        }
    }
    ctx->pc = 0x16D4ECu;
    // 0x16d4ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d4f0: 0x8c22012c  lw          $v0, 0x12C($at)
    ctx->pc = 0x16d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000012Cu)); // MMIO: 0x7000012c
    // 0x16d4f4: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x16D4F4u;
    {
        const bool branch_taken_0x16d4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D4F4u;
        // 0x16d4f8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d4f4) {
            ctx->pc = 0x16D758u;
            goto label_16d758;
        }
    }
    ctx->pc = 0x16D4FCu;
    // 0x16d4fc: 0x3c023c40  lui         $v0, 0x3C40
    ctx->pc = 0x16d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15424 << 16));
    // 0x16d500: 0x8c26fc90  lw          $a2, -0x370($at)
    ctx->pc = 0x16d500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966416)));
    // 0x16d504: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x16d504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x16d508: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x16d508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16d50c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16d510: 0x34420054  ori         $v0, $v0, 0x54
    ctx->pc = 0x16d510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)84);
    // 0x16d514: 0x2484aed0  addiu       $a0, $a0, -0x5130
    ctx->pc = 0x16d514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946512));
    // 0x16d518: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x16d518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x16d51c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d520: 0xc58024  and         $s0, $a2, $a1
    ctx->pc = 0x16d520u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x16d524: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x16d524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16d528: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16d528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16d52c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16d530: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16d530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16d534: 0x94230120  lhu         $v1, 0x120($at)
    ctx->pc = 0x16d534u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 288)));
    // 0x16d538: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d53c: 0x8c220124  lw          $v0, 0x124($at)
    ctx->pc = 0x16d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000124u)); // MMIO: 0x70000124
    // 0x16d540: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16d540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16d544: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d548: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16d548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16d54c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16d550: 0x8c220128  lw          $v0, 0x128($at)
    ctx->pc = 0x16d550u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x16d554: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16d554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16d558: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d55c: 0x94230150  lhu         $v1, 0x150($at)
    ctx->pc = 0x16d55cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000150u));
    // 0x16d560: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d564: 0x8c220154  lw          $v0, 0x154($at)
    ctx->pc = 0x16d564u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000154u)); // MMIO: 0x70000154
    // 0x16d568: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16d568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16d56c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d570: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16d570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16d574: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16d574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16d578: 0x8c220158  lw          $v0, 0x158($at)
    ctx->pc = 0x16d578u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000158u)); // MMIO: 0x70000158
    // 0x16d57c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16d580: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d584: 0x94230170  lhu         $v1, 0x170($at)
    ctx->pc = 0x16d584u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000170u));
    // 0x16d588: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d58c: 0x8c220174  lw          $v0, 0x174($at)
    ctx->pc = 0x16d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000174u)); // MMIO: 0x70000174
    // 0x16d590: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16d590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16d594: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d598: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16d598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16d59c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16d5a0: 0x8c220178  lw          $v0, 0x178($at)
    ctx->pc = 0x16d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000178u)); // MMIO: 0x70000178
    // 0x16d5a4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16d5a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d5ac: 0x94230140  lhu         $v1, 0x140($at)
    ctx->pc = 0x16d5acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000140u));
    // 0x16d5b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d5b4: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x16d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000144u)); // MMIO: 0x70000144
    // 0x16d5b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16d5bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d5c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16d5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16d5c4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x16d5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x16d5c8: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16d5cc: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x16d5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x16d5d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d5d4: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x16d5d4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d5d8: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x16d5d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x16d5dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d5e0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16d5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16d5e4: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x16d5e4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d5e8: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16d5e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16d5ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d5f0: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x16d5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x16d5f4: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x16d5f4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d5f8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16d5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16d5fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d600: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16d600u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d604: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x16d604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x16d608: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d60c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16d60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x16d610: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16d610u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d614: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16d614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16d618: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d61c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x16d61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x16d620: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16d620u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d624: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16d624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16d628: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d62c: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16d62cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d630: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16d630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16d634: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d638: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x16d638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x16d63c: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16d63cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d640: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16d640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16d644: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d648: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x16d648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16d64c: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16d64cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d650: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16d650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16d654: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d658: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16d658u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d65c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16d65cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16d660: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d664: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x16d664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x16d668: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16d668u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d66c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16d66cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16d670: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d674: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x16d674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x16d678: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16d678u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d67c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x16d67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x16d680: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d684: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16d684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16d688: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16d688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16d68c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16d690: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16d690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d694: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16d694u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d698: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16d698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16d69c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16d69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16d6a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16d6a4: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16d6a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16d6a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d6ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16d6b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d6b4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16d6b8: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16d6b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16d6bc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16d6c0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16d6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16d6c4: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16d6c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16d6c8: 0x92220013  lbu         $v0, 0x13($s1)
    ctx->pc = 0x16d6c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x16d6cc: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x16d6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x16d6d0: 0x8c220128  lw          $v0, 0x128($at)
    ctx->pc = 0x16d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 296)));
    // 0x16d6d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d6d8: 0x8c230158  lw          $v1, 0x158($at)
    ctx->pc = 0x16d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000158u)); // MMIO: 0x70000158
    // 0x16d6dc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x16d6dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16d6e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D6E0u;
    {
        const bool branch_taken_0x16d6e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d6e0) {
            ctx->pc = 0x16D6F0u;
            goto label_16d6f0;
        }
    }
    ctx->pc = 0x16D6E8u;
    // 0x16d6e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16D6E8u;
    {
        const bool branch_taken_0x16d6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d6e8) {
            ctx->pc = 0x16D6F8u;
            goto label_16d6f8;
        }
    }
    ctx->pc = 0x16D6F0u;
label_16d6f0:
    // 0x16d6f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16d6f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d6f4: 0x0  nop
    ctx->pc = 0x16d6f4u;
    // NOP
label_16d6f8:
    // 0x16d6f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d6fc: 0x8c230178  lw          $v1, 0x178($at)
    ctx->pc = 0x16d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000178u)); // MMIO: 0x70000178
    // 0x16d700: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16d700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d704: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D704u;
    {
        const bool branch_taken_0x16d704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d704) {
            ctx->pc = 0x16D710u;
            goto label_16d710;
        }
    }
    ctx->pc = 0x16D70Cu;
    // 0x16d70c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16d70cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16d710:
    // 0x16d710: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d714: 0x8c230148  lw          $v1, 0x148($at)
    ctx->pc = 0x16d714u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16d718: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16d718u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d71c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D71Cu;
    {
        const bool branch_taken_0x16d71c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d71c) {
            ctx->pc = 0x16D728u;
            goto label_16d728;
        }
    }
    ctx->pc = 0x16D724u;
    // 0x16d724: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16d724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16d728:
    // 0x16d728: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16d728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16d72c: 0x23183  sra         $a2, $v0, 6
    ctx->pc = 0x16d72cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    // 0x16d730: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16d730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16d734: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16D734u;
    SET_GPR_U32(ctx, 31, 0x16D73Cu);
    ctx->pc = 0x16D738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D734u;
    // 0x16d738: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16D734u, 0x16D73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D73Cu;
label_16d73c:
    // 0x16d73c: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x16d73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x16d740: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16d740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16d744: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16d744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16d748: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16d748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16d74c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16d74cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16d750: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x16D750u;
    {
        const bool branch_taken_0x16d750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D750u;
        // 0x16d754: 0xac24fc90  sw          $a0, -0x370($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d750) {
            ctx->pc = 0x16D950u;
            goto label_16d950;
        }
    }
    ctx->pc = 0x16D758u;
label_16d758:
    // 0x16d758: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16d758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16d75c: 0x8c26fc90  lw          $a2, -0x370($at)
    ctx->pc = 0x16d75cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16d760: 0x3c023838  lui         $v0, 0x3838
    ctx->pc = 0x16d760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14392 << 16));
    // 0x16d764: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x16d764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x16d768: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x16d768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16d76c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16d770: 0x34420053  ori         $v0, $v0, 0x53
    ctx->pc = 0x16d770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)83);
    // 0x16d774: 0x2484aed0  addiu       $a0, $a0, -0x5130
    ctx->pc = 0x16d774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946512));
    // 0x16d778: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x16d778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x16d77c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d780: 0xc58024  and         $s0, $a2, $a1
    ctx->pc = 0x16d780u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x16d784: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x16d784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16d788: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16d788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16d78c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16d790: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16d790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16d794: 0x94230170  lhu         $v1, 0x170($at)
    ctx->pc = 0x16d794u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 368)));
    // 0x16d798: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d79c: 0x8c220174  lw          $v0, 0x174($at)
    ctx->pc = 0x16d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000174u)); // MMIO: 0x70000174
    // 0x16d7a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16d7a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d7a8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16d7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16d7ac: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16d7b0: 0x8c220178  lw          $v0, 0x178($at)
    ctx->pc = 0x16d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000178u)); // MMIO: 0x70000178
    // 0x16d7b4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16d7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16d7b8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d7bc: 0x94230150  lhu         $v1, 0x150($at)
    ctx->pc = 0x16d7bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000150u));
    // 0x16d7c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d7c4: 0x8c220154  lw          $v0, 0x154($at)
    ctx->pc = 0x16d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000154u)); // MMIO: 0x70000154
    // 0x16d7c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16d7cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d7d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16d7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16d7d4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16d7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16d7d8: 0x8c220158  lw          $v0, 0x158($at)
    ctx->pc = 0x16d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000158u)); // MMIO: 0x70000158
    // 0x16d7dc: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16d7e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d7e4: 0x94230140  lhu         $v1, 0x140($at)
    ctx->pc = 0x16d7e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000140u));
    // 0x16d7e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d7ec: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x16d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000144u)); // MMIO: 0x70000144
    // 0x16d7f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16d7f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d7f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16d7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16d7fc: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16d800: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16d800u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16d804: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16d804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16d808: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d80c: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16d80cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d810: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16d810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16d814: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d818: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16d818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16d81c: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16d81cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d820: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x16d820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x16d824: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d828: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x16d828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x16d82c: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16d82cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d830: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16d830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16d834: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d838: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16d838u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d83c: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x16d83cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x16d840: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d844: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16d844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x16d848: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16d848u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d84c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16d84cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16d850: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d854: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x16d854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x16d858: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16d858u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d85c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16d85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16d860: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d864: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16d864u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d868: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16d868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x16d86c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d870: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x16d870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x16d874: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16d874u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d878: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x16d878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x16d87c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d880: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x16d880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16d884: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16d884u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d888: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16d888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16d88c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d890: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16d890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16d894: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16d894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16d898: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16d898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16d89c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d8a0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16d8a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d8a4: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16d8a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16d8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16d8ac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16d8b0: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16d8b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16d8b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d8b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16d8bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d8c0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16d8c4: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16d8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16d8c8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16d8cc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16d8d0: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16d8d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16d8d4: 0x92220013  lbu         $v0, 0x13($s1)
    ctx->pc = 0x16d8d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x16d8d8: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x16d8d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x16d8dc: 0x8c220178  lw          $v0, 0x178($at)
    ctx->pc = 0x16d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 376)));
    // 0x16d8e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d8e4: 0x8c230158  lw          $v1, 0x158($at)
    ctx->pc = 0x16d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000158u)); // MMIO: 0x70000158
    // 0x16d8e8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x16d8e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16d8ec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D8ECu;
    {
        const bool branch_taken_0x16d8ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d8ec) {
            ctx->pc = 0x16D900u;
            goto label_16d900;
        }
    }
    ctx->pc = 0x16D8F4u;
    // 0x16d8f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D8F4u;
    {
        const bool branch_taken_0x16d8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d8f4) {
            ctx->pc = 0x16D908u;
            goto label_16d908;
        }
    }
    ctx->pc = 0x16D8FCu;
    // 0x16d8fc: 0x0  nop
    ctx->pc = 0x16d8fcu;
    // NOP
label_16d900:
    // 0x16d900: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16d900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d904: 0x0  nop
    ctx->pc = 0x16d904u;
    // NOP
label_16d908:
    // 0x16d908: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16d908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16d90c: 0x8c230148  lw          $v1, 0x148($at)
    ctx->pc = 0x16d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16d910: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16d910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16d914: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D914u;
    {
        const bool branch_taken_0x16d914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d914) {
            ctx->pc = 0x16D920u;
            goto label_16d920;
        }
    }
    ctx->pc = 0x16D91Cu;
    // 0x16d91c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16d91cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16d920:
    // 0x16d920: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16d920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16d924: 0x23183  sra         $a2, $v0, 6
    ctx->pc = 0x16d924u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    // 0x16d928: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16d928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16d92c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16D92Cu;
    SET_GPR_U32(ctx, 31, 0x16D934u);
    ctx->pc = 0x16D930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D92Cu;
    // 0x16d930: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16D92Cu, 0x16D934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D934u;
label_16d934:
    // 0x16d934: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x16d934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x16d938: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16d938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16d93c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16d93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16d940: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16d940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16d944: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16d944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16d948: 0xac24fc90  sw          $a0, -0x370($at)
    ctx->pc = 0x16d948u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
    // 0x16d94c: 0x0  nop
    ctx->pc = 0x16d94cu;
    // NOP
label_16d950:
    // 0x16d950: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16d950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d954: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16d954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d958: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x16d958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x16d95c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16d95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d960: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x16d960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x16d964: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x16d964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x16d968: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16d968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16d96c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16d96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16d970: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16d970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16d974: 0x3e00008  jr          $ra
    ctx->pc = 0x16D974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D974u;
        // 0x16d978: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D97Cu;
}

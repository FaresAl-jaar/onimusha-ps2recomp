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

// Function: sub_0016D980
// Address: 0x16d980 - 0x16f0c4
void sub_0016D980_0x16d980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D980_0x16d980");
#endif

    switch (ctx->pc) {
        case 0x16daecu: goto label_16daec;
        case 0x16db10u: goto label_16db10;
        case 0x16db78u: goto label_16db78;
        case 0x16dd60u: goto label_16dd60;
        case 0x16dda4u: goto label_16dda4;
        case 0x16dfdcu: goto label_16dfdc;
        case 0x16e038u: goto label_16e038;
        case 0x16e078u: goto label_16e078;
        case 0x16e0bcu: goto label_16e0bc;
        case 0x16e100u: goto label_16e100;
        case 0x16e130u: goto label_16e130;
        case 0x16e160u: goto label_16e160;
        case 0x16e398u: goto label_16e398;
        case 0x16e540u: goto label_16e540;
        case 0x16e754u: goto label_16e754;
        case 0x16e900u: goto label_16e900;
        case 0x16eb24u: goto label_16eb24;
        case 0x16ecd8u: goto label_16ecd8;
        case 0x16eeecu: goto label_16eeec;
        case 0x16f098u: goto label_16f098;
        default: break;
    }

    ctx->pc = 0x16d980u;

    // 0x16d980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16d980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16d984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16d984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16d988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16d988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16d98c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16d990: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x16d990u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16d994: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x16d994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x16d998: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x16D998u;
    {
        const bool branch_taken_0x16d998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D998u;
        // 0x16d99c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d998) {
            ctx->pc = 0x16DA48u;
            goto label_16da48;
        }
    }
    ctx->pc = 0x16D9A0u;
    // 0x16d9a0: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x16d9a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x16d9a4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D9A4u;
    {
        const bool branch_taken_0x16d9a4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x16D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9A4u;
        // 0x16d9a8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d9a4) {
            ctx->pc = 0x16D9B8u;
            goto label_16d9b8;
        }
    }
    ctx->pc = 0x16D9ACu;
    // 0x16d9ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16d9acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d9b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16D9B0u;
    {
        const bool branch_taken_0x16d9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9B0u;
        // 0x16d9b4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d9b0) {
            ctx->pc = 0x16D9D0u;
            goto label_16d9d0;
        }
    }
    ctx->pc = 0x16D9B8u;
label_16d9b8:
    // 0x16d9b8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x16d9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16d9bc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x16d9bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16d9c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16d9c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d9c4: 0x0  nop
    ctx->pc = 0x16d9c4u;
    // NOP
    // 0x16d9c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16d9c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16d9cc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x16d9ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_16d9d0:
    // 0x16d9d0: 0x3c033db5  lui         $v1, 0x3DB5
    ctx->pc = 0x16d9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15797 << 16));
    // 0x16d9d4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x16d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x16d9d8: 0x34630481  ori         $v1, $v1, 0x481
    ctx->pc = 0x16d9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1153);
    // 0x16d9dc: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x16d9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x16d9e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16d9e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d9e4: 0x24846ba0  addiu       $a0, $a0, 0x6BA0
    ctx->pc = 0x16d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27552));
    // 0x16d9e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16d9e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16d9ec: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x16d9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x16d9f0: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x16d9f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x16d9f4: 0xd8a90000  lqc2        $vf9, 0x0($a1)
    ctx->pc = 0x16d9f4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16d9f8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x16d9f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16d9fc: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x16d9fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16da00: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x16da00u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x16da04: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x16da04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x16da08: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x16da08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16da0c: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x16da0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16da10: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x16da10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16da14: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x16da14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16da18: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x16da18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x16da1c: 0x4a0002ff  vnop
    ctx->pc = 0x16da1cu;
    // NOP operation, no action needed for VU0
    // 0x16da20: 0x4a0002ff  vnop
    ctx->pc = 0x16da20u;
    // NOP operation, no action needed for VU0
    // 0x16da24: 0x4a0002ff  vnop
    ctx->pc = 0x16da24u;
    // NOP operation, no action needed for VU0
    // 0x16da28: 0x4a0002ff  vnop
    ctx->pc = 0x16da28u;
    // NOP operation, no action needed for VU0
    // 0x16da2c: 0x4a0002ff  vnop
    ctx->pc = 0x16da2cu;
    // NOP operation, no action needed for VU0
    // 0x16da30: 0x48448800  cfc2.ni     $a0, $vi17
    ctx->pc = 0x16da30u;
    SET_GPR_U32(ctx, 4, ctx->vu0_mac_flags);
    // 0x16da34: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16da34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16da38: 0xae23005c  sw          $v1, 0x5C($s1)
    ctx->pc = 0x16da38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
    // 0x16da3c: 0x308300f0  andi        $v1, $a0, 0xF0
    ctx->pc = 0x16da3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x16da40: 0x1460059b  bnez        $v1, . + 4 + (0x59B << 2)
    ctx->pc = 0x16DA40u;
    {
        const bool branch_taken_0x16da40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16da40) {
            ctx->pc = 0x16F0B0u;
            goto label_16f0b0;
        }
    }
    ctx->pc = 0x16DA48u;
label_16da48:
    // 0x16da48: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x16da48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16da4c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x16da4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x16da50: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16DA50u;
    {
        const bool branch_taken_0x16da50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA50u;
        // 0x16da54: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da50) {
            ctx->pc = 0x16DAA8u;
            goto label_16daa8;
        }
    }
    ctx->pc = 0x16DA58u;
    // 0x16da58: 0xc4230380  lwc1        $f3, 0x380($at)
    ctx->pc = 0x16da58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16da5c: 0xc6240050  lwc1        $f4, 0x50($s1)
    ctx->pc = 0x16da5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16da60: 0xc6220058  lwc1        $f2, 0x58($s1)
    ctx->pc = 0x16da60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16da64: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16da64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16da68: 0xc4210388  lwc1        $f1, 0x388($at)
    ctx->pc = 0x16da68u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000388u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16da6c: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x16da6cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x16da70: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x16da70u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x16da74: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16da74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16da78: 0xc4200390  lwc1        $f0, 0x390($at)
    ctx->pc = 0x16da78u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000390u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16da7c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x16da7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x16da80: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x16da80u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x16da84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16da84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16da88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16DA88u;
    {
        const bool branch_taken_0x16da88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA88u;
        // 0x16da8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16da88) {
            ctx->pc = 0x16DA98u;
            goto label_16da98;
        }
    }
    ctx->pc = 0x16DA90u;
    // 0x16da90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16DA90u;
    {
        const bool branch_taken_0x16da90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16da90) {
            ctx->pc = 0x16DAA0u;
            goto label_16daa0;
        }
    }
    ctx->pc = 0x16DA98u;
label_16da98:
    // 0x16da98: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16da98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16da9c: 0x0  nop
    ctx->pc = 0x16da9cu;
    // NOP
label_16daa0:
    // 0x16daa0: 0x14600583  bnez        $v1, . + 4 + (0x583 << 2)
    ctx->pc = 0x16DAA0u;
    {
        const bool branch_taken_0x16daa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16daa0) {
            ctx->pc = 0x16F0B0u;
            goto label_16f0b0;
        }
    }
    ctx->pc = 0x16DAA8u;
label_16daa8:
    // 0x16daa8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16daac: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x16daacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x16dab0: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x16dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x16dab4: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x16dab4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16dab8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16dab8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16dabc: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16dabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16dac0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16dac4: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x16dac4u;
    runtime->Store128(rdram, ctx, 0x70000040u, GPR_VEC(ctx, 8));
    // 0x16dac8: 0x34440140  ori         $a0, $v0, 0x140
    ctx->pc = 0x16dac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)320);
    // 0x16dacc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16daccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16dad0: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x16dad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x16dad4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16dad8: 0x344702b0  ori         $a3, $v0, 0x2B0
    ctx->pc = 0x16dad8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)688);
    // 0x16dadc: 0x8622002c  lh          $v0, 0x2C($s1)
    ctx->pc = 0x16dadcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x16dae0: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x16dae0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16dae4: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16DAE4u;
    SET_GPR_U32(ctx, 31, 0x16DAECu);
    ctx->pc = 0x16DAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DAE4u;
    // 0x16dae8: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16DAE4u, 0x16DAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DAECu;
label_16daec:
    // 0x16daec: 0x10400570  beqz        $v0, . + 4 + (0x570 << 2)
    ctx->pc = 0x16DAECu;
    {
        const bool branch_taken_0x16daec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16daec) {
            ctx->pc = 0x16F0B0u;
            goto label_16f0b0;
        }
    }
    ctx->pc = 0x16DAF4u;
    // 0x16daf4: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x16daf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16daf8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x16daf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x16dafc: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x16DAFCu;
    {
        const bool branch_taken_0x16dafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAFCu;
        // 0x16db00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dafc) {
            ctx->pc = 0x16DBD0u;
            goto label_16dbd0;
        }
    }
    ctx->pc = 0x16DB04u;
    // 0x16db04: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x16DB04u;
    {
        const bool branch_taken_0x16db04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db04) {
            ctx->pc = 0x16DBB8u;
            goto label_16dbb8;
        }
    }
    ctx->pc = 0x16DB0Cu;
    // 0x16db0c: 0x0  nop
    ctx->pc = 0x16db0cu;
    // NOP
label_16db10:
    // 0x16db10: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x16db10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x16db14: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x16db14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16db18: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16db18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16db1c: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x16db1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16db20: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x16db20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16db24: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16db24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16db28: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x16db28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16db2c: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x16db2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x16db30: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x16db30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16db34: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16db34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16db38: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x16db38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16db3c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x16db3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16db40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16db40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16db44: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x16db44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x16db48: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16db48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16db4c: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x16db4cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16db50: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16db50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16db54: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16db54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16db58: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16db58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16db5c: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x16db5cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
    // 0x16db60: 0x344202a0  ori         $v0, $v0, 0x2A0
    ctx->pc = 0x16db60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x16db64: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x16db64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16db68: 0x8622002c  lh          $v0, 0x2C($s1)
    ctx->pc = 0x16db68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x16db6c: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x16db6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16db70: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16DB70u;
    SET_GPR_U32(ctx, 31, 0x16DB78u);
    ctx->pc = 0x16DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DB70u;
    // 0x16db74: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16DB70u, 0x16DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DB78u;
label_16db78:
    // 0x16db78: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16db78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16db7c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x16db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16db80: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x16db80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x16db84: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x16db84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16db88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16DB88u;
    {
        const bool branch_taken_0x16db88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB88u;
        // 0x16db8c: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db88) {
            ctx->pc = 0x16DBB0u;
            goto label_16dbb0;
        }
    }
    ctx->pc = 0x16DB90u;
    // 0x16db90: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16db90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16db94: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x16db94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x16db98: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x16db98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16db9c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x16db9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16dba0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16dba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16dba4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16DBA4u;
    {
        const bool branch_taken_0x16dba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dba4) {
            ctx->pc = 0x16DBB0u;
            goto label_16dbb0;
        }
    }
    ctx->pc = 0x16DBACu;
    // 0x16dbac: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x16dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_16dbb0:
    // 0x16dbb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16dbb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16dbb4: 0x0  nop
    ctx->pc = 0x16dbb4u;
    // NOP
label_16dbb8:
    // 0x16dbb8: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x16dbb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x16dbbc: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x16DBBCu;
    {
        const bool branch_taken_0x16dbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16dbbc) {
            ctx->pc = 0x16DB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16db10;
        }
    }
    ctx->pc = 0x16DBC4u;
    // 0x16dbc4: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x16DBC4u;
    {
        const bool branch_taken_0x16dbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dbc4) {
            ctx->pc = 0x16DDF8u;
            goto label_16ddf8;
        }
    }
    ctx->pc = 0x16DBCCu;
    // 0x16dbcc: 0x0  nop
    ctx->pc = 0x16dbccu;
    // NOP
label_16dbd0:
    // 0x16dbd0: 0x8625004a  lh          $a1, 0x4A($s1)
    ctx->pc = 0x16dbd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x16dbd4: 0x9624002a  lhu         $a0, 0x2A($s1)
    ctx->pc = 0x16dbd4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x16dbd8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x16dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x16dbdc: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x16dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x16dbe0: 0x96220028  lhu         $v0, 0x28($s1)
    ctx->pc = 0x16dbe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x16dbe4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x16dbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16dbe8: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x16dbe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x16dbec: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x16dbecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x16dbf0: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x16dbf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x16dbf4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16dbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16dbf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16dbfc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16DBFCu;
    {
        const bool branch_taken_0x16dbfc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x16DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DBFCu;
        // 0x16dc00: 0xc4610000  lwc1        $f1, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbfc) {
            ctx->pc = 0x16DC10u;
            goto label_16dc10;
        }
    }
    ctx->pc = 0x16DC04u;
    // 0x16dc04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16dc04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dc08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16DC08u;
    {
        const bool branch_taken_0x16dc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC08u;
        // 0x16dc0c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc08) {
            ctx->pc = 0x16DC2Cu;
            goto label_16dc2c;
        }
    }
    ctx->pc = 0x16DC10u;
label_16dc10:
    // 0x16dc10: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x16dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x16dc14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16dc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16dc18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16dc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16dc1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16dc1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dc20: 0x0  nop
    ctx->pc = 0x16dc20u;
    // NOP
    // 0x16dc24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16dc24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16dc28: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16dc28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16dc2c:
    // 0x16dc2c: 0x8625004a  lh          $a1, 0x4A($s1)
    ctx->pc = 0x16dc2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x16dc30: 0x3c023db5  lui         $v0, 0x3DB5
    ctx->pc = 0x16dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15797 << 16));
    // 0x16dc34: 0x9624002a  lhu         $a0, 0x2A($s1)
    ctx->pc = 0x16dc34u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x16dc38: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x16dc38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16dc3c: 0x34460481  ori         $a2, $v0, 0x481
    ctx->pc = 0x16dc3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1153);
    // 0x16dc40: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x16dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x16dc44: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x16dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x16dc48: 0x96220028  lhu         $v0, 0x28($s1)
    ctx->pc = 0x16dc48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x16dc4c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x16dc4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dc50: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x16dc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16dc54: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x16dc54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x16dc58: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x16dc58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x16dc5c: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x16dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x16dc60: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x16dc60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x16dc64: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16dc68: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x16dc68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16dc6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16dc70: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16DC70u;
    {
        const bool branch_taken_0x16dc70 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x16DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC70u;
        // 0x16dc74: 0xc4610000  lwc1        $f1, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc70) {
            ctx->pc = 0x16DC84u;
            goto label_16dc84;
        }
    }
    ctx->pc = 0x16DC78u;
    // 0x16dc78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16dc78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dc7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16DC7Cu;
    {
        const bool branch_taken_0x16dc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC7Cu;
        // 0x16dc80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc7c) {
            ctx->pc = 0x16DCA0u;
            goto label_16dca0;
        }
    }
    ctx->pc = 0x16DC84u;
label_16dc84:
    // 0x16dc84: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x16dc84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x16dc88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16dc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16dc8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16dc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16dc90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16dc90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dc94: 0x0  nop
    ctx->pc = 0x16dc94u;
    // NOP
    // 0x16dc98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16dc98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16dc9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16dc9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16dca0:
    // 0x16dca0: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x16dca0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16dca4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dca8: 0x3c023db5  lui         $v0, 0x3DB5
    ctx->pc = 0x16dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15797 << 16));
    // 0x16dcac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16dcacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dcb0: 0x34420481  ori         $v0, $v0, 0x481
    ctx->pc = 0x16dcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1153);
    // 0x16dcb4: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x16dcb4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dcb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16dcb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16dcbc: 0x0  nop
    ctx->pc = 0x16dcbcu;
    // NOP
    // 0x16dcc0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16dcc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x16dcc4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dcc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dcc8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x16dcc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x16dccc: 0xe4200000  swc1        $f0, 0x0($at)
    ctx->pc = 0x16dcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000000u, bits); }
    // 0x16dcd0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dcd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dcd4: 0xc4200048  lwc1        $f0, 0x48($at)
    ctx->pc = 0x16dcd4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dcd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16dcd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16dcdc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dcdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dce0: 0xe4200008  swc1        $f0, 0x8($at)
    ctx->pc = 0x16dce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000008u, bits); }
    // 0x16dce4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dce8: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x16dce8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dcec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16dcecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16dcf0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dcf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dcf4: 0xe4200010  swc1        $f0, 0x10($at)
    ctx->pc = 0x16dcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000010u, bits); }
    // 0x16dcf8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dcf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dcfc: 0xc4200048  lwc1        $f0, 0x48($at)
    ctx->pc = 0x16dcfcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dd00: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x16dd00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x16dd04: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dd08: 0xe4200018  swc1        $f0, 0x18($at)
    ctx->pc = 0x16dd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000018u, bits); }
    // 0x16dd0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dd10: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x16dd10u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dd14: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16dd14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16dd18: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dd1c: 0xe4200020  swc1        $f0, 0x20($at)
    ctx->pc = 0x16dd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000020u, bits); }
    // 0x16dd20: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dd20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dd24: 0xc4200048  lwc1        $f0, 0x48($at)
    ctx->pc = 0x16dd24u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dd28: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x16dd28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x16dd2c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dd2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dd30: 0xe4200028  swc1        $f0, 0x28($at)
    ctx->pc = 0x16dd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000028u, bits); }
    // 0x16dd34: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dd38: 0xc4200040  lwc1        $f0, 0x40($at)
    ctx->pc = 0x16dd38u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dd3c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x16dd3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x16dd40: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dd44: 0xe4200030  swc1        $f0, 0x30($at)
    ctx->pc = 0x16dd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000030u, bits); }
    // 0x16dd48: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dd4c: 0xc4200048  lwc1        $f0, 0x48($at)
    ctx->pc = 0x16dd4cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dd50: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16dd50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16dd54: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dd58: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x16DD58u;
    {
        const bool branch_taken_0x16dd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD58u;
        // 0x16dd5c: 0xe4200038  swc1        $f0, 0x38($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd58) {
            ctx->pc = 0x16DDE8u;
            goto label_16dde8;
        }
    }
    ctx->pc = 0x16DD60u;
label_16dd60:
    // 0x16dd60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dd64: 0xc4200044  lwc1        $f0, 0x44($at)
    ctx->pc = 0x16dd64u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000044u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dd68: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16dd6c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x16dd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16dd70: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16dd70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16dd74: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x16dd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16dd78: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x16dd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x16dd7c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x16dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16dd80: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x16dd80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x16dd84: 0x344202a0  ori         $v0, $v0, 0x2A0
    ctx->pc = 0x16dd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x16dd88: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16dd8c: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x16dd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dd90: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x16dd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x16dd94: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x16dd94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x16dd98: 0x8628002c  lh          $t0, 0x2C($s1)
    ctx->pc = 0x16dd98u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x16dd9c: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16DD9Cu;
    SET_GPR_U32(ctx, 31, 0x16DDA4u);
    ctx->pc = 0x16DDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD9Cu;
    // 0x16dda0: 0x24c669a0  addiu       $a2, $a2, 0x69A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16DD9Cu, 0x16DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DDA4u;
label_16dda4:
    // 0x16dda4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16dda8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x16dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16ddac: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x16ddacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x16ddb0: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x16ddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ddb4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16DDB4u;
    {
        const bool branch_taken_0x16ddb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDB4u;
        // 0x16ddb8: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ddb4) {
            ctx->pc = 0x16DDE0u;
            goto label_16dde0;
        }
    }
    ctx->pc = 0x16DDBCu;
    // 0x16ddbc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ddc0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x16ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x16ddc4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x16ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16ddc8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x16ddc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16ddcc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16ddccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16ddd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DDD0u;
    {
        const bool branch_taken_0x16ddd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ddd0) {
            ctx->pc = 0x16DDE0u;
            goto label_16dde0;
        }
    }
    ctx->pc = 0x16DDD8u;
    // 0x16ddd8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x16ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x16dddc: 0x0  nop
    ctx->pc = 0x16dddcu;
    // NOP
label_16dde0:
    // 0x16dde0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16dde0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16dde4: 0x0  nop
    ctx->pc = 0x16dde4u;
    // NOP
label_16dde8:
    // 0x16dde8: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x16dde8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x16ddec: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x16DDECu;
    {
        const bool branch_taken_0x16ddec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ddec) {
            ctx->pc = 0x16DD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16dd60;
        }
    }
    ctx->pc = 0x16DDF4u;
    // 0x16ddf4: 0x0  nop
    ctx->pc = 0x16ddf4u;
    // NOP
label_16ddf8:
    // 0x16ddf8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ddf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ddfc: 0x8c22010c  lw          $v0, 0x10C($at)
    ctx->pc = 0x16ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000010Cu)); // MMIO: 0x7000010c
    // 0x16de00: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x16DE00u;
    {
        const bool branch_taken_0x16de00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE00u;
        // 0x16de04: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de00) {
            ctx->pc = 0x16DFF8u;
            goto label_16dff8;
        }
    }
    ctx->pc = 0x16DE08u;
    // 0x16de08: 0x8c22011c  lw          $v0, 0x11C($at)
    ctx->pc = 0x16de08u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 284))); // MMIO: 0x7000011c
    // 0x16de0c: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x16DE0Cu;
    {
        const bool branch_taken_0x16de0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16de0c) {
            ctx->pc = 0x16DFF8u;
            goto label_16dff8;
        }
    }
    ctx->pc = 0x16DE14u;
    // 0x16de14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16de14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16de18: 0x8c22012c  lw          $v0, 0x12C($at)
    ctx->pc = 0x16de18u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000012Cu)); // MMIO: 0x7000012c
    // 0x16de1c: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x16DE1Cu;
    {
        const bool branch_taken_0x16de1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE1Cu;
        // 0x16de20: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de1c) {
            ctx->pc = 0x16DFF8u;
            goto label_16dff8;
        }
    }
    ctx->pc = 0x16DE24u;
    // 0x16de24: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x16de24u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 316))); // MMIO: 0x7000013c
    // 0x16de28: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x16DE28u;
    {
        const bool branch_taken_0x16de28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16de28) {
            ctx->pc = 0x16DFF8u;
            goto label_16dff8;
        }
    }
    ctx->pc = 0x16DE30u;
    // 0x16de30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16de30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16de34: 0x3c023c40  lui         $v0, 0x3C40
    ctx->pc = 0x16de34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15424 << 16));
    // 0x16de38: 0x8c27fc90  lw          $a3, -0x370($at)
    ctx->pc = 0x16de38u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16de3c: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x16de3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x16de40: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16de40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16de44: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x16de44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16de48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16de48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16de4c: 0x34420054  ori         $v0, $v0, 0x54
    ctx->pc = 0x16de4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)84);
    // 0x16de50: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x16de50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x16de54: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16de54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16de58: 0x24e7000f  addiu       $a3, $a3, 0xF
    ctx->pc = 0x16de58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x16de5c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16de5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16de60: 0xe58024  and         $s0, $a3, $a1
    ctx->pc = 0x16de60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x16de64: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x16de64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16de68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16de68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16de70: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16de70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16de74: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16de74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16de78: 0x94230100  lhu         $v1, 0x100($at)
    ctx->pc = 0x16de78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 256)));
    // 0x16de7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16de7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16de80: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x16de80u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16de84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16de84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16de88: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16de88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16de8c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16de8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16de90: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16de90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16de94: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16de94u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x16de98: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16de98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16de9c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16de9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dea0: 0x94230110  lhu         $v1, 0x110($at)
    ctx->pc = 0x16dea0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000110u));
    // 0x16dea4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dea8: 0x8c220114  lw          $v0, 0x114($at)
    ctx->pc = 0x16dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x16deac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16deacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16deb0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16deb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16deb4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16deb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16deb8: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16debc: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x16debcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16dec0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16dec4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16dec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dec8: 0x94230120  lhu         $v1, 0x120($at)
    ctx->pc = 0x16dec8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000120u));
    // 0x16decc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16deccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ded0: 0x8c220124  lw          $v0, 0x124($at)
    ctx->pc = 0x16ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000124u)); // MMIO: 0x70000124
    // 0x16ded4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16ded8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ded8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16dedc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16dedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16dee0: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16dee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16dee4: 0x8c220128  lw          $v0, 0x128($at)
    ctx->pc = 0x16dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x16dee8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16deec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16deecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16def0: 0x94230130  lhu         $v1, 0x130($at)
    ctx->pc = 0x16def0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000130u));
    // 0x16def4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16def4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16def8: 0x8c220134  lw          $v0, 0x134($at)
    ctx->pc = 0x16def8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000134u)); // MMIO: 0x70000134
    // 0x16defc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16defcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16df00: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16df00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16df04: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16df04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16df08: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x16df08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x16df0c: 0x8c220138  lw          $v0, 0x138($at)
    ctx->pc = 0x16df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000138u)); // MMIO: 0x70000138
    // 0x16df10: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x16df10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x16df14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16df14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16df18: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x16df18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x16df1c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x16df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x16df20: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16df20u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16df24: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16df24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16df28: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16df28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16df2c: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16df2cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16df30: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16df30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x16df34: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16df34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16df38: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x16df38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x16df3c: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16df3cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16df40: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16df40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16df44: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16df44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16df48: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x16df48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x16df4c: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x16df4cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16df50: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x16df50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16df54: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16df54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16df58: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x16df58u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16df5c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16df5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16df60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16df60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16df64: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16df64u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16df68: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x16df68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x16df6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16df6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16df70: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16df70u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16df74: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x16df74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x16df78: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16df78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16df7c: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16df7cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16df80: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x16df80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x16df84: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16df84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16df88: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16df88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16df8c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16df90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16df90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16df94: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16df94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16df98: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16df98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16df9c: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16dfa0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16dfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16dfa4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16dfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16dfa8: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16dfa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16dfac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16dfb0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16dfb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16dfb8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16dfbc: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16dfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16dfc0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16dfc4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16dfc8: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16dfc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16dfcc: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x16dfccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x16dfd0: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 328)));
    // 0x16dfd4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16DFD4u;
    SET_GPR_U32(ctx, 31, 0x16DFDCu);
    ctx->pc = 0x16DFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DFD4u;
    // 0x16dfd8: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16DFD4u, 0x16DFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DFDCu;
label_16dfdc:
    // 0x16dfdc: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x16dfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x16dfe0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16dfe4: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16dfe8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16dfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16dfec: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16dfecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16dff0: 0x1000042f  b           . + 4 + (0x42F << 2)
    ctx->pc = 0x16DFF0u;
    {
        const bool branch_taken_0x16dff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFF0u;
        // 0x16dff4: 0xac24fc90  sw          $a0, -0x370($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dff0) {
            ctx->pc = 0x16F0B0u;
            goto label_16f0b0;
        }
    }
    ctx->pc = 0x16DFF8u;
label_16dff8:
    // 0x16dff8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16dffc: 0x34440050  ori         $a0, $v0, 0x50
    ctx->pc = 0x16dffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x16e000: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16e000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16e004: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16e004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16e008: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16e008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16e00c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16e00cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000000u));
    // 0x16e010: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16e010u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000020u));
    // 0x16e014: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x16e014u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16e018: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x16e018u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16e01c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16e020: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16e020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16e024: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16e024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16e028: 0x34440050  ori         $a0, $v0, 0x50
    ctx->pc = 0x16e028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x16e02c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16e030: 0xc0414dc  jal         func_105370
    ctx->pc = 0x16E030u;
    SET_GPR_U32(ctx, 31, 0x16E038u);
    ctx->pc = 0x16E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E030u;
    // 0x16e034: 0x34450050  ori         $a1, $v0, 0x50 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x16E030u, 0x16E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E038u;
label_16e038:
    // 0x16e038: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16e038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16e03c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16e040: 0x34440060  ori         $a0, $v0, 0x60
    ctx->pc = 0x16e040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x16e044: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16e044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16e048: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x16e048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x16e04c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16e04cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000000u));
    // 0x16e050: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16e050u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000010u));
    // 0x16e054: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x16e054u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16e058: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x16e058u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16e05c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16e060: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16e060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16e064: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16e064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16e068: 0x34440060  ori         $a0, $v0, 0x60
    ctx->pc = 0x16e068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x16e06c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16e070: 0xc0414dc  jal         func_105370
    ctx->pc = 0x16E070u;
    SET_GPR_U32(ctx, 31, 0x16E078u);
    ctx->pc = 0x16E074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E070u;
    // 0x16e074: 0x34450060  ori         $a1, $v0, 0x60 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x16E070u, 0x16E078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E078u;
label_16e078:
    // 0x16e078: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16e078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16e07c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16e080: 0x34640070  ori         $a0, $v1, 0x70
    ctx->pc = 0x16e080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x16e084: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x16e084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16e088: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16e088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16e08c: 0x34420030  ori         $v0, $v0, 0x30
    ctx->pc = 0x16e08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x16e090: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16e090u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000020u));
    // 0x16e094: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16e094u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000030u));
    // 0x16e098: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x16e098u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16e09c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x16e09cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16e0a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16e0a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16e0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16e0a8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16e0ac: 0x34440070  ori         $a0, $v0, 0x70
    ctx->pc = 0x16e0acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x16e0b0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16e0b4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x16E0B4u;
    SET_GPR_U32(ctx, 31, 0x16E0BCu);
    ctx->pc = 0x16E0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E0B4u;
    // 0x16e0b8: 0x34450070  ori         $a1, $v0, 0x70 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x16E0B4u, 0x16E0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E0BCu;
label_16e0bc:
    // 0x16e0bc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16e0c0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16e0c4: 0x34640080  ori         $a0, $v1, 0x80
    ctx->pc = 0x16e0c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x16e0c8: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x16e0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x16e0cc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16e0d0: 0x34420030  ori         $v0, $v0, 0x30
    ctx->pc = 0x16e0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x16e0d4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16e0d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000010u));
    // 0x16e0d8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16e0d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(runtime->Load128(rdram, ctx, 0x70000030u));
    // 0x16e0dc: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x16e0dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x16e0e0: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x16e0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16e0e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16e0e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16e0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16e0ec: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16e0f0: 0x34440080  ori         $a0, $v0, 0x80
    ctx->pc = 0x16e0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x16e0f4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16e0f8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x16E0F8u;
    SET_GPR_U32(ctx, 31, 0x16E100u);
    ctx->pc = 0x16E0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E0F8u;
    // 0x16e0fc: 0x34450080  ori         $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x16E0F8u, 0x16E100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E100u;
label_16e100:
    // 0x16e100: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16e100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16e104: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e108: 0xac23008c  sw          $v1, 0x8C($at)
    ctx->pc = 0x16e108u;
    runtime->Store32(rdram, ctx, 0x7000008Cu, GPR_U32(ctx, 3)); // MMIO: 0x7000008c
    // 0x16e10c: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x16e10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16e110: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e114: 0xac23007c  sw          $v1, 0x7C($at)
    ctx->pc = 0x16e114u;
    runtime->Store32(rdram, ctx, 0x7000007Cu, GPR_U32(ctx, 3)); // MMIO: 0x7000007c
    // 0x16e118: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e11c: 0xac23006c  sw          $v1, 0x6C($at)
    ctx->pc = 0x16e11cu;
    runtime->Store32(rdram, ctx, 0x7000006Cu, GPR_U32(ctx, 3)); // MMIO: 0x7000006c
    // 0x16e120: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e124: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x16E124u;
    {
        const bool branch_taken_0x16e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E124u;
        // 0x16e128: 0xac23005c  sw          $v1, 0x5C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e124) {
            ctx->pc = 0x16E1A0u;
            goto label_16e1a0;
        }
    }
    ctx->pc = 0x16E12Cu;
    // 0x16e12c: 0x0  nop
    ctx->pc = 0x16e12cu;
    // NOP
label_16e130:
    // 0x16e130: 0x8628002c  lh          $t0, 0x2C($s1)
    ctx->pc = 0x16e130u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x16e134: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16e134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16e138: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x16e138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16e13c: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x16e13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x16e140: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x16e140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16e144: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x16e144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16e148: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16e148u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16e14c: 0x344202a0  ori         $v0, $v0, 0x2A0
    ctx->pc = 0x16e14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x16e150: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16e150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16e154: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16e154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16e158: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16E158u;
    SET_GPR_U32(ctx, 31, 0x16E160u);
    ctx->pc = 0x16E15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E158u;
    // 0x16e15c: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16E158u, 0x16E160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E160u;
label_16e160:
    // 0x16e160: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16e160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16e164: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x16e164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16e168: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x16e168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x16e16c: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x16e16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16e170: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16E170u;
    {
        const bool branch_taken_0x16e170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E170u;
        // 0x16e174: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e170) {
            ctx->pc = 0x16E198u;
            goto label_16e198;
        }
    }
    ctx->pc = 0x16E178u;
    // 0x16e178: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x16e178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16e17c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x16e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x16e180: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x16e180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x16e184: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x16e184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x16e188: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16e188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16e18c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16E18Cu;
    {
        const bool branch_taken_0x16e18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e18c) {
            ctx->pc = 0x16E198u;
            goto label_16e198;
        }
    }
    ctx->pc = 0x16E194u;
    // 0x16e194: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x16e194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_16e198:
    // 0x16e198: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16e198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16e19c: 0x0  nop
    ctx->pc = 0x16e19cu;
    // NOP
label_16e1a0:
    // 0x16e1a0: 0x2e030009  sltiu       $v1, $s0, 0x9
    ctx->pc = 0x16e1a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x16e1a4: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x16E1A4u;
    {
        const bool branch_taken_0x16e1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1A4u;
        // 0x16e1a8: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1a4) {
            ctx->pc = 0x16E130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e130;
        }
    }
    ctx->pc = 0x16E1ACu;
    // 0x16e1ac: 0x8c23016c  lw          $v1, 0x16C($at)
    ctx->pc = 0x16e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 364))); // MMIO: 0x7000016c
    // 0x16e1b0: 0x106000e9  beqz        $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x16E1B0u;
    {
        const bool branch_taken_0x16e1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e1b0) {
            ctx->pc = 0x16E558u;
            goto label_16e558;
        }
    }
    ctx->pc = 0x16E1B8u;
    // 0x16e1b8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e1bc: 0x8c23015c  lw          $v1, 0x15C($at)
    ctx->pc = 0x16e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000015Cu)); // MMIO: 0x7000015c
    // 0x16e1c0: 0x106000e5  beqz        $v1, . + 4 + (0xE5 << 2)
    ctx->pc = 0x16E1C0u;
    {
        const bool branch_taken_0x16e1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1C0u;
        // 0x16e1c4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1c0) {
            ctx->pc = 0x16E558u;
            goto label_16e558;
        }
    }
    ctx->pc = 0x16E1C8u;
    // 0x16e1c8: 0x8c22010c  lw          $v0, 0x10C($at)
    ctx->pc = 0x16e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 268))); // MMIO: 0x7000010c
    // 0x16e1cc: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x16E1CCu;
    {
        const bool branch_taken_0x16e1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e1cc) {
            ctx->pc = 0x16E3B8u;
            goto label_16e3b8;
        }
    }
    ctx->pc = 0x16E1D4u;
    // 0x16e1d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16e1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16e1d8: 0x3c023c40  lui         $v0, 0x3C40
    ctx->pc = 0x16e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15424 << 16));
    // 0x16e1dc: 0x8c28fc90  lw          $t0, -0x370($at)
    ctx->pc = 0x16e1dcu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16e1e0: 0x34430054  ori         $v1, $v0, 0x54
    ctx->pc = 0x16e1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)84);
    // 0x16e1e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16e1e8: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x16e1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x16e1ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16e1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e1f0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16e1f4: 0x2407fff0  addiu       $a3, $zero, -0x10
    ctx->pc = 0x16e1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16e1f8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x16e1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x16e1fc: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x16e1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x16e200: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16e200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16e204: 0x2502000f  addiu       $v0, $t0, 0xF
    ctx->pc = 0x16e204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x16e208: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e20c: 0x478024  and         $s0, $v0, $a3
    ctx->pc = 0x16e20cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x16e210: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x16e210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x16e214: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x16e214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x16e218: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16e218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e21c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16e220: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16e220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16e224: 0x94230100  lhu         $v1, 0x100($at)
    ctx->pc = 0x16e224u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 256)));
    // 0x16e228: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e22c: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x16e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16e230: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e234: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e238: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e23c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16e23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16e240: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16e240u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x16e244: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16e244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16e248: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e24c: 0x94230160  lhu         $v1, 0x160($at)
    ctx->pc = 0x16e24cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000160u));
    // 0x16e250: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e254: 0x8c220164  lw          $v0, 0x164($at)
    ctx->pc = 0x16e254u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000164u)); // MMIO: 0x70000164
    // 0x16e258: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e25c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e260: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e264: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16e264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16e268: 0x8c220168  lw          $v0, 0x168($at)
    ctx->pc = 0x16e268u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000168u)); // MMIO: 0x70000168
    // 0x16e26c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16e270: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e274: 0x94230150  lhu         $v1, 0x150($at)
    ctx->pc = 0x16e274u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000150u));
    // 0x16e278: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e27c: 0x8c220154  lw          $v0, 0x154($at)
    ctx->pc = 0x16e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000154u)); // MMIO: 0x70000154
    // 0x16e280: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e284: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e288: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e28c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16e28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16e290: 0x8c220158  lw          $v0, 0x158($at)
    ctx->pc = 0x16e290u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000158u)); // MMIO: 0x70000158
    // 0x16e294: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16e294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16e298: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e29c: 0x94230140  lhu         $v1, 0x140($at)
    ctx->pc = 0x16e29cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000140u));
    // 0x16e2a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e2a4: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x16e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000144u)); // MMIO: 0x70000144
    // 0x16e2a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e2ac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e2b0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e2b4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x16e2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x16e2b8: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16e2bc: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x16e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x16e2c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e2c4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x16e2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x16e2c8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x16e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x16e2cc: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16e2ccu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e2d0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16e2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16e2d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e2d8: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16e2d8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e2dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e2dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e2e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e2e4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16e2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x16e2e8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x16e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x16e2ec: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16e2ecu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e2f0: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16e2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16e2f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e2f8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x16e2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x16e2fc: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16e2fcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e300: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e304: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e308: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x16e308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16e30c: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16e30cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e310: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16e310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16e314: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e318: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16e318u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e31c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e31cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e320: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e324: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x16e324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x16e328: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16e328u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e32c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e32cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e330: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e334: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x16e334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x16e338: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16e338u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e33c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x16e33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x16e340: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e344: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16e344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16e348: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16e348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16e34c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16e350: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16e350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16e354: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16e354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e358: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16e358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16e35c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16e35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16e360: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16e360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16e364: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16e364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16e368: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16e36c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16e370: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16e370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e374: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16e374u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16e378: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16e378u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16e37c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16e380: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16e380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16e384: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16e384u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16e388: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x16e388u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x16e38c: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 328)));
    // 0x16e390: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16E390u;
    SET_GPR_U32(ctx, 31, 0x16E398u);
    ctx->pc = 0x16E394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E390u;
    // 0x16e394: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16E390u, 0x16E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E398u;
label_16e398:
    // 0x16e398: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x16e398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x16e39c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16e3a0: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16e3a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16e3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16e3a8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16e3a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16e3ac: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x16E3ACu;
    {
        const bool branch_taken_0x16e3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3ACu;
        // 0x16e3b0: 0xac24fc90  sw          $a0, -0x370($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e3ac) {
            ctx->pc = 0x16E558u;
            goto label_16e558;
        }
    }
    ctx->pc = 0x16E3B4u;
    // 0x16e3b4: 0x0  nop
    ctx->pc = 0x16e3b4u;
    // NOP
label_16e3b8:
    // 0x16e3b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16e3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16e3bc: 0x8c28fc90  lw          $t0, -0x370($at)
    ctx->pc = 0x16e3bcu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16e3c0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16e3c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16e3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e3c8: 0x3c033838  lui         $v1, 0x3838
    ctx->pc = 0x16e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14392 << 16));
    // 0x16e3cc: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x16e3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x16e3d0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16e3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16e3d4: 0x2407fff0  addiu       $a3, $zero, -0x10
    ctx->pc = 0x16e3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16e3d8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x16e3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x16e3dc: 0x34630053  ori         $v1, $v1, 0x53
    ctx->pc = 0x16e3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)83);
    // 0x16e3e0: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x16e3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x16e3e4: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16e3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16e3e8: 0x2502000f  addiu       $v0, $t0, 0xF
    ctx->pc = 0x16e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x16e3ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e3f0: 0x478024  and         $s0, $v0, $a3
    ctx->pc = 0x16e3f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x16e3f4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x16e3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x16e3f8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x16e3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x16e3fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16e3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e400: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16e400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16e404: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16e404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16e408: 0x94230150  lhu         $v1, 0x150($at)
    ctx->pc = 0x16e408u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 336)));
    // 0x16e40c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e410: 0x8c220154  lw          $v0, 0x154($at)
    ctx->pc = 0x16e410u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000154u)); // MMIO: 0x70000154
    // 0x16e414: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e418: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e41c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e420: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16e420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16e424: 0x8c220158  lw          $v0, 0x158($at)
    ctx->pc = 0x16e424u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000158u)); // MMIO: 0x70000158
    // 0x16e428: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16e428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16e42c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e430: 0x94230160  lhu         $v1, 0x160($at)
    ctx->pc = 0x16e430u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000160u));
    // 0x16e434: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e438: 0x8c220164  lw          $v0, 0x164($at)
    ctx->pc = 0x16e438u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000164u)); // MMIO: 0x70000164
    // 0x16e43c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e440: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e444: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e448: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16e448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16e44c: 0x8c220168  lw          $v0, 0x168($at)
    ctx->pc = 0x16e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000168u)); // MMIO: 0x70000168
    // 0x16e450: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16e450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16e454: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e458: 0x94230140  lhu         $v1, 0x140($at)
    ctx->pc = 0x16e458u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000140u));
    // 0x16e45c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e460: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x16e460u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000144u)); // MMIO: 0x70000144
    // 0x16e464: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e468: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e46c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e470: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16e470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16e474: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16e474u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16e478: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16e478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16e47c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e480: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x16e480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x16e484: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16e484u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e488: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e48c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e490: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x16e490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x16e494: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16e494u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e498: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16e498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16e49c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e4a0: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16e4a0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e4a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e4a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e4a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e4ac: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16e4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x16e4b0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x16e4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x16e4b4: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16e4b4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e4b8: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16e4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16e4bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e4c0: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16e4c0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e4c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e4c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e4c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e4cc: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x16e4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x16e4d0: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16e4d0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e4d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e4d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e4dc: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x16e4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16e4e0: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16e4e0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e4e4: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16e4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16e4e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e4ec: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16e4ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16e4f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16e4f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16e4f8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16e4fc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16e4fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e500: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16e500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16e504: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16e504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16e508: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16e508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16e50c: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16e50cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16e510: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16e514: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16e514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16e518: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16e518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e51c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16e520: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16e520u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16e524: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16e528: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16e528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16e52c: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16e52cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16e530: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x16e530u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x16e534: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16e534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 328)));
    // 0x16e538: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16E538u;
    SET_GPR_U32(ctx, 31, 0x16E540u);
    ctx->pc = 0x16E53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E538u;
    // 0x16e53c: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16E538u, 0x16E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E540u;
label_16e540:
    // 0x16e540: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x16e540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x16e544: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16e544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16e548: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16e548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16e54c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16e54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16e550: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16e550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16e554: 0xac24fc90  sw          $a0, -0x370($at)
    ctx->pc = 0x16e554u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
label_16e558:
    // 0x16e558: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e55c: 0x8c23018c  lw          $v1, 0x18C($at)
    ctx->pc = 0x16e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000018Cu)); // MMIO: 0x7000018c
    // 0x16e560: 0x106000ed  beqz        $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x16E560u;
    {
        const bool branch_taken_0x16e560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E560u;
        // 0x16e564: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e560) {
            ctx->pc = 0x16E918u;
            goto label_16e918;
        }
    }
    ctx->pc = 0x16E568u;
    // 0x16e568: 0x8c23016c  lw          $v1, 0x16C($at)
    ctx->pc = 0x16e568u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 364))); // MMIO: 0x7000016c
    // 0x16e56c: 0x106000ea  beqz        $v1, . + 4 + (0xEA << 2)
    ctx->pc = 0x16E56Cu;
    {
        const bool branch_taken_0x16e56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e56c) {
            ctx->pc = 0x16E918u;
            goto label_16e918;
        }
    }
    ctx->pc = 0x16E574u;
    // 0x16e574: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e578: 0x8c22011c  lw          $v0, 0x11C($at)
    ctx->pc = 0x16e578u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000011Cu)); // MMIO: 0x7000011c
    // 0x16e57c: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x16E57Cu;
    {
        const bool branch_taken_0x16e57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E57Cu;
        // 0x16e580: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e57c) {
            ctx->pc = 0x16E770u;
            goto label_16e770;
        }
    }
    ctx->pc = 0x16E584u;
    // 0x16e584: 0x3c023c40  lui         $v0, 0x3C40
    ctx->pc = 0x16e584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15424 << 16));
    // 0x16e588: 0x8c28fc90  lw          $t0, -0x370($at)
    ctx->pc = 0x16e588u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966416)));
    // 0x16e58c: 0x34430054  ori         $v1, $v0, 0x54
    ctx->pc = 0x16e58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)84);
    // 0x16e590: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16e590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16e594: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x16e594u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x16e598: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16e598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e59c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16e59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16e5a0: 0x2407fff0  addiu       $a3, $zero, -0x10
    ctx->pc = 0x16e5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16e5a4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x16e5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x16e5a8: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x16e5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x16e5ac: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16e5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16e5b0: 0x2502000f  addiu       $v0, $t0, 0xF
    ctx->pc = 0x16e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x16e5b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e5b8: 0x478024  and         $s0, $v0, $a3
    ctx->pc = 0x16e5b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x16e5bc: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x16e5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x16e5c0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x16e5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x16e5c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16e5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e5c8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16e5cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16e5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16e5d0: 0x94230110  lhu         $v1, 0x110($at)
    ctx->pc = 0x16e5d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 272)));
    // 0x16e5d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e5d8: 0x8c220114  lw          $v0, 0x114($at)
    ctx->pc = 0x16e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x16e5dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e5e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e5e4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e5e8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16e5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16e5ec: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x16e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16e5f0: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16e5f4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e5f8: 0x94230180  lhu         $v1, 0x180($at)
    ctx->pc = 0x16e5f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000180u));
    // 0x16e5fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e600: 0x8c220184  lw          $v0, 0x184($at)
    ctx->pc = 0x16e600u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000184u)); // MMIO: 0x70000184
    // 0x16e604: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e608: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e60c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e610: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16e610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16e614: 0x8c220188  lw          $v0, 0x188($at)
    ctx->pc = 0x16e614u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000188u)); // MMIO: 0x70000188
    // 0x16e618: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16e618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16e61c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e620: 0x94230160  lhu         $v1, 0x160($at)
    ctx->pc = 0x16e620u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000160u));
    // 0x16e624: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e628: 0x8c220164  lw          $v0, 0x164($at)
    ctx->pc = 0x16e628u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000164u)); // MMIO: 0x70000164
    // 0x16e62c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e630: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e634: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e638: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16e638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16e63c: 0x8c220168  lw          $v0, 0x168($at)
    ctx->pc = 0x16e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000168u)); // MMIO: 0x70000168
    // 0x16e640: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16e640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16e644: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e648: 0x94230140  lhu         $v1, 0x140($at)
    ctx->pc = 0x16e648u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000140u));
    // 0x16e64c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e650: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x16e650u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000144u)); // MMIO: 0x70000144
    // 0x16e654: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e658: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e65c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e660: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x16e660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x16e664: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16e664u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16e668: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x16e668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x16e66c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e670: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16e670u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e674: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16e674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16e678: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e67c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x16e67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x16e680: 0xc42002a4  lwc1        $f0, 0x2A4($at)
    ctx->pc = 0x16e680u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e684: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16e684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16e688: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e68c: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16e68cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e690: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16e690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x16e694: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e698: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16e698u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e69c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e69cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e6a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e6a4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x16e6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x16e6a8: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16e6a8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6ac: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16e6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16e6b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e6b4: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16e6b4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e6b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e6bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e6c0: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x16e6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x16e6c4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x16e6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x16e6c8: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16e6c8u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6cc: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16e6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16e6d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e6d4: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16e6d4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e6d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e6dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e6e0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x16e6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x16e6e4: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16e6e4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e6ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e6f0: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x16e6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x16e6f4: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16e6f4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e6f8: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x16e6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x16e6fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e700: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16e700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16e704: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16e704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16e708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16e708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16e70c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16e710: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16e710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e714: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16e714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16e718: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16e718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16e71c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16e71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16e720: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16e720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16e724: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16e728: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16e728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16e72c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e730: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16e730u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16e734: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16e734u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16e738: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16e738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16e73c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16e740: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16e740u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16e744: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x16e744u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x16e748: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16e748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 328)));
    // 0x16e74c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16E74Cu;
    SET_GPR_U32(ctx, 31, 0x16E754u);
    ctx->pc = 0x16E750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E74Cu;
    // 0x16e750: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16E74Cu, 0x16E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E754u;
label_16e754:
    // 0x16e754: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x16e754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x16e758: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16e75c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16e75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16e760: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16e760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16e764: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16e764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16e768: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x16E768u;
    {
        const bool branch_taken_0x16e768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E768u;
        // 0x16e76c: 0xac24fc90  sw          $a0, -0x370($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e768) {
            ctx->pc = 0x16E918u;
            goto label_16e918;
        }
    }
    ctx->pc = 0x16E770u;
label_16e770:
    // 0x16e770: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16e770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16e774: 0x8c28fc90  lw          $t0, -0x370($at)
    ctx->pc = 0x16e774u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16e778: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16e778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16e77c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16e77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e780: 0x3c033838  lui         $v1, 0x3838
    ctx->pc = 0x16e780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14392 << 16));
    // 0x16e784: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x16e784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x16e788: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16e788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16e78c: 0x2407fff0  addiu       $a3, $zero, -0x10
    ctx->pc = 0x16e78cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16e790: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x16e790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x16e794: 0x34630053  ori         $v1, $v1, 0x53
    ctx->pc = 0x16e794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)83);
    // 0x16e798: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x16e798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x16e79c: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16e7a0: 0x2502000f  addiu       $v0, $t0, 0xF
    ctx->pc = 0x16e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x16e7a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e7a8: 0x478024  and         $s0, $v0, $a3
    ctx->pc = 0x16e7a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x16e7ac: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x16e7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x16e7b0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x16e7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x16e7b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16e7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e7b8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16e7bc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16e7c0: 0x94230160  lhu         $v1, 0x160($at)
    ctx->pc = 0x16e7c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 352)));
    // 0x16e7c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e7c8: 0x8c220164  lw          $v0, 0x164($at)
    ctx->pc = 0x16e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000164u)); // MMIO: 0x70000164
    // 0x16e7cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e7d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e7d4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e7d8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16e7dc: 0x8c220168  lw          $v0, 0x168($at)
    ctx->pc = 0x16e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000168u)); // MMIO: 0x70000168
    // 0x16e7e0: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16e7e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e7e8: 0x94230180  lhu         $v1, 0x180($at)
    ctx->pc = 0x16e7e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000180u));
    // 0x16e7ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e7f0: 0x8c220184  lw          $v0, 0x184($at)
    ctx->pc = 0x16e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000184u)); // MMIO: 0x70000184
    // 0x16e7f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e7f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e7fc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e800: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16e800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16e804: 0x8c220188  lw          $v0, 0x188($at)
    ctx->pc = 0x16e804u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000188u)); // MMIO: 0x70000188
    // 0x16e808: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16e808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16e80c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e810: 0x94230140  lhu         $v1, 0x140($at)
    ctx->pc = 0x16e810u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000140u));
    // 0x16e814: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e818: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x16e818u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000144u)); // MMIO: 0x70000144
    // 0x16e81c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e820: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e824: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e828: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16e828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16e82c: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16e830: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16e830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16e834: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e838: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16e838u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e83c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e83cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e840: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e844: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16e844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16e848: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x16e848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x16e84c: 0xc42002b8  lwc1        $f0, 0x2B8($at)
    ctx->pc = 0x16e84cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e850: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16e850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16e854: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e858: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16e858u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e85c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16e85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x16e860: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e864: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16e864u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e868: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e86c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e870: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x16e870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x16e874: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16e874u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e878: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16e878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16e87c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e880: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16e880u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e884: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e888: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e88c: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x16e88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x16e890: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16e890u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e894: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16e898: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e89c: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x16e89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16e8a0: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16e8a0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e8a4: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16e8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16e8a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e8ac: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16e8acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16e8b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16e8b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16e8b8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16e8bc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16e8bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e8c0: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16e8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16e8c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16e8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16e8c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16e8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16e8cc: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16e8ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16e8d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16e8d4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16e8d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e8dc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16e8e0: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16e8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16e8e4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16e8e8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16e8ec: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16e8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16e8f0: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x16e8f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x16e8f4: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 328)));
    // 0x16e8f8: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16E8F8u;
    SET_GPR_U32(ctx, 31, 0x16E900u);
    ctx->pc = 0x16E8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E8F8u;
    // 0x16e8fc: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16E8F8u, 0x16E900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E900u;
label_16e900:
    // 0x16e900: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x16e900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x16e904: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16e904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16e908: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16e908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16e90c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16e90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16e910: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16e910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16e914: 0xac24fc90  sw          $a0, -0x370($at)
    ctx->pc = 0x16e914u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
label_16e918:
    // 0x16e918: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e91c: 0x8c23017c  lw          $v1, 0x17C($at)
    ctx->pc = 0x16e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000017Cu)); // MMIO: 0x7000017c
    // 0x16e920: 0x106000f3  beqz        $v1, . + 4 + (0xF3 << 2)
    ctx->pc = 0x16E920u;
    {
        const bool branch_taken_0x16e920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E920u;
        // 0x16e924: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e920) {
            ctx->pc = 0x16ECF0u;
            goto label_16ecf0;
        }
    }
    ctx->pc = 0x16E928u;
    // 0x16e928: 0x8c23018c  lw          $v1, 0x18C($at)
    ctx->pc = 0x16e928u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 396))); // MMIO: 0x7000018c
    // 0x16e92c: 0x106000f0  beqz        $v1, . + 4 + (0xF0 << 2)
    ctx->pc = 0x16E92Cu;
    {
        const bool branch_taken_0x16e92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e92c) {
            ctx->pc = 0x16ECF0u;
            goto label_16ecf0;
        }
    }
    ctx->pc = 0x16E934u;
    // 0x16e934: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e938: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x16e938u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000013Cu)); // MMIO: 0x7000013c
    // 0x16e93c: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x16E93Cu;
    {
        const bool branch_taken_0x16e93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E93Cu;
        // 0x16e940: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e93c) {
            ctx->pc = 0x16EB40u;
            goto label_16eb40;
        }
    }
    ctx->pc = 0x16E944u;
    // 0x16e944: 0x3c023c40  lui         $v0, 0x3C40
    ctx->pc = 0x16e944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15424 << 16));
    // 0x16e948: 0x8c28fc90  lw          $t0, -0x370($at)
    ctx->pc = 0x16e948u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966416)));
    // 0x16e94c: 0x34430054  ori         $v1, $v0, 0x54
    ctx->pc = 0x16e94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)84);
    // 0x16e950: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16e950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16e954: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x16e954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x16e958: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16e958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e95c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16e960: 0x2407fff0  addiu       $a3, $zero, -0x10
    ctx->pc = 0x16e960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16e964: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x16e964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x16e968: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x16e968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x16e96c: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16e96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16e970: 0x2502000f  addiu       $v0, $t0, 0xF
    ctx->pc = 0x16e970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x16e974: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e978: 0x478024  and         $s0, $v0, $a3
    ctx->pc = 0x16e978u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x16e97c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x16e97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x16e980: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x16e980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x16e984: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16e984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e988: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16e988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16e98c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16e990: 0x94230130  lhu         $v1, 0x130($at)
    ctx->pc = 0x16e990u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 304)));
    // 0x16e994: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e998: 0x8c220134  lw          $v0, 0x134($at)
    ctx->pc = 0x16e998u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000134u)); // MMIO: 0x70000134
    // 0x16e99c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e9a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e9a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e9a8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16e9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16e9ac: 0x8c220138  lw          $v0, 0x138($at)
    ctx->pc = 0x16e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000138u)); // MMIO: 0x70000138
    // 0x16e9b0: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16e9b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e9b8: 0x94230170  lhu         $v1, 0x170($at)
    ctx->pc = 0x16e9b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000170u));
    // 0x16e9bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e9c0: 0x8c220174  lw          $v0, 0x174($at)
    ctx->pc = 0x16e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000174u)); // MMIO: 0x70000174
    // 0x16e9c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e9c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e9cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e9d0: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16e9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16e9d4: 0x8c220178  lw          $v0, 0x178($at)
    ctx->pc = 0x16e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000178u)); // MMIO: 0x70000178
    // 0x16e9d8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16e9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16e9dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e9e0: 0x94230180  lhu         $v1, 0x180($at)
    ctx->pc = 0x16e9e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000180u));
    // 0x16e9e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e9e8: 0x8c220184  lw          $v0, 0x184($at)
    ctx->pc = 0x16e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000184u)); // MMIO: 0x70000184
    // 0x16e9ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16e9f0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16e9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16e9f4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e9f8: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16e9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16e9fc: 0x8c220188  lw          $v0, 0x188($at)
    ctx->pc = 0x16e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000188u)); // MMIO: 0x70000188
    // 0x16ea00: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16ea00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16ea04: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ea04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ea08: 0x94230140  lhu         $v1, 0x140($at)
    ctx->pc = 0x16ea08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000140u));
    // 0x16ea0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ea0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ea10: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x16ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000144u)); // MMIO: 0x70000144
    // 0x16ea14: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16ea18: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ea18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ea1c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16ea1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16ea20: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x16ea20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x16ea24: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16ea28: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x16ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x16ea2c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ea2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ea30: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16ea30u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ea34: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16ea34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16ea38: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ea38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ea3c: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16ea3cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ea40: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x16ea40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x16ea44: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ea44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ea48: 0xc42002ac  lwc1        $f0, 0x2AC($at)
    ctx->pc = 0x16ea48u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ea4c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16ea4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16ea50: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ea50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ea54: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16ea54u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ea58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16ea58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16ea5c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ea5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ea60: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16ea60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x16ea64: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16ea64u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ea68: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x16ea68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x16ea6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ea6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ea70: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16ea70u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ea74: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16ea74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16ea78: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ea78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ea7c: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16ea7cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ea80: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x16ea80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x16ea84: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ea84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ea88: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16ea88u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ea8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16ea8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16ea90: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ea90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ea94: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x16ea94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16ea98: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16ea98u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ea9c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16ea9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16eaa0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16eaa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16eaa4: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16eaa4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16eaa8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16eaa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16eaac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16eaacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16eab0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x16eab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x16eab4: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16eab4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16eab8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16eab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16eabc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16eabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16eac0: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x16eac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x16eac4: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16eac4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16eac8: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x16eac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x16eacc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16eaccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ead0: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16ead0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16ead4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16ead8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16ead8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16eadc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16eae0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16eae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16eae4: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16eae8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16eae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16eaec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16eaf0: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16eaf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16eaf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16eaf8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16eafc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16eb00: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16eb04: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16eb04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16eb08: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16eb0c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16eb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16eb10: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16eb10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16eb14: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x16eb14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x16eb18: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 328)));
    // 0x16eb1c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16EB1Cu;
    SET_GPR_U32(ctx, 31, 0x16EB24u);
    ctx->pc = 0x16EB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EB1Cu;
    // 0x16eb20: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16EB1Cu, 0x16EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB24u;
label_16eb24:
    // 0x16eb24: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x16eb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x16eb28: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16eb2c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16eb30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16eb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16eb34: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16eb34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16eb38: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x16EB38u;
    {
        const bool branch_taken_0x16eb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB38u;
        // 0x16eb3c: 0xac24fc90  sw          $a0, -0x370($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb38) {
            ctx->pc = 0x16ECF0u;
            goto label_16ecf0;
        }
    }
    ctx->pc = 0x16EB40u;
label_16eb40:
    // 0x16eb40: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16eb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16eb44: 0x8c28fc90  lw          $t0, -0x370($at)
    ctx->pc = 0x16eb44u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16eb48: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16eb4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16eb4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16eb50: 0x3c033838  lui         $v1, 0x3838
    ctx->pc = 0x16eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14392 << 16));
    // 0x16eb54: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x16eb54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x16eb58: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16eb58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16eb5c: 0x2407fff0  addiu       $a3, $zero, -0x10
    ctx->pc = 0x16eb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16eb60: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x16eb60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x16eb64: 0x34630053  ori         $v1, $v1, 0x53
    ctx->pc = 0x16eb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)83);
    // 0x16eb68: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x16eb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x16eb6c: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16eb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16eb70: 0x2502000f  addiu       $v0, $t0, 0xF
    ctx->pc = 0x16eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x16eb74: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16eb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16eb78: 0x478024  and         $s0, $v0, $a3
    ctx->pc = 0x16eb78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x16eb7c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x16eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x16eb80: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x16eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x16eb84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16eb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb88: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16eb8c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16eb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16eb90: 0x94230180  lhu         $v1, 0x180($at)
    ctx->pc = 0x16eb90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 384)));
    // 0x16eb94: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16eb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16eb98: 0x8c220184  lw          $v0, 0x184($at)
    ctx->pc = 0x16eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000184u)); // MMIO: 0x70000184
    // 0x16eb9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16eba0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16eba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16eba4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16eba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16eba8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16ebac: 0x8c220188  lw          $v0, 0x188($at)
    ctx->pc = 0x16ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000188u)); // MMIO: 0x70000188
    // 0x16ebb0: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16ebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16ebb4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ebb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ebb8: 0x94230170  lhu         $v1, 0x170($at)
    ctx->pc = 0x16ebb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000170u));
    // 0x16ebbc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ebbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ebc0: 0x8c220174  lw          $v0, 0x174($at)
    ctx->pc = 0x16ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000174u)); // MMIO: 0x70000174
    // 0x16ebc4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16ebc8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ebc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ebcc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16ebccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16ebd0: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16ebd4: 0x8c220178  lw          $v0, 0x178($at)
    ctx->pc = 0x16ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000178u)); // MMIO: 0x70000178
    // 0x16ebd8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16ebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16ebdc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ebdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ebe0: 0x94230140  lhu         $v1, 0x140($at)
    ctx->pc = 0x16ebe0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000140u));
    // 0x16ebe4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ebe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ebe8: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x16ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000144u)); // MMIO: 0x70000144
    // 0x16ebec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16ebf0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ebf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ebf4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16ebf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16ebf8: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16ebfc: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16ec00: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16ec04: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ec04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ec08: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16ec08u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ec0c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16ec0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16ec10: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ec10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ec14: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16ec14u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ec18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16ec18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16ec1c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ec1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ec20: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x16ec20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x16ec24: 0xc42002c0  lwc1        $f0, 0x2C0($at)
    ctx->pc = 0x16ec24u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ec28: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16ec28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16ec2c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ec2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ec30: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16ec30u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ec34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16ec34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16ec38: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ec38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ec3c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x16ec3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x16ec40: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16ec40u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ec44: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x16ec44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x16ec48: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ec48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ec4c: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16ec4cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ec50: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16ec50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16ec54: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ec54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ec58: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16ec58u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ec5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16ec5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16ec60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ec60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ec64: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x16ec64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x16ec68: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16ec68u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ec6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16ec6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16ec70: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ec70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ec74: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x16ec74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16ec78: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16ec78u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ec7c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16ec7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16ec80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ec80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ec84: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16ec84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16ec88: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16ec8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16ec90: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16ec94: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16ec94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ec98: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16ec9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16ec9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16eca0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16eca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16eca4: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16eca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16eca8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ecac: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16ecb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ecb4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16ecb8: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16ecb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16ecbc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16ecc0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16ecc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16ecc4: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16ecc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16ecc8: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x16ecc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x16eccc: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 328)));
    // 0x16ecd0: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16ECD0u;
    SET_GPR_U32(ctx, 31, 0x16ECD8u);
    ctx->pc = 0x16ECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ECD0u;
    // 0x16ecd4: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16ECD0u, 0x16ECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ECD8u;
label_16ecd8:
    // 0x16ecd8: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x16ecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x16ecdc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16ece0: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16ece4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16ece4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16ece8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16ece8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16ecec: 0xac24fc90  sw          $a0, -0x370($at)
    ctx->pc = 0x16ececu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
label_16ecf0:
    // 0x16ecf0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ecf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ecf4: 0x8c23015c  lw          $v1, 0x15C($at)
    ctx->pc = 0x16ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x7000015Cu)); // MMIO: 0x7000015c
    // 0x16ecf8: 0x106000ed  beqz        $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x16ECF8u;
    {
        const bool branch_taken_0x16ecf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECF8u;
        // 0x16ecfc: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ecf8) {
            ctx->pc = 0x16F0B0u;
            goto label_16f0b0;
        }
    }
    ctx->pc = 0x16ED00u;
    // 0x16ed00: 0x8c23017c  lw          $v1, 0x17C($at)
    ctx->pc = 0x16ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 380))); // MMIO: 0x7000017c
    // 0x16ed04: 0x106000ea  beqz        $v1, . + 4 + (0xEA << 2)
    ctx->pc = 0x16ED04u;
    {
        const bool branch_taken_0x16ed04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ed04) {
            ctx->pc = 0x16F0B0u;
            goto label_16f0b0;
        }
    }
    ctx->pc = 0x16ED0Cu;
    // 0x16ed0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ed0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ed10: 0x8c22012c  lw          $v0, 0x12C($at)
    ctx->pc = 0x16ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000012Cu)); // MMIO: 0x7000012c
    // 0x16ed14: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x16ED14u;
    {
        const bool branch_taken_0x16ed14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED14u;
        // 0x16ed18: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed14) {
            ctx->pc = 0x16EF08u;
            goto label_16ef08;
        }
    }
    ctx->pc = 0x16ED1Cu;
    // 0x16ed1c: 0x3c023c40  lui         $v0, 0x3C40
    ctx->pc = 0x16ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15424 << 16));
    // 0x16ed20: 0x8c28fc90  lw          $t0, -0x370($at)
    ctx->pc = 0x16ed20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966416)));
    // 0x16ed24: 0x34430054  ori         $v1, $v0, 0x54
    ctx->pc = 0x16ed24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)84);
    // 0x16ed28: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16ed2c: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x16ed2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x16ed30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ed30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ed34: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16ed34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16ed38: 0x2407fff0  addiu       $a3, $zero, -0x10
    ctx->pc = 0x16ed38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16ed3c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x16ed3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x16ed40: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x16ed40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x16ed44: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16ed44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16ed48: 0x2502000f  addiu       $v0, $t0, 0xF
    ctx->pc = 0x16ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x16ed4c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ed4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ed50: 0x478024  and         $s0, $v0, $a3
    ctx->pc = 0x16ed50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x16ed54: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x16ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x16ed58: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x16ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x16ed5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ed5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed60: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16ed64: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16ed64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16ed68: 0x94230120  lhu         $v1, 0x120($at)
    ctx->pc = 0x16ed68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 288)));
    // 0x16ed6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ed6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ed70: 0x8c220124  lw          $v0, 0x124($at)
    ctx->pc = 0x16ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000124u)); // MMIO: 0x70000124
    // 0x16ed74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16ed78: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ed78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ed7c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16ed7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16ed80: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16ed80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16ed84: 0x8c220128  lw          $v0, 0x128($at)
    ctx->pc = 0x16ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000128u)); // MMIO: 0x70000128
    // 0x16ed88: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16ed88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16ed8c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ed8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ed90: 0x94230150  lhu         $v1, 0x150($at)
    ctx->pc = 0x16ed90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000150u));
    // 0x16ed94: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ed94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ed98: 0x8c220154  lw          $v0, 0x154($at)
    ctx->pc = 0x16ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000154u)); // MMIO: 0x70000154
    // 0x16ed9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16eda0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16eda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16eda4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16eda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16eda8: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16eda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16edac: 0x8c220158  lw          $v0, 0x158($at)
    ctx->pc = 0x16edacu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000158u)); // MMIO: 0x70000158
    // 0x16edb0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16edb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16edb4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16edb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16edb8: 0x94230170  lhu         $v1, 0x170($at)
    ctx->pc = 0x16edb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000170u));
    // 0x16edbc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16edbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16edc0: 0x8c220174  lw          $v0, 0x174($at)
    ctx->pc = 0x16edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000174u)); // MMIO: 0x70000174
    // 0x16edc4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16edc8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16edc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16edcc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16edccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16edd0: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16edd4: 0x8c220178  lw          $v0, 0x178($at)
    ctx->pc = 0x16edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000178u)); // MMIO: 0x70000178
    // 0x16edd8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16edd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16eddc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16eddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ede0: 0x94230140  lhu         $v1, 0x140($at)
    ctx->pc = 0x16ede0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000140u));
    // 0x16ede4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ede4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ede8: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x16ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000144u)); // MMIO: 0x70000144
    // 0x16edec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16edecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16edf0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16edf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16edf4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16edf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16edf8: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x16edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x16edfc: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16ee00: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x16ee00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x16ee04: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ee04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ee08: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x16ee08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x16ee0c: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x16ee0cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee10: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x16ee10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x16ee14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ee14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ee18: 0xc42002a8  lwc1        $f0, 0x2A8($at)
    ctx->pc = 0x16ee18u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee1c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16ee1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16ee20: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ee20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ee24: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x16ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x16ee28: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16ee28u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16ee2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16ee30: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ee30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ee34: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x16ee34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x16ee38: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16ee38u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee3c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16ee3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16ee40: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ee40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ee44: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16ee44u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16ee48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16ee4c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ee4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ee50: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x16ee50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x16ee54: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16ee54u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee58: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x16ee58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16ee5c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ee5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ee60: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16ee60u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee64: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16ee64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16ee68: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ee68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ee6c: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16ee6cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16ee70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16ee74: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ee74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ee78: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x16ee78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x16ee7c: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16ee7cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16ee80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16ee84: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ee84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ee88: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x16ee88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x16ee8c: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16ee8cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee90: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x16ee90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x16ee94: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ee94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ee98: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16ee98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16ee9c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16ee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16eea0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16eea4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16eea8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16eea8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16eeac: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16eeb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16eeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16eeb4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16eeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16eeb8: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16eeb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16eebc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16eec0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16eec4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16eec8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16eecc: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16eeccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16eed0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16eed4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16eed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16eed8: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16eed8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16eedc: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x16eedcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x16eee0: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 328)));
    // 0x16eee4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16EEE4u;
    SET_GPR_U32(ctx, 31, 0x16EEECu);
    ctx->pc = 0x16EEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EEE4u;
    // 0x16eee8: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16EEE4u, 0x16EEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EEECu;
label_16eeec:
    // 0x16eeec: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x16eeecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x16eef0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16eef4: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16eef8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16eef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16eefc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16eefcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16ef00: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x16EF00u;
    {
        const bool branch_taken_0x16ef00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF00u;
        // 0x16ef04: 0xac24fc90  sw          $a0, -0x370($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef00) {
            ctx->pc = 0x16F0B0u;
            goto label_16f0b0;
        }
    }
    ctx->pc = 0x16EF08u;
label_16ef08:
    // 0x16ef08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16ef08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16ef0c: 0x8c28fc90  lw          $t0, -0x370($at)
    ctx->pc = 0x16ef0cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16ef10: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16ef14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ef14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ef18: 0x3c033838  lui         $v1, 0x3838
    ctx->pc = 0x16ef18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14392 << 16));
    // 0x16ef1c: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x16ef1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x16ef20: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16ef20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16ef24: 0x2407fff0  addiu       $a3, $zero, -0x10
    ctx->pc = 0x16ef24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16ef28: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x16ef28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x16ef2c: 0x34630053  ori         $v1, $v1, 0x53
    ctx->pc = 0x16ef2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)83);
    // 0x16ef30: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x16ef30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x16ef34: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16ef34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16ef38: 0x2502000f  addiu       $v0, $t0, 0xF
    ctx->pc = 0x16ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x16ef3c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ef3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ef40: 0x478024  and         $s0, $v0, $a3
    ctx->pc = 0x16ef40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x16ef44: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x16ef44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x16ef48: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x16ef48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x16ef4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ef4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef50: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16ef54: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16ef54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16ef58: 0x94230170  lhu         $v1, 0x170($at)
    ctx->pc = 0x16ef58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 368)));
    // 0x16ef5c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ef5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ef60: 0x8c220174  lw          $v0, 0x174($at)
    ctx->pc = 0x16ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000174u)); // MMIO: 0x70000174
    // 0x16ef64: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16ef68: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ef68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ef6c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16ef6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16ef70: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16ef74: 0x8c220178  lw          $v0, 0x178($at)
    ctx->pc = 0x16ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000178u)); // MMIO: 0x70000178
    // 0x16ef78: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16ef78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16ef7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ef7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ef80: 0x94230150  lhu         $v1, 0x150($at)
    ctx->pc = 0x16ef80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000150u));
    // 0x16ef84: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ef84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ef88: 0x8c220154  lw          $v0, 0x154($at)
    ctx->pc = 0x16ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000154u)); // MMIO: 0x70000154
    // 0x16ef8c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16ef90: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16ef90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16ef94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16ef94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16ef98: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x16ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x16ef9c: 0x8c220158  lw          $v0, 0x158($at)
    ctx->pc = 0x16ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000158u)); // MMIO: 0x70000158
    // 0x16efa0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16efa4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16efa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16efa8: 0x94230140  lhu         $v1, 0x140($at)
    ctx->pc = 0x16efa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)runtime->Load16(rdram, ctx, 0x70000140u));
    // 0x16efac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16efacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16efb0: 0x8c220144  lw          $v0, 0x144($at)
    ctx->pc = 0x16efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000144u)); // MMIO: 0x70000144
    // 0x16efb4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16efb8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16efb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16efbc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16efbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16efc0: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x16efc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x16efc4: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000148u)); // MMIO: 0x70000148
    // 0x16efc8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16efc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x16efcc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16efccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16efd0: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16efd0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16efd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16efd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16efd8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16efd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16efdc: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16efdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16efe0: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16efe0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16efe4: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x16efe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x16efe8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16efe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16efec: 0xc42002bc  lwc1        $f0, 0x2BC($at)
    ctx->pc = 0x16efecu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16eff0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x16eff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x16eff4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16eff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16eff8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x16eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x16effc: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16effcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f000: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16f000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16f004: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f008: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x16f008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x16f00c: 0xc42002b4  lwc1        $f0, 0x2B4($at)
    ctx->pc = 0x16f00cu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f010: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x16f010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x16f014: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f018: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16f018u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f01c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16f01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16f020: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f024: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x16f024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x16f028: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16f028u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f02c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16f02cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16f030: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f034: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x16f034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x16f038: 0xc42002b0  lwc1        $f0, 0x2B0($at)
    ctx->pc = 0x16f038u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f03c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x16f03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x16f040: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f044: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x16f044u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16f048: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16f048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16f04c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f050: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16f050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16f054: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16f054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f058: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16f058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16f05c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16f05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16f060: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16f060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16f064: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x16f064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x16f068: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f06c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16f070: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f074: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16f074u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16f078: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16f078u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f07c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16f080: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16f080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16f084: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16f084u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16f088: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x16f088u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x16f08c: 0x8c220148  lw          $v0, 0x148($at)
    ctx->pc = 0x16f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 328)));
    // 0x16f090: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16F090u;
    SET_GPR_U32(ctx, 31, 0x16F098u);
    ctx->pc = 0x16F094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F090u;
    // 0x16f094: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16F090u, 0x16F098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F098u;
label_16f098:
    // 0x16f098: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x16f098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x16f09c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16f0a0: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x16f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x16f0a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16f0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16f0a8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x16f0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16f0ac: 0xac24fc90  sw          $a0, -0x370($at)
    ctx->pc = 0x16f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 4));
label_16f0b0:
    // 0x16f0b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16f0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f0b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f0b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f0b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x16F0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0BCu;
        // 0x16f0c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F0C4u;
}

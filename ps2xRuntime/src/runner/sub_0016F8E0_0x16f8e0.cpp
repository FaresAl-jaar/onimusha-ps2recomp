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

// Function: sub_0016F8E0
// Address: 0x16f8e0 - 0x16fc94
void sub_0016F8E0_0x16f8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F8E0_0x16f8e0");
#endif

    switch (ctx->pc) {
        case 0x16f990u: goto label_16f990;
        case 0x16fa74u: goto label_16fa74;
        case 0x16fb60u: goto label_16fb60;
        case 0x16fc44u: goto label_16fc44;
        default: break;
    }

    ctx->pc = 0x16f8e0u;

    // 0x16f8e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16f8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16f8e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x16f8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x16f8e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16f8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16f8ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16f8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16f8f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16f8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16f8f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16f8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16f8f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16f8fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16f8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16f900: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x16f900u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16f904: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x16f904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x16f908: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16F908u;
    {
        const bool branch_taken_0x16f908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F908u;
        // 0x16f90c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f908) {
            ctx->pc = 0x16F960u;
            goto label_16f960;
        }
    }
    ctx->pc = 0x16F910u;
    // 0x16f910: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f914: 0xc4230388  lwc1        $f3, 0x388($at)
    ctx->pc = 0x16f914u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000388u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16f918: 0xc6a40058  lwc1        $f4, 0x58($s5)
    ctx->pc = 0x16f918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16f91c: 0xc6a20050  lwc1        $f2, 0x50($s5)
    ctx->pc = 0x16f91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16f920: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f924: 0xc4210380  lwc1        $f1, 0x380($at)
    ctx->pc = 0x16f924u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f928: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x16f928u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x16f92c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16f92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16f930: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x16f930u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x16f934: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x16f934u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x16f938: 0xc4200390  lwc1        $f0, 0x390($at)
    ctx->pc = 0x16f938u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000390u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f93c: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x16f93cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x16f940: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16f940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f944: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F944u;
    {
        const bool branch_taken_0x16f944 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F944u;
        // 0x16f948: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f944) {
            ctx->pc = 0x16F950u;
            goto label_16f950;
        }
    }
    ctx->pc = 0x16F94Cu;
    // 0x16f94c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16f94cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f950:
    // 0x16f950: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16f950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16f954: 0x146000c6  bnez        $v1, . + 4 + (0xC6 << 2)
    ctx->pc = 0x16F954u;
    {
        const bool branch_taken_0x16f954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f954) {
            ctx->pc = 0x16FC70u;
            goto label_16fc70;
        }
    }
    ctx->pc = 0x16F95Cu;
    // 0x16f95c: 0x0  nop
    ctx->pc = 0x16f95cu;
    // NOP
label_16f960:
    // 0x16f960: 0x8ea60034  lw          $a2, 0x34($s5)
    ctx->pc = 0x16f960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x16f964: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16f964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16f968: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x16f968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16f96c: 0x8c25fc90  lw          $a1, -0x370($at)
    ctx->pc = 0x16f96cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81FC90u));
    // 0x16f970: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16f970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16f974: 0x84c70008  lh          $a3, 0x8($a2)
    ctx->pc = 0x16f974u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x16f978: 0x24d40010  addiu       $s4, $a2, 0x10
    ctx->pc = 0x16f978u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x16f97c: 0x8cd20004  lw          $s2, 0x4($a2)
    ctx->pc = 0x16f97cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x16f980: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x16f980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x16f984: 0x10e300b4  beq         $a3, $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x16F984u;
    {
        const bool branch_taken_0x16f984 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F984u;
        // 0x16f988: 0xa48024  and         $s0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f984) {
            ctx->pc = 0x16FC58u;
            goto label_16fc58;
        }
    }
    ctx->pc = 0x16F98Cu;
    // 0x16f98c: 0x0  nop
    ctx->pc = 0x16f98cu;
    // NOP
label_16f990:
    // 0x16f990: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x16f990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
    // 0x16f994: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16f994u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16f998: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x16f998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16f99c: 0x2839821  addu        $s3, $s4, $v1
    ctx->pc = 0x16f99cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x16f9a0: 0x9263001b  lbu         $v1, 0x1B($s3)
    ctx->pc = 0x16f9a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 27)));
    // 0x16f9a4: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x16F9A4u;
    {
        const bool branch_taken_0x16f9a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f9a4) {
            ctx->pc = 0x16FC48u;
            goto label_16fc48;
        }
    }
    ctx->pc = 0x16F9ACu;
    // 0x16f9ac: 0x8ea80018  lw          $t0, 0x18($s5)
    ctx->pc = 0x16f9acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x16f9b0: 0x3c090069  lui         $t1, 0x69
    ctx->pc = 0x16f9b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)105 << 16));
    // 0x16f9b4: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x16f9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x16f9b8: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x16f9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x16f9bc: 0x9663001c  lhu         $v1, 0x1C($s3)
    ctx->pc = 0x16f9bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x16f9c0: 0x25296ba0  addiu       $t1, $t1, 0x6BA0
    ctx->pc = 0x16f9c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 27552));
    // 0x16f9c4: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x16f9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x16f9c8: 0x94860000  lhu         $a2, 0x0($a0)
    ctx->pc = 0x16f9c8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f9cc: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x16f9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x16f9d0: 0x1043821  addu        $a3, $t0, $a0
    ctx->pc = 0x16f9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x16f9d4: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x16f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x16f9d8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x16f9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x16f9dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16f9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16f9e0: 0xe48821  addu        $s1, $a3, $a0
    ctx->pc = 0x16f9e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x16f9e4: 0x8624000a  lh          $a0, 0xA($s1)
    ctx->pc = 0x16f9e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x16f9e8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x16f9e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16f9ec: 0x31b43  sra         $v1, $v1, 13
    ctx->pc = 0x16f9ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 13));
    // 0x16f9f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16f9f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f9f4: 0x0  nop
    ctx->pc = 0x16f9f4u;
    // NOP
    // 0x16f9f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16f9f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16f9fc: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x16f9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x16fa00: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x16fa00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x16fa04: 0xd8a90000  lqc2        $vf9, 0x0($a1)
    ctx->pc = 0x16fa04u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16fa08: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x16fa08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x16fa0c: 0xd9220010  lqc2        $vf2, 0x10($t1)
    ctx->pc = 0x16fa0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x16fa10: 0xd9230020  lqc2        $vf3, 0x20($t1)
    ctx->pc = 0x16fa10u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x16fa14: 0xd9240030  lqc2        $vf4, 0x30($t1)
    ctx->pc = 0x16fa14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x16fa18: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x16fa18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16fa1c: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x16fa1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16fa20: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x16fa20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16fa24: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x16fa24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16fa28: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x16fa28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x16fa2c: 0x4a0002ff  vnop
    ctx->pc = 0x16fa2cu;
    // NOP operation, no action needed for VU0
    // 0x16fa30: 0x4a0002ff  vnop
    ctx->pc = 0x16fa30u;
    // NOP operation, no action needed for VU0
    // 0x16fa34: 0x4a0002ff  vnop
    ctx->pc = 0x16fa34u;
    // NOP operation, no action needed for VU0
    // 0x16fa38: 0x4a0002ff  vnop
    ctx->pc = 0x16fa38u;
    // NOP operation, no action needed for VU0
    // 0x16fa3c: 0x4a0002ff  vnop
    ctx->pc = 0x16fa3cu;
    // NOP operation, no action needed for VU0
    // 0x16fa40: 0x48448800  cfc2.ni     $a0, $vi17
    ctx->pc = 0x16fa40u;
    SET_GPR_U32(ctx, 4, ctx->vu0_mac_flags);
    // 0x16fa44: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16fa48: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x16fa48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
    // 0x16fa4c: 0x308300f0  andi        $v1, $a0, 0xF0
    ctx->pc = 0x16fa4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x16fa50: 0x1460007d  bnez        $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x16FA50u;
    {
        const bool branch_taken_0x16fa50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16fa50) {
            ctx->pc = 0x16FC48u;
            goto label_16fc48;
        }
    }
    ctx->pc = 0x16FA58u;
    // 0x16fa58: 0x86a8002c  lh          $t0, 0x2C($s5)
    ctx->pc = 0x16fa58u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x16fa5c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16fa60: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16fa60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16fa64: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x16fa64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x16fa68: 0x344702a0  ori         $a3, $v0, 0x2A0
    ctx->pc = 0x16fa68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x16fa6c: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16FA6Cu;
    SET_GPR_U32(ctx, 31, 0x16FA74u);
    ctx->pc = 0x16FA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FA6Cu;
    // 0x16fa70: 0x24c669a0  addiu       $a2, $a2, 0x69A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16FA6Cu, 0x16FA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA74u;
label_16fa74:
    // 0x16fa74: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x16FA74u;
    {
        const bool branch_taken_0x16fa74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fa74) {
            ctx->pc = 0x16FC48u;
            goto label_16fc48;
        }
    }
    ctx->pc = 0x16FA7Cu;
    // 0x16fa7c: 0x92620010  lbu         $v0, 0x10($s3)
    ctx->pc = 0x16fa7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x16fa80: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x16FA80u;
    {
        const bool branch_taken_0x16fa80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA80u;
        // 0x16fa84: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fa80) {
            ctx->pc = 0x16FB68u;
            goto label_16fb68;
        }
    }
    ctx->pc = 0x16FA88u;
    // 0x16fa88: 0x3c022438  lui         $v0, 0x2438
    ctx->pc = 0x16fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9272 << 16));
    // 0x16fa8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x16fa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x16fa90: 0x34420156  ori         $v0, $v0, 0x156
    ctx->pc = 0x16fa90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)342);
    // 0x16fa94: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16fa98: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x16fa98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x16fa9c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x16fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x16faa0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16faa4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16faa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16faa8: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x16faa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x16faac: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16faacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16fab0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16fab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fab4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16fab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16fab8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x16fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16fabc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x16fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x16fac0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x16fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16fac4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x16fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x16fac8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16facc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x16faccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x16fad0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x16fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x16fad4: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x16fad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x16fad8: 0x8c220100  lw          $v0, 0x100($at)
    ctx->pc = 0x16fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x16fadc: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16fae0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16fae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fae4: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x16fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16fae8: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16fae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16faec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16faecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16faf0: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x16faf4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x16faf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x16faf8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16faf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fafc: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16fafcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fb00: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x16fb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x16fb04: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16fb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fb08: 0x92630012  lbu         $v1, 0x12($s3)
    ctx->pc = 0x16fb08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x16fb0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16fb10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fb14: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16fb18: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16fb18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16fb1c: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16fb20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16fb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16fb24: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16fb28: 0x92620012  lbu         $v0, 0x12($s3)
    ctx->pc = 0x16fb28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x16fb2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fb30: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16fb34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fb38: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16fb3c: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16fb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16fb40: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x16fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x16fb44: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16fb48: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16fb48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16fb4c: 0x92620013  lbu         $v0, 0x13($s3)
    ctx->pc = 0x16fb4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19)));
    // 0x16fb50: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x16fb50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x16fb54: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 264)));
    // 0x16fb58: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16FB58u;
    SET_GPR_U32(ctx, 31, 0x16FB60u);
    ctx->pc = 0x16FB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB58u;
    // 0x16fb5c: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16FB58u, 0x16FB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB60u;
label_16fb60:
    // 0x16fb60: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x16FB60u;
    {
        const bool branch_taken_0x16fb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB60u;
        // 0x16fb64: 0x26100038  addiu       $s0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb60) {
            ctx->pc = 0x16FC48u;
            goto label_16fc48;
        }
    }
    ctx->pc = 0x16FB68u;
label_16fb68:
    // 0x16fb68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x16fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x16fb6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16fb70: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x16fb70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x16fb74: 0x3c022838  lui         $v0, 0x2838
    ctx->pc = 0x16fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10296 << 16));
    // 0x16fb78: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16fb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16fb7c: 0x34420154  ori         $v0, $v0, 0x154
    ctx->pc = 0x16fb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)340);
    // 0x16fb80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16fb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fb84: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16fb88: 0x24c6aed0  addiu       $a2, $a2, -0x5130
    ctx->pc = 0x16fb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946512));
    // 0x16fb8c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x16fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x16fb90: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16fb94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16fb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb98: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16fb98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x16fb9c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x16fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16fba0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x16fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x16fba4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x16fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16fba8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x16fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x16fbac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16fbb0: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x16fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x16fbb4: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x16fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x16fbb8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x16fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x16fbbc: 0x8c220100  lw          $v0, 0x100($at)
    ctx->pc = 0x16fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x16fbc0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x16fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x16fbc4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16fbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fbc8: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x16fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16fbcc: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x16fbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x16fbd0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16fbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fbd4: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x16fbd8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x16fbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x16fbdc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16fbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fbe0: 0xc42002a0  lwc1        $f0, 0x2A0($at)
    ctx->pc = 0x16fbe0u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x700002A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fbe4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x16fbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x16fbe8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16fbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16fbec: 0x92630012  lbu         $v1, 0x12($s3)
    ctx->pc = 0x16fbecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x16fbf0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16fbf4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fbf8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16fbfc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16fbfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16fc00: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16fc04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16fc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16fc08: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16fc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16fc0c: 0x92620012  lbu         $v0, 0x12($s3)
    ctx->pc = 0x16fc0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x16fc10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fc14: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16fc18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fc1c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16fc20: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16fc20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16fc24: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x16fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x16fc28: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x16fc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16fc2c: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x16fc2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16fc30: 0x92620013  lbu         $v0, 0x13($s3)
    ctx->pc = 0x16fc30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19)));
    // 0x16fc34: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x16fc34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x16fc38: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 264)));
    // 0x16fc3c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16FC3Cu;
    SET_GPR_U32(ctx, 31, 0x16FC44u);
    ctx->pc = 0x16FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FC3Cu;
    // 0x16fc40: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16FC3Cu, 0x16FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FC44u;
label_16fc44:
    // 0x16fc44: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x16fc44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_16fc48:
    // 0x16fc48: 0x86670002  lh          $a3, 0x2($s3)
    ctx->pc = 0x16fc48u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x16fc4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16fc50: 0x14e3ff4f  bne         $a3, $v1, . + 4 + (-0xB1 << 2)
    ctx->pc = 0x16FC50u;
    {
        const bool branch_taken_0x16fc50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x16fc50) {
            ctx->pc = 0x16F990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f990;
        }
    }
    ctx->pc = 0x16FC58u;
label_16fc58:
    // 0x16fc58: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x16fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x16fc5c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16fc60: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16fc60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16fc64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16fc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16fc68: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x16fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x16fc6c: 0x0  nop
    ctx->pc = 0x16fc6cu;
    // NOP
label_16fc70:
    // 0x16fc70: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x16fc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16fc74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16fc74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16fc78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16fc78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16fc7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16fc7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16fc80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16fc80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16fc84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16fc84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fc88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16fc88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x16FC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC8Cu;
        // 0x16fc90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FC94u;
}

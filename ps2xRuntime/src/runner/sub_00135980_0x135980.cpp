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

// Function: sub_00135980
// Address: 0x135980 - 0x135b98
void sub_00135980_0x135980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135980_0x135980");
#endif

    switch (ctx->pc) {
        case 0x135990u: goto label_135990;
        default: break;
    }

    ctx->pc = 0x135980u;

    // 0x135980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x135984: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x135984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x135988: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x135988u;
    {
        const bool branch_taken_0x135988 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135988u;
        // 0x13598c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135988) {
            ctx->pc = 0x1359ACu;
            goto label_1359ac;
        }
    }
    ctx->pc = 0x135990u;
label_135990:
    // 0x135990: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x135990u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x135994: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x135994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x135998: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x135998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13599c: 0x0  nop
    ctx->pc = 0x13599cu;
    // NOP
    // 0x1359a0: 0x0  nop
    ctx->pc = 0x1359a0u;
    // NOP
    // 0x1359a4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1359A4u;
    {
        const bool branch_taken_0x1359a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1359a4) {
            ctx->pc = 0x135990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135990;
        }
    }
    ctx->pc = 0x1359ACu;
label_1359ac:
    // 0x1359ac: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1359acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1359b0: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1359b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1359b4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1359b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1359b8: 0x24c6a540  addiu       $a2, $a2, -0x5AC0
    ctx->pc = 0x1359b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944064));
    // 0x1359bc: 0x2463a550  addiu       $v1, $v1, -0x5AB0
    ctx->pc = 0x1359bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944080));
    // 0x1359c0: 0x27a70000  addiu       $a3, $sp, 0x0
    ctx->pc = 0x1359c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x1359c4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1359c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1359c8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1359c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1359cc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1359ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1359d0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1359d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1359d4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1359d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1359d8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1359d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x40A540u));
    // 0x1359dc: 0xd87a0000  lqc2        $vf26, 0x0($v1)
    ctx->pc = 0x1359dcu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(FAST_READ128(0x40A550u));
    // 0x1359e0: 0xd8f90000  lqc2        $vf25, 0x0($a3)
    ctx->pc = 0x1359e0u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1359e4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1359e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1359e8: 0x34230fdb  ori         $v1, $at, 0xFDB
    ctx->pc = 0x1359e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1359ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1359ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1359f0: 0x4bfacd1a  vmulz.xyzw  $vf20, $vf25, $vf26z
    ctx->pc = 0x1359f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x1359f4: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x1359f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1359f8: 0x0  nop
    ctx->pc = 0x1359f8u;
    // NOP
    // 0x1359fc: 0x48a91800  qmtc2.ni    $t1, $vf3
    ctx->pc = 0x1359fcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x135a00: 0x4bfaa500  vaddx.xyzw  $vf20, $vf20, $vf26x
    ctx->pc = 0x135a00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x135a04: 0x4bf5a17c  vftoi0.xyzw $vf21, $vf20
    ctx->pc = 0x135a04u;
    { __m128 src = ctx->vu0_vf[20]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x135a08: 0x4bf6a93c  vitof0.xyzw $vf22, $vf21
    ctx->pc = 0x135a08u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[21]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = _mm_blendv_ps(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x135a0c: 0x4bf6a52c  vsub.xyzw   $vf20, $vf20, $vf22
    ctx->pc = 0x135a0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[22]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x135a10: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x135a10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x135a14: 0x4bfaa505  vsuby.xyzw  $vf20, $vf20, $vf26y
    ctx->pc = 0x135a14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x135a18: 0x4bfaa65b  vmulw.xyzw  $vf25, $vf20, $vf26w
    ctx->pc = 0x135a18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x135a1c: 0x4be002c3  vaddw.xyzw  $vf11, $vf0, $vf0w
    ctx->pc = 0x135a1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x135a20: 0x4beac9fd  vabs.xyzw   $vf10, $vf25
    ctx->pc = 0x135a20u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[25], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x135a24: 0x4bea012c  vsub.xyzw   $vf4, $vf0, $vf10
    ctx->pc = 0x135a24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135a28: 0x4829c800  qmfc2.ni    $t1, $vf25
    ctx->pc = 0x135a28u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x135a2c: 0x4be32140  vaddx.xyzw  $vf5, $vf4, $vf3x
    ctx->pc = 0x135a2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x135a30: 0x700957fe  psrlw       $t2, $t1, 31
    ctx->pc = 0x135a30u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi32(GPR_VEC(ctx, 9), 31));
    // 0x135a34: 0x4be001ec  vsub.xyzw   $vf7, $vf0, $vf0
    ctx->pc = 0x135a34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x135a38: 0x4be528ea  vmul.xyzw   $vf3, $vf5, $vf5
    ctx->pc = 0x135a38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x135a3c: 0x4be52daa  vmul.xyzw   $vf22, $vf5, $vf5
    ctx->pc = 0x135a3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x135a40: 0x4be02abc  vadda.xyzw  $ACC, $vf0, $vf5
    ctx->pc = 0x135a40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135a44: 0x4be51b2a  vmul.xyzw   $vf12, $vf3, $vf5
    ctx->pc = 0x135a44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x135a48: 0x4bf6b5ea  vmul.xyzw   $vf23, $vf22, $vf22
    ctx->pc = 0x135a48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[22], ctx->vu0_vf[22]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x135a4c: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x135a4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x135a50: 0x4be3636a  vmul.xyzw   $vf13, $vf12, $vf3
    ctx->pc = 0x135a50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x135a54: 0x4be260bf  vmaddaw.xyzw $ACC, $vf12, $vf2w
    ctx->pc = 0x135a54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135a58: 0x4becbbaa  vmul.xyzw   $vf14, $vf23, $vf12
    ctx->pc = 0x135a58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[23], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x135a5c: 0x4be0026c  vsub.xyzw   $vf9, $vf0, $vf0
    ctx->pc = 0x135a5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x135a60: 0x4bedbbea  vmul.xyzw   $vf15, $vf23, $vf13
    ctx->pc = 0x135a60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[23], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x135a64: 0x4be268be  vmaddaz.xyzw $ACC, $vf13, $vf2z
    ctx->pc = 0x135a64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135a68: 0x4be270bd  vmadday.xyzw $ACC, $vf14, $vf2y
    ctx->pc = 0x135a68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135a6c: 0x4be27fc8  vmaddx.xyzw $vf31, $vf15, $vf2x
    ctx->pc = 0x135a6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x135a70: 0x700a5ffc  psllw       $t3, $t2, 31
    ctx->pc = 0x135a70u;
    SET_GPR_VEC(ctx, 11, _mm_slli_epi32(GPR_VEC(ctx, 10), 31));
    // 0x135a74: 0x48295800  qmfc2.ni    $t1, $vf11
    ctx->pc = 0x135a74u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x135a78: 0x4bfff8ea  vmul.xyzw   $vf3, $vf31, $vf31
    ctx->pc = 0x135a78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x135a7c: 0x4a230184  vsubx.w     $vf6, $vf0, $vf3x
    ctx->pc = 0x135a7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x135a80: 0x4a230405  vsuby.w     $vf16, $vf0, $vf3y
    ctx->pc = 0x135a80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x135a84: 0x4a230686  vsubz.w     $vf26, $vf0, $vf3z
    ctx->pc = 0x135a84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x135a88: 0x4b8603bd  .word       0x4B8603BD                   # vsqrt       $Q, $vf6w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x135a88u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x135a8c: 0x712b54c9  pxor        $t2, $t1, $t3
    ctx->pc = 0x135a8cu;
    SET_GPR_VEC(ctx, 10, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x135a90: 0x48aa5800  qmtc2.ni    $t2, $vf11
    ctx->pc = 0x135a90u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x135a94: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x135a94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x135a98: 0x4be0046c  vsub.xyzw   $vf17, $vf0, $vf0
    ctx->pc = 0x135a98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x135a9c: 0x4be004ac  vsub.xyzw   $vf18, $vf0, $vf0
    ctx->pc = 0x135a9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x135aa0: 0x4be004ec  vsub.xyzw   $vf19, $vf0, $vf0
    ctx->pc = 0x135aa0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x135aa4: 0x4a800483  vaddw.y     $vf18, $vf0, $vf0w
    ctx->pc = 0x135aa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x135aa8: 0x4a0003bf  vwaitq
    ctx->pc = 0x135aa8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x135aac: 0x4b000fa0  vaddq.x     $vf30, $vf1, $Q
    ctx->pc = 0x135aacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x135ab0: 0x4a0002ff  vnop
    ctx->pc = 0x135ab0u;
    // NOP operation, no action needed for VU0
    // 0x135ab4: 0x4a0002ff  vnop
    ctx->pc = 0x135ab4u;
    // NOP operation, no action needed for VU0
    // 0x135ab8: 0x4b9003bd  .word       0x4B9003BD                   # vsqrt       $Q, $vf16w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x135ab8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x135abc: 0x4be006ec  vsub.xyzw   $vf27, $vf0, $vf0
    ctx->pc = 0x135abcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x135ac0: 0x4be0072c  vsub.xyzw   $vf28, $vf0, $vf0
    ctx->pc = 0x135ac0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x135ac4: 0x4bebf2aa  vmul.xyzw   $vf10, $vf30, $vf11
    ctx->pc = 0x135ac4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x135ac8: 0x4bfd033d  vmr32.xyzw  $vf29, $vf0
    ctx->pc = 0x135ac8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x135acc: 0x4a9f0200  vaddx.y     $vf8, $vf0, $vf31x
    ctx->pc = 0x135accu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x135ad0: 0x4a5f0240  vaddx.z     $vf9, $vf0, $vf31x
    ctx->pc = 0x135ad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x135ad4: 0x4b1f0441  vaddy.x     $vf17, $vf0, $vf31y
    ctx->pc = 0x135ad4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x135ad8: 0x4a0003bf  vwaitq
    ctx->pc = 0x135ad8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x135adc: 0x4a800fa0  vaddq.y     $vf30, $vf1, $Q
    ctx->pc = 0x135adcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x135ae0: 0x4a0002ff  vnop
    ctx->pc = 0x135ae0u;
    // NOP operation, no action needed for VU0
    // 0x135ae4: 0x4a0002ff  vnop
    ctx->pc = 0x135ae4u;
    // NOP operation, no action needed for VU0
    // 0x135ae8: 0x4b9a03bd  .word       0x4B9A03BD                   # vsqrt       $Q, $vf26w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x135ae8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x135aec: 0x4a5f04c1  vaddy.z     $vf19, $vf0, $vf31y
    ctx->pc = 0x135aecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x135af0: 0x4a4a0200  vaddx.z     $vf8, $vf0, $vf10x
    ctx->pc = 0x135af0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x135af4: 0x4a8a0244  vsubx.y     $vf9, $vf0, $vf10x
    ctx->pc = 0x135af4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x135af8: 0x4bebf2aa  vmul.xyzw   $vf10, $vf30, $vf11
    ctx->pc = 0x135af8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x135afc: 0x4b1f06c2  vaddz.x     $vf27, $vf0, $vf31z
    ctx->pc = 0x135afcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x135b00: 0x4a9f0702  vaddz.y     $vf28, $vf0, $vf31z
    ctx->pc = 0x135b00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x135b04: 0x4a0003bf  vwaitq
    ctx->pc = 0x135b04u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x135b08: 0x4a400fa0  vaddq.z     $vf30, $vf1, $Q
    ctx->pc = 0x135b08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x135b0c: 0x4bebf7aa  vmul.xyzw   $vf30, $vf30, $vf11
    ctx->pc = 0x135b0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x135b10: 0x4a4a0445  vsuby.z     $vf17, $vf0, $vf10y
    ctx->pc = 0x135b10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x135b14: 0x4b0a04c1  vaddy.x     $vf19, $vf0, $vf10y
    ctx->pc = 0x135b14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x135b18: 0x4a9e06c2  vaddz.y     $vf27, $vf0, $vf30z
    ctx->pc = 0x135b18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[27] = _mm_blendv_ps(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x135b1c: 0x4b1e0706  vsubz.x     $vf28, $vf0, $vf30z
    ctx->pc = 0x135b1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x135b20: 0x4be789bc  vmulax.xyzw $ACC, $vf17, $vf7x
    ctx->pc = 0x135b20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135b24: 0x4be790bd  vmadday.xyzw $ACC, $vf18, $vf7y
    ctx->pc = 0x135b24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135b28: 0x4be799ca  vmaddz.xyzw $vf7, $vf19, $vf7z
    ctx->pc = 0x135b28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x135b2c: 0x4be889bc  vmulax.xyzw $ACC, $vf17, $vf8x
    ctx->pc = 0x135b2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135b30: 0x4be890bd  vmadday.xyzw $ACC, $vf18, $vf8y
    ctx->pc = 0x135b30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135b34: 0x4be89a0a  vmaddz.xyzw $vf8, $vf19, $vf8z
    ctx->pc = 0x135b34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x135b38: 0x4be989bc  vmulax.xyzw $ACC, $vf17, $vf9x
    ctx->pc = 0x135b38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135b3c: 0x4be990bd  vmadday.xyzw $ACC, $vf18, $vf9y
    ctx->pc = 0x135b3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135b40: 0x4be99a4a  vmaddz.xyzw $vf9, $vf19, $vf9z
    ctx->pc = 0x135b40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x135b44: 0x4bed89bc  vmulax.xyzw $ACC, $vf17, $vf13x
    ctx->pc = 0x135b44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135b48: 0x4bed90bd  vmadday.xyzw $ACC, $vf18, $vf13y
    ctx->pc = 0x135b48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135b4c: 0x4bed9b4a  vmaddz.xyzw $vf13, $vf19, $vf13z
    ctx->pc = 0x135b4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x135b50: 0x4be7d9bc  vmulax.xyzw $ACC, $vf27, $vf7x
    ctx->pc = 0x135b50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135b54: 0x4be7e0bd  vmadday.xyzw $ACC, $vf28, $vf7y
    ctx->pc = 0x135b54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135b58: 0x4be7e9ca  vmaddz.xyzw $vf7, $vf29, $vf7z
    ctx->pc = 0x135b58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x135b5c: 0x4be8d9bc  vmulax.xyzw $ACC, $vf27, $vf8x
    ctx->pc = 0x135b5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135b60: 0x4be8e0bd  vmadday.xyzw $ACC, $vf28, $vf8y
    ctx->pc = 0x135b60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135b64: 0x4be8ea0a  vmaddz.xyzw $vf8, $vf29, $vf8z
    ctx->pc = 0x135b64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x135b68: 0x4be9d9bc  vmulax.xyzw $ACC, $vf27, $vf9x
    ctx->pc = 0x135b68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135b6c: 0x4be9e0bd  vmadday.xyzw $ACC, $vf28, $vf9y
    ctx->pc = 0x135b6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135b70: 0x4be9ea4a  vmaddz.xyzw $vf9, $vf29, $vf9z
    ctx->pc = 0x135b70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x135b74: 0x4bedd9bc  vmulax.xyzw $ACC, $vf27, $vf13x
    ctx->pc = 0x135b74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135b78: 0x4bede0bd  vmadday.xyzw $ACC, $vf28, $vf13y
    ctx->pc = 0x135b78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135b7c: 0x4bedeb4a  vmaddz.xyzw $vf13, $vf29, $vf13z
    ctx->pc = 0x135b7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x135b80: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x135b80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x135b84: 0xf8880010  sqc2        $vf8, 0x10($a0)
    ctx->pc = 0x135b84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x135b88: 0xf8890020  sqc2        $vf9, 0x20($a0)
    ctx->pc = 0x135b88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x135b8c: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x135b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x135b90: 0x3e00008  jr          $ra
    ctx->pc = 0x135B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B90u;
        // 0x135b94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135B98u;
}

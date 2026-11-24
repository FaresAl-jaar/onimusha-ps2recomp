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

// Function: sub_00143450
// Address: 0x143450 - 0x143588
void sub_00143450_0x143450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143450_0x143450");
#endif

    ctx->pc = 0x143450u;

    // 0x143450: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x143450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143454: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x143454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143458: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x143458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14345c: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x14345cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x143460: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x143460u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x143464: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x143464u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x143468: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x143468u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x14346c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x14346cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x143470: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x143470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143474: 0x0  nop
    ctx->pc = 0x143474u;
    // NOP
    // 0x143478: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x143478u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14347c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x14347Cu;
    {
        const bool branch_taken_0x14347c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x143480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14347Cu;
        // 0x143480: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14347c) {
            ctx->pc = 0x1434A0u;
            goto label_1434a0;
        }
    }
    ctx->pc = 0x143484u;
    // 0x143484: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143484u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143488: 0x0  nop
    ctx->pc = 0x143488u;
    // NOP
    // 0x14348c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x14348cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x143490: 0x0  nop
    ctx->pc = 0x143490u;
    // NOP
    // 0x143494: 0x0  nop
    ctx->pc = 0x143494u;
    // NOP
    // 0x143498: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x143498u;
    {
        const bool branch_taken_0x143498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143498) {
            ctx->pc = 0x1434A8u;
            goto label_1434a8;
        }
    }
    ctx->pc = 0x1434A0u;
label_1434a0:
    // 0x1434a0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1434a0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1434a4: 0x0  nop
    ctx->pc = 0x1434a4u;
    // NOP
label_1434a8:
    // 0x1434a8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1434a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1434ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1434acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1434b0: 0x0  nop
    ctx->pc = 0x1434b0u;
    // NOP
    // 0x1434b4: 0x48a34800  qmtc2.ni    $v1, $vf9
    ctx->pc = 0x1434b4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1434b8: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1434b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1434bc: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x1434bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1434c0: 0x4a24212c  vsub.w      $vf4, $vf4, $vf4
    ctx->pc = 0x1434c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1434c4: 0x4b010141  vaddy.x     $vf5, $vf0, $vf1y
    ctx->pc = 0x1434c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1434c8: 0x4b010181  vaddy.x     $vf6, $vf0, $vf1y
    ctx->pc = 0x1434c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1434cc: 0x4b0101c2  vaddz.x     $vf7, $vf0, $vf1z
    ctx->pc = 0x1434ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1434d0: 0x4b010202  vaddz.x     $vf8, $vf0, $vf1z
    ctx->pc = 0x1434d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1434d4: 0x4a810140  vaddx.y     $vf5, $vf0, $vf1x
    ctx->pc = 0x1434d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1434d8: 0x4a810181  vaddy.y     $vf6, $vf0, $vf1y
    ctx->pc = 0x1434d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1434dc: 0x4a8101c3  vaddw.y     $vf7, $vf0, $vf1w
    ctx->pc = 0x1434dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1434e0: 0x4a810202  vaddz.y     $vf8, $vf0, $vf1z
    ctx->pc = 0x1434e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1434e4: 0x4a410140  vaddx.z     $vf5, $vf0, $vf1x
    ctx->pc = 0x1434e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1434e8: 0x4a410182  vaddz.z     $vf6, $vf0, $vf1z
    ctx->pc = 0x1434e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1434ec: 0x4a4101c3  vaddw.z     $vf7, $vf0, $vf1w
    ctx->pc = 0x1434ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1434f0: 0x4a410201  vaddy.z     $vf8, $vf0, $vf1y
    ctx->pc = 0x1434f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1434f4: 0x4bc62abe  vmula.xyz   $ACC, $vf5, $vf6
    ctx->pc = 0x1434f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[6]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1434f8: 0x4b8838a9  vmadd.xy    $vf2, $vf7, $vf8
    ctx->pc = 0x1434f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1434fc: 0x4a4838ad  vmsub.z     $vf2, $vf7, $vf8
    ctx->pc = 0x1434fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x143500: 0x4b010140  vaddx.x     $vf5, $vf0, $vf1x
    ctx->pc = 0x143500u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x143504: 0x4a410141  vaddy.z     $vf5, $vf0, $vf1y
    ctx->pc = 0x143504u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x143508: 0x4a810180  vaddx.y     $vf6, $vf0, $vf1x
    ctx->pc = 0x143508u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x14350c: 0x4b0101c3  vaddw.x     $vf7, $vf0, $vf1w
    ctx->pc = 0x14350cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x143510: 0x4a8101c2  vaddz.y     $vf7, $vf0, $vf1z
    ctx->pc = 0x143510u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x143514: 0x4a410200  vaddx.z     $vf8, $vf0, $vf1x
    ctx->pc = 0x143514u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x143518: 0x4bc62abe  vmula.xyz   $ACC, $vf5, $vf6
    ctx->pc = 0x143518u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[6]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x14351c: 0x4ac838e9  vmadd.yz    $vf3, $vf7, $vf8
    ctx->pc = 0x14351cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x143520: 0x4b0838ed  vmsub.x     $vf3, $vf7, $vf8
    ctx->pc = 0x143520u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x143524: 0x4a810141  vaddy.y     $vf5, $vf0, $vf1y
    ctx->pc = 0x143524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x143528: 0x4b010182  vaddz.x     $vf6, $vf0, $vf1z
    ctx->pc = 0x143528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x14352c: 0x4a810182  vaddz.y     $vf6, $vf0, $vf1z
    ctx->pc = 0x14352cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x143530: 0x4a410181  vaddy.z     $vf6, $vf0, $vf1y
    ctx->pc = 0x143530u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x143534: 0x4a8101c3  vaddw.y     $vf7, $vf0, $vf1w
    ctx->pc = 0x143534u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x143538: 0x4a4101c0  vaddx.z     $vf7, $vf0, $vf1x
    ctx->pc = 0x143538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x14353c: 0x4b010201  vaddy.x     $vf8, $vf0, $vf1y
    ctx->pc = 0x14353cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x143540: 0x4a810200  vaddx.y     $vf8, $vf0, $vf1x
    ctx->pc = 0x143540u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x143544: 0x4bc62abe  vmula.xyz   $ACC, $vf5, $vf6
    ctx->pc = 0x143544u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[6]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x143548: 0x4b483929  vmadd.xz    $vf4, $vf7, $vf8
    ctx->pc = 0x143548u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14354c: 0x4a88392d  vmsub.y     $vf4, $vf7, $vf8
    ctx->pc = 0x14354cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[8]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x143550: 0x4bc91098  vmulx.xyz   $vf2, $vf2, $vf9x
    ctx->pc = 0x143550u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x143554: 0x4bc918d8  vmulx.xyz   $vf3, $vf3, $vf9x
    ctx->pc = 0x143554u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x143558: 0x4bc92118  vmulx.xyz   $vf4, $vf4, $vf9x
    ctx->pc = 0x143558u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14355c: 0x4b0200ac  vsub.x      $vf2, $vf0, $vf2
    ctx->pc = 0x14355cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x143560: 0x4a8300ec  vsub.y      $vf3, $vf0, $vf3
    ctx->pc = 0x143560u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x143564: 0x4a44012c  vsub.z      $vf4, $vf0, $vf4
    ctx->pc = 0x143564u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x143568: 0x4b001083  vaddw.x     $vf2, $vf2, $vf0w
    ctx->pc = 0x143568u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x14356c: 0x4a8018c3  vaddw.y     $vf3, $vf3, $vf0w
    ctx->pc = 0x14356cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x143570: 0x4a402103  vaddw.z     $vf4, $vf4, $vf0w
    ctx->pc = 0x143570u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x143574: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x143574u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x143578: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x143578u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14357c: 0xf8830010  sqc2        $vf3, 0x10($a0)
    ctx->pc = 0x14357cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x143580: 0x3e00008  jr          $ra
    ctx->pc = 0x143580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143580u;
        // 0x143584: 0xf8840020  sqc2        $vf4, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143588u;
}

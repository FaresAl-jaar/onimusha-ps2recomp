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

// Function: sub_001DA2D0
// Address: 0x1da2d0 - 0x1da35c
void sub_001DA2D0_0x1da2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA2D0_0x1da2d0");
#endif

    ctx->pc = 0x1da2d0u;

    // 0x1da2d0: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1da2d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1da2d4: 0xd8c70000  lqc2        $vf7, 0x0($a2)
    ctx->pc = 0x1da2d4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da2d8: 0x44016800  mfc1        $at, $f13
    ctx->pc = 0x1da2d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1da2dc: 0x48a14800  qmtc2.ni    $at, $vf9
    ctx->pc = 0x1da2dcu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1da2e0: 0x4bc53aec  vsub.xyz    $vf11, $vf7, $vf5
    ctx->pc = 0x1da2e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1da2e4: 0x4bcb5b2a  vmul.xyz    $vf12, $vf11, $vf11
    ctx->pc = 0x1da2e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da2e8: 0x4b0c6301  vaddy.x     $vf12, $vf12, $vf12y
    ctx->pc = 0x1da2e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da2ec: 0x4b0c6302  vaddz.x     $vf12, $vf12, $vf12z
    ctx->pc = 0x1da2ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da2f0: 0x4a0c4bbe  vrsqrt      $Q, $vf9x, $vf12x
    ctx->pc = 0x1da2f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1da2f4: 0xd8a60000  lqc2        $vf6, 0x0($a1)
    ctx->pc = 0x1da2f4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da2f8: 0x44016000  mfc1        $at, $f12
    ctx->pc = 0x1da2f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1da2fc: 0x48a14000  qmtc2.ni    $at, $vf8
    ctx->pc = 0x1da2fcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1da300: 0x44017000  mfc1        $at, $f14
    ctx->pc = 0x1da300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[14], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1da304: 0x48a15000  qmtc2.ni    $at, $vf10
    ctx->pc = 0x1da304u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1da308: 0x4b0a422a  vmul.x      $vf8, $vf8, $vf10
    ctx->pc = 0x1da308u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1da30c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1da30cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1da310: 0x4bc05b1c  vmulq.xyz   $vf12, $vf11, $Q
    ctx->pc = 0x1da310u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da314: 0x4bcc31a8  vadd.xyz    $vf6, $vf6, $vf12
    ctx->pc = 0x1da314u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1da318: 0x4bc6332a  vmul.xyz    $vf12, $vf6, $vf6
    ctx->pc = 0x1da318u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da31c: 0x4b0c6301  vaddy.x     $vf12, $vf12, $vf12y
    ctx->pc = 0x1da31cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da320: 0x4b0c6302  vaddz.x     $vf12, $vf12, $vf12z
    ctx->pc = 0x1da320u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da324: 0x4a6c03be  vrsqrt      $Q, $vf0w, $vf12x
    ctx->pc = 0x1da324u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1da328: 0x4a0003bf  vwaitq
    ctx->pc = 0x1da328u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1da32c: 0x4bc0319c  vmulq.xyz   $vf6, $vf6, $Q
    ctx->pc = 0x1da32cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1da330: 0x4bc83318  vmulx.xyz   $vf12, $vf6, $vf8x
    ctx->pc = 0x1da330u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da334: 0x4bcc2968  vadd.xyz    $vf5, $vf5, $vf12
    ctx->pc = 0x1da334u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1da338: 0x4bc53b2c  vsub.xyz    $vf12, $vf7, $vf5
    ctx->pc = 0x1da338u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da33c: 0x4bcc632a  vmul.xyz    $vf12, $vf12, $vf12
    ctx->pc = 0x1da33cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da340: 0x4b0c6301  vaddy.x     $vf12, $vf12, $vf12y
    ctx->pc = 0x1da340u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da344: 0x4b0c6302  vaddz.x     $vf12, $vf12, $vf12z
    ctx->pc = 0x1da344u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da348: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1da348u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1da34c: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x1da34cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1da350: 0x48216000  qmfc2.ni    $at, $vf12
    ctx->pc = 0x1da350u;
    SET_GPR_VEC(ctx, 1, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1da354: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA354u;
        // 0x1da358: 0x44810000  mtc1        $at, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA35Cu;
}

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

// Function: sub_001DA3E0
// Address: 0x1da3e0 - 0x1da440
void sub_001DA3E0_0x1da3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA3E0_0x1da3e0");
#endif

    ctx->pc = 0x1da3e0u;

    // 0x1da3e0: 0xd8ae0000  lqc2        $vf14, 0x0($a1)
    ctx->pc = 0x1da3e0u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da3e4: 0x4bee79bc  vmulax.xyzw $ACC, $vf15, $vf14x
    ctx->pc = 0x1da3e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1da3e8: 0x4bee80bd  vmadday.xyzw $ACC, $vf16, $vf14y
    ctx->pc = 0x1da3e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1da3ec: 0x4bee88be  vmaddaz.xyzw $ACC, $vf17, $vf14z
    ctx->pc = 0x1da3ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1da3f0: 0x4be0938b  vmaddw.xyzw $vf14, $vf18, $vf0w
    ctx->pc = 0x1da3f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1da3f4: 0x4bee03bc  vdiv        $Q, $vf0w, $vf14w
    ctx->pc = 0x1da3f4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1da3f8: 0x44016000  mfc1        $at, $f12
    ctx->pc = 0x1da3f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1da3fc: 0x70010fc9  prot3w      $at, $at
    ctx->pc = 0x1da3fcu;
    SET_GPR_VEC(ctx, 1, _mm_shuffle_epi32(GPR_VEC(ctx, 1), _MM_SHUFFLE(0,3,2,1)));
    // 0x1da400: 0x48a13000  qmtc2.ni    $at, $vf6
    ctx->pc = 0x1da400u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1da404: 0x4a66a8be  vmaddaz.zw  $ACC, $vf21, $vf6z
    ctx->pc = 0x1da404u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, 0, 0))); }
    // 0x1da408: 0x4a60934b  vmaddw.zw   $vf13, $vf18, $vf0w
    ctx->pc = 0x1da408u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1da40c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1da40cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1da410: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1da410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1da414: 0x4a0002ff  vnop
    ctx->pc = 0x1da414u;
    // NOP operation, no action needed for VU0
    // 0x1da418: 0x4a0002ff  vnop
    ctx->pc = 0x1da418u;
    // NOP operation, no action needed for VU0
    // 0x1da41c: 0x4bed03bc  vdiv        $Q, $vf0w, $vf13w
    ctx->pc = 0x1da41cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1da420: 0x4bc57398  vmulx.xyz   $vf14, $vf14, $vf5x
    ctx->pc = 0x1da420u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1da424: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1da424u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1da428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da42c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1da42cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1da430: 0x4a406b9c  vmulq.z     $vf14, $vf13, $Q
    ctx->pc = 0x1da430u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1da434: 0x4bee717d  vftoi4.xyzw $vf14, $vf14
    ctx->pc = 0x1da434u;
    { __m128 src = ctx->vu0_vf[14]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1da438: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA438u;
        // 0x1da43c: 0xf88e0000  sqc2        $vf14, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[14]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA440u;
}

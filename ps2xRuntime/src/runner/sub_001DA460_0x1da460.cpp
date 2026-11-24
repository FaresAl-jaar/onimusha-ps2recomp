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

// Function: sub_001DA460
// Address: 0x1da460 - 0x1da4a4
void sub_001DA460_0x1da460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA460_0x1da460");
#endif

    ctx->pc = 0x1da460u;

    // 0x1da460: 0xd8ca0000  lqc2        $vf10, 0x0($a2)
    ctx->pc = 0x1da460u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da464: 0x4bea79bc  vmulax.xyzw $ACC, $vf15, $vf10x
    ctx->pc = 0x1da464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1da468: 0x4bea80bd  vmadday.xyzw $ACC, $vf16, $vf10y
    ctx->pc = 0x1da468u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1da46c: 0x4bea88be  vmaddaz.xyzw $ACC, $vf17, $vf10z
    ctx->pc = 0x1da46cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1da470: 0x4be0928b  vmaddw.xyzw $vf10, $vf18, $vf0w
    ctx->pc = 0x1da470u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1da474: 0x4bea03bc  vdiv        $Q, $vf0w, $vf10w
    ctx->pc = 0x1da474u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1da478: 0xd8eb0000  lqc2        $vf11, 0x0($a3)
    ctx->pc = 0x1da478u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1da47c: 0x4a4002c3  vaddw.z     $vf11, $vf0, $vf0w
    ctx->pc = 0x1da47cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1da480: 0x4a0003bf  vwaitq
    ctx->pc = 0x1da480u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1da484: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1da484u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1da488: 0x4bc55298  vmulx.xyz   $vf10, $vf10, $vf5x
    ctx->pc = 0x1da488u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1da48c: 0x4bea517d  vftoi4.xyzw $vf10, $vf10
    ctx->pc = 0x1da48cu;
    { __m128 src = ctx->vu0_vf[10]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1da490: 0x4bc55ad8  vmulx.xyz   $vf11, $vf11, $vf5x
    ctx->pc = 0x1da490u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1da494: 0xf88a0000  sqc2        $vf10, 0x0($a0)
    ctx->pc = 0x1da494u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1da498: 0xf8ab0000  sqc2        $vf11, 0x0($a1)
    ctx->pc = 0x1da498u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x1da49c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA4A4u;
}

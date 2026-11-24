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

// Function: sub_001DA0F0
// Address: 0x1da0f0 - 0x1da14c
void sub_001DA0F0_0x1da0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA0F0_0x1da0f0");
#endif

    ctx->pc = 0x1da0f0u;

    // 0x1da0f0: 0x78ab0000  lq          $t3, 0x0($a1)
    ctx->pc = 0x1da0f0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da0f4: 0x71074b89  pcpyld      $t1, $t0, $a3
    ctx->pc = 0x1da0f4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x1da0f8: 0x70094fa9  pexcw       $t1, $t1
    ctx->pc = 0x1da0f8u;
    SET_GPR_VEC(ctx, 9, _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(1,0,3,2)));
    // 0x1da0fc: 0x340a0000  ori         $t2, $zero, 0x0
    ctx->pc = 0x1da0fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x1da100: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1da100u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1da104: 0x354a0010  ori         $t2, $t2, 0x10
    ctx->pc = 0x1da104u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16);
    // 0x1da108: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1da108u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1da10c: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1da10cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1da110: 0x354a0010  ori         $t2, $t2, 0x10
    ctx->pc = 0x1da110u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16);
    // 0x1da114: 0xd8cb0000  lqc2        $vf11, 0x0($a2)
    ctx->pc = 0x1da114u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da118: 0x716958e8  pminw       $t3, $t3, $t1
    ctx->pc = 0x1da118u;
    SET_GPR_VEC(ctx, 11, PS2_PMINW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 9)));
    // 0x1da11c: 0x716a58c8  pmaxw       $t3, $t3, $t2
    ctx->pc = 0x1da11cu;
    SET_GPR_VEC(ctx, 11, PS2_PMAXW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x1da120: 0x48ab5000  qmtc2.ni    $t3, $vf10
    ctx->pc = 0x1da120u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x1da124: 0x4b8a513d  vitof4.xy   $vf10, $vf10
    ctx->pc = 0x1da124u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[10]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.0625f)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1da128: 0x4b8b52aa  vmul.xy     $vf10, $vf10, $vf11
    ctx->pc = 0x1da128u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1da12c: 0xd8ac0000  lqc2        $vf12, 0x0($a1)
    ctx->pc = 0x1da12cu;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da130: 0x4a400283  vaddw.z     $vf10, $vf0, $vf0w
    ctx->pc = 0x1da130u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1da134: 0x4a2c613c  vitof0.w    $vf12, $vf12
    ctx->pc = 0x1da134u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[12]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da138: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x1da138u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1da13c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1da13cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1da140: 0x4bc0529c  vmulq.xyz   $vf10, $vf10, $Q
    ctx->pc = 0x1da140u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1da144: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA144u;
        // 0x1da148: 0xf88a0000  sqc2        $vf10, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA14Cu;
}

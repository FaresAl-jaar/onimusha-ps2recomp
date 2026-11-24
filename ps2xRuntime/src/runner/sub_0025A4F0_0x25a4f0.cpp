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

// Function: sub_0025A4F0
// Address: 0x25a4f0 - 0x25a530
void sub_0025A4F0_0x25a4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A4F0_0x25a4f0");
#endif

    ctx->pc = 0x25a4f0u;

    // 0x25a4f0: 0xd8a60000  lqc2        $vf6, 0x0($a1)
    ctx->pc = 0x25a4f0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25a4f4: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x25a4f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25a4f8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x25a4f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25a4fc: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x25a4fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25a500: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x25a500u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x25a504: 0x4a0003bf  vwaitq
    ctx->pc = 0x25a504u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25a508: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x25a508u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25a50c: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x25a50cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x25a510: 0x4a0003bf  vwaitq
    ctx->pc = 0x25a510u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25a514: 0x4bc0319c  vmulq.xyz   $vf6, $vf6, $Q
    ctx->pc = 0x25a514u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25a518: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x25a518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x25a51c: 0x48a83800  qmtc2.ni    $t0, $vf7
    ctx->pc = 0x25a51cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x25a520: 0x4bc73198  vmulx.xyz   $vf6, $vf6, $vf7x
    ctx->pc = 0x25a520u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25a524: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x25a524u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25a528: 0x3e00008  jr          $ra
    ctx->pc = 0x25A528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A530u;
}

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

// Function: sub_0025A3F0
// Address: 0x25a3f0 - 0x25a418
void sub_0025A3F0_0x25a3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A3F0_0x25a3f0");
#endif

    ctx->pc = 0x25a3f0u;

    // 0x25a3f0: 0xd8860000  lqc2        $vf6, 0x0($a0)
    ctx->pc = 0x25a3f0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25a3f4: 0x4b46316a  vmul.xz     $vf5, $vf6, $vf6
    ctx->pc = 0x25a3f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25a3f8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x25a3f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25a3fc: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x25a3fcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x25a400: 0x4a0003bf  vwaitq
    ctx->pc = 0x25a400u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25a404: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x25a404u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25a408: 0x48282800  qmfc2.ni    $t0, $vf5
    ctx->pc = 0x25a408u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x25a40c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x25a40cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a410: 0x3e00008  jr          $ra
    ctx->pc = 0x25A410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A418u;
}

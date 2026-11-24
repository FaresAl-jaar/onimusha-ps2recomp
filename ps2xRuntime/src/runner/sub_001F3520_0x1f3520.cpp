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

// Function: sub_001F3520
// Address: 0x1f3520 - 0x1f3540
void sub_001F3520_0x1f3520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3520_0x1f3520");
#endif

    ctx->pc = 0x1f3520u;

    // 0x1f3520: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1f3520u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f3524: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1f3524u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1f3528: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1f3528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1f352c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1f352cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1f3530: 0x48282800  qmfc2.ni    $t0, $vf5
    ctx->pc = 0x1f3530u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1f3534: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1f3534u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3538: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3540u;
}

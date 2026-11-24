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

// Function: sub_00279CE0
// Address: 0x279ce0 - 0x279d08
void sub_00279CE0_0x279ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279CE0_0x279ce0");
#endif

    ctx->pc = 0x279ce0u;

    // 0x279ce0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x279ce0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x279ce4: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x279ce4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x279ce8: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x279ce8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x279cec: 0x4bc6316a  vmul.xyz    $vf5, $vf6, $vf6
    ctx->pc = 0x279cecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x279cf0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x279cf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x279cf4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x279cf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x279cf8: 0x48282800  qmfc2.ni    $t0, $vf5
    ctx->pc = 0x279cf8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x279cfc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x279cfcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279d00: 0x3e00008  jr          $ra
    ctx->pc = 0x279D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279D08u;
}

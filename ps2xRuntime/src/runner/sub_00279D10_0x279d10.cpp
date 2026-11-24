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

// Function: sub_00279D10
// Address: 0x279d10 - 0x279d38
void sub_00279D10_0x279d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279D10_0x279d10");
#endif

    ctx->pc = 0x279d10u;

    // 0x279d10: 0xd8dc0000  lqc2        $vf28, 0x0($a2)
    ctx->pc = 0x279d10u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x279d14: 0x4afc03bc  vdiv        $Q, $vf0w, $vf28y
    ctx->pc = 0x279d14u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x279d18: 0x4a3c0718  vmulx.w     $vf28, $vf0, $vf28x
    ctx->pc = 0x279d18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x279d1c: 0x4a3ce71b  vmulw.w     $vf28, $vf28, $vf28w
    ctx->pc = 0x279d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x279d20: 0xd89a0000  lqc2        $vf26, 0x0($a0)
    ctx->pc = 0x279d20u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x279d24: 0xd8bb0000  lqc2        $vf27, 0x0($a1)
    ctx->pc = 0x279d24u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x279d28: 0x4bfadf6c  vsub.xyzw   $vf29, $vf27, $vf26
    ctx->pc = 0x279d28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x279d2c: 0x4a0003bf  vwaitq
    ctx->pc = 0x279d2cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x279d30: 0x3e00008  jr          $ra
    ctx->pc = 0x279D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D30u;
        // 0x279d34: 0x4be0ef5c  vmulq.xyzw  $vf29, $vf29, $Q (Delay Slot)
        { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279D38u;
}

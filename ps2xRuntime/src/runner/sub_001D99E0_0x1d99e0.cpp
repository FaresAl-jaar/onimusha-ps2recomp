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

// Function: sub_001D99E0
// Address: 0x1d99e0 - 0x1d99f8
void sub_001D99E0_0x1d99e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D99E0_0x1d99e0");
#endif

    ctx->pc = 0x1d99e0u;

    // 0x1d99e0: 0xd8ac0000  lqc2        $vf12, 0x0($a1)
    ctx->pc = 0x1d99e0u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d99e4: 0xd8cd0000  lqc2        $vf13, 0x0($a2)
    ctx->pc = 0x1d99e4u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d99e8: 0x4bcd62fe  vopmula.xyz $ACC, $vf12, $vf13
    ctx->pc = 0x1d99e8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1d99ec: 0x4bcc6b2e  vopmsub.xyz $vf12, $vf13, $vf12
    ctx->pc = 0x1d99ecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1d99f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D99F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D99F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99F0u;
        // 0x1d99f4: 0xf88c0000  sqc2        $vf12, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D99F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D99F8u;
}

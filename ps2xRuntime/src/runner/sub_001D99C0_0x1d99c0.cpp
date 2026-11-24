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

// Function: sub_001D99C0
// Address: 0x1d99c0 - 0x1d99e0
void sub_001D99C0_0x1d99c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D99C0_0x1d99c0");
#endif

    ctx->pc = 0x1d99c0u;

    // 0x1d99c0: 0xd88c0000  lqc2        $vf12, 0x0($a0)
    ctx->pc = 0x1d99c0u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d99c4: 0xd8ad0000  lqc2        $vf13, 0x0($a1)
    ctx->pc = 0x1d99c4u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d99c8: 0x4b4c6b6c  vsub.xz     $vf13, $vf13, $vf12
    ctx->pc = 0x1d99c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1d99cc: 0x4b4d6b6a  vmul.xz     $vf13, $vf13, $vf13
    ctx->pc = 0x1d99ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1d99d0: 0x4b0d6b42  vaddz.x     $vf13, $vf13, $vf13z
    ctx->pc = 0x1d99d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1d99d4: 0x48216800  qmfc2.ni    $at, $vf13
    ctx->pc = 0x1d99d4u;
    SET_GPR_VEC(ctx, 1, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x1d99d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D99D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99D8u;
        // 0x1d99dc: 0x44810000  mtc1        $at, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D99D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D99E0u;
}

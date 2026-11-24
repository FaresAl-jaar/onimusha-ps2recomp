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

// Function: sub_001D9940
// Address: 0x1d9940 - 0x1d9950
void sub_001D9940_0x1d9940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9940_0x1d9940");
#endif

    ctx->pc = 0x1d9940u;

    // 0x1d9940: 0xd8ac0000  lqc2        $vf12, 0x0($a1)
    ctx->pc = 0x1d9940u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d9944: 0x4bec613c  vitof0.xyzw $vf12, $vf12
    ctx->pc = 0x1d9944u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[12]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1d9948: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9948u;
        // 0x1d994c: 0xf88c0000  sqc2        $vf12, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9950u;
}

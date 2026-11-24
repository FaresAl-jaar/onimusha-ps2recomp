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

// Function: sub_001D9A60
// Address: 0x1d9a60 - 0x1d9a78
void sub_001D9A60_0x1d9a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9A60_0x1d9a60");
#endif

    ctx->pc = 0x1d9a60u;

    // 0x1d9a60: 0xd8aa0000  lqc2        $vf10, 0x0($a1)
    ctx->pc = 0x1d9a60u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d9a64: 0x44016000  mfc1        $at, $f12
    ctx->pc = 0x1d9a64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1d9a68: 0x48a15800  qmtc2.ni    $at, $vf11
    ctx->pc = 0x1d9a68u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1d9a6c: 0x4beb5298  vmulx.xyzw  $vf10, $vf10, $vf11x
    ctx->pc = 0x1d9a6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1d9a70: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A70u;
        // 0x1d9a74: 0xf88a0000  sqc2        $vf10, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9A78u;
}

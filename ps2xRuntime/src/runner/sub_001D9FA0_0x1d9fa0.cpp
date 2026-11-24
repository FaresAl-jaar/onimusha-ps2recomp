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

// Function: sub_001D9FA0
// Address: 0x1d9fa0 - 0x1d9fc4
void sub_001D9FA0_0x1d9fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9FA0_0x1d9fa0");
#endif

    ctx->pc = 0x1d9fa0u;

    // 0x1d9fa0: 0xd8aa0000  lqc2        $vf10, 0x0($a1)
    ctx->pc = 0x1d9fa0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d9fa4: 0xd8cb0000  lqc2        $vf11, 0x0($a2)
    ctx->pc = 0x1d9fa4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d9fa8: 0x4bca5aec  vsub.xyz    $vf11, $vf11, $vf10
    ctx->pc = 0x1d9fa8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1d9fac: 0x44016000  mfc1        $at, $f12
    ctx->pc = 0x1d9facu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1d9fb0: 0x48a16000  qmtc2.ni    $at, $vf12
    ctx->pc = 0x1d9fb0u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1d9fb4: 0x4bcc5ad8  vmulx.xyz   $vf11, $vf11, $vf12x
    ctx->pc = 0x1d9fb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1d9fb8: 0x4bca5ae8  vadd.xyz    $vf11, $vf11, $vf10
    ctx->pc = 0x1d9fb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1d9fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9FBCu;
        // 0x1d9fc0: 0xf88b0000  sqc2        $vf11, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[11]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9FC4u;
}

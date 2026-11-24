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

// Function: sub_001D9B20
// Address: 0x1d9b20 - 0x1d9b68
void sub_001D9B20_0x1d9b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9B20_0x1d9b20");
#endif

    ctx->pc = 0x1d9b20u;

    // 0x1d9b20: 0xd8aa0000  lqc2        $vf10, 0x0($a1)
    ctx->pc = 0x1d9b20u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d9b24: 0x4bca52ea  vmul.xyz    $vf11, $vf10, $vf10
    ctx->pc = 0x1d9b24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1d9b28: 0x4b0b5ac1  vaddy.x     $vf11, $vf11, $vf11y
    ctx->pc = 0x1d9b28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1d9b2c: 0x4b0b5ac2  vaddz.x     $vf11, $vf11, $vf11z
    ctx->pc = 0x1d9b2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1d9b30: 0x4a0b03bd  .word       0x4A0B03BD                   # vsqrt       $Q, $vf11x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1d9b30u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1d9b34: 0x44016000  mfc1        $at, $f12
    ctx->pc = 0x1d9b34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1d9b38: 0x48a16000  qmtc2.ni    $at, $vf12
    ctx->pc = 0x1d9b38u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1d9b3c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1d9b3cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1d9b40: 0x4b0002e0  vaddq.x     $vf11, $vf0, $Q
    ctx->pc = 0x1d9b40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1d9b44: 0x4a0002ff  vnop
    ctx->pc = 0x1d9b44u;
    // NOP operation, no action needed for VU0
    // 0x1d9b48: 0x4a0002ff  vnop
    ctx->pc = 0x1d9b48u;
    // NOP operation, no action needed for VU0
    // 0x1d9b4c: 0x4841b000  cfc2.ni     $at, $vi22
    ctx->pc = 0x1d9b4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1d9b50: 0x4a0b63bc  vdiv        $Q, $vf12x, $vf11x
    ctx->pc = 0x1d9b50u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1d9b54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d9b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9b58: 0x4a0003bf  vwaitq
    ctx->pc = 0x1d9b58u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1d9b5c: 0x4bc0529c  vmulq.xyz   $vf10, $vf10, $Q
    ctx->pc = 0x1d9b5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1d9b60: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B60u;
        // 0x1d9b64: 0xf88a0000  sqc2        $vf10, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9B68u;
}

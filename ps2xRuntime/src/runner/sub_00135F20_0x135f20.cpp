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

// Function: sub_00135F20
// Address: 0x135f20 - 0x135f78
void sub_00135F20_0x135f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135F20_0x135f20");
#endif

    ctx->pc = 0x135f20u;

    // 0x135f20: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x135f20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x135f24: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x135f24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x135f28: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x135f28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x135f2c: 0x4a0002ff  vnop
    ctx->pc = 0x135f2cu;
    // NOP operation, no action needed for VU0
    // 0x135f30: 0x4a0002ff  vnop
    ctx->pc = 0x135f30u;
    // NOP operation, no action needed for VU0
    // 0x135f34: 0x4a0002ff  vnop
    ctx->pc = 0x135f34u;
    // NOP operation, no action needed for VU0
    // 0x135f38: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x135f38u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135f3c: 0x4a0002ff  vnop
    ctx->pc = 0x135f3cu;
    // NOP operation, no action needed for VU0
    // 0x135f40: 0x4a0002ff  vnop
    ctx->pc = 0x135f40u;
    // NOP operation, no action needed for VU0
    // 0x135f44: 0x4a0002ff  vnop
    ctx->pc = 0x135f44u;
    // NOP operation, no action needed for VU0
    // 0x135f48: 0x4bc322fe  vopmula.xyz $ACC, $vf4, $vf3
    ctx->pc = 0x135f48u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x135f4c: 0x4be422bd  vmadda.xyzw $ACC, $vf4, $vf4
    ctx->pc = 0x135f4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135f50: 0x4be319a9  vmadd.xyzw  $vf6, $vf3, $vf3
    ctx->pc = 0x135f50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x135f54: 0x4a0002ff  vnop
    ctx->pc = 0x135f54u;
    // NOP operation, no action needed for VU0
    // 0x135f58: 0x4a0002ff  vnop
    ctx->pc = 0x135f58u;
    // NOP operation, no action needed for VU0
    // 0x135f5c: 0x4a0002ff  vnop
    ctx->pc = 0x135f5cu;
    // NOP operation, no action needed for VU0
    // 0x135f60: 0x4a0603bd  .word       0x4A0603BD                   # vsqrt       $Q, $vf6x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x135f60u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x135f64: 0x4a0003bf  vwaitq
    ctx->pc = 0x135f64u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x135f68: 0x4841b000  cfc2.ni     $at, $vi22
    ctx->pc = 0x135f68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x135f6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x135f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135f70: 0x3e00008  jr          $ra
    ctx->pc = 0x135F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135F78u;
}

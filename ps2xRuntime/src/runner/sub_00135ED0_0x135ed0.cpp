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

// Function: sub_00135ED0
// Address: 0x135ed0 - 0x135f14
void sub_00135ED0_0x135ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135ED0_0x135ed0");
#endif

    ctx->pc = 0x135ed0u;

    // 0x135ed0: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x135ed0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x135ed4: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x135ed4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135ed8: 0x4a0002ff  vnop
    ctx->pc = 0x135ed8u;
    // NOP operation, no action needed for VU0
    // 0x135edc: 0x4a0002ff  vnop
    ctx->pc = 0x135edcu;
    // NOP operation, no action needed for VU0
    // 0x135ee0: 0x4a0002ff  vnop
    ctx->pc = 0x135ee0u;
    // NOP operation, no action needed for VU0
    // 0x135ee4: 0x4bc322fe  vopmula.xyz $ACC, $vf4, $vf3
    ctx->pc = 0x135ee4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x135ee8: 0x4be422bd  vmadda.xyzw $ACC, $vf4, $vf4
    ctx->pc = 0x135ee8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135eec: 0x4be319a9  vmadd.xyzw  $vf6, $vf3, $vf3
    ctx->pc = 0x135eecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x135ef0: 0x4a0002ff  vnop
    ctx->pc = 0x135ef0u;
    // NOP operation, no action needed for VU0
    // 0x135ef4: 0x4a0002ff  vnop
    ctx->pc = 0x135ef4u;
    // NOP operation, no action needed for VU0
    // 0x135ef8: 0x4a0002ff  vnop
    ctx->pc = 0x135ef8u;
    // NOP operation, no action needed for VU0
    // 0x135efc: 0x4a0603bd  .word       0x4A0603BD                   # vsqrt       $Q, $vf6x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x135efcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x135f00: 0x4a0003bf  vwaitq
    ctx->pc = 0x135f00u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x135f04: 0x4841b000  cfc2.ni     $at, $vi22
    ctx->pc = 0x135f04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x135f08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x135f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x135F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135F14u;
}

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

// Function: sub_001DA250
// Address: 0x1da250 - 0x1da2c4
void sub_001DA250_0x1da250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA250_0x1da250");
#endif

    ctx->pc = 0x1da250u;

    // 0x1da250: 0xd88a0000  lqc2        $vf10, 0x0($a0)
    ctx->pc = 0x1da250u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1da254: 0xd8ab0000  lqc2        $vf11, 0x0($a1)
    ctx->pc = 0x1da254u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da258: 0x4bca5b2c  vsub.xyz    $vf12, $vf11, $vf10
    ctx->pc = 0x1da258u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da25c: 0x4bcc636a  vmul.xyz    $vf13, $vf12, $vf12
    ctx->pc = 0x1da25cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1da260: 0x4b0d6b41  vaddy.x     $vf13, $vf13, $vf13y
    ctx->pc = 0x1da260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1da264: 0x4b0d6b42  vaddz.x     $vf13, $vf13, $vf13z
    ctx->pc = 0x1da264u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1da268: 0x4a0d03bd  .word       0x4A0D03BD                   # vsqrt       $Q, $vf13x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1da268u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1da26c: 0x44016000  mfc1        $at, $f12
    ctx->pc = 0x1da26cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1da270: 0x48a12800  qmtc2.ni    $at, $vf5
    ctx->pc = 0x1da270u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1da274: 0x44016800  mfc1        $at, $f13
    ctx->pc = 0x1da274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1da278: 0x48a13000  qmtc2.ni    $at, $vf6
    ctx->pc = 0x1da278u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1da27c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1da27cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1da280: 0x4b000360  vaddq.x     $vf13, $vf0, $Q
    ctx->pc = 0x1da280u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1da284: 0x4a0002ff  vnop
    ctx->pc = 0x1da284u;
    // NOP operation, no action needed for VU0
    // 0x1da288: 0x4a0002ff  vnop
    ctx->pc = 0x1da288u;
    // NOP operation, no action needed for VU0
    // 0x1da28c: 0x4a0d2bbc  vdiv        $Q, $vf5x, $vf13x
    ctx->pc = 0x1da28cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1da290: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1da290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1da294: 0x48a12800  qmtc2.ni    $at, $vf5
    ctx->pc = 0x1da294u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1da298: 0x4a0003bf  vwaitq
    ctx->pc = 0x1da298u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1da29c: 0x4b000360  vaddq.x     $vf13, $vf0, $Q
    ctx->pc = 0x1da29cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1da2a0: 0x4b006b47  vsubw.x     $vf13, $vf13, $vf0w
    ctx->pc = 0x1da2a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1da2a4: 0x4b056b6a  vmul.x      $vf13, $vf13, $vf5
    ctx->pc = 0x1da2a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1da2a8: 0x4b066b6a  vmul.x      $vf13, $vf13, $vf6
    ctx->pc = 0x1da2a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1da2ac: 0x4bcd6318  vmulx.xyz   $vf12, $vf12, $vf13x
    ctx->pc = 0x1da2acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da2b0: 0x4bcc52ac  vsub.xyz    $vf10, $vf10, $vf12
    ctx->pc = 0x1da2b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1da2b4: 0x4bcc5ae8  vadd.xyz    $vf11, $vf11, $vf12
    ctx->pc = 0x1da2b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1da2b8: 0xf88a0000  sqc2        $vf10, 0x0($a0)
    ctx->pc = 0x1da2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1da2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2BCu;
        // 0x1da2c0: 0xf8ab0000  sqc2        $vf11, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[11]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA2C4u;
}

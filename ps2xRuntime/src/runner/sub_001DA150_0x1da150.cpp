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

// Function: sub_001DA150
// Address: 0x1da150 - 0x1da1a8
void sub_001DA150_0x1da150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA150_0x1da150");
#endif

    ctx->pc = 0x1da150u;

    // 0x1da150: 0x34014040  ori         $at, $zero, 0x4040
    ctx->pc = 0x1da150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)16448);
    // 0x1da154: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1da154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1da158: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1da158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1da15c: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1da15cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x1da160: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1da160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1da164: 0x48a16800  qmtc2.ni    $at, $vf13
    ctx->pc = 0x1da164u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1da168: 0x44016000  mfc1        $at, $f12
    ctx->pc = 0x1da168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1da16c: 0x48a15000  qmtc2.ni    $at, $vf10
    ctx->pc = 0x1da16cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1da170: 0x4a8a02c0  vaddx.y     $vf11, $vf0, $vf10x
    ctx->pc = 0x1da170u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1da174: 0x4a8b5aea  vmul.y      $vf11, $vf11, $vf11
    ctx->pc = 0x1da174u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1da178: 0x4a4b02c1  vaddy.z     $vf11, $vf0, $vf11y
    ctx->pc = 0x1da178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1da17c: 0x4b0052c7  vsubw.x     $vf11, $vf10, $vf0w
    ctx->pc = 0x1da17cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1da180: 0x4a2a02c4  vsubx.w     $vf11, $vf0, $vf10x
    ctx->pc = 0x1da180u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1da184: 0x4b0a6b18  vmulx.x     $vf12, $vf13, $vf10x
    ctx->pc = 0x1da184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da188: 0x4a8c6b04  vsubx.y     $vf12, $vf13, $vf12x
    ctx->pc = 0x1da188u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da18c: 0x4b006303  vaddw.x     $vf12, $vf12, $vf0w
    ctx->pc = 0x1da18cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da190: 0x4a4b5ad8  vmulx.z     $vf11, $vf11, $vf11x
    ctx->pc = 0x1da190u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1da194: 0x4b2b5aea  vmul.xw     $vf11, $vf11, $vf11
    ctx->pc = 0x1da194u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1da198: 0x4b8c5aea  vmul.xy     $vf11, $vf11, $vf12
    ctx->pc = 0x1da198u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1da19c: 0x4a2a5ad8  vmulx.w     $vf11, $vf11, $vf10x
    ctx->pc = 0x1da19cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1da1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1A0u;
        // 0x1da1a4: 0xf88b0000  sqc2        $vf11, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[11]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA1A8u;
}

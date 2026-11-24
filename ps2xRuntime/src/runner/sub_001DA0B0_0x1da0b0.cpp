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

// Function: sub_001DA0B0
// Address: 0x1da0b0 - 0x1da0f0
void sub_001DA0B0_0x1da0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA0B0_0x1da0b0");
#endif

    ctx->pc = 0x1da0b0u;

    // 0x1da0b0: 0xd88a0000  lqc2        $vf10, 0x0($a0)
    ctx->pc = 0x1da0b0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1da0b4: 0xd8ab0000  lqc2        $vf11, 0x0($a1)
    ctx->pc = 0x1da0b4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da0b8: 0xd8cc0000  lqc2        $vf12, 0x0($a2)
    ctx->pc = 0x1da0b8u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da0bc: 0x44016000  mfc1        $at, $f12
    ctx->pc = 0x1da0bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1da0c0: 0x48a16800  qmtc2.ni    $at, $vf13
    ctx->pc = 0x1da0c0u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1da0c4: 0x44016800  mfc1        $at, $f13
    ctx->pc = 0x1da0c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1da0c8: 0x48a17000  qmtc2.ni    $at, $vf14
    ctx->pc = 0x1da0c8u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1da0cc: 0x4bce5ad8  vmulx.xyz   $vf11, $vf11, $vf14x
    ctx->pc = 0x1da0ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1da0d0: 0x4bcd6158  vmulx.xyz   $vf5, $vf12, $vf13x
    ctx->pc = 0x1da0d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1da0d4: 0x4bc55ae8  vadd.xyz    $vf11, $vf11, $vf5
    ctx->pc = 0x1da0d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1da0d8: 0x4bcd5958  vmulx.xyz   $vf5, $vf11, $vf13x
    ctx->pc = 0x1da0d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1da0dc: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x1da0dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1da0e0: 0x4a2a033c  vmove.w     $vf10, $vf0
    ctx->pc = 0x1da0e0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1da0e4: 0xf88a0000  sqc2        $vf10, 0x0($a0)
    ctx->pc = 0x1da0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1da0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0E8u;
        // 0x1da0ec: 0xf8ab0000  sqc2        $vf11, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[11]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA0F0u;
}

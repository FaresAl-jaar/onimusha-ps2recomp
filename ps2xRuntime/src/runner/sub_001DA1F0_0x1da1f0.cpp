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

// Function: sub_001DA1F0
// Address: 0x1da1f0 - 0x1da248
void sub_001DA1F0_0x1da1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA1F0_0x1da1f0");
#endif

    ctx->pc = 0x1da1f0u;

    // 0x1da1f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1da1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1da1f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da1f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da1f8: 0x0  nop
    ctx->pc = 0x1da1f8u;
    // NOP
    // 0x1da1fc: 0x8076884  j           func_1DA210
    ctx->pc = 0x1DA1FCu;
    ctx->pc = 0x1DA210u;
    goto label_1da210;
    ctx->pc = 0x1DA204u;
    // 0x1da204: 0x0  nop
    ctx->pc = 0x1da204u;
    // NOP
    // 0x1da208: 0x0  nop
    ctx->pc = 0x1da208u;
    // NOP
    // 0x1da20c: 0x0  nop
    ctx->pc = 0x1da20cu;
    // NOP
label_1da210:
    // 0x1da210: 0xd8aa0000  lqc2        $vf10, 0x0($a1)
    ctx->pc = 0x1da210u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da214: 0xd8cb0000  lqc2        $vf11, 0x0($a2)
    ctx->pc = 0x1da214u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da218: 0x44016000  mfc1        $at, $f12
    ctx->pc = 0x1da218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1da21c: 0x48a17000  qmtc2.ni    $at, $vf14
    ctx->pc = 0x1da21cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1da220: 0x4bcb036c  vsub.xyz    $vf13, $vf0, $vf11
    ctx->pc = 0x1da220u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1da224: 0x4bca6b2a  vmul.xyz    $vf12, $vf13, $vf10
    ctx->pc = 0x1da224u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da228: 0x4b0c6302  vaddz.x     $vf12, $vf12, $vf12z
    ctx->pc = 0x1da228u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da22c: 0x4b0c6301  vaddy.x     $vf12, $vf12, $vf12y
    ctx->pc = 0x1da22cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da230: 0x4b0e632a  vmul.x      $vf12, $vf12, $vf14
    ctx->pc = 0x1da230u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1da234: 0x4bcc5298  vmulx.xyz   $vf10, $vf10, $vf12x
    ctx->pc = 0x1da234u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1da238: 0x4bcb52a8  vadd.xyz    $vf10, $vf10, $vf11
    ctx->pc = 0x1da238u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1da23c: 0x4a2a033c  vmove.w     $vf10, $vf0
    ctx->pc = 0x1da23cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1da240: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA240u;
        // 0x1da244: 0xf88a0000  sqc2        $vf10, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA248u;
}

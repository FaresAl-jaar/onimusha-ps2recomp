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

// Function: sub_001D9950
// Address: 0x1d9950 - 0x1d9970
void sub_001D9950_0x1d9950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9950_0x1d9950");
#endif

    ctx->pc = 0x1d9950u;

    // 0x1d9950: 0xd88c0000  lqc2        $vf12, 0x0($a0)
    ctx->pc = 0x1d9950u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d9954: 0xd8ad0000  lqc2        $vf13, 0x0($a1)
    ctx->pc = 0x1d9954u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d9958: 0x4bcc6b6a  vmul.xyz    $vf13, $vf13, $vf12
    ctx->pc = 0x1d9958u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1d995c: 0x4b0d6b41  vaddy.x     $vf13, $vf13, $vf13y
    ctx->pc = 0x1d995cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1d9960: 0x4b0d6b42  vaddz.x     $vf13, $vf13, $vf13z
    ctx->pc = 0x1d9960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1d9964: 0x48216800  qmfc2.ni    $at, $vf13
    ctx->pc = 0x1d9964u;
    SET_GPR_VEC(ctx, 1, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x1d9968: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9968u;
        // 0x1d996c: 0x44810000  mtc1        $at, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9970u;
}

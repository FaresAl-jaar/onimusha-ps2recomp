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

// Function: sub_001F3540
// Address: 0x1f3540 - 0x1f356c
void sub_001F3540_0x1f3540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3540_0x1f3540");
#endif

    ctx->pc = 0x1f3540u;

    // 0x1f3540: 0xd88a0000  lqc2        $vf10, 0x0($a0)
    ctx->pc = 0x1f3540u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f3544: 0xd88b0010  lqc2        $vf11, 0x10($a0)
    ctx->pc = 0x1f3544u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f3548: 0xd88c0020  lqc2        $vf12, 0x20($a0)
    ctx->pc = 0x1f3548u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1f354c: 0xd88d0030  lqc2        $vf13, 0x30($a0)
    ctx->pc = 0x1f354cu;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f3550: 0x4bcb52a8  vadd.xyz    $vf10, $vf10, $vf11
    ctx->pc = 0x1f3550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1f3554: 0xf88a0000  sqc2        $vf10, 0x0($a0)
    ctx->pc = 0x1f3554u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1f3558: 0x4bcc5ae8  vadd.xyz    $vf11, $vf11, $vf12
    ctx->pc = 0x1f3558u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1f355c: 0xf88b0010  sqc2        $vf11, 0x10($a0)
    ctx->pc = 0x1f355cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x1f3560: 0x4bcd6328  vadd.xyz    $vf12, $vf12, $vf13
    ctx->pc = 0x1f3560u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1f3564: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3564u;
        // 0x1f3568: 0xf88c0020  sqc2        $vf12, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[12]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F356Cu;
}

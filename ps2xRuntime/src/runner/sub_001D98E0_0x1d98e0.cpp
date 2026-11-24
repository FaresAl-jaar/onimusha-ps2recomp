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

// Function: sub_001D98E0
// Address: 0x1d98e0 - 0x1d9928
void sub_001D98E0_0x1d98e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D98E0_0x1d98e0");
#endif

    ctx->pc = 0x1d98e0u;

    // 0x1d98e0: 0x34014580  ori         $at, $zero, 0x4580
    ctx->pc = 0x1d98e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)17792);
    // 0x1d98e4: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1d98e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1d98e8: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1d98e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1d98ec: 0x34214580  ori         $at, $at, 0x4580
    ctx->pc = 0x1d98ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17792);
    // 0x1d98f0: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1d98f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1d98f4: 0xd88c0000  lqc2        $vf12, 0x0($a0)
    ctx->pc = 0x1d98f4u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d98f8: 0x4bec613d  vitof4.xyzw $vf12, $vf12
    ctx->pc = 0x1d98f8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[12]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.0625f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1d98fc: 0x48a16800  qmtc2.ni    $at, $vf13
    ctx->pc = 0x1d98fcu;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1d9900: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x1d9900u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
    // 0x1d9904: 0x4bc063ac  vsub.xyz    $vf14, $vf12, $vf0
    ctx->pc = 0x1d9904u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[12], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1d9908: 0x4b8c6bac  vsub.xy     $vf14, $vf13, $vf12
    ctx->pc = 0x1d9908u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1d990c: 0x4a0002ff  vnop
    ctx->pc = 0x1d990cu;
    // NOP operation, no action needed for VU0
    // 0x1d9910: 0x4a0002ff  vnop
    ctx->pc = 0x1d9910u;
    // NOP operation, no action needed for VU0
    // 0x1d9914: 0x4a0002ff  vnop
    ctx->pc = 0x1d9914u;
    // NOP operation, no action needed for VU0
    // 0x1d9918: 0x4a0002ff  vnop
    ctx->pc = 0x1d9918u;
    // NOP operation, no action needed for VU0
    // 0x1d991c: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x1d991cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x1d9920: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9920u;
        // 0x1d9924: 0x304200c0  andi        $v0, $v0, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9928u;
}

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

// Function: sub_001D8CA0
// Address: 0x1d8ca0 - 0x1d8d1c
void sub_001D8CA0_0x1d8ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8CA0_0x1d8ca0");
#endif

    ctx->pc = 0x1d8ca0u;

    // 0x1d8ca0: 0x34093638  ori         $t1, $zero, 0x3638
    ctx->pc = 0x1d8ca0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)13880);
    // 0x1d8ca4: 0x340a3c08  ori         $t2, $zero, 0x3C08
    ctx->pc = 0x1d8ca4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)15368);
    // 0x1d8ca8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x1d8ca8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x1d8cac: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1d8cacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1d8cb0: 0x3529ef1d  ori         $t1, $t1, 0xEF1D
    ctx->pc = 0x1d8cb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)61213);
    // 0x1d8cb4: 0x354a8889  ori         $t2, $t2, 0x8889
    ctx->pc = 0x1d8cb4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)34953);
    // 0x1d8cb8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x1d8cb8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x1d8cbc: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1d8cbcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1d8cc0: 0x3529b950  ori         $t1, $t1, 0xB950
    ctx->pc = 0x1d8cc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)47440);
    // 0x1d8cc4: 0x354abe2a  ori         $t2, $t2, 0xBE2A
    ctx->pc = 0x1d8cc4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)48682);
    // 0x1d8cc8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x1d8cc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x1d8ccc: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1d8cccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x1d8cd0: 0x35290d01  ori         $t1, $t1, 0xD01
    ctx->pc = 0x1d8cd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)3329);
    // 0x1d8cd4: 0x354aaaab  ori         $t2, $t2, 0xAAAB
    ctx->pc = 0x1d8cd4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)43691);
    // 0x1d8cd8: 0x712a4b89  pcpyld      $t1, $t1, $t2
    ctx->pc = 0x1d8cd8u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x1d8cdc: 0x48a95000  qmtc2.ni    $t1, $vf10
    ctx->pc = 0x1d8cdcu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x1d8ce0: 0x44016000  mfc1        $at, $f12
    ctx->pc = 0x1d8ce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1d8ce4: 0x48a15800  qmtc2.ni    $at, $vf11
    ctx->pc = 0x1d8ce4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1d8ce8: 0x4b005abc  vadda.x     $ACC, $vf0, $vf11
    ctx->pc = 0x1d8ce8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1d8cec: 0x4b0b5b2a  vmul.x      $vf12, $vf11, $vf11
    ctx->pc = 0x1d8cecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1d8cf0: 0x4b0b636a  vmul.x      $vf13, $vf12, $vf11
    ctx->pc = 0x1d8cf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1d8cf4: 0x4b0a68bc  vmaddax.x   $ACC, $vf13, $vf10x
    ctx->pc = 0x1d8cf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1d8cf8: 0x4b0c6b6a  vmul.x      $vf13, $vf13, $vf12
    ctx->pc = 0x1d8cf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1d8cfc: 0x4b0a68bd  vmadday.x   $ACC, $vf13, $vf10y
    ctx->pc = 0x1d8cfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1d8d00: 0x4b0c6b6a  vmul.x      $vf13, $vf13, $vf12
    ctx->pc = 0x1d8d00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1d8d04: 0x4b0a68be  vmaddaz.x   $ACC, $vf13, $vf10z
    ctx->pc = 0x1d8d04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1d8d08: 0x4b0c6b6a  vmul.x      $vf13, $vf13, $vf12
    ctx->pc = 0x1d8d08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1d8d0c: 0x4b0a6b8b  vmaddw.x    $vf14, $vf13, $vf10w
    ctx->pc = 0x1d8d0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1d8d10: 0x48217000  qmfc2.ni    $at, $vf14
    ctx->pc = 0x1d8d10u;
    SET_GPR_VEC(ctx, 1, _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x1d8d14: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8D14u;
        // 0x1d8d18: 0x44810000  mtc1        $at, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8D1Cu;
}

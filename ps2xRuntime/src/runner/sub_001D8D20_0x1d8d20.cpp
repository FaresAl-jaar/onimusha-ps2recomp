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

// Function: sub_001D8D20
// Address: 0x1d8d20 - 0x1d8de8
void sub_001D8D20_0x1d8d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8D20_0x1d8d20");
#endif

    ctx->pc = 0x1d8d20u;

    // 0x1d8d20: 0x3401be2a  ori         $at, $zero, 0xBE2A
    ctx->pc = 0x1d8d20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48682);
    // 0x1d8d24: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1d8d24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1d8d28: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1d8d28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1d8d2c: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1d8d2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1d8d30: 0x3421bf00  ori         $at, $at, 0xBF00
    ctx->pc = 0x1d8d30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48896);
    // 0x1d8d34: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1d8d34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1d8d38: 0x48a12800  qmtc2.ni    $at, $vf5
    ctx->pc = 0x1d8d38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1d8d3c: 0x34013c08  ori         $at, $zero, 0x3C08
    ctx->pc = 0x1d8d3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)15368);
    // 0x1d8d40: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1d8d40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1d8d44: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1d8d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1d8d48: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1d8d48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1d8d4c: 0x34213d2a  ori         $at, $at, 0x3D2A
    ctx->pc = 0x1d8d4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15658);
    // 0x1d8d50: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1d8d50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1d8d54: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1d8d54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1d8d58: 0x48a13000  qmtc2.ni    $at, $vf6
    ctx->pc = 0x1d8d58u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1d8d5c: 0x3401b950  ori         $at, $zero, 0xB950
    ctx->pc = 0x1d8d5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47440);
    // 0x1d8d60: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1d8d60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1d8d64: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x1d8d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x1d8d68: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1d8d68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1d8d6c: 0x3421bab6  ori         $at, $at, 0xBAB6
    ctx->pc = 0x1d8d6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47798);
    // 0x1d8d70: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1d8d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1d8d74: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x1d8d74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x1d8d78: 0x48a13800  qmtc2.ni    $at, $vf7
    ctx->pc = 0x1d8d78u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1d8d7c: 0x34013638  ori         $at, $zero, 0x3638
    ctx->pc = 0x1d8d7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)13880);
    // 0x1d8d80: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1d8d80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1d8d84: 0x3421ef1d  ori         $at, $at, 0xEF1D
    ctx->pc = 0x1d8d84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61213);
    // 0x1d8d88: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1d8d88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1d8d8c: 0x342137d0  ori         $at, $at, 0x37D0
    ctx->pc = 0x1d8d8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14288);
    // 0x1d8d90: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1d8d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1d8d94: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x1d8d94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x1d8d98: 0x48a14000  qmtc2.ni    $at, $vf8
    ctx->pc = 0x1d8d98u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1d8d9c: 0x44016000  mfc1        $at, $f12
    ctx->pc = 0x1d8d9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1d8da0: 0x70210c88  pextlw      $at, $at, $at
    ctx->pc = 0x1d8da0u;
    SET_GPR_VEC(ctx, 1, PS2_PEXTLW(GPR_VEC(ctx, 1), GPR_VEC(ctx, 1)));
    // 0x1d8da4: 0x48a15000  qmtc2.ni    $at, $vf10
    ctx->pc = 0x1d8da4u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1d8da8: 0x4b00003f  vaddaw.x    $ACC, $vf0, $vf0w
    ctx->pc = 0x1d8da8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1d8dac: 0x4a8052bc  vadda.y     $ACC, $vf0, $vf10
    ctx->pc = 0x1d8dacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[0]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x1d8db0: 0x4b8a52ea  vmul.xy     $vf11, $vf10, $vf10
    ctx->pc = 0x1d8db0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1d8db4: 0x4bec5b3c  vmove.xyzw  $vf12, $vf11
    ctx->pc = 0x1d8db4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], ctx->vu0_vf[11], _mm_castsi128_ps(mask)); }
    // 0x1d8db8: 0x4a8a632a  vmul.y      $vf12, $vf12, $vf10
    ctx->pc = 0x1d8db8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1d8dbc: 0x4b8562bd  vmadda.xy   $ACC, $vf12, $vf5
    ctx->pc = 0x1d8dbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[5]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x1d8dc0: 0x4b8b632a  vmul.xy     $vf12, $vf12, $vf11
    ctx->pc = 0x1d8dc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1d8dc4: 0x4b8662bd  vmadda.xy   $ACC, $vf12, $vf6
    ctx->pc = 0x1d8dc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[6]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x1d8dc8: 0x4b8b632a  vmul.xy     $vf12, $vf12, $vf11
    ctx->pc = 0x1d8dc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1d8dcc: 0x4b8762bd  vmadda.xy   $ACC, $vf12, $vf7
    ctx->pc = 0x1d8dccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[7]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x1d8dd0: 0x4b8b632a  vmul.xy     $vf12, $vf12, $vf11
    ctx->pc = 0x1d8dd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1d8dd4: 0x4b886369  vmadd.xy    $vf13, $vf12, $vf8
    ctx->pc = 0x1d8dd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[8]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1d8dd8: 0x4a4d0341  vaddy.z     $vf13, $vf0, $vf13y
    ctx->pc = 0x1d8dd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1d8ddc: 0x4a2d033c  vmove.w     $vf13, $vf0
    ctx->pc = 0x1d8ddcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1d8de0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8DE0u;
        // 0x1d8de4: 0xf88d0000  sqc2        $vf13, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[13]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8DE8u;
}

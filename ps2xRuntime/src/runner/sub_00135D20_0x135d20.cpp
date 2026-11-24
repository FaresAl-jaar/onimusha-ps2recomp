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

// Function: sub_00135D20
// Address: 0x135d20 - 0x135ddc
void sub_00135D20_0x135d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135D20_0x135d20");
#endif

    ctx->pc = 0x135d20u;

    // 0x135d20: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x135d20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x135d24: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x135d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x135d28: 0x24e76a20  addiu       $a3, $a3, 0x6A20
    ctx->pc = 0x135d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27168));
    // 0x135d2c: 0x246369a0  addiu       $v1, $v1, 0x69A0
    ctx->pc = 0x135d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27040));
    // 0x135d30: 0xd8a90000  lqc2        $vf9, 0x0($a1)
    ctx->pc = 0x135d30u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x135d34: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x135d34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x696A20u));
    // 0x135d38: 0xd8e20010  lqc2        $vf2, 0x10($a3)
    ctx->pc = 0x135d38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x696A30u));
    // 0x135d3c: 0xd8e30020  lqc2        $vf3, 0x20($a3)
    ctx->pc = 0x135d3cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(FAST_READ128(0x696A40u));
    // 0x135d40: 0xd8e40030  lqc2        $vf4, 0x30($a3)
    ctx->pc = 0x135d40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x696A50u));
    // 0x135d44: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x135d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x135d48: 0xd83f45c0  lqc2        $vf31, 0x45C0($at)
    ctx->pc = 0x135d48u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(FAST_READ128(0x6645C0u));
    // 0x135d4c: 0x4be909bc  vmulax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x135d4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135d50: 0x4be910bd  vmadday.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x135d50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135d54: 0x4be918be  vmaddaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x135d54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135d58: 0x4be022cb  vmaddw.xyzw $vf11, $vf4, $vf0w
    ctx->pc = 0x135d58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x135d5c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x135d5cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135d60: 0xd8660010  lqc2        $vf6, 0x10($v1)
    ctx->pc = 0x135d60u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x135d64: 0xd8670020  lqc2        $vf7, 0x20($v1)
    ctx->pc = 0x135d64u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x135d68: 0x4beb03bc  vdiv        $Q, $vf0w, $vf11w
    ctx->pc = 0x135d68u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x135d6c: 0xd8680030  lqc2        $vf8, 0x30($v1)
    ctx->pc = 0x135d6cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x135d70: 0x4be929bc  vmulax.xyzw $ACC, $vf5, $vf9x
    ctx->pc = 0x135d70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135d74: 0x4be930bd  vmadday.xyzw $ACC, $vf6, $vf9y
    ctx->pc = 0x135d74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135d78: 0x4be938be  vmaddaz.xyzw $ACC, $vf7, $vf9z
    ctx->pc = 0x135d78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135d7c: 0x4be0428b  vmaddw.xyzw $vf10, $vf8, $vf0w
    ctx->pc = 0x135d7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x135d80: 0x4a0002ff  vnop
    ctx->pc = 0x135d80u;
    // NOP operation, no action needed for VU0
    // 0x135d84: 0x4a0002ff  vnop
    ctx->pc = 0x135d84u;
    // NOP operation, no action needed for VU0
    // 0x135d88: 0x4be05adc  vmulq.xyzw  $vf11, $vf11, $Q
    ctx->pc = 0x135d88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x135d8c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x135D8Cu;
    {
        const bool branch_taken_0x135d8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x135D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D8Cu;
        // 0x135d90: 0x4bca51ff  .word       0x4BCA51FF                   # vclipw.xyz  $vf10, $vf10w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { __m128 fs = ctx->vu0_vf[10]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135d8c) {
            ctx->pc = 0x135DA0u;
            goto label_135da0;
        }
    }
    ctx->pc = 0x135D94u;
    // 0x135d94: 0x4842b000  cfc2.ni     $v0, $vi22
    ctx->pc = 0x135d94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x135d98: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x135d98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x135d9c: 0x0  nop
    ctx->pc = 0x135d9cu;
    // NOP
label_135da0:
    // 0x135da0: 0x4a5f6316  vminiz.z    $vf12, $vf12, $vf31z
    ctx->pc = 0x135da0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x135da4: 0x4b8c597d  vftoi4.xy   $vf12, $vf11
    ctx->pc = 0x135da4u;
    { __m128 src = ctx->vu0_vf[11]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x135da8: 0x4a0002ff  vnop
    ctx->pc = 0x135da8u;
    // NOP operation, no action needed for VU0
    // 0x135dac: 0x4a0002ff  vnop
    ctx->pc = 0x135dacu;
    // NOP operation, no action needed for VU0
    // 0x135db0: 0x4a4c597c  vftoi0.z    $vf12, $vf11
    ctx->pc = 0x135db0u;
    { __m128 src = ctx->vu0_vf[11]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x135db4: 0x4a0002ff  vnop
    ctx->pc = 0x135db4u;
    // NOP operation, no action needed for VU0
    // 0x135db8: 0x4a0002ff  vnop
    ctx->pc = 0x135db8u;
    // NOP operation, no action needed for VU0
    // 0x135dbc: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x135dbcu;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x135dc0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x135dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x135dc4: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x135dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x135dc8: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x135dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x135dcc: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x135dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x135dd0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x135dd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x135dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x135DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135DD4u;
        // 0x135dd8: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135DDCu;
}

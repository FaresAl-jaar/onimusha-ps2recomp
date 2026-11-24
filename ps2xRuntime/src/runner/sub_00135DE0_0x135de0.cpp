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

// Function: sub_00135DE0
// Address: 0x135de0 - 0x135ed0
void sub_00135DE0_0x135de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135DE0_0x135de0");
#endif

    ctx->pc = 0x135de0u;

    // 0x135de0: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x135de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x135de4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x135de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x135de8: 0x24636a20  addiu       $v1, $v1, 0x6A20
    ctx->pc = 0x135de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27168));
    // 0x135dec: 0x24426b60  addiu       $v0, $v0, 0x6B60
    ctx->pc = 0x135decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27488));
    // 0x135df0: 0x700847c9  prot3w      $t0, $t0
    ctx->pc = 0x135df0u;
    SET_GPR_VEC(ctx, 8, _mm_shuffle_epi32(GPR_VEC(ctx, 8), _MM_SHUFFLE(0,3,2,1)));
    // 0x135df4: 0xd8a90000  lqc2        $vf9, 0x0($a1)
    ctx->pc = 0x135df4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x135df8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x135df8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135dfc: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x135dfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x135e00: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x135e00u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x135e04: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x135e04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x135e08: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x135e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x135e0c: 0xd83f45d0  lqc2        $vf31, 0x45D0($at)
    ctx->pc = 0x135e0cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(FAST_READ128(0x6645D0u));
    // 0x135e10: 0x48a86800  qmtc2.ni    $t0, $vf13
    ctx->pc = 0x135e10u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x135e14: 0x4be909bc  vmulax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x135e14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135e18: 0x4be910bd  vmadday.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x135e18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135e1c: 0x4be918be  vmaddaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x135e1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135e20: 0x4be022cb  vmaddw.xyzw $vf11, $vf4, $vf0w
    ctx->pc = 0x135e20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x135e24: 0x4bed693c  vitof0.xyzw $vf13, $vf13
    ctx->pc = 0x135e24u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[13]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x135e28: 0xd84e0020  lqc2        $vf14, 0x20($v0)
    ctx->pc = 0x135e28u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x135e2c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x135e2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x135e30: 0x4beb03bc  vdiv        $Q, $vf0w, $vf11w
    ctx->pc = 0x135e30u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x135e34: 0x4a6d70be  vmaddaz.zw  $ACC, $vf14, $vf13z
    ctx->pc = 0x135e34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, 0, 0))); }
    // 0x135e38: 0x4a60238b  vmaddw.zw   $vf14, $vf4, $vf0w
    ctx->pc = 0x135e38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x135e3c: 0xd8c60010  lqc2        $vf6, 0x10($a2)
    ctx->pc = 0x135e3cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x135e40: 0xd8c70020  lqc2        $vf7, 0x20($a2)
    ctx->pc = 0x135e40u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x135e44: 0xd8c80030  lqc2        $vf8, 0x30($a2)
    ctx->pc = 0x135e44u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x135e48: 0x4be929bc  vmulax.xyzw $ACC, $vf5, $vf9x
    ctx->pc = 0x135e48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135e4c: 0x4be05adc  vmulq.xyzw  $vf11, $vf11, $Q
    ctx->pc = 0x135e4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x135e50: 0x4842b000  cfc2.ni     $v0, $vi22
    ctx->pc = 0x135e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x135e54: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x135E54u;
    {
        const bool branch_taken_0x135e54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x135e54) {
            ctx->pc = 0x135E68u;
            goto label_135e68;
        }
    }
    ctx->pc = 0x135E5Cu;
    // 0x135e5c: 0x4bee03bc  vdiv        $Q, $vf0w, $vf14w
    ctx->pc = 0x135e5cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x135e60: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x135e60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x135e64: 0x0  nop
    ctx->pc = 0x135e64u;
    // NOP
label_135e68:
    // 0x135e68: 0x4be930bd  vmadday.xyzw $ACC, $vf6, $vf9y
    ctx->pc = 0x135e68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135e6c: 0x4be938be  vmaddaz.xyzw $ACC, $vf7, $vf9z
    ctx->pc = 0x135e6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x135e70: 0x4be0428b  vmaddw.xyzw $vf10, $vf8, $vf0w
    ctx->pc = 0x135e70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x135e74: 0x4a0002ff  vnop
    ctx->pc = 0x135e74u;
    // NOP operation, no action needed for VU0
    // 0x135e78: 0x4a0002ff  vnop
    ctx->pc = 0x135e78u;
    // NOP operation, no action needed for VU0
    // 0x135e7c: 0x4a0002ff  vnop
    ctx->pc = 0x135e7cu;
    // NOP operation, no action needed for VU0
    // 0x135e80: 0x4a4072dc  vmulq.z     $vf11, $vf14, $Q
    ctx->pc = 0x135e80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x135e84: 0x4a0002ff  vnop
    ctx->pc = 0x135e84u;
    // NOP operation, no action needed for VU0
    // 0x135e88: 0x4a0002ff  vnop
    ctx->pc = 0x135e88u;
    // NOP operation, no action needed for VU0
    // 0x135e8c: 0x4bca51ff  .word       0x4BCA51FF                   # vclipw.xyz  $vf10, $vf10w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x135e8cu;
    { __m128 fs = ctx->vu0_vf[10]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x135e90: 0x4a5f5ad6  vminiz.z    $vf11, $vf11, $vf31z
    ctx->pc = 0x135e90u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x135e94: 0x4b8c597d  vftoi4.xy   $vf12, $vf11
    ctx->pc = 0x135e94u;
    { __m128 src = ctx->vu0_vf[11]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x135e98: 0x4a4c597c  vftoi0.z    $vf12, $vf11
    ctx->pc = 0x135e98u;
    { __m128 src = ctx->vu0_vf[11]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x135e9c: 0x4a0002ff  vnop
    ctx->pc = 0x135e9cu;
    // NOP operation, no action needed for VU0
    // 0x135ea0: 0x4a0002ff  vnop
    ctx->pc = 0x135ea0u;
    // NOP operation, no action needed for VU0
    // 0x135ea4: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x135ea4u;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x135ea8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x135ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x135eac: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x135eacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x135eb0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x135eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x135eb4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x135EB4u;
    {
        const bool branch_taken_0x135eb4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x135eb4) {
            ctx->pc = 0x135EC0u;
            goto label_135ec0;
        }
    }
    ctx->pc = 0x135EBCu;
    // 0x135ebc: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x135ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_135ec0:
    // 0x135ec0: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x135ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x135ec4: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x135ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x135ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x135EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EC8u;
        // 0x135ecc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135ED0u;
}

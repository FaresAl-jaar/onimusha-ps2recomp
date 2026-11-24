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

// Function: sub_001361A0
// Address: 0x1361a0 - 0x136204
void sub_001361A0_0x1361a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001361A0_0x1361a0");
#endif

    ctx->pc = 0x1361a0u;

    // 0x1361a0: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1361a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1361a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1361a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1361a8: 0x0  nop
    ctx->pc = 0x1361a8u;
    // NOP
    // 0x1361ac: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1361acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1361b0: 0x44016000  mfc1        $at, $f12
    ctx->pc = 0x1361b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1361b4: 0x0  nop
    ctx->pc = 0x1361b4u;
    // NOP
    // 0x1361b8: 0x48a12800  qmtc2.ni    $at, $vf5
    ctx->pc = 0x1361b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 1));
    // 0x1361bc: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x1361bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1361c0: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x1361c0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1361c4: 0x4be521bc  vmulax.xyzw $ACC, $vf4, $vf5x
    ctx->pc = 0x1361c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1361c8: 0x4be0198b  vmaddw.xyzw $vf6, $vf3, $vf0w
    ctx->pc = 0x1361c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1361cc: 0x4be001db  vmulw.xyzw  $vf7, $vf0, $vf0w
    ctx->pc = 0x1361ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1361d0: 0x4a0002ff  vnop
    ctx->pc = 0x1361d0u;
    // NOP operation, no action needed for VU0
    // 0x1361d4: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x1361d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1361d8: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x1361d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1361dc: 0x4be0118b  vmaddw.xyzw $vf6, $vf2, $vf0w
    ctx->pc = 0x1361dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1361e0: 0x4a0002ff  vnop
    ctx->pc = 0x1361e0u;
    // NOP operation, no action needed for VU0
    // 0x1361e4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1361e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1361e8: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x1361e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1361ec: 0x4bc009cb  vmaddw.xyz  $vf7, $vf1, $vf0w
    ctx->pc = 0x1361ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1361f0: 0x4a0002ff  vnop
    ctx->pc = 0x1361f0u;
    // NOP operation, no action needed for VU0
    // 0x1361f4: 0x4a0002ff  vnop
    ctx->pc = 0x1361f4u;
    // NOP operation, no action needed for VU0
    // 0x1361f8: 0x4a0002ff  vnop
    ctx->pc = 0x1361f8u;
    // NOP operation, no action needed for VU0
    // 0x1361fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1361FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1361FCu;
        // 0x136200: 0xf8870000  sqc2        $vf7, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1361FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136204u;
}

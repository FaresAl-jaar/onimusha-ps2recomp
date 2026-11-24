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

// Function: sub_001D9BB0
// Address: 0x1d9bb0 - 0x1d9c18
void sub_001D9BB0_0x1d9bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9BB0_0x1d9bb0");
#endif

    ctx->pc = 0x1d9bb0u;

    // 0x1d9bb0: 0xd8aa0030  lqc2        $vf10, 0x30($a1)
    ctx->pc = 0x1d9bb0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1d9bb4: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1d9bb4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d9bb8: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x1d9bb8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1d9bbc: 0x78aa0020  lq          $t2, 0x20($a1)
    ctx->pc = 0x1d9bbcu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1d9bc0: 0x4beb533c  vmove.xyzw  $vf11, $vf10
    ctx->pc = 0x1d9bc0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], ctx->vu0_vf[10], _mm_castsi128_ps(mask)); }
    // 0x1d9bc4: 0x4bca033c  vmove.xyz   $vf10, $vf0
    ctx->pc = 0x1d9bc4u;
    { __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1d9bc8: 0x482b5000  qmfc2.ni    $t3, $vf10
    ctx->pc = 0x1d9bc8u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1d9bcc: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x1d9bccu;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1d9bd0: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x1d9bd0u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1d9bd4: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x1d9bd4u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x1d9bd8: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x1d9bd8u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x1d9bdc: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x1d9bdcu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x1d9be0: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x1d9be0u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x1d9be4: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x1d9be4u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x1d9be8: 0x48a86000  qmtc2.ni    $t0, $vf12
    ctx->pc = 0x1d9be8u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1d9bec: 0x48a96800  qmtc2.ni    $t1, $vf13
    ctx->pc = 0x1d9becu;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x1d9bf0: 0x48aa7000  qmtc2.ni    $t2, $vf14
    ctx->pc = 0x1d9bf0u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x1d9bf4: 0x4bcb61bc  vmulax.xyz  $ACC, $vf12, $vf11x
    ctx->pc = 0x1d9bf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1d9bf8: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x1d9bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x1d9bfc: 0x4bcb68bd  vmadday.xyz $ACC, $vf13, $vf11y
    ctx->pc = 0x1d9bfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1d9c00: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x1d9c00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x1d9c04: 0x4bcb730a  vmaddz.xyz  $vf12, $vf14, $vf11z
    ctx->pc = 0x1d9c04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1d9c08: 0x7c8a0020  sq          $t2, 0x20($a0)
    ctx->pc = 0x1d9c08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 10));
    // 0x1d9c0c: 0x4bcc032c  vsub.xyz    $vf12, $vf0, $vf12
    ctx->pc = 0x1d9c0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1d9c10: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C10u;
        // 0x1d9c14: 0xf88c0030  sqc2        $vf12, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[12]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9C18u;
}

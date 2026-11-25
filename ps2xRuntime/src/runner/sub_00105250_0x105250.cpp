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

// Function: sub_00105250
// Address: 0x105250 - 0x1052bc
void sub_00105250_0x105250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105250_0x105250");
#endif

    ctx->pc = 0x105250u;

    // 0x105250: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x105250u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105254: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x105254u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x105258: 0x78aa0020  lq          $t2, 0x20($a1)
    ctx->pc = 0x105258u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x10525c: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x10525cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x105260: 0x4be5233c  vmove.xyzw  $vf5, $vf4
    ctx->pc = 0x105260u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x105264: 0x4bc4212c  vsub.xyz    $vf4, $vf4, $vf4
    ctx->pc = 0x105264u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x105268: 0x4be9233c  vmove.xyzw  $vf9, $vf4
    ctx->pc = 0x105268u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x10526c: 0x482b2000  qmfc2.ni    $t3, $vf4
    ctx->pc = 0x10526cu;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105270: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x105270u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x105274: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x105274u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x105278: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x105278u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x10527c: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x10527cu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x105280: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x105280u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x105284: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x105284u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x105288: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x105288u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x10528c: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x10528cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x105290: 0x48a93800  qmtc2.ni    $t1, $vf7
    ctx->pc = 0x105290u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x105294: 0x48aa4000  qmtc2.ni    $t2, $vf8
    ctx->pc = 0x105294u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x105298: 0x4bc531bc  vmulax.xyz  $ACC, $vf6, $vf5x
    ctx->pc = 0x105298u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x10529c: 0x4bc538bd  vmadday.xyz $ACC, $vf7, $vf5y
    ctx->pc = 0x10529cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1052a0: 0x4bc5410a  vmaddz.xyz  $vf4, $vf8, $vf5z
    ctx->pc = 0x1052a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1052a4: 0x4bc4492c  vsub.xyz    $vf4, $vf9, $vf4
    ctx->pc = 0x1052a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1052a8: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x1052a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x1052ac: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x1052acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x1052b0: 0x7c8a0020  sq          $t2, 0x20($a0)
    ctx->pc = 0x1052b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 10));
    // 0x1052b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1052B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1052B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052B4u;
        // 0x1052b8: 0xf8840030  sqc2        $vf4, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1052B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1052BCu;
}

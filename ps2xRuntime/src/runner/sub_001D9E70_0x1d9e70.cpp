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

// Function: sub_001D9E70
// Address: 0x1d9e70 - 0x1d9e9c
void sub_001D9E70_0x1d9e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9E70_0x1d9e70");
#endif

    ctx->pc = 0x1d9e70u;

    // 0x1d9e70: 0xd8aa0000  lqc2        $vf10, 0x0($a1)
    ctx->pc = 0x1d9e70u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d9e74: 0xd8ab0010  lqc2        $vf11, 0x10($a1)
    ctx->pc = 0x1d9e74u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1d9e78: 0xd8ac0020  lqc2        $vf12, 0x20($a1)
    ctx->pc = 0x1d9e78u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1d9e7c: 0xd8ad0030  lqc2        $vf13, 0x30($a1)
    ctx->pc = 0x1d9e7cu;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1d9e80: 0xd8ce0000  lqc2        $vf14, 0x0($a2)
    ctx->pc = 0x1d9e80u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d9e84: 0x4bee51bc  vmulax.xyzw $ACC, $vf10, $vf14x
    ctx->pc = 0x1d9e84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1d9e88: 0x4bee58bd  vmadday.xyzw $ACC, $vf11, $vf14y
    ctx->pc = 0x1d9e88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1d9e8c: 0x4bee60be  vmaddaz.xyzw $ACC, $vf12, $vf14z
    ctx->pc = 0x1d9e8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1d9e90: 0x4be06b8b  vmaddw.xyzw $vf14, $vf13, $vf0w
    ctx->pc = 0x1d9e90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1d9e94: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E94u;
        // 0x1d9e98: 0xf88e0000  sqc2        $vf14, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[14]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9E9Cu;
}

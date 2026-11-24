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

// Function: sub_004BEF50
// Address: 0x4bef50 - 0x4bef74
void sub_004BEF50_0x4bef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BEF50_0x4bef50");
#endif

    ctx->pc = 0x4bef50u;

    // 0x4bef50: 0x0  nop
    ctx->pc = 0x4bef50u;
    // NOP
    // 0x4bef54: 0x0  nop
    ctx->pc = 0x4bef54u;
    // NOP
    // 0x4bef58: 0x4b52414d  vmsuby.xz   $vf5, $vf8, $vf18y
    ctx->pc = 0x4bef58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x4bef5c: 0x7864613a  lq          $a0, 0x613A($v1)
    ctx->pc = 0x4bef5cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 24890)));
    // 0x4bef60: 0x626f5f74  daddi       $t7, $s3, 0x5F74
    ctx->pc = 0x4bef60u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)24436; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
    // 0x4bef64: 0x6a  .word       0x0000006A                   # slt         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4bef64u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x4bef68: 0x0  nop
    ctx->pc = 0x4bef68u;
    // NOP
    // 0x4bef6c: 0x0  nop
    ctx->pc = 0x4bef6cu;
    // NOP
    // 0x4bef70: 0x0  nop
    ctx->pc = 0x4bef70u;
    // NOP
    ctx->pc = 0x4bef74u;
}

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

// Function: sub_00339760
// Address: 0x339760 - 0x339790
void sub_00339760_0x339760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339760_0x339760");
#endif

    ctx->pc = 0x339760u;

    // 0x339760: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x339760u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x339764: 0x48222001  qmfc2.i     $v0, $vf4
    ctx->pc = 0x339764u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x339768: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x339768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33976c: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x33976cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x339770: 0x0  nop
    ctx->pc = 0x339770u;
    // NOP
    // 0x339774: 0x0  nop
    ctx->pc = 0x339774u;
    // NOP
    // 0x339778: 0x1010  mfhi        $v0
    ctx->pc = 0x339778u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x33977c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33977cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x339780: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x339780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x339784: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x339784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339788: 0x80ce5d0  j           func_339740
    ctx->pc = 0x339788u;
    ctx->pc = 0x33978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339788u;
    // 0x33978c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339740u;
    sub_00339740_0x339740(rdram, ctx, runtime); return;
    ctx->pc = 0x339790u;
}

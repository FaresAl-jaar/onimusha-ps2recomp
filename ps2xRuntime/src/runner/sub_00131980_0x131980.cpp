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

// Function: sub_00131980
// Address: 0x131980 - 0x13199c
void sub_00131980_0x131980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131980_0x131980");
#endif

    ctx->pc = 0x131980u;

    // 0x131980: 0x2402022c  addiu       $v0, $zero, 0x22C
    ctx->pc = 0x131980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x131984: 0x24060088  addiu       $a2, $zero, 0x88
    ctx->pc = 0x131984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x131988: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x131988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13198c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x131990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131994: 0x8049590  j           func_125640
    ctx->pc = 0x131994u;
    ctx->pc = 0x131998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131994u;
    // 0x131998: 0x2444004c  addiu       $a0, $v0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x13199Cu;
}

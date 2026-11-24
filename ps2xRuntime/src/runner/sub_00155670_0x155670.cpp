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

// Function: sub_00155670
// Address: 0x155670 - 0x15568c
void sub_00155670_0x155670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155670_0x155670");
#endif

    ctx->pc = 0x155670u;

    // 0x155670: 0x24063ca0  addiu       $a2, $zero, 0x3CA0
    ctx->pc = 0x155670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15520));
    // 0x155674: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x155674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x155678: 0x861818  mult        $v1, $a0, $a2
    ctx->pc = 0x155678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15567c: 0x24421c60  addiu       $v0, $v0, 0x1C60
    ctx->pc = 0x15567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7264));
    // 0x155680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155684: 0x8049590  j           func_125640
    ctx->pc = 0x155684u;
    ctx->pc = 0x155688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155684u;
    // 0x155688: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x15568Cu;
}

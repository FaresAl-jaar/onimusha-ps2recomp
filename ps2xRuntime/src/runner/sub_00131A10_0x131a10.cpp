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

// Function: sub_00131A10
// Address: 0x131a10 - 0x131a24
void sub_00131A10_0x131a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131A10_0x131a10");
#endif

    ctx->pc = 0x131a10u;

    // 0x131a10: 0x2402022c  addiu       $v0, $zero, 0x22C
    ctx->pc = 0x131a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x131a14: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x131a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x131a18: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x131a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x131a1c: 0x804c6e4  j           func_131B90
    ctx->pc = 0x131A1Cu;
    ctx->pc = 0x131A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A1Cu;
    // 0x131a20: 0x24450094  addiu       $a1, $v0, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B90u;
    sub_00131B90_0x131b90(rdram, ctx, runtime); return;
    ctx->pc = 0x131A24u;
}

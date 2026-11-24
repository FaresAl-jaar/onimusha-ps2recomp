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

// Function: sub_00131A30
// Address: 0x131a30 - 0x131a50
void sub_00131A30_0x131a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131A30_0x131a30");
#endif

    ctx->pc = 0x131a30u;

    // 0x131a30: 0x2402022c  addiu       $v0, $zero, 0x22C
    ctx->pc = 0x131a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x131a34: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x131a34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a38: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x131a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x131a3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x131a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131a40: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x131a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a44: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x131a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x131a48: 0x804c6e4  j           func_131B90
    ctx->pc = 0x131A48u;
    ctx->pc = 0x131A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A48u;
    // 0x131a4c: 0x24450054  addiu       $a1, $v0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B90u;
    sub_00131B90_0x131b90(rdram, ctx, runtime); return;
    ctx->pc = 0x131A50u;
}

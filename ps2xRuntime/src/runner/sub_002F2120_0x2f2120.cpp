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

// Function: sub_002F2120
// Address: 0x2f2120 - 0x2f2134
void sub_002F2120_0x2f2120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2120_0x2f2120");
#endif

    ctx->pc = 0x2f2120u;

    // 0x2f2120: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f2120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2124: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f2124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f212c: 0x80f3e80  j           func_3CFA00
    ctx->pc = 0x2F212Cu;
    ctx->pc = 0x2F2130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F212Cu;
    // 0x2f2130: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CFA00u;
    sub_003CFA00_0x3cfa00(rdram, ctx, runtime); return;
    ctx->pc = 0x2F2134u;
}

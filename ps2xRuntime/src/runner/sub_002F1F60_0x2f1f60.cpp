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

// Function: sub_002F1F60
// Address: 0x2f1f60 - 0x2f1f78
void sub_002F1F60_0x2f1f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1F60_0x2f1f60");
#endif

    ctx->pc = 0x2f1f60u;

    // 0x2f1f60: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f1f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f64: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f1f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f1f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f70: 0x80eda54  j           func_3B6950
    ctx->pc = 0x2F1F70u;
    ctx->pc = 0x2F1F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F70u;
    // 0x2f1f74: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6950u;
    sub_003B6950_0x3b6950(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1F78u;
}

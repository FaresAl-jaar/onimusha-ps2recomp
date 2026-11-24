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

// Function: sub_002F1CB0
// Address: 0x2f1cb0 - 0x2f1cd0
void sub_002F1CB0_0x2f1cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1CB0_0x2f1cb0");
#endif

    ctx->pc = 0x2f1cb0u;

    // 0x2f1cb0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1cb4: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2f1cb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1cb8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1cbc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f1cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1cc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1cc4: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x2f1cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2f1cc8: 0x80e3170  j           func_38C5C0
    ctx->pc = 0x2F1CC8u;
    ctx->pc = 0x2F1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1CC8u;
    // 0x2f1ccc: 0x2409000b  addiu       $t1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C5C0u;
    sub_0038C5C0_0x38c5c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1CD0u;
}

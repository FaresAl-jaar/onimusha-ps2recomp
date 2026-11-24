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

// Function: sub_002F1B10
// Address: 0x2f1b10 - 0x2f1b28
void sub_002F1B10_0x2f1b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1B10_0x2f1b10");
#endif

    ctx->pc = 0x2f1b10u;

    // 0x2f1b10: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f1b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b14: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f1b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f1b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b20: 0x80c9fc4  j           func_327F10
    ctx->pc = 0x2F1B20u;
    ctx->pc = 0x2F1B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1B20u;
    // 0x2f1b24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327F10u;
    sub_00327F10_0x327f10(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1B28u;
}

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

// Function: sub_002F1860
// Address: 0x2f1860 - 0x2f1878
void sub_002F1860_0x2f1860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1860_0x2f1860");
#endif

    ctx->pc = 0x2f1860u;

    // 0x2f1860: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f1860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1864: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f1864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1868: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f186c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f186cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1870: 0x80d7570  j           func_35D5C0
    ctx->pc = 0x2F1870u;
    ctx->pc = 0x2F1874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1870u;
    // 0x2f1874: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5C0u;
    sub_0035D5C0_0x35d5c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1878u;
}

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

// Function: sub_002F1680
// Address: 0x2f1680 - 0x2f169c
void sub_002F1680_0x2f1680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1680_0x2f1680");
#endif

    ctx->pc = 0x2f1680u;

    // 0x2f1680: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f1680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1684: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f1684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f168c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f168cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1690: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2f1690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f1694: 0x80c1d04  j           func_307410
    ctx->pc = 0x2F1694u;
    ctx->pc = 0x2F1698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1694u;
    // 0x2f1698: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307410u;
    sub_00307410_0x307410(rdram, ctx, runtime); return;
    ctx->pc = 0x2F169Cu;
}

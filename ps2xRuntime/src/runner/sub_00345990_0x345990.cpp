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

// Function: sub_00345990
// Address: 0x345990 - 0x345998
void sub_00345990_0x345990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345990_0x345990");
#endif

    ctx->pc = 0x345990u;

    // 0x345990: 0x80d165c  j           func_345970
    ctx->pc = 0x345990u;
    ctx->pc = 0x345994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345990u;
    // 0x345994: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    sub_00345970_0x345970(rdram, ctx, runtime); return;
    ctx->pc = 0x345998u;
}

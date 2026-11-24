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

// Function: sub_003F1530
// Address: 0x3f1530 - 0x3f153c
void sub_003F1530_0x3f1530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1530_0x3f1530");
#endif

    ctx->pc = 0x3f1530u;

    // 0x3f1530: 0x72c3c  dsll32      $a1, $a3, 16
    ctx->pc = 0x3f1530u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 16));
    // 0x3f1534: 0x80d0548  j           func_341520
    ctx->pc = 0x3F1534u;
    ctx->pc = 0x3F1538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1534u;
    // 0x3f1538: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341520u;
    sub_00341520_0x341520(rdram, ctx, runtime); return;
    ctx->pc = 0x3F153Cu;
}

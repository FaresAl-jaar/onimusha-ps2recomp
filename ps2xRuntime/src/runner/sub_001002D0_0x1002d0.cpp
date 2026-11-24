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

// Function: sub_001002D0
// Address: 0x1002d0 - 0x1002dc
void sub_001002D0_0x1002d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001002D0_0x1002d0");
#endif

    ctx->pc = 0x1002d0u;

    // 0x1002d0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1002d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1002d4: 0x80400a0  j           func_100280
    ctx->pc = 0x1002D4u;
    ctx->pc = 0x1002D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002D4u;
    // 0x1002d8: 0x4203e  dsrl32      $a0, $a0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100280u;
    sub_00100280_0x100280(rdram, ctx, runtime); return;
    ctx->pc = 0x1002DCu;
}

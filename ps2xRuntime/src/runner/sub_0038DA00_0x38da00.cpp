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

// Function: sub_0038DA00
// Address: 0x38da00 - 0x38da10
void sub_0038DA00_0x38da00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DA00_0x38da00");
#endif

    ctx->pc = 0x38da00u;

    // 0x38da00: 0x8c850184  lw          $a1, 0x184($a0)
    ctx->pc = 0x38da00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x38da04: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x38da04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x38da08: 0x807cce0  j           func_1F3380
    ctx->pc = 0x38DA08u;
    ctx->pc = 0x38DA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DA08u;
    // 0x38da0c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    sub_001F3380_0x1f3380(rdram, ctx, runtime); return;
    ctx->pc = 0x38DA10u;
}

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

// Function: sub_00396120
// Address: 0x396120 - 0x396130
void sub_00396120_0x396120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396120_0x396120");
#endif

    ctx->pc = 0x396120u;

    // 0x396120: 0x90822ab0  lbu         $v0, 0x2AB0($a0)
    ctx->pc = 0x396120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10928)));
    // 0x396124: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x396124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x396128: 0x80a6188  j           func_298620
    ctx->pc = 0x396128u;
    ctx->pc = 0x39612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396128u;
    // 0x39612c: 0xa0822ab0  sb          $v0, 0x2AB0($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 10928), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    sub_00298620_0x298620(rdram, ctx, runtime); return;
    ctx->pc = 0x396130u;
}

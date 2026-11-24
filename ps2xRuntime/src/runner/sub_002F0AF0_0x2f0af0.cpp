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

// Function: sub_002F0AF0
// Address: 0x2f0af0 - 0x2f0af8
void sub_002F0AF0_0x2f0af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0AF0_0x2f0af0");
#endif

    ctx->pc = 0x2f0af0u;

    // 0x2f0af0: 0x80a4d3c  j           func_2934F0
    ctx->pc = 0x2F0AF0u;
    ctx->pc = 0x2934F0u;
    sub_002934F0_0x2934f0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F0AF8u;
}

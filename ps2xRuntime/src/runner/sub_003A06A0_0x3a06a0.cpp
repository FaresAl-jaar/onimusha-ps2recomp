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

// Function: sub_003A06A0
// Address: 0x3a06a0 - 0x3a06a8
void sub_003A06A0_0x3a06a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A06A0_0x3a06a0");
#endif

    ctx->pc = 0x3a06a0u;

    // 0x3a06a0: 0x80a6188  j           func_298620
    ctx->pc = 0x3A06A0u;
    ctx->pc = 0x298620u;
    sub_00298620_0x298620(rdram, ctx, runtime); return;
    ctx->pc = 0x3A06A8u;
}

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

// Function: sub_0038F6D0
// Address: 0x38f6d0 - 0x38f6d8
void sub_0038F6D0_0x38f6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F6D0_0x38f6d0");
#endif

    ctx->pc = 0x38f6d0u;

    // 0x38f6d0: 0x80a6188  j           func_298620
    ctx->pc = 0x38F6D0u;
    ctx->pc = 0x298620u;
    sub_00298620_0x298620(rdram, ctx, runtime); return;
    ctx->pc = 0x38F6D8u;
}

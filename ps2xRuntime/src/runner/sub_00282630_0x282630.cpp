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

// Function: sub_00282630
// Address: 0x282630 - 0x282638
void sub_00282630_0x282630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282630_0x282630");
#endif

    ctx->pc = 0x282630u;

    // 0x282630: 0x80a04b4  j           func_2812D0
    ctx->pc = 0x282630u;
    ctx->pc = 0x2812D0u;
    sub_002812D0_0x2812d0(rdram, ctx, runtime); return;
    ctx->pc = 0x282638u;
}

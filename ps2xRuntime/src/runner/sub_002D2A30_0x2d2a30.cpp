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

// Function: sub_002D2A30
// Address: 0x2d2a30 - 0x2d2a38
void sub_002D2A30_0x2d2a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2A30_0x2d2a30");
#endif

    ctx->pc = 0x2d2a30u;

    // 0x2d2a30: 0x80b4588  j           func_2D1620
    ctx->pc = 0x2D2A30u;
    ctx->pc = 0x2D1620u;
    sub_002D1620_0x2d1620(rdram, ctx, runtime); return;
    ctx->pc = 0x2D2A38u;
}

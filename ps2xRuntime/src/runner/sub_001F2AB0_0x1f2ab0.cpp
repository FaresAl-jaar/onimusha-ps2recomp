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

// Function: sub_001F2AB0
// Address: 0x1f2ab0 - 0x1f2ab8
void sub_001F2AB0_0x1f2ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2AB0_0x1f2ab0");
#endif

    ctx->pc = 0x1f2ab0u;

    // 0x1f2ab0: 0x807c9d0  j           func_1F2740
    ctx->pc = 0x1F2AB0u;
    ctx->pc = 0x1F2740u;
    sub_001F2740_0x1f2740(rdram, ctx, runtime); return;
    ctx->pc = 0x1F2AB8u;
}

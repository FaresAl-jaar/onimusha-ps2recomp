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

// Function: sub_0035E930
// Address: 0x35e930 - 0x35e938
void sub_0035E930_0x35e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E930_0x35e930");
#endif

    ctx->pc = 0x35e930u;

    // 0x35e930: 0x80a6038  j           func_2980E0
    ctx->pc = 0x35E930u;
    ctx->pc = 0x2980E0u;
    sub_002980E0_0x2980e0(rdram, ctx, runtime); return;
    ctx->pc = 0x35E938u;
}

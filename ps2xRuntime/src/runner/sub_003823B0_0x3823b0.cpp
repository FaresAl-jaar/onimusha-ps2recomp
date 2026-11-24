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

// Function: sub_003823B0
// Address: 0x3823b0 - 0x3823b8
void sub_003823B0_0x3823b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003823B0_0x3823b0");
#endif

    ctx->pc = 0x3823b0u;

    // 0x3823b0: 0x80e44f0  j           func_3913C0
    ctx->pc = 0x3823B0u;
    ctx->pc = 0x3913C0u;
    sub_003913C0_0x3913c0(rdram, ctx, runtime); return;
    ctx->pc = 0x3823B8u;
}

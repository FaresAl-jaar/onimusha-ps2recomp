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

// Function: sub_00182150
// Address: 0x182150 - 0x182158
void sub_00182150_0x182150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182150_0x182150");
#endif

    ctx->pc = 0x182150u;

    // 0x182150: 0x80600c0  j           func_180300
    ctx->pc = 0x182150u;
    ctx->pc = 0x180300u;
    sub_00180300_0x180300(rdram, ctx, runtime); return;
    ctx->pc = 0x182158u;
}

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

// Function: sub_002B8C90
// Address: 0x2b8c90 - 0x2b8c98
void sub_002B8C90_0x2b8c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8C90_0x2b8c90");
#endif

    ctx->pc = 0x2b8c90u;

    // 0x2b8c90: 0x80ae51c  j           func_2B9470
    ctx->pc = 0x2B8C90u;
    ctx->pc = 0x2B9470u;
    sub_002B9470_0x2b9470(rdram, ctx, runtime); return;
    ctx->pc = 0x2B8C98u;
}

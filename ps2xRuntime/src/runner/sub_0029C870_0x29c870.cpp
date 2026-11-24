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

// Function: sub_0029C870
// Address: 0x29c870 - 0x29c878
void sub_0029C870_0x29c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C870_0x29c870");
#endif

    ctx->pc = 0x29c870u;

    // 0x29c870: 0x80a71b4  j           func_29C6D0
    ctx->pc = 0x29C870u;
    ctx->pc = 0x29C6D0u;
    sub_0029C6D0_0x29c6d0(rdram, ctx, runtime); return;
    ctx->pc = 0x29C878u;
}

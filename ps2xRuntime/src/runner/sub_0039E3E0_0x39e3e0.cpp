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

// Function: sub_0039E3E0
// Address: 0x39e3e0 - 0x39e3e8
void sub_0039E3E0_0x39e3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E3E0_0x39e3e0");
#endif

    ctx->pc = 0x39e3e0u;

    // 0x39e3e0: 0x80a4e30  j           func_2938C0
    ctx->pc = 0x39E3E0u;
    ctx->pc = 0x2938C0u;
    sub_002938C0_0x2938c0(rdram, ctx, runtime); return;
    ctx->pc = 0x39E3E8u;
}

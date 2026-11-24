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

// Function: sub_00381D40
// Address: 0x381d40 - 0x381d48
void sub_00381D40_0x381d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381D40_0x381d40");
#endif

    ctx->pc = 0x381d40u;

    // 0x381d40: 0x80a5384  j           func_294E10
    ctx->pc = 0x381D40u;
    ctx->pc = 0x294E10u;
    sub_00294E10_0x294e10(rdram, ctx, runtime); return;
    ctx->pc = 0x381D48u;
}

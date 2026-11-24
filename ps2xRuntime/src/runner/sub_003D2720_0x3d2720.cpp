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

// Function: sub_003D2720
// Address: 0x3d2720 - 0x3d2728
void sub_003D2720_0x3d2720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2720_0x3d2720");
#endif

    ctx->pc = 0x3d2720u;

    // 0x3d2720: 0x80a6188  j           func_298620
    ctx->pc = 0x3D2720u;
    ctx->pc = 0x298620u;
    sub_00298620_0x298620(rdram, ctx, runtime); return;
    ctx->pc = 0x3D2728u;
}

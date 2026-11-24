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

// Function: sub_00275B50
// Address: 0x275b50 - 0x275b58
void sub_00275B50_0x275b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275B50_0x275b50");
#endif

    ctx->pc = 0x275b50u;

    // 0x275b50: 0x809d728  j           func_275CA0
    ctx->pc = 0x275B50u;
    ctx->pc = 0x275CA0u;
    sub_00275CA0_0x275ca0(rdram, ctx, runtime); return;
    ctx->pc = 0x275B58u;
}

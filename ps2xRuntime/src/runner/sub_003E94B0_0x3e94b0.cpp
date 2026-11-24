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

// Function: sub_003E94B0
// Address: 0x3e94b0 - 0x3e94b8
void sub_003E94B0_0x3e94b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E94B0_0x3e94b0");
#endif

    ctx->pc = 0x3e94b0u;

    // 0x3e94b0: 0x80fb6b4  j           func_3EDAD0
    ctx->pc = 0x3E94B0u;
    ctx->pc = 0x3EDAD0u;
    sub_003EDAD0_0x3edad0(rdram, ctx, runtime); return;
    ctx->pc = 0x3E94B8u;
}

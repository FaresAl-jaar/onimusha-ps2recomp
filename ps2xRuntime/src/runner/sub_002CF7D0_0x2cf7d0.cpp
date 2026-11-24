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

// Function: sub_002CF7D0
// Address: 0x2cf7d0 - 0x2cf7d8
void sub_002CF7D0_0x2cf7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF7D0_0x2cf7d0");
#endif

    ctx->pc = 0x2cf7d0u;

    // 0x2cf7d0: 0x809d9b4  j           func_2766D0
    ctx->pc = 0x2CF7D0u;
    ctx->pc = 0x2766D0u;
    sub_002766D0_0x2766d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2CF7D8u;
}

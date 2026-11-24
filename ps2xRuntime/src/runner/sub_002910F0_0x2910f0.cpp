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

// Function: sub_002910F0
// Address: 0x2910f0 - 0x2910f8
void sub_002910F0_0x2910f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002910F0_0x2910f0");
#endif

    ctx->pc = 0x2910f0u;

    // 0x2910f0: 0x80e2a1c  j           func_38A870
    ctx->pc = 0x2910F0u;
    ctx->pc = 0x38A870u;
    sub_0038A870_0x38a870(rdram, ctx, runtime); return;
    ctx->pc = 0x2910F8u;
}

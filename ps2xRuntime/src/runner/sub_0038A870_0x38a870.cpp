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

// Function: sub_0038A870
// Address: 0x38a870 - 0x38a878
void sub_0038A870_0x38a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A870_0x38a870");
#endif

    ctx->pc = 0x38a870u;

    // 0x38a870: 0x80e2934  j           func_38A4D0
    ctx->pc = 0x38A870u;
    ctx->pc = 0x38A4D0u;
    sub_0038A4D0_0x38a4d0(rdram, ctx, runtime); return;
    ctx->pc = 0x38A878u;
}

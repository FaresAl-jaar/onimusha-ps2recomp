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

// Function: sub_00291100
// Address: 0x291100 - 0x291108
void sub_00291100_0x291100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291100_0x291100");
#endif

    ctx->pc = 0x291100u;

    // 0x291100: 0x80e2c94  j           func_38B250
    ctx->pc = 0x291100u;
    ctx->pc = 0x38B250u;
    sub_0038B250_0x38b250(rdram, ctx, runtime); return;
    ctx->pc = 0x291108u;
}

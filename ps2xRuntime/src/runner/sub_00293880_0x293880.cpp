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

// Function: sub_00293880
// Address: 0x293880 - 0x293888
void sub_00293880_0x293880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293880_0x293880");
#endif

    ctx->pc = 0x293880u;

    // 0x293880: 0x80a6da0  j           func_29B680
    ctx->pc = 0x293880u;
    ctx->pc = 0x29B680u;
    sub_0029B680_0x29b680(rdram, ctx, runtime); return;
    ctx->pc = 0x293888u;
}

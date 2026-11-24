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

// Function: sub_003DB820
// Address: 0x3db820 - 0x3db828
void sub_003DB820_0x3db820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB820_0x3db820");
#endif

    ctx->pc = 0x3db820u;

    // 0x3db820: 0x80f6d80  j           func_3DB600
    ctx->pc = 0x3DB820u;
    ctx->pc = 0x3DB600u;
    sub_003DB600_0x3db600(rdram, ctx, runtime); return;
    ctx->pc = 0x3DB828u;
}

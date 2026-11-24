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

// Function: sub_00291D90
// Address: 0x291d90 - 0x291d98
void sub_00291D90_0x291d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291D90_0x291d90");
#endif

    ctx->pc = 0x291d90u;

    // 0x291d90: 0x80a47d8  j           func_291F60
    ctx->pc = 0x291D90u;
    ctx->pc = 0x291F60u;
    sub_00291F60_0x291f60(rdram, ctx, runtime); return;
    ctx->pc = 0x291D98u;
}

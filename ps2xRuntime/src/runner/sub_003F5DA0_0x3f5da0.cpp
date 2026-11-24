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

// Function: sub_003F5DA0
// Address: 0x3f5da0 - 0x3f5da8
void sub_003F5DA0_0x3f5da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5DA0_0x3f5da0");
#endif

    ctx->pc = 0x3f5da0u;

    // 0x3f5da0: 0x80fd478  j           func_3F51E0
    ctx->pc = 0x3F5DA0u;
    ctx->pc = 0x3F51E0u;
    sub_003F51E0_0x3f51e0(rdram, ctx, runtime); return;
    ctx->pc = 0x3F5DA8u;
}

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

// Function: sub_003F74E0
// Address: 0x3f74e0 - 0x3f74e8
void sub_003F74E0_0x3f74e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F74E0_0x3f74e0");
#endif

    ctx->pc = 0x3f74e0u;

    // 0x3f74e0: 0x80fdcf8  j           func_3F73E0
    ctx->pc = 0x3F74E0u;
    ctx->pc = 0x3F73E0u;
    sub_003F73E0_0x3f73e0(rdram, ctx, runtime); return;
    ctx->pc = 0x3F74E8u;
}

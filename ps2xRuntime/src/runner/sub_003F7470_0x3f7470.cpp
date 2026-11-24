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

// Function: sub_003F7470
// Address: 0x3f7470 - 0x3f7478
void sub_003F7470_0x3f7470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7470_0x3f7470");
#endif

    ctx->pc = 0x3f7470u;

    // 0x3f7470: 0x80fdcf4  j           func_3F73D0
    ctx->pc = 0x3F7470u;
    ctx->pc = 0x3F73D0u;
    sub_003F73D0_0x3f73d0(rdram, ctx, runtime); return;
    ctx->pc = 0x3F7478u;
}

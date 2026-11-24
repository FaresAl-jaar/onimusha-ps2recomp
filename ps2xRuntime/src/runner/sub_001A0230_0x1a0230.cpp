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

// Function: sub_001A0230
// Address: 0x1a0230 - 0x1a0238
void sub_001A0230_0x1a0230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0230_0x1a0230");
#endif

    ctx->pc = 0x1a0230u;

    // 0x1a0230: 0x8067f7c  j           func_19FDF0
    ctx->pc = 0x1A0230u;
    ctx->pc = 0x19FDF0u;
    sub_0019FDF0_0x19fdf0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0238u;
}

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

// Function: sub_003D2840
// Address: 0x3d2840 - 0x3d2848
void sub_003D2840_0x3d2840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2840_0x3d2840");
#endif

    ctx->pc = 0x3d2840u;

    // 0x3d2840: 0x80a4d18  j           func_293460
    ctx->pc = 0x3D2840u;
    ctx->pc = 0x293460u;
    sub_00293460_0x293460(rdram, ctx, runtime); return;
    ctx->pc = 0x3D2848u;
}

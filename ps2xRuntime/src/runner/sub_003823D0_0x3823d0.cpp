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

// Function: sub_003823D0
// Address: 0x3823d0 - 0x3823d8
void sub_003823D0_0x3823d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003823D0_0x3823d0");
#endif

    ctx->pc = 0x3823d0u;

    // 0x3823d0: 0x80ebb60  j           func_3AED80
    ctx->pc = 0x3823D0u;
    ctx->pc = 0x3AED80u;
    sub_003AED80_0x3aed80(rdram, ctx, runtime); return;
    ctx->pc = 0x3823D8u;
}

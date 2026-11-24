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

// Function: sub_003823C0
// Address: 0x3823c0 - 0x3823c8
void sub_003823C0_0x3823c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003823C0_0x3823c0");
#endif

    ctx->pc = 0x3823c0u;

    // 0x3823c0: 0x80e35a0  j           func_38D680
    ctx->pc = 0x3823C0u;
    ctx->pc = 0x38D680u;
    sub_0038D680_0x38d680(rdram, ctx, runtime); return;
    ctx->pc = 0x3823C8u;
}

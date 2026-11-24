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

// Function: sub_001680F0
// Address: 0x1680f0 - 0x1680f8
void sub_001680F0_0x1680f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001680F0_0x1680f0");
#endif

    ctx->pc = 0x1680f0u;

    // 0x1680f0: 0x805a040  j           func_168100
    ctx->pc = 0x1680F0u;
    ctx->pc = 0x168100u;
    sub_00168100_0x168100(rdram, ctx, runtime); return;
    ctx->pc = 0x1680F8u;
}

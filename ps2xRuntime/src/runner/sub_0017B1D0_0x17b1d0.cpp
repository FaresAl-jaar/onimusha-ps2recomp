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

// Function: sub_0017B1D0
// Address: 0x17b1d0 - 0x17b1d8
void sub_0017B1D0_0x17b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B1D0_0x17b1d0");
#endif

    ctx->pc = 0x17b1d0u;

    // 0x17b1d0: 0x805ea20  j           func_17A880
    ctx->pc = 0x17B1D0u;
    ctx->pc = 0x17A880u;
    sub_0017A880_0x17a880(rdram, ctx, runtime); return;
    ctx->pc = 0x17B1D8u;
}

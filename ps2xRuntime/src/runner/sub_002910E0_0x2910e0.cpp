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

// Function: sub_002910E0
// Address: 0x2910e0 - 0x2910e8
void sub_002910E0_0x2910e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002910E0_0x2910e0");
#endif

    ctx->pc = 0x2910e0u;

    // 0x2910e0: 0x80e1630  j           func_3858C0
    ctx->pc = 0x2910E0u;
    ctx->pc = 0x3858C0u;
    sub_003858C0_0x3858c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2910E8u;
}

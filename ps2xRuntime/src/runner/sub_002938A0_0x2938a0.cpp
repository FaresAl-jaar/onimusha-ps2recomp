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

// Function: sub_002938A0
// Address: 0x2938a0 - 0x2938a8
void sub_002938A0_0x2938a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002938A0_0x2938a0");
#endif

    ctx->pc = 0x2938a0u;

    // 0x2938a0: 0x80a638c  j           func_298E30
    ctx->pc = 0x2938A0u;
    ctx->pc = 0x298E30u;
    sub_00298E30_0x298e30(rdram, ctx, runtime); return;
    ctx->pc = 0x2938A8u;
}

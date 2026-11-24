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

// Function: sub_003ED230
// Address: 0x3ed230 - 0x3ed238
void sub_003ED230_0x3ed230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED230_0x3ed230");
#endif

    ctx->pc = 0x3ed230u;

    // 0x3ed230: 0x80a4e30  j           func_2938C0
    ctx->pc = 0x3ED230u;
    ctx->pc = 0x2938C0u;
    sub_002938C0_0x2938c0(rdram, ctx, runtime); return;
    ctx->pc = 0x3ED238u;
}

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

// Function: sub_002910A0
// Address: 0x2910a0 - 0x2910a8
void sub_002910A0_0x2910a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002910A0_0x2910a0");
#endif

    ctx->pc = 0x2910a0u;

    // 0x2910a0: 0x80e2a54  j           func_38A950
    ctx->pc = 0x2910A0u;
    ctx->pc = 0x38A950u;
    sub_0038A950_0x38a950(rdram, ctx, runtime); return;
    ctx->pc = 0x2910A8u;
}

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

// Function: sub_002910C0
// Address: 0x2910c0 - 0x2910c8
void sub_002910C0_0x2910c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002910C0_0x2910c0");
#endif

    ctx->pc = 0x2910c0u;

    // 0x2910c0: 0x80d1f3c  j           func_347CF0
    ctx->pc = 0x2910C0u;
    ctx->pc = 0x347CF0u;
    sub_00347CF0_0x347cf0(rdram, ctx, runtime); return;
    ctx->pc = 0x2910C8u;
}

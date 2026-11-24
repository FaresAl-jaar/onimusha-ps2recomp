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

// Function: sub_003A0690
// Address: 0x3a0690 - 0x3a0698
void sub_003A0690_0x3a0690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0690_0x3a0690");
#endif

    ctx->pc = 0x3a0690u;

    // 0x3a0690: 0x80a4a1c  j           func_292870
    ctx->pc = 0x3A0690u;
    ctx->pc = 0x292870u;
    sub_00292870_0x292870(rdram, ctx, runtime); return;
    ctx->pc = 0x3A0698u;
}

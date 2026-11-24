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

// Function: sub_00293B60
// Address: 0x293b60 - 0x293b68
void sub_00293B60_0x293b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293B60_0x293b60");
#endif

    ctx->pc = 0x293b60u;

    // 0x293b60: 0x80a6010  j           func_298040
    ctx->pc = 0x293B60u;
    ctx->pc = 0x298040u;
    sub_00298040_0x298040(rdram, ctx, runtime); return;
    ctx->pc = 0x293B68u;
}

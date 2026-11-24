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

// Function: sub_00293B80
// Address: 0x293b80 - 0x293b88
void sub_00293B80_0x293b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293B80_0x293b80");
#endif

    ctx->pc = 0x293b80u;

    // 0x293b80: 0x80a6018  j           func_298060
    ctx->pc = 0x293B80u;
    ctx->pc = 0x298060u;
    sub_00298060_0x298060(rdram, ctx, runtime); return;
    ctx->pc = 0x293B88u;
}

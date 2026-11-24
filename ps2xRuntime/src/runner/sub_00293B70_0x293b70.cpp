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

// Function: sub_00293B70
// Address: 0x293b70 - 0x293b78
void sub_00293B70_0x293b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293B70_0x293b70");
#endif

    ctx->pc = 0x293b70u;

    // 0x293b70: 0x80a6014  j           func_298050
    ctx->pc = 0x293B70u;
    ctx->pc = 0x298050u;
    sub_00298050_0x298050(rdram, ctx, runtime); return;
    ctx->pc = 0x293B78u;
}

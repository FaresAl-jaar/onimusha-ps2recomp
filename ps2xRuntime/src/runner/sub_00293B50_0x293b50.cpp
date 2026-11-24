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

// Function: sub_00293B50
// Address: 0x293b50 - 0x293b58
void sub_00293B50_0x293b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293B50_0x293b50");
#endif

    ctx->pc = 0x293b50u;

    // 0x293b50: 0x80a5fe4  j           func_297F90
    ctx->pc = 0x293B50u;
    ctx->pc = 0x297F90u;
    sub_00297F90_0x297f90(rdram, ctx, runtime); return;
    ctx->pc = 0x293B58u;
}

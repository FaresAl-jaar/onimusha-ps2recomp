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

// Function: sub_004D0FD0
// Address: 0x4d0fd0 - 0x4d0fd4
void sub_004D0FD0_0x4d0fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D0FD0_0x4d0fd0");
#endif

    ctx->pc = 0x4d0fd0u;

    // 0x4d0fd0: 0x0  nop
    ctx->pc = 0x4d0fd0u;
    // NOP
    ctx->pc = 0x4d0fd4u;
}

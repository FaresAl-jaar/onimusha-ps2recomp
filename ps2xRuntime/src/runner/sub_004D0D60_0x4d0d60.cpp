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

// Function: sub_004D0D60
// Address: 0x4d0d60 - 0x4d0d64
void sub_004D0D60_0x4d0d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D0D60_0x4d0d60");
#endif

    ctx->pc = 0x4d0d60u;

    // 0x4d0d60: 0x0  nop
    ctx->pc = 0x4d0d60u;
    // NOP
    ctx->pc = 0x4d0d64u;
}

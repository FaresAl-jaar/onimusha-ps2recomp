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

// Function: sub_004CF228
// Address: 0x4cf228 - 0x4cf22c
void sub_004CF228_0x4cf228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CF228_0x4cf228");
#endif

    ctx->pc = 0x4cf228u;

    // 0x4cf228: 0x0  nop
    ctx->pc = 0x4cf228u;
    // NOP
    ctx->pc = 0x4cf22cu;
}

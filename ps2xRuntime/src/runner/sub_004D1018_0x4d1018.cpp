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

// Function: sub_004D1018
// Address: 0x4d1018 - 0x4d101c
void sub_004D1018_0x4d1018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D1018_0x4d1018");
#endif

    ctx->pc = 0x4d1018u;

    // 0x4d1018: 0x0  nop
    ctx->pc = 0x4d1018u;
    // NOP
    ctx->pc = 0x4d101cu;
}

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

// Function: sub_004B8168
// Address: 0x4b8168 - 0x4b816c
void sub_004B8168_0x4b8168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8168_0x4b8168");
#endif

    ctx->pc = 0x4b8168u;

    // 0x4b8168: 0x0  nop
    ctx->pc = 0x4b8168u;
    // NOP
    ctx->pc = 0x4b816cu;
}

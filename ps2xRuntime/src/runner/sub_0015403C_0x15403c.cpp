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

// Function: sub_0015403C
// Address: 0x15403c - 0x154040
void sub_0015403C_0x15403c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015403C_0x15403c");
#endif

    ctx->pc = 0x15403cu;

    // 0x15403c: 0x0  nop
    ctx->pc = 0x15403cu;
    // NOP
    ctx->pc = 0x154040u;
}

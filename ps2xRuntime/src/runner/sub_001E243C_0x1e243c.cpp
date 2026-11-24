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

// Function: sub_001E243C
// Address: 0x1e243c - 0x1e2440
void sub_001E243C_0x1e243c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E243C_0x1e243c");
#endif

    ctx->pc = 0x1e243cu;

    // 0x1e243c: 0x0  nop
    ctx->pc = 0x1e243cu;
    // NOP
    ctx->pc = 0x1e2440u;
}

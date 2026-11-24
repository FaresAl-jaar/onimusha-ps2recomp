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

// Function: sub_00129A3C
// Address: 0x129a3c - 0x129a40
void sub_00129A3C_0x129a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129A3C_0x129a3c");
#endif

    ctx->pc = 0x129a3cu;

    // 0x129a3c: 0x0  nop
    ctx->pc = 0x129a3cu;
    // NOP
    ctx->pc = 0x129a40u;
}

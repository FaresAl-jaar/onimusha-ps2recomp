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

// Function: sub_00681E30
// Address: 0x681e30 - 0x681e38
void sub_00681E30_0x681e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00681E30_0x681e30");
#endif

    ctx->pc = 0x681e30u;

    // 0x681e30: 0x0  nop
    ctx->pc = 0x681e30u;
    // NOP
    // 0x681e34: 0x0  nop
    ctx->pc = 0x681e34u;
    // NOP
    ctx->pc = 0x681e38u;
}

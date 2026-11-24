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

// Function: sub_0014A438
// Address: 0x14a438 - 0x14a43c
void sub_0014A438_0x14a438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A438_0x14a438");
#endif

    ctx->pc = 0x14a438u;

    // 0x14a438: 0x0  nop
    ctx->pc = 0x14a438u;
    // NOP
    ctx->pc = 0x14a43cu;
}

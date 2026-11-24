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

// Function: sub_0037004C
// Address: 0x37004c - 0x370050
void sub_0037004C_0x37004c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037004C_0x37004c");
#endif

    ctx->pc = 0x37004cu;

    // 0x37004c: 0x0  nop
    ctx->pc = 0x37004cu;
    // NOP
    ctx->pc = 0x370050u;
}

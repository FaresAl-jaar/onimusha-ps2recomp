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

// Function: sub_004BC358
// Address: 0x4bc358 - 0x4bc35c
void sub_004BC358_0x4bc358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BC358_0x4bc358");
#endif

    ctx->pc = 0x4bc358u;

    // 0x4bc358: 0x0  nop
    ctx->pc = 0x4bc358u;
    // NOP
    ctx->pc = 0x4bc35cu;
}

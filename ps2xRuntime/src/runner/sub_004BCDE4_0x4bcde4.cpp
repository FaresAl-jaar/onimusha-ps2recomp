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

// Function: sub_004BCDE4
// Address: 0x4bcde4 - 0x4bcde8
void sub_004BCDE4_0x4bcde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BCDE4_0x4bcde4");
#endif

    ctx->pc = 0x4bcde4u;

    // 0x4bcde4: 0x0  nop
    ctx->pc = 0x4bcde4u;
    // NOP
    ctx->pc = 0x4bcde8u;
}

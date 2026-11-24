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

// Function: sub_001088C0
// Address: 0x1088c0 - 0x1088c8
void sub_001088C0_0x1088c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001088C0_0x1088c0");
#endif

    ctx->pc = 0x1088c0u;

    // 0x1088c0: 0x0  nop
    ctx->pc = 0x1088c0u;
    // NOP
    // 0x1088c4: 0x0  nop
    ctx->pc = 0x1088c4u;
    // NOP
    ctx->pc = 0x1088c8u;
}

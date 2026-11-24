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

// Function: sub_004D6518
// Address: 0x4d6518 - 0x4d6528
void sub_004D6518_0x4d6518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D6518_0x4d6518");
#endif

    ctx->pc = 0x4d6518u;

    // 0x4d6518: 0x0  nop
    ctx->pc = 0x4d6518u;
    // NOP
    // 0x4d651c: 0x0  nop
    ctx->pc = 0x4d651cu;
    // NOP
    // 0x4d6520: 0x0  nop
    ctx->pc = 0x4d6520u;
    // NOP
    // 0x4d6524: 0x0  nop
    ctx->pc = 0x4d6524u;
    // NOP
    ctx->pc = 0x4d6528u;
}

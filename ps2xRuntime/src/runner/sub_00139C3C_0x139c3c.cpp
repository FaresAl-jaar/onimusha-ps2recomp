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

// Function: sub_00139C3C
// Address: 0x139c3c - 0x139c40
void sub_00139C3C_0x139c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139C3C_0x139c3c");
#endif

    ctx->pc = 0x139c3cu;

    // 0x139c3c: 0x0  nop
    ctx->pc = 0x139c3cu;
    // NOP
    ctx->pc = 0x139c40u;
}

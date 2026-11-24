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

// Function: sub_004D1100
// Address: 0x4d1100 - 0x4d1110
void sub_004D1100_0x4d1100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D1100_0x4d1100");
#endif

    ctx->pc = 0x4d1100u;

    // 0x4d1100: 0x0  nop
    ctx->pc = 0x4d1100u;
    // NOP
    // 0x4d1104: 0x0  nop
    ctx->pc = 0x4d1104u;
    // NOP
    // 0x4d1108: 0x0  nop
    ctx->pc = 0x4d1108u;
    // NOP
    // 0x4d110c: 0x0  nop
    ctx->pc = 0x4d110cu;
    // NOP
    ctx->pc = 0x4d1110u;
}

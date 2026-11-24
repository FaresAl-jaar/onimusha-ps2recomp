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

// Function: sub_004BCDEC
// Address: 0x4bcdec - 0x4bcdf0
void sub_004BCDEC_0x4bcdec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BCDEC_0x4bcdec");
#endif

    ctx->pc = 0x4bcdecu;

    // 0x4bcdec: 0x0  nop
    ctx->pc = 0x4bcdecu;
    // NOP
    ctx->pc = 0x4bcdf0u;
}

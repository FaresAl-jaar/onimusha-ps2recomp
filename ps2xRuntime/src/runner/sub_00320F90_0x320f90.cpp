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

// Function: sub_00320F90
// Address: 0x320f90 - 0x320f98
void sub_00320F90_0x320f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320F90_0x320f90");
#endif

    ctx->pc = 0x320f90u;

    // 0x320f90: 0x80c82e0  j           func_320B80
    ctx->pc = 0x320F90u;
    ctx->pc = 0x320B80u;
    sub_00320B80_0x320b80(rdram, ctx, runtime); return;
    ctx->pc = 0x320F98u;
}

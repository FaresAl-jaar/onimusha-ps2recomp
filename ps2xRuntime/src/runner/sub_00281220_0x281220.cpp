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

// Function: sub_00281220
// Address: 0x281220 - 0x281228
void sub_00281220_0x281220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281220_0x281220");
#endif

    ctx->pc = 0x281220u;

    // 0x281220: 0x80a0458  j           func_281160
    ctx->pc = 0x281220u;
    ctx->pc = 0x281160u;
    sub_00281160_0x281160(rdram, ctx, runtime); return;
    ctx->pc = 0x281228u;
}

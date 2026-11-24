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

// Function: sub_0037C220
// Address: 0x37c220 - 0x37c228
void sub_0037C220_0x37c220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C220_0x37c220");
#endif

    ctx->pc = 0x37c220u;

    // 0x37c220: 0x80a6038  j           func_2980E0
    ctx->pc = 0x37C220u;
    ctx->pc = 0x2980E0u;
    sub_002980E0_0x2980e0(rdram, ctx, runtime); return;
    ctx->pc = 0x37C228u;
}

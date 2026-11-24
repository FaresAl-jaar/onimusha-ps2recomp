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

// Function: sub_00263170
// Address: 0x263170 - 0x263178
void sub_00263170_0x263170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263170_0x263170");
#endif

    ctx->pc = 0x263170u;

    // 0x263170: 0x80a6010  j           func_298040
    ctx->pc = 0x263170u;
    ctx->pc = 0x298040u;
    sub_00298040_0x298040(rdram, ctx, runtime); return;
    ctx->pc = 0x263178u;
}

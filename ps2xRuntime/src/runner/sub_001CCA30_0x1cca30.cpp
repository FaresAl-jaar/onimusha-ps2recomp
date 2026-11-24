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

// Function: sub_001CCA30
// Address: 0x1cca30 - 0x1cca38
void sub_001CCA30_0x1cca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCA30_0x1cca30");
#endif

    ctx->pc = 0x1cca30u;

    // 0x1cca30: 0x80600c0  j           func_180300
    ctx->pc = 0x1CCA30u;
    ctx->pc = 0x180300u;
    sub_00180300_0x180300(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCA38u;
}

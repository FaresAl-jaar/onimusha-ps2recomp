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

// Function: sub_00263180
// Address: 0x263180 - 0x263188
void sub_00263180_0x263180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263180_0x263180");
#endif

    ctx->pc = 0x263180u;

    // 0x263180: 0x80a6014  j           func_298050
    ctx->pc = 0x263180u;
    ctx->pc = 0x298050u;
    sub_00298050_0x298050(rdram, ctx, runtime); return;
    ctx->pc = 0x263188u;
}

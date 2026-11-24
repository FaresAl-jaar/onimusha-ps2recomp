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

// Function: sub_002E6ED0
// Address: 0x2e6ed0 - 0x2e6ed8
void sub_002E6ED0_0x2e6ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6ED0_0x2e6ed0");
#endif

    ctx->pc = 0x2e6ed0u;

    // 0x2e6ed0: 0x80a639c  j           func_298E70
    ctx->pc = 0x2E6ED0u;
    ctx->pc = 0x298E70u;
    sub_00298E70_0x298e70(rdram, ctx, runtime); return;
    ctx->pc = 0x2E6ED8u;
}

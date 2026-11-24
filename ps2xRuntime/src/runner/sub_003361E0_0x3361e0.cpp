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

// Function: sub_003361E0
// Address: 0x3361e0 - 0x3361e8
void sub_003361E0_0x3361e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003361E0_0x3361e0");
#endif

    ctx->pc = 0x3361e0u;

    // 0x3361e0: 0x80cd8bc  j           func_3362F0
    ctx->pc = 0x3361E0u;
    ctx->pc = 0x3362F0u;
    sub_003362F0_0x3362f0(rdram, ctx, runtime); return;
    ctx->pc = 0x3361E8u;
}

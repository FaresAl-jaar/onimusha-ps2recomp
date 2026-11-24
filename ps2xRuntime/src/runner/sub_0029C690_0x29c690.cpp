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

// Function: sub_0029C690
// Address: 0x29c690 - 0x29c698
void sub_0029C690_0x29c690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C690_0x29c690");
#endif

    ctx->pc = 0x29c690u;

    // 0x29c690: 0x80a6de4  j           func_29B790
    ctx->pc = 0x29C690u;
    ctx->pc = 0x29B790u;
    sub_0029B790_0x29b790(rdram, ctx, runtime); return;
    ctx->pc = 0x29C698u;
}

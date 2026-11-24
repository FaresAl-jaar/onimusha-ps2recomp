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

// Function: sub_00291350
// Address: 0x291350 - 0x291358
void sub_00291350_0x291350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291350_0x291350");
#endif

    ctx->pc = 0x291350u;

    // 0x291350: 0x80a4460  j           func_291180
    ctx->pc = 0x291350u;
    ctx->pc = 0x291180u;
    sub_00291180_0x291180(rdram, ctx, runtime); return;
    ctx->pc = 0x291358u;
}

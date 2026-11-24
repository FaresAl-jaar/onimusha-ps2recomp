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

// Function: sub_00118698
// Address: 0x118698 - 0x1186a0
void sub_00118698_0x118698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118698_0x118698");
#endif

    ctx->pc = 0x118698u;

    // 0x118698: 0x8045ebe  j           func_117AF8
    ctx->pc = 0x118698u;
    ctx->pc = 0x117AF8u;
    sub_00117AF8_0x117af8(rdram, ctx, runtime); return;
    ctx->pc = 0x1186A0u;
}

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

// Function: sub_0037B270
// Address: 0x37b270 - 0x37b278
void sub_0037B270_0x37b270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B270_0x37b270");
#endif

    ctx->pc = 0x37b270u;

    // 0x37b270: 0x80a4d18  j           func_293460
    ctx->pc = 0x37B270u;
    ctx->pc = 0x293460u;
    sub_00293460_0x293460(rdram, ctx, runtime); return;
    ctx->pc = 0x37B278u;
}

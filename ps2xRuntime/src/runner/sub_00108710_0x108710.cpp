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

// Function: sub_00108710
// Address: 0x108710 - 0x108718
void sub_00108710_0x108710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108710_0x108710");
#endif

    ctx->pc = 0x108710u;

    // 0x108710: 0x8042190  j           func_108640
    ctx->pc = 0x108710u;
    ctx->pc = 0x108640u;
    sub_00108640_0x108640(rdram, ctx, runtime); return;
    ctx->pc = 0x108718u;
}

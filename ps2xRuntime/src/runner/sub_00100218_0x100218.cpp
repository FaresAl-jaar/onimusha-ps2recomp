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

// Function: sub_00100218
// Address: 0x100218 - 0x100220
void sub_00100218_0x100218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100218_0x100218");
#endif

    ctx->pc = 0x100218u;

    // 0x100218: 0x80461d6  j           func_118758
    ctx->pc = 0x100218u;
    ctx->pc = 0x118758u;
    sub_00118758_0x118758(rdram, ctx, runtime); return;
    ctx->pc = 0x100220u;
}

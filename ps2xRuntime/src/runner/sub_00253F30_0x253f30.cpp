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

// Function: sub_00253F30
// Address: 0x253f30 - 0x253f38
void sub_00253F30_0x253f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253F30_0x253f30");
#endif

    ctx->pc = 0x253f30u;

    // 0x253f30: 0x80a46f4  j           func_291BD0
    ctx->pc = 0x253F30u;
    ctx->pc = 0x291BD0u;
    sub_00291BD0_0x291bd0(rdram, ctx, runtime); return;
    ctx->pc = 0x253F38u;
}

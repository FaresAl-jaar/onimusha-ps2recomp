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

// Function: sub_003B8080
// Address: 0x3b8080 - 0x3b8088
void sub_003B8080_0x3b8080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8080_0x3b8080");
#endif

    ctx->pc = 0x3b8080u;

    // 0x3b8080: 0x80ee024  j           func_3B8090
    ctx->pc = 0x3B8080u;
    ctx->pc = 0x3B8084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8080u;
    // 0x3b8084: 0xa0802b48  sb          $zero, 0x2B48($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 11080), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8090u;
    sub_003B8090_0x3b8090(rdram, ctx, runtime); return;
    ctx->pc = 0x3B8088u;
}

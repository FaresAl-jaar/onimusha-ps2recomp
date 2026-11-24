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

// Function: sub_0018293C
// Address: 0x18293c - 0x182940
void sub_0018293C_0x18293c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018293C_0x18293c");
#endif

    ctx->pc = 0x18293cu;

    // 0x18293c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x18293cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x182940u;
}

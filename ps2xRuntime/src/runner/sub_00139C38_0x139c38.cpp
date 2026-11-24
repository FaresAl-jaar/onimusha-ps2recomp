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

// Function: sub_00139C38
// Address: 0x139c38 - 0x139c3c
void sub_00139C38_0x139c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139C38_0x139c38");
#endif

    ctx->pc = 0x139c38u;

    // 0x139c38: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x139c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x139c3cu;
}

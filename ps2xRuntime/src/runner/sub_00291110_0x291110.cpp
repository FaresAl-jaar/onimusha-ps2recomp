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

// Function: sub_00291110
// Address: 0x291110 - 0x291118
void sub_00291110_0x291110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291110_0x291110");
#endif

    ctx->pc = 0x291110u;

    // 0x291110: 0x80dd828  j           func_3760A0
    ctx->pc = 0x291110u;
    ctx->pc = 0x3760A0u;
    sub_003760A0_0x3760a0(rdram, ctx, runtime); return;
    ctx->pc = 0x291118u;
}

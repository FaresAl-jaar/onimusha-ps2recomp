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

// Function: sub_00131FD0
// Address: 0x131fd0 - 0x131fd8
void sub_00131FD0_0x131fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131FD0_0x131fd0");
#endif

    ctx->pc = 0x131fd0u;

    // 0x131fd0: 0x804c048  j           func_130120
    ctx->pc = 0x131FD0u;
    ctx->pc = 0x131FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131FD0u;
    // 0x131fd4: 0x24840620  addiu       $a0, $a0, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130120u;
    sub_00130120_0x130120(rdram, ctx, runtime); return;
    ctx->pc = 0x131FD8u;
}

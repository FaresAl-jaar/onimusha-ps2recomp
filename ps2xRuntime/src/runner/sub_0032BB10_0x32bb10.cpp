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

// Function: sub_0032BB10
// Address: 0x32bb10 - 0x32bb20
void sub_0032BB10_0x32bb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BB10_0x32bb10");
#endif

    ctx->pc = 0x32bb10u;

    // 0x32bb10: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x32bb10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x32bb14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bb18: 0x80ca9fc  j           func_32A7F0
    ctx->pc = 0x32BB18u;
    ctx->pc = 0x32BB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB18u;
    // 0x32bb1c: 0x24840fa0  addiu       $a0, $a0, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A7F0u;
    sub_0032A7F0_0x32a7f0(rdram, ctx, runtime); return;
    ctx->pc = 0x32BB20u;
}

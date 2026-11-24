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

// Function: sub_002763B0
// Address: 0x2763b0 - 0x2763bc
void sub_002763B0_0x2763b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002763B0_0x2763b0");
#endif

    ctx->pc = 0x2763b0u;

    // 0x2763b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2763b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2763b4: 0x80a2258  j           func_288960
    ctx->pc = 0x2763B4u;
    ctx->pc = 0x2763B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2763B4u;
    // 0x2763b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288960u;
    sub_00288960_0x288960(rdram, ctx, runtime); return;
    ctx->pc = 0x2763BCu;
}

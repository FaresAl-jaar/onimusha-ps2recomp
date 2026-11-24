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

// Function: sub_003B5B10
// Address: 0x3b5b10 - 0x3b5b20
void sub_003B5B10_0x3b5b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5B10_0x3b5b10");
#endif

    ctx->pc = 0x3b5b10u;

    // 0x3b5b10: 0x27848c90  addiu       $a0, $gp, -0x7370
    ctx->pc = 0x3b5b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
    // 0x3b5b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b5b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5b18: 0x8049590  j           func_125640
    ctx->pc = 0x3B5B18u;
    ctx->pc = 0x3B5B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5B18u;
    // 0x3b5b1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x3B5B20u;
}

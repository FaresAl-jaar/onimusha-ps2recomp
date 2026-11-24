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

// Function: sub_0032BD80
// Address: 0x32bd80 - 0x32bd94
void sub_0032BD80_0x32bd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BD80_0x32bd80");
#endif

    ctx->pc = 0x32bd80u;

    // 0x32bd80: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x32bd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x32bd84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32bd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd88: 0x24841150  addiu       $a0, $a0, 0x1150
    ctx->pc = 0x32bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4432));
    // 0x32bd8c: 0x8049590  j           func_125640
    ctx->pc = 0x32BD8Cu;
    ctx->pc = 0x32BD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD8Cu;
    // 0x32bd90: 0x240600b8  addiu       $a2, $zero, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x32BD94u;
}

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

// Function: sub_002CD370
// Address: 0x2cd370 - 0x2cd37c
void sub_002CD370_0x2cd370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD370_0x2cd370");
#endif

    ctx->pc = 0x2cd370u;

    // 0x2cd370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd374: 0x8049590  j           func_125640
    ctx->pc = 0x2CD374u;
    ctx->pc = 0x2CD378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD374u;
    // 0x2cd378: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x2CD37Cu;
}

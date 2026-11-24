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

// Function: sub_0014BB60
// Address: 0x14bb60 - 0x14bb7c
void sub_0014BB60_0x14bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BB60_0x14bb60");
#endif

    ctx->pc = 0x14bb60u;

    // 0x14bb60: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x14bb60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb64: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x14bb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb68: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x14bb68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x14bb6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14bb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb70: 0x24842620  addiu       $a0, $a0, 0x2620
    ctx->pc = 0x14bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    // 0x14bb74: 0x80535dc  j           func_14D770
    ctx->pc = 0x14BB74u;
    ctx->pc = 0x14BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BB74u;
    // 0x14bb78: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D770u;
    sub_0014D770_0x14d770(rdram, ctx, runtime); return;
    ctx->pc = 0x14BB7Cu;
}

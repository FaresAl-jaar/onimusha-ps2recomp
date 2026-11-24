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

// Function: sub_0014B350
// Address: 0x14b350 - 0x14b36c
void sub_0014B350_0x14b350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B350_0x14b350");
#endif

    ctx->pc = 0x14b350u;

    // 0x14b350: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x14b350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b354: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x14b354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b358: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x14b358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x14b35c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14b35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b360: 0x24842620  addiu       $a0, $a0, 0x2620
    ctx->pc = 0x14b360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    // 0x14b364: 0x80535dc  j           func_14D770
    ctx->pc = 0x14B364u;
    ctx->pc = 0x14B368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B364u;
    // 0x14b368: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D770u;
    sub_0014D770_0x14d770(rdram, ctx, runtime); return;
    ctx->pc = 0x14B36Cu;
}

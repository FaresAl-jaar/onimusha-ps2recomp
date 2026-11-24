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

// Function: sub_002F1880
// Address: 0x2f1880 - 0x2f18a0
void sub_002F1880_0x2f1880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1880_0x2f1880");
#endif

    ctx->pc = 0x2f1880u;

    // 0x2f1880: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1884: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f1884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1888: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f188c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f188cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1894: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x2f1894u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f1898: 0x80d893c  j           func_3624F0
    ctx->pc = 0x2F1898u;
    ctx->pc = 0x2F189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1898u;
    // 0x2f189c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3624F0u;
    sub_003624F0_0x3624f0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F18A0u;
}

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

// Function: sub_002F0D00
// Address: 0x2f0d00 - 0x2f0d20
void sub_002F0D00_0x2f0d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0D00_0x2f0d00");
#endif

    ctx->pc = 0x2f0d00u;

    // 0x2f0d00: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f0d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d04: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f0d04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d08: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f0d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d0c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f0d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f0d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0d14: 0x2409003c  addiu       $t1, $zero, 0x3C
    ctx->pc = 0x2f0d14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2f0d18: 0x80d1404  j           func_345010
    ctx->pc = 0x2F0D18u;
    ctx->pc = 0x2F0D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0D18u;
    // 0x2f0d1c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345010u;
    sub_00345010_0x345010(rdram, ctx, runtime); return;
    ctx->pc = 0x2F0D20u;
}

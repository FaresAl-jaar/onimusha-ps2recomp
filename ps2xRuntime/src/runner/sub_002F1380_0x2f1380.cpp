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

// Function: sub_002F1380
// Address: 0x2f1380 - 0x2f13a0
void sub_002F1380_0x2f1380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1380_0x2f1380");
#endif

    ctx->pc = 0x2f1380u;

    // 0x2f1380: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1384: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f1384u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1388: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f138c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f138cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1390: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f1390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1394: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f1394u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1398: 0x80c00cc  j           func_300330
    ctx->pc = 0x2F1398u;
    ctx->pc = 0x2F139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1398u;
    // 0x2f139c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300330u;
    sub_00300330_0x300330(rdram, ctx, runtime); return;
    ctx->pc = 0x2F13A0u;
}

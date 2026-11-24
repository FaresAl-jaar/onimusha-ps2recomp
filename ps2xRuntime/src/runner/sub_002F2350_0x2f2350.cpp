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

// Function: sub_002F2350
// Address: 0x2f2350 - 0x2f237c
void sub_002F2350_0x2f2350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2350_0x2f2350");
#endif

    ctx->pc = 0x2f2350u;

    // 0x2f2350: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f2350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2354: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2f2354u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2358: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f2358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f235c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f235cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2360: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2f2360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2364: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x2f2364u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2368: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2f2368u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f236c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f236cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2374: 0x80fd1c8  j           func_3F4720
    ctx->pc = 0x2F2374u;
    ctx->pc = 0x2F2378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2374u;
    // 0x2f2378: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F4720u;
    sub_003F4720_0x3f4720(rdram, ctx, runtime); return;
    ctx->pc = 0x2F237Cu;
}

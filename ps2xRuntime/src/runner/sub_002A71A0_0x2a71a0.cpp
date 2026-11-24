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

// Function: sub_002A71A0
// Address: 0x2a71a0 - 0x2a71c0
void sub_002A71A0_0x2a71a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A71A0_0x2a71a0");
#endif

    ctx->pc = 0x2a71a0u;

    // 0x2a71a0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2a71a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a71a4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2a71a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a71a8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a71a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a71ac: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2a71acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a71b0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a71b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a71b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a71b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a71b8: 0x80c20c4  j           func_308310
    ctx->pc = 0x2A71B8u;
    ctx->pc = 0x2A71BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A71B8u;
    // 0x2a71bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308310u;
    sub_00308310_0x308310(rdram, ctx, runtime); return;
    ctx->pc = 0x2A71C0u;
}

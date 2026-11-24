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

// Function: sub_002A6820
// Address: 0x2a6820 - 0x2a6848
void sub_002A6820_0x2a6820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6820_0x2a6820");
#endif

    ctx->pc = 0x2a6820u;

    // 0x2a6820: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2a6820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6824: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2a6824u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6828: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a6828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a682c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a682cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6830: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2a6830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6834: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2a6834u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6838: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2a6838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a683c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2a683cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6840: 0x80b7b00  j           func_2DEC00
    ctx->pc = 0x2A6840u;
    ctx->pc = 0x2A6844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6840u;
    // 0x2a6844: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEC00u;
    sub_002DEC00_0x2dec00(rdram, ctx, runtime); return;
    ctx->pc = 0x2A6848u;
}

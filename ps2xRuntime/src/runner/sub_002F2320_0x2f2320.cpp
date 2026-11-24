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

// Function: sub_002F2320
// Address: 0x2f2320 - 0x2f2344
void sub_002F2320_0x2f2320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2320_0x2f2320");
#endif

    ctx->pc = 0x2f2320u;

    // 0x2f2320: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2f2320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2324: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2f2324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2328: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f2328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f232c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2f232cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2330: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2f2330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f2334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2338: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f2338u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f233c: 0x80f7b00  j           func_3DEC00
    ctx->pc = 0x2F233Cu;
    ctx->pc = 0x2F2340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F233Cu;
    // 0x2f2340: 0x24090006  addiu       $t1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DEC00u;
    sub_003DEC00_0x3dec00(rdram, ctx, runtime); return;
    ctx->pc = 0x2F2344u;
}

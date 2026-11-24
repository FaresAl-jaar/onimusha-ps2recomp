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

// Function: sub_002F0C50
// Address: 0x2f0c50 - 0x2f0c70
void sub_002F0C50_0x2f0c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0C50_0x2f0c50");
#endif

    ctx->pc = 0x2f0c50u;

    // 0x2f0c50: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f0c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c54: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f0c54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c58: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f0c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c5c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f0c5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f0c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0c64: 0x24090021  addiu       $t1, $zero, 0x21
    ctx->pc = 0x2f0c64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2f0c68: 0x80cfe10  j           func_33F840
    ctx->pc = 0x2F0C68u;
    ctx->pc = 0x2F0C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0C68u;
    // 0x2f0c6c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F840u;
    sub_0033F840_0x33f840(rdram, ctx, runtime); return;
    ctx->pc = 0x2F0C70u;
}

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

// Function: sub_002F1560
// Address: 0x2f1560 - 0x2f1578
void sub_002F1560_0x2f1560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1560_0x2f1560");
#endif

    ctx->pc = 0x2f1560u;

    // 0x2f1560: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1564: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f1564u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1568: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f156c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f156cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1570: 0x80e07cc  j           func_381F30
    ctx->pc = 0x2F1570u;
    ctx->pc = 0x2F1574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1570u;
    // 0x2f1574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381F30u;
    sub_00381F30_0x381f30(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1578u;
}

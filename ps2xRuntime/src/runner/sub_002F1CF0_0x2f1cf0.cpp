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

// Function: sub_002F1CF0
// Address: 0x2f1cf0 - 0x2f1d14
void sub_002F1CF0_0x2f1cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1CF0_0x2f1cf0");
#endif

    ctx->pc = 0x2f1cf0u;

    // 0x2f1cf0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2f1cf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1cf4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2f1cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1cf8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1cfc: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2f1cfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d00: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2f1d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d08: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f1d08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d0c: 0x80e4108  j           func_390420
    ctx->pc = 0x2F1D0Cu;
    ctx->pc = 0x2F1D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1D0Cu;
    // 0x2f1d10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390420u;
    sub_00390420_0x390420(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1D14u;
}

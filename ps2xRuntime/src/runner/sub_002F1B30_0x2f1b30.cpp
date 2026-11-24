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

// Function: sub_002F1B30
// Address: 0x2f1b30 - 0x2f1b5c
void sub_002F1B30_0x2f1b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1B30_0x2f1b30");
#endif

    ctx->pc = 0x2f1b30u;

    // 0x2f1b30: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b34: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2f1b34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b38: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f1b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b3c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b40: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2f1b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b44: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2f1b44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b48: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2f1b48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b4c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f1b4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b54: 0x80cef94  j           func_33BE50
    ctx->pc = 0x2F1B54u;
    ctx->pc = 0x2F1B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1B54u;
    // 0x2f1b58: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BE50u;
    sub_0033BE50_0x33be50(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1B5Cu;
}

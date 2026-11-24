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

// Function: sub_002F1BC0
// Address: 0x2f1bc0 - 0x2f1bdc
void sub_002F1BC0_0x2f1bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1BC0_0x2f1bc0");
#endif

    ctx->pc = 0x2f1bc0u;

    // 0x2f1bc0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bc4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2f1bc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bc8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bcc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f1bccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bd4: 0x80ddae8  j           func_376BA0
    ctx->pc = 0x2F1BD4u;
    ctx->pc = 0x2F1BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1BD4u;
    // 0x2f1bd8: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376BA0u;
    sub_00376BA0_0x376ba0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1BDCu;
}

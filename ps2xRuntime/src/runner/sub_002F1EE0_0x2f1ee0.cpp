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

// Function: sub_002F1EE0
// Address: 0x2f1ee0 - 0x2f1f00
void sub_002F1EE0_0x2f1ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1EE0_0x2f1ee0");
#endif

    ctx->pc = 0x2f1ee0u;

    // 0x2f1ee0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f1ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ee4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f1ee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ee8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1eec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f1eecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ef4: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2f1ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f1ef8: 0x80ec464  j           func_3B1190
    ctx->pc = 0x2F1EF8u;
    ctx->pc = 0x2F1EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1EF8u;
    // 0x2f1efc: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1190u;
    sub_003B1190_0x3b1190(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1F00u;
}

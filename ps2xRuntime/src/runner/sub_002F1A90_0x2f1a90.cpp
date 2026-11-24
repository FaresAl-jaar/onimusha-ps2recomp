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

// Function: sub_002F1A90
// Address: 0x2f1a90 - 0x2f1aa8
void sub_002F1A90_0x2f1a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1A90_0x2f1a90");
#endif

    ctx->pc = 0x2f1a90u;

    // 0x2f1a90: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f1a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a94: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f1a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1a9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f1a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1aa0: 0x80c3390  j           func_30CE40
    ctx->pc = 0x2F1AA0u;
    ctx->pc = 0x2F1AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1AA0u;
    // 0x2f1aa4: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CE40u;
    sub_0030CE40_0x30ce40(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1AA8u;
}

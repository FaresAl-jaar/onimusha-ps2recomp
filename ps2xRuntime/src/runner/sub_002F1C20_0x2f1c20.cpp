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

// Function: sub_002F1C20
// Address: 0x2f1c20 - 0x2f1c44
void sub_002F1C20_0x2f1c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1C20_0x2f1c20");
#endif

    ctx->pc = 0x2f1c20u;

    // 0x2f1c20: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2f1c20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c24: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2f1c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c28: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c2c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2f1c2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c30: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2f1c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c38: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f1c38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c3c: 0x80ddf20  j           func_377C80
    ctx->pc = 0x2F1C3Cu;
    ctx->pc = 0x2F1C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1C3Cu;
    // 0x2f1c40: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377C80u;
    sub_00377C80_0x377c80(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1C44u;
}

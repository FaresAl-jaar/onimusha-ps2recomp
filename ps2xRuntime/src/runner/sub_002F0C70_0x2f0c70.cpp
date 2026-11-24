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

// Function: sub_002F0C70
// Address: 0x2f0c70 - 0x2f0c88
void sub_002F0C70_0x2f0c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0C70_0x2f0c70");
#endif

    ctx->pc = 0x2f0c70u;

    // 0x2f0c70: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f0c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c74: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f0c74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c78: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f0c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c7c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f0c7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0c80: 0x80d0b4c  j           func_342D30
    ctx->pc = 0x2F0C80u;
    ctx->pc = 0x2F0C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0C80u;
    // 0x2f0c84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342D30u;
    sub_00342D30_0x342d30(rdram, ctx, runtime); return;
    ctx->pc = 0x2F0C88u;
}

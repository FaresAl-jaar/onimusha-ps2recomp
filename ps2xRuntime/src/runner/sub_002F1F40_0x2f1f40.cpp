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

// Function: sub_002F1F40
// Address: 0x2f1f40 - 0x2f1f58
void sub_002F1F40_0x2f1f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1F40_0x2f1f40");
#endif

    ctx->pc = 0x2f1f40u;

    // 0x2f1f40: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f1f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f44: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f1f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f1f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f50: 0x80ed980  j           func_3B6600
    ctx->pc = 0x2F1F50u;
    ctx->pc = 0x2F1F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F50u;
    // 0x2f1f54: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6600u;
    sub_003B6600_0x3b6600(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1F58u;
}

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

// Function: sub_003BF7D0
// Address: 0x3bf7d0 - 0x3bf7ec
void sub_003BF7D0_0x3bf7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF7D0_0x3bf7d0");
#endif

    ctx->pc = 0x3bf7d0u;

    // 0x3bf7d0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3bf7d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf7d4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3bf7d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf7d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3bf7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf7dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3bf7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf7e0: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3bf7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3bf7e4: 0x80efdbc  j           func_3BF6F0
    ctx->pc = 0x3BF7E4u;
    ctx->pc = 0x3BF7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF7E4u;
    // 0x3bf7e8: 0x2484fec0  addiu       $a0, $a0, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF6F0u;
    sub_003BF6F0_0x3bf6f0(rdram, ctx, runtime); return;
    ctx->pc = 0x3BF7ECu;
}

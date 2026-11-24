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

// Function: sub_003BF7C0
// Address: 0x3bf7c0 - 0x3bf7d0
void sub_003BF7C0_0x3bf7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF7C0_0x3bf7c0");
#endif

    ctx->pc = 0x3bf7c0u;

    // 0x3bf7c0: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x3bf7c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3bf7c4: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3bf7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3bf7c8: 0x80ef88c  j           func_3BE230
    ctx->pc = 0x3BF7C8u;
    ctx->pc = 0x3BF7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF7C8u;
    // 0x3bf7cc: 0x2484fec0  addiu       $a0, $a0, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE230u;
    sub_003BE230_0x3be230(rdram, ctx, runtime); return;
    ctx->pc = 0x3BF7D0u;
}

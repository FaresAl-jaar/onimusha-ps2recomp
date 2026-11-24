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

// Function: sub_003A0A20
// Address: 0x3a0a20 - 0x3a0a3c
void sub_003A0A20_0x3a0a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0A20_0x3a0a20");
#endif

    ctx->pc = 0x3a0a20u;

    // 0x3a0a20: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3a0a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3a0a24: 0x90226ac8  lbu         $v0, 0x6AC8($at)
    ctx->pc = 0x3a0a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x7E6AC8u));
    // 0x3a0a28: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3a0a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3a0a2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a0a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a0a30: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x3a0a30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x3a0a34: 0x8054048  j           func_150120
    ctx->pc = 0x3A0A34u;
    ctx->pc = 0x3A0A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0A34u;
    // 0x3a0a38: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x150120u;
    sub_00150120_0x150120(rdram, ctx, runtime); return;
    ctx->pc = 0x3A0A3Cu;
}

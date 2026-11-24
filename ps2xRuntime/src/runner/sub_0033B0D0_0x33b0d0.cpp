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

// Function: sub_0033B0D0
// Address: 0x33b0d0 - 0x33b0ec
void sub_0033B0D0_0x33b0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B0D0_0x33b0d0");
#endif

    ctx->pc = 0x33b0d0u;

    // 0x33b0d0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x33b0d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33b0d4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x33b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x33b0d8: 0x24427440  addiu       $v0, $v0, 0x7440
    ctx->pc = 0x33b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29760));
    // 0x33b0dc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33b0e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33b0e4: 0x80cec3c  j           func_33B0F0
    ctx->pc = 0x33B0E4u;
    ctx->pc = 0x33B0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B0E4u;
    // 0x33b0e8: 0x94460000  lhu         $a2, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B0F0u;
    sub_0033B0F0_0x33b0f0(rdram, ctx, runtime); return;
    ctx->pc = 0x33B0ECu;
}

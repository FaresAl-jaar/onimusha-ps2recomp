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

// Function: sub_003020A0
// Address: 0x3020a0 - 0x3020bc
void sub_003020A0_0x3020a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003020A0_0x3020a0");
#endif

    ctx->pc = 0x3020a0u;

    // 0x3020a0: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x3020a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3020a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3020a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3020a8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3020a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3020ac: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x3020acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x3020b0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3020b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3020b4: 0x80a739c  j           func_29CE70
    ctx->pc = 0x3020B4u;
    ctx->pc = 0x3020B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3020B4u;
    // 0x3020b8: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    sub_0029CE70_0x29ce70(rdram, ctx, runtime); return;
    ctx->pc = 0x3020BCu;
}

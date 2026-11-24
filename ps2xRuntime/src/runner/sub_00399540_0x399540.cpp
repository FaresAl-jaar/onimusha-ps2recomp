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

// Function: sub_00399540
// Address: 0x399540 - 0x399554
void sub_00399540_0x399540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399540_0x399540");
#endif

    ctx->pc = 0x399540u;

    // 0x399540: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x399540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x399544: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x399544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x399548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x399548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39954c: 0x80f0444  j           func_3C1110
    ctx->pc = 0x39954Cu;
    ctx->pc = 0x399550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39954Cu;
    // 0x399550: 0x24440780  addiu       $a0, $v0, 0x780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1110u;
    sub_003C1110_0x3c1110(rdram, ctx, runtime); return;
    ctx->pc = 0x399554u;
}

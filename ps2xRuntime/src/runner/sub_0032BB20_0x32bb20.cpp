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

// Function: sub_0032BB20
// Address: 0x32bb20 - 0x32bb44
void sub_0032BB20_0x32bb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BB20_0x32bb20");
#endif

    ctx->pc = 0x32bb20u;

    // 0x32bb20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32bb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32bb24: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x32bb24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x32bb28: 0x8c23ceb4  lw          $v1, -0x314C($at)
    ctx->pc = 0x32bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB4u));
    // 0x32bb2c: 0x8f828b74  lw          $v0, -0x748C($gp)
    ctx->pc = 0x32bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937460)));
    // 0x32bb30: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x32bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32bb34: 0xaf828b70  sw          $v0, -0x7490($gp)
    ctx->pc = 0x32bb34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937456), GPR_U32(ctx, 2));
    // 0x32bb38: 0x8f858b70  lw          $a1, -0x7490($gp)
    ctx->pc = 0x32bb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x32bb3c: 0x80caa44  j           func_32A910
    ctx->pc = 0x32BB3Cu;
    ctx->pc = 0x32BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB3Cu;
    // 0x32bb40: 0x24840fa0  addiu       $a0, $a0, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A910u;
    sub_0032A910_0x32a910(rdram, ctx, runtime); return;
    ctx->pc = 0x32BB44u;
}

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

// Function: sub_003BBB30
// Address: 0x3bbb30 - 0x3bbb44
void sub_003BBB30_0x3bbb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BBB30_0x3bbb30");
#endif

    ctx->pc = 0x3bbb30u;

    // 0x3bbb30: 0x8c822b50  lw          $v0, 0x2B50($a0)
    ctx->pc = 0x3bbb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11088)));
    // 0x3bbb34: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x3bbb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3bbb38: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x3bbb38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3bbb3c: 0x80eef1c  j           func_3BBC70
    ctx->pc = 0x3BBB3Cu;
    ctx->pc = 0x3BBB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBB3Cu;
    // 0x3bbb40: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBC70u;
    sub_003BBC70_0x3bbc70(rdram, ctx, runtime); return;
    ctx->pc = 0x3BBB44u;
}

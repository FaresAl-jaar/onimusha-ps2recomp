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

// Function: sub_00225550
// Address: 0x225550 - 0x225570
void sub_00225550_0x225550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225550_0x225550");
#endif

    ctx->pc = 0x225550u;

    // 0x225550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225558: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x225558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x22555c: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x22555cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x225560: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x225560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x225564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225568: 0x8089b66  j           func_226D98
    ctx->pc = 0x225568u;
    ctx->pc = 0x22556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225568u;
    // 0x22556c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226D98u;
    sub_00226D98_0x226d98(rdram, ctx, runtime); return;
    ctx->pc = 0x225570u;
}

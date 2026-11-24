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

// Function: sub_00226550
// Address: 0x226550 - 0x226568
void sub_00226550_0x226550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226550_0x226550");
#endif

    ctx->pc = 0x226550u;

    // 0x226550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226558: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x226558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22655c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22655cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226560: 0x8089444  j           func_225110
    ctx->pc = 0x226560u;
    ctx->pc = 0x226564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226560u;
    // 0x226564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225110u;
    sub_00225110_0x225110(rdram, ctx, runtime); return;
    ctx->pc = 0x226568u;
}

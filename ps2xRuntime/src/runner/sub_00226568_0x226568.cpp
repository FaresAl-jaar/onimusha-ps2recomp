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

// Function: sub_00226568
// Address: 0x226568 - 0x226580
void sub_00226568_0x226568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226568_0x226568");
#endif

    ctx->pc = 0x226568u;

    // 0x226568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22656c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22656cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226570: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x226570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x226574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226578: 0x808944c  j           func_225130
    ctx->pc = 0x226578u;
    ctx->pc = 0x22657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226578u;
    // 0x22657c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225130u;
    sub_00225130_0x225130(rdram, ctx, runtime); return;
    ctx->pc = 0x226580u;
}

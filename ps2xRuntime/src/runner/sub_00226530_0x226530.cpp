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

// Function: sub_00226530
// Address: 0x226530 - 0x22654c
void sub_00226530_0x226530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226530_0x226530");
#endif

    ctx->pc = 0x226530u;

    // 0x226530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226538: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x226538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x22653c: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x22653cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x226540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226544: 0x8089aaa  j           func_226AA8
    ctx->pc = 0x226544u;
    ctx->pc = 0x226548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226544u;
    // 0x226548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226AA8u;
    sub_00226AA8_0x226aa8(rdram, ctx, runtime); return;
    ctx->pc = 0x22654Cu;
}

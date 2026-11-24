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

// Function: sub_00243380
// Address: 0x243380 - 0x243398
void sub_00243380_0x243380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243380_0x243380");
#endif

    ctx->pc = 0x243380u;

    // 0x243380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x243380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x243384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243388: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x243388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24338c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24338cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243390: 0x808fdfa  j           func_23F7E8
    ctx->pc = 0x243390u;
    ctx->pc = 0x243394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243390u;
    // 0x243394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F7E8u;
    sub_0023F7E8_0x23f7e8(rdram, ctx, runtime); return;
    ctx->pc = 0x243398u;
}

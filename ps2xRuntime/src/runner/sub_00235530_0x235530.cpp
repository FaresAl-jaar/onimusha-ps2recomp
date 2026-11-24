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

// Function: sub_00235530
// Address: 0x235530 - 0x235544
void sub_00235530_0x235530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235530_0x235530");
#endif

    ctx->pc = 0x235530u;

    // 0x235530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x235534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23553c: 0x8093c40  j           func_24F100
    ctx->pc = 0x23553Cu;
    ctx->pc = 0x235540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23553Cu;
    // 0x235540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F100u;
    sub_0024F100_0x24f100(rdram, ctx, runtime); return;
    ctx->pc = 0x235544u;
}

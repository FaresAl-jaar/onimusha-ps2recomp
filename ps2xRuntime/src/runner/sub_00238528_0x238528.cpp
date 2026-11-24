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

// Function: sub_00238528
// Address: 0x238528 - 0x23853c
void sub_00238528_0x238528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238528_0x238528");
#endif

    ctx->pc = 0x238528u;

    // 0x238528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23852c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23852cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238534: 0x8091112  j           func_244448
    ctx->pc = 0x238534u;
    ctx->pc = 0x238538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238534u;
    // 0x238538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244448u;
    sub_00244448_0x244448(rdram, ctx, runtime); return;
    ctx->pc = 0x23853Cu;
}

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

// Function: sub_00238D98
// Address: 0x238d98 - 0x238dac
void sub_00238D98_0x238d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238D98_0x238d98");
#endif

    ctx->pc = 0x238d98u;

    // 0x238d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238d9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238da4: 0x80921de  j           func_248778
    ctx->pc = 0x238DA4u;
    ctx->pc = 0x238DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238DA4u;
    // 0x238da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248778u;
    sub_00248778_0x248778(rdram, ctx, runtime); return;
    ctx->pc = 0x238DACu;
}

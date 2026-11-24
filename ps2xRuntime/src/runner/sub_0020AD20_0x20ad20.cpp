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

// Function: sub_0020AD20
// Address: 0x20ad20 - 0x20ad38
void sub_0020AD20_0x20ad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AD20_0x20ad20");
#endif

    ctx->pc = 0x20ad20u;

    // 0x20ad20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ad20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ad24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20ad24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ad28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ad2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ad2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ad30: 0x8082b52  j           func_20AD48
    ctx->pc = 0x20AD30u;
    ctx->pc = 0x20AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD30u;
    // 0x20ad34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AD48u;
    sub_0020AD48_0x20ad48(rdram, ctx, runtime); return;
    ctx->pc = 0x20AD38u;
}

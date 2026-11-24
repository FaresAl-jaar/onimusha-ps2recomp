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

// Function: sub_00123C18
// Address: 0x123c18 - 0x123c34
void sub_00123C18_0x123c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123C18_0x123c18");
#endif

    ctx->pc = 0x123c18u;

    // 0x123c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123c1c: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x123c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x123c20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123c24: 0x24a53960  addiu       $a1, $a1, 0x3960
    ctx->pc = 0x123c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14688));
    // 0x123c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123c2c: 0x8049192  j           func_124648
    ctx->pc = 0x123C2Cu;
    ctx->pc = 0x123C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C2Cu;
    // 0x123c30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124648u;
    sub_00124648_0x124648(rdram, ctx, runtime); return;
    ctx->pc = 0x123C34u;
}

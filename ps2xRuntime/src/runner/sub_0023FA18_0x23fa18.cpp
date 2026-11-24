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

// Function: sub_0023FA18
// Address: 0x23fa18 - 0x23fa34
void sub_0023FA18_0x23fa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FA18_0x23fa18");
#endif

    ctx->pc = 0x23fa18u;

    // 0x23fa18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23fa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23fa1c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23fa1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23fa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23fa24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23fa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23fa28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fa2c: 0x808fb78  j           func_23EDE0
    ctx->pc = 0x23FA2Cu;
    ctx->pc = 0x23FA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA2Cu;
    // 0x23fa30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EDE0u;
    sub_0023EDE0_0x23ede0(rdram, ctx, runtime); return;
    ctx->pc = 0x23FA34u;
}

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

// Function: sub_002221A8
// Address: 0x2221a8 - 0x2221c4
void sub_002221A8_0x2221a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002221A8_0x2221a8");
#endif

    ctx->pc = 0x2221a8u;

    // 0x2221a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2221a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2221ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2221acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2221b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2221b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2221b4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2221b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2221b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2221b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2221bc: 0x80888a2  j           func_222288
    ctx->pc = 0x2221BCu;
    ctx->pc = 0x2221C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2221BCu;
    // 0x2221c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    sub_00222288_0x222288(rdram, ctx, runtime); return;
    ctx->pc = 0x2221C4u;
}

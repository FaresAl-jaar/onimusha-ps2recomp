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

// Function: sub_0023BE90
// Address: 0x23be90 - 0x23bea8
void sub_0023BE90_0x23be90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BE90_0x23be90");
#endif

    ctx->pc = 0x23be90u;

    // 0x23be90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23be90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23be94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23be98: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x23be98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23be9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23be9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bea0: 0x808dad0  j           func_236B40
    ctx->pc = 0x23BEA0u;
    ctx->pc = 0x23BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BEA0u;
    // 0x23bea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B40u;
    sub_00236B40_0x236b40(rdram, ctx, runtime); return;
    ctx->pc = 0x23BEA8u;
}

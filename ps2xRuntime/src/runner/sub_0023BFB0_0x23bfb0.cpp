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

// Function: sub_0023BFB0
// Address: 0x23bfb0 - 0x23bfc8
void sub_0023BFB0_0x23bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BFB0_0x23bfb0");
#endif

    ctx->pc = 0x23bfb0u;

    // 0x23bfb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23bfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23bfb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bfb8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x23bfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23bfbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bfc0: 0x808dae8  j           func_236BA0
    ctx->pc = 0x23BFC0u;
    ctx->pc = 0x23BFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BFC0u;
    // 0x23bfc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BA0u;
    sub_00236BA0_0x236ba0(rdram, ctx, runtime); return;
    ctx->pc = 0x23BFC8u;
}

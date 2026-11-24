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

// Function: sub_00236C98
// Address: 0x236c98 - 0x236cb0
void sub_00236C98_0x236c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236C98_0x236c98");
#endif

    ctx->pc = 0x236c98u;

    // 0x236c98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236c9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236ca0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x236ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x236ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236ca8: 0x808af1e  j           func_22BC78
    ctx->pc = 0x236CA8u;
    ctx->pc = 0x236CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236CA8u;
    // 0x236cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BC78u;
    sub_0022BC78_0x22bc78(rdram, ctx, runtime); return;
    ctx->pc = 0x236CB0u;
}

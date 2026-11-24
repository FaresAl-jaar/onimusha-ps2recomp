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

// Function: sub_00236C38
// Address: 0x236c38 - 0x236c50
void sub_00236C38_0x236c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236C38_0x236c38");
#endif

    ctx->pc = 0x236c38u;

    // 0x236c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236c3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236c40: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x236c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x236c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236c48: 0x808af00  j           func_22BC00
    ctx->pc = 0x236C48u;
    ctx->pc = 0x236C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C48u;
    // 0x236c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BC00u;
    sub_0022BC00_0x22bc00(rdram, ctx, runtime); return;
    ctx->pc = 0x236C50u;
}

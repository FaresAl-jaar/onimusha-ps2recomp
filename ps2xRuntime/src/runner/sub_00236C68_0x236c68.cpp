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

// Function: sub_00236C68
// Address: 0x236c68 - 0x236c80
void sub_00236C68_0x236c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236C68_0x236c68");
#endif

    ctx->pc = 0x236c68u;

    // 0x236c68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236c6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236c70: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x236c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x236c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236c78: 0x808af1a  j           func_22BC68
    ctx->pc = 0x236C78u;
    ctx->pc = 0x236C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236C78u;
    // 0x236c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BC68u;
    sub_0022BC68_0x22bc68(rdram, ctx, runtime); return;
    ctx->pc = 0x236C80u;
}

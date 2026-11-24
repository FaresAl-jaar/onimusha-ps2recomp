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

// Function: sub_0023C648
// Address: 0x23c648 - 0x23c660
void sub_0023C648_0x23c648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C648_0x23c648");
#endif

    ctx->pc = 0x23c648u;

    // 0x23c648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c64c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c650: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x23c650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23c654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c658: 0x808dbb8  j           func_236EE0
    ctx->pc = 0x23C658u;
    ctx->pc = 0x23C65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C658u;
    // 0x23c65c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236EE0u;
    sub_00236EE0_0x236ee0(rdram, ctx, runtime); return;
    ctx->pc = 0x23C660u;
}

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

// Function: sub_00236A78
// Address: 0x236a78 - 0x236a90
void sub_00236A78_0x236a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236A78_0x236a78");
#endif

    ctx->pc = 0x236a78u;

    // 0x236a78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236a7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236a80: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x236a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x236a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236a88: 0x808b020  j           func_22C080
    ctx->pc = 0x236A88u;
    ctx->pc = 0x236A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A88u;
    // 0x236a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C080u;
    sub_0022C080_0x22c080(rdram, ctx, runtime); return;
    ctx->pc = 0x236A90u;
}

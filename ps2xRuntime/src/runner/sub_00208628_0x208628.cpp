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

// Function: sub_00208628
// Address: 0x208628 - 0x208640
void sub_00208628_0x208628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208628_0x208628");
#endif

    ctx->pc = 0x208628u;

    // 0x208628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20862c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20862cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208630: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x208630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x208634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208638: 0x80849da  j           func_212768
    ctx->pc = 0x208638u;
    ctx->pc = 0x20863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208638u;
    // 0x20863c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212768u;
    sub_00212768_0x212768(rdram, ctx, runtime); return;
    ctx->pc = 0x208640u;
}

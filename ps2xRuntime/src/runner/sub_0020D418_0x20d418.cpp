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

// Function: sub_0020D418
// Address: 0x20d418 - 0x20d434
void sub_0020D418_0x20d418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D418_0x20d418");
#endif

    ctx->pc = 0x20d418u;

    // 0x20d418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20d418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20d41c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20d420: 0x8c822004  lw          $v0, 0x2004($a0)
    ctx->pc = 0x20d420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x20d424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d428: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20d428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d42c: 0x808f080  j           func_23C200
    ctx->pc = 0x20D42Cu;
    ctx->pc = 0x20D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D42Cu;
    // 0x20d430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C200u;
    sub_0023C200_0x23c200(rdram, ctx, runtime); return;
    ctx->pc = 0x20D434u;
}

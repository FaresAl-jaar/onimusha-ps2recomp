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

// Function: sub_0020CC00
// Address: 0x20cc00 - 0x20cc1c
void sub_0020CC00_0x20cc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CC00_0x20cc00");
#endif

    ctx->pc = 0x20cc00u;

    // 0x20cc00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20cc04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20cc08: 0x8c822004  lw          $v0, 0x2004($a0)
    ctx->pc = 0x20cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x20cc0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cc10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20cc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20cc14: 0x808ea08  j           func_23A820
    ctx->pc = 0x20CC14u;
    ctx->pc = 0x20CC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC14u;
    // 0x20cc18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A820u;
    sub_0023A820_0x23a820(rdram, ctx, runtime); return;
    ctx->pc = 0x20CC1Cu;
}

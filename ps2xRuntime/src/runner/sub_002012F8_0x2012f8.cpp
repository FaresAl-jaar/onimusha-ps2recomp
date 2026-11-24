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

// Function: sub_002012F8
// Address: 0x2012f8 - 0x201310
void sub_002012F8_0x2012f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002012F8_0x2012f8");
#endif

    ctx->pc = 0x2012f8u;

    // 0x2012f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2012f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2012fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2012fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201300: 0x8c8403b4  lw          $a0, 0x3B4($a0)
    ctx->pc = 0x201300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 948)));
    // 0x201304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201308: 0x807d3bc  j           func_1F4EF0
    ctx->pc = 0x201308u;
    ctx->pc = 0x20130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201308u;
    // 0x20130c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EF0u;
    sub_001F4EF0_0x1f4ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x201310u;
}

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

// Function: sub_00351480
// Address: 0x351480 - 0x351490
void sub_00351480_0x351480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351480_0x351480");
#endif

    ctx->pc = 0x351480u;

    // 0x351480: 0x80820014  lb          $v0, 0x14($a0)
    ctx->pc = 0x351480u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x351484: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x351484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x351488: 0x80d4548  j           func_351520
    ctx->pc = 0x351488u;
    ctx->pc = 0x35148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351488u;
    // 0x35148c: 0xa0820014  sb          $v0, 0x14($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351520u;
    sub_00351520_0x351520(rdram, ctx, runtime); return;
    ctx->pc = 0x351490u;
}

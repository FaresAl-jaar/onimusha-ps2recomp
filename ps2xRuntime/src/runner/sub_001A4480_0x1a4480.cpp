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

// Function: sub_001A4480
// Address: 0x1a4480 - 0x1a4494
void sub_001A4480_0x1a4480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4480_0x1a4480");
#endif

    ctx->pc = 0x1a4480u;

    // 0x1a4480: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a4480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a4484: 0xaf8087b8  sw          $zero, -0x7848($gp)
    ctx->pc = 0x1a4484u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936504), GPR_U32(ctx, 0));
    // 0x1a4488: 0xaf8280cc  sw          $v0, -0x7F34($gp)
    ctx->pc = 0x1a4488u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934732), GPR_U32(ctx, 2));
    // 0x1a448c: 0x8069118  j           func_1A4460
    ctx->pc = 0x1A448Cu;
    ctx->pc = 0x1A4490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A448Cu;
    // 0x1a4490: 0xaf8087bc  sw          $zero, -0x7844($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936508), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4460u;
    sub_001A4460_0x1a4460(rdram, ctx, runtime); return;
    ctx->pc = 0x1A4494u;
}

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

// Function: sub_002A0420
// Address: 0x2a0420 - 0x2a0430
void sub_002A0420_0x2a0420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0420_0x2a0420");
#endif

    ctx->pc = 0x2a0420u;

    // 0x2a0420: 0xaf858974  sw          $a1, -0x768C($gp)
    ctx->pc = 0x2a0420u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936948), GPR_U32(ctx, 5));
    // 0x2a0424: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a0424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2a0428: 0x80a7e28  j           func_29F8A0
    ctx->pc = 0x2A0428u;
    ctx->pc = 0x2A042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0428u;
    // 0x2a042c: 0x24a50540  addiu       $a1, $a1, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F8A0u;
    sub_0029F8A0_0x29f8a0(rdram, ctx, runtime); return;
    ctx->pc = 0x2A0430u;
}

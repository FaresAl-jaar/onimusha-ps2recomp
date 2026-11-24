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

// Function: sub_002BE770
// Address: 0x2be770 - 0x2be778
void sub_002BE770_0x2be770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE770_0x2be770");
#endif

    ctx->pc = 0x2be770u;

    // 0x2be770: 0x80af930  j           func_2BE4C0
    ctx->pc = 0x2BE770u;
    ctx->pc = 0x2BE774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE770u;
    // 0x2be774: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE4C0u;
    sub_002BE4C0_0x2be4c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2BE778u;
}

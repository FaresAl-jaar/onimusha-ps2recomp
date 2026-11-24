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

// Function: sub_0014E1E0
// Address: 0x14e1e0 - 0x14e1e8
void sub_0014E1E0_0x14e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E1E0_0x14e1e0");
#endif

    ctx->pc = 0x14e1e0u;

    // 0x14e1e0: 0x805d5b8  j           func_1756E0
    ctx->pc = 0x14E1E0u;
    ctx->pc = 0x14E1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1E0u;
    // 0x14e1e4: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1756E0u;
    sub_001756E0_0x1756e0(rdram, ctx, runtime); return;
    ctx->pc = 0x14E1E8u;
}

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

// Function: sub_002E76D0
// Address: 0x2e76d0 - 0x2e76dc
void sub_002E76D0_0x2e76d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E76D0_0x2e76d0");
#endif

    ctx->pc = 0x2e76d0u;

    // 0x2e76d0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2e76d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2e76d4: 0x80ba314  j           func_2E8C50
    ctx->pc = 0x2E76D4u;
    ctx->pc = 0x2E76D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E76D4u;
    // 0x2e76d8: 0x2484b7f0  addiu       $a0, $a0, -0x4810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8C50u;
    sub_002E8C50_0x2e8c50(rdram, ctx, runtime); return;
    ctx->pc = 0x2E76DCu;
}

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

// Function: sub_00178C90
// Address: 0x178c90 - 0x178c9c
void sub_00178C90_0x178c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178C90_0x178c90");
#endif

    ctx->pc = 0x178c90u;

    // 0x178c90: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x178c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x178c94: 0x8040ece  j           func_103B38
    ctx->pc = 0x178C94u;
    ctx->pc = 0x178C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C94u;
    // 0x178c98: 0x24848ae0  addiu       $a0, $a0, -0x7520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103B38u;
    sub_00103B38_0x103b38(rdram, ctx, runtime); return;
    ctx->pc = 0x178C9Cu;
}

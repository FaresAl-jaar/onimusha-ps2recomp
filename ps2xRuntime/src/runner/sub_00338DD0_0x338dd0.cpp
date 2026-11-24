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

// Function: sub_00338DD0
// Address: 0x338dd0 - 0x338dd8
void sub_00338DD0_0x338dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338DD0_0x338dd0");
#endif

    ctx->pc = 0x338dd0u;

    // 0x338dd0: 0x808f100  j           func_23C400
    ctx->pc = 0x338DD0u;
    ctx->pc = 0x338DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338DD0u;
    // 0x338dd4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C400u;
    sub_0023C400_0x23c400(rdram, ctx, runtime); return;
    ctx->pc = 0x338DD8u;
}

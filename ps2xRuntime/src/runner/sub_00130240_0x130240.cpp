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

// Function: sub_00130240
// Address: 0x130240 - 0x13024c
void sub_00130240_0x130240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130240_0x130240");
#endif

    ctx->pc = 0x130240u;

    // 0x130240: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x130240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x130244: 0x8061c60  j           func_187180
    ctx->pc = 0x130244u;
    ctx->pc = 0x130248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130244u;
    // 0x130248: 0x2484f250  addiu       $a0, $a0, -0xDB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    sub_00187180_0x187180(rdram, ctx, runtime); return;
    ctx->pc = 0x13024Cu;
}

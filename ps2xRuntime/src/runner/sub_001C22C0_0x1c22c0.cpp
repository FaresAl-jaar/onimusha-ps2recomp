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

// Function: sub_001C22C0
// Address: 0x1c22c0 - 0x1c22cc
void sub_001C22C0_0x1c22c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C22C0_0x1c22c0");
#endif

    ctx->pc = 0x1c22c0u;

    // 0x1c22c0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1c22c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x1c22c4: 0x804bfbc  j           func_12FEF0
    ctx->pc = 0x1C22C4u;
    ctx->pc = 0x1C22C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22C4u;
    // 0x1c22c8: 0x24846ae8  addiu       $a0, $a0, 0x6AE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FEF0u;
    sub_0012FEF0_0x12fef0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C22CCu;
}

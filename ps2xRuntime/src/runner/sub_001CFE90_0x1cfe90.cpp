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

// Function: sub_001CFE90
// Address: 0x1cfe90 - 0x1cfe98
void sub_001CFE90_0x1cfe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFE90_0x1cfe90");
#endif

    ctx->pc = 0x1cfe90u;

    // 0x1cfe90: 0x807404c  j           func_1D0130
    ctx->pc = 0x1CFE90u;
    ctx->pc = 0x1CFE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE90u;
    // 0x1cfe94: 0x24050a60  addiu       $a1, $zero, 0xA60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0130u;
    sub_001D0130_0x1d0130(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFE98u;
}

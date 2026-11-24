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

// Function: sub_001CF800
// Address: 0x1cf800 - 0x1cf80c
void sub_001CF800_0x1cf800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF800_0x1cf800");
#endif

    ctx->pc = 0x1cf800u;

    // 0x1cf800: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1cf800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1cf804: 0x807404c  j           func_1D0130
    ctx->pc = 0x1CF804u;
    ctx->pc = 0x1CF808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF804u;
    // 0x1cf808: 0x344542c0  ori         $a1, $v0, 0x42C0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17088);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0130u;
    sub_001D0130_0x1d0130(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF80Cu;
}

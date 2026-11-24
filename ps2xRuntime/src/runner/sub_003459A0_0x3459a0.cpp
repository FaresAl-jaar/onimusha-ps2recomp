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

// Function: sub_003459A0
// Address: 0x3459a0 - 0x3459a8
void sub_003459A0_0x3459a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003459A0_0x3459a0");
#endif

    ctx->pc = 0x3459a0u;

    // 0x3459a0: 0x80d165c  j           func_345970
    ctx->pc = 0x3459A0u;
    ctx->pc = 0x3459A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3459A0u;
    // 0x3459a4: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345970u;
    sub_00345970_0x345970(rdram, ctx, runtime); return;
    ctx->pc = 0x3459A8u;
}

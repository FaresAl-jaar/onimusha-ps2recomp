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

// Function: sub_00302060
// Address: 0x302060 - 0x302068
void sub_00302060_0x302060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302060_0x302060");
#endif

    ctx->pc = 0x302060u;

    // 0x302060: 0x809e8d0  j           func_27A340
    ctx->pc = 0x302060u;
    ctx->pc = 0x302064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302060u;
    // 0x302064: 0x248401c0  addiu       $a0, $a0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A340u;
    sub_0027A340_0x27a340(rdram, ctx, runtime); return;
    ctx->pc = 0x302068u;
}

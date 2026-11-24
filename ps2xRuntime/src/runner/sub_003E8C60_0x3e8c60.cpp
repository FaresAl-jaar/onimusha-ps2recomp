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

// Function: sub_003E8C60
// Address: 0x3e8c60 - 0x3e8c68
void sub_003E8C60_0x3e8c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8C60_0x3e8c60");
#endif

    ctx->pc = 0x3e8c60u;

    // 0x3e8c60: 0x80fa304  j           func_3E8C10
    ctx->pc = 0x3E8C60u;
    ctx->pc = 0x3E8C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8C60u;
    // 0x3e8c64: 0x8c852bb4  lw          $a1, 0x2BB4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8C10u;
    sub_003E8C10_0x3e8c10(rdram, ctx, runtime); return;
    ctx->pc = 0x3E8C68u;
}

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

// Function: sub_00112D70
// Address: 0x112d70 - 0x112d7c
void sub_00112D70_0x112d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112D70_0x112d70");
#endif

    ctx->pc = 0x112d70u;

    // 0x112d70: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x112d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x112d74: 0x8043800  j           func_10E000
    ctx->pc = 0x112D74u;
    ctx->pc = 0x112D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D74u;
    // 0x112d78: 0x8c442b44  lw          $a0, 0x2B44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11076)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    sub_0010E000_0x10e000(rdram, ctx, runtime); return;
    ctx->pc = 0x112D7Cu;
}

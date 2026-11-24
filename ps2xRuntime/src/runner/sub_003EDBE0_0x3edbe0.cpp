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

// Function: sub_003EDBE0
// Address: 0x3edbe0 - 0x3edbe8
void sub_003EDBE0_0x3edbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDBE0_0x3edbe0");
#endif

    ctx->pc = 0x3edbe0u;

    // 0x3edbe0: 0x80fb6e4  j           func_3EDB90
    ctx->pc = 0x3EDBE0u;
    ctx->pc = 0x3EDBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDBE0u;
    // 0x3edbe4: 0x8c852be8  lw          $a1, 0x2BE8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDB90u;
    sub_003EDB90_0x3edb90(rdram, ctx, runtime); return;
    ctx->pc = 0x3EDBE8u;
}

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

// Function: sub_00120DC8
// Address: 0x120dc8 - 0x120dd4
void sub_00120DC8_0x120dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120DC8_0x120dc8");
#endif

    ctx->pc = 0x120dc8u;

    // 0x120dc8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x120dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x120dcc: 0x8043804  j           func_10E010
    ctx->pc = 0x120DCCu;
    ctx->pc = 0x120DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120DCCu;
    // 0x120dd0: 0x8c445d50  lw          $a0, 0x5D50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23888)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E010u;
    sub_0010E010_0x10e010(rdram, ctx, runtime); return;
    ctx->pc = 0x120DD4u;
}

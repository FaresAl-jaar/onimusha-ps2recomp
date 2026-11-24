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

// Function: sub_002E6B60
// Address: 0x2e6b60 - 0x2e6b68
void sub_002E6B60_0x2e6b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6B60_0x2e6b60");
#endif

    ctx->pc = 0x2e6b60u;

    // 0x2e6b60: 0x80a5f30  j           func_297CC0
    ctx->pc = 0x2E6B60u;
    ctx->pc = 0x2E6B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6B60u;
    // 0x2e6b64: 0xa0800839  sb          $zero, 0x839($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 2105), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297CC0u;
    sub_00297CC0_0x297cc0(rdram, ctx, runtime); return;
    ctx->pc = 0x2E6B68u;
}

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

// Function: sub_00387480
// Address: 0x387480 - 0x387488
void sub_00387480_0x387480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387480_0x387480");
#endif

    ctx->pc = 0x387480u;

    // 0x387480: 0x80e1d24  j           func_387490
    ctx->pc = 0x387480u;
    ctx->pc = 0x387484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387480u;
    // 0x387484: 0xa0852b70  sb          $a1, 0x2B70($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 11120), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387490u;
    sub_00387490_0x387490(rdram, ctx, runtime); return;
    ctx->pc = 0x387488u;
}

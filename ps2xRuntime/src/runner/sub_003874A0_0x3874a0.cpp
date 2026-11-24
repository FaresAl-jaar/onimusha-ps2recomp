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

// Function: sub_003874A0
// Address: 0x3874a0 - 0x3874a8
void sub_003874A0_0x3874a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003874A0_0x3874a0");
#endif

    ctx->pc = 0x3874a0u;

    // 0x3874a0: 0x80e1d24  j           func_387490
    ctx->pc = 0x3874A0u;
    ctx->pc = 0x3874A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3874A0u;
    // 0x3874a4: 0x90852b70  lbu         $a1, 0x2B70($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387490u;
    sub_00387490_0x387490(rdram, ctx, runtime); return;
    ctx->pc = 0x3874A8u;
}

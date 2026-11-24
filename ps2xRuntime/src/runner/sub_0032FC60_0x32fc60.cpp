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

// Function: sub_0032FC60
// Address: 0x32fc60 - 0x32fc68
void sub_0032FC60_0x32fc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FC60_0x32fc60");
#endif

    ctx->pc = 0x32fc60u;

    // 0x32fc60: 0x80cbfd8  j           func_32FF60
    ctx->pc = 0x32FC60u;
    ctx->pc = 0x32FC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FC60u;
    // 0x32fc64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF60u;
    sub_0032FF60_0x32ff60(rdram, ctx, runtime); return;
    ctx->pc = 0x32FC68u;
}

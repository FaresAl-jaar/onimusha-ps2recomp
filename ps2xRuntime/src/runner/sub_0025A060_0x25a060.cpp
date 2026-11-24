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

// Function: sub_0025A060
// Address: 0x25a060 - 0x25a068
void sub_0025A060_0x25a060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A060_0x25a060");
#endif

    ctx->pc = 0x25a060u;

    // 0x25a060: 0x80967e0  j           func_259F80
    ctx->pc = 0x25A060u;
    ctx->pc = 0x25A064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A060u;
    // 0x25a064: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F80u;
    sub_00259F80_0x259f80(rdram, ctx, runtime); return;
    ctx->pc = 0x25A068u;
}

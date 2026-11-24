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

// Function: sub_0010A9A0
// Address: 0x10a9a0 - 0x10a9a8
void sub_0010A9A0_0x10a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A9A0_0x10a9a0");
#endif

    ctx->pc = 0x10a9a0u;

    // 0x10a9a0: 0x8042a10  j           func_10A840
    ctx->pc = 0x10A9A0u;
    ctx->pc = 0x10A9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9A0u;
    // 0x10a9a4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A840u;
    sub_0010A840_0x10a840(rdram, ctx, runtime); return;
    ctx->pc = 0x10A9A8u;
}

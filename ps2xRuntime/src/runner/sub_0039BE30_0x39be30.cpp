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

// Function: sub_0039BE30
// Address: 0x39be30 - 0x39be38
void sub_0039BE30_0x39be30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BE30_0x39be30");
#endif

    ctx->pc = 0x39be30u;

    // 0x39be30: 0x80e6f78  j           func_39BDE0
    ctx->pc = 0x39BE30u;
    ctx->pc = 0x39BE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BE30u;
    // 0x39be34: 0x8c852bf4  lw          $a1, 0x2BF4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BDE0u;
    sub_0039BDE0_0x39bde0(rdram, ctx, runtime); return;
    ctx->pc = 0x39BE38u;
}

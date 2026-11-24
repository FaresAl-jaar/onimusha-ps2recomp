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

// Function: sub_00321290
// Address: 0x321290 - 0x3212a0
void sub_00321290_0x321290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321290_0x321290");
#endif

    ctx->pc = 0x321290u;

    // 0x321290: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x321290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x321294: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x321294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x321298: 0x807cce0  j           func_1F3380
    ctx->pc = 0x321298u;
    ctx->pc = 0x32129Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321298u;
    // 0x32129c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    sub_001F3380_0x1f3380(rdram, ctx, runtime); return;
    ctx->pc = 0x3212A0u;
}

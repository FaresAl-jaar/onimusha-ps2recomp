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

// Function: sub_002A9620
// Address: 0x2a9620 - 0x2a9638
void sub_002A9620_0x2a9620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9620_0x2a9620");
#endif

    ctx->pc = 0x2a9620u;

    // 0x2a9620: 0x8d090190  lw          $t1, 0x190($t0)
    ctx->pc = 0x2a9620u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 400)));
    // 0x2a9624: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2a9624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9628: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a9628u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a962c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a962cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9630: 0x80d94c0  j           func_365300
    ctx->pc = 0x2A9630u;
    ctx->pc = 0x2A9634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9630u;
    // 0x2a9634: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365300u;
    sub_00365300_0x365300(rdram, ctx, runtime); return;
    ctx->pc = 0x2A9638u;
}

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

// Function: sub_002A4330
// Address: 0x2a4330 - 0x2a4348
void sub_002A4330_0x2a4330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4330_0x2a4330");
#endif

    ctx->pc = 0x2a4330u;

    // 0x2a4330: 0x8ce80190  lw          $t0, 0x190($a3)
    ctx->pc = 0x2a4330u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 400)));
    // 0x2a4334: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2a4334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4338: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2a4338u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a433c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a433cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4340: 0x80a31e0  j           func_28C780
    ctx->pc = 0x2A4340u;
    ctx->pc = 0x2A4344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4340u;
    // 0x2a4344: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C780u;
    sub_0028C780_0x28c780(rdram, ctx, runtime); return;
    ctx->pc = 0x2A4348u;
}

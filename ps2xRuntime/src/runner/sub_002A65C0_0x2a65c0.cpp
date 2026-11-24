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

// Function: sub_002A65C0
// Address: 0x2a65c0 - 0x2a65d8
void sub_002A65C0_0x2a65c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A65C0_0x2a65c0");
#endif

    ctx->pc = 0x2a65c0u;

    // 0x2a65c0: 0x8ce80190  lw          $t0, 0x190($a3)
    ctx->pc = 0x2a65c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 400)));
    // 0x2a65c4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2a65c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a65c8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2a65c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a65cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a65ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a65d0: 0x80a3830  j           func_28E0C0
    ctx->pc = 0x2A65D0u;
    ctx->pc = 0x2A65D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A65D0u;
    // 0x2a65d4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    sub_0028E0C0_0x28e0c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2A65D8u;
}

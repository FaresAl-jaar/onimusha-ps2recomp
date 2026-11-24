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

// Function: sub_002A65A0
// Address: 0x2a65a0 - 0x2a65b8
void sub_002A65A0_0x2a65a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A65A0_0x2a65a0");
#endif

    ctx->pc = 0x2a65a0u;

    // 0x2a65a0: 0x8ce80190  lw          $t0, 0x190($a3)
    ctx->pc = 0x2a65a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 400)));
    // 0x2a65a4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2a65a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a65a8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2a65a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a65ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a65acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a65b0: 0x80a3384  j           func_28CE10
    ctx->pc = 0x2A65B0u;
    ctx->pc = 0x2A65B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A65B0u;
    // 0x2a65b4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CE10u;
    sub_0028CE10_0x28ce10(rdram, ctx, runtime); return;
    ctx->pc = 0x2A65B8u;
}

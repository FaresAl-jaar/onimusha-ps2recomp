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

// Function: sub_002A5B30
// Address: 0x2a5b30 - 0x2a5b50
void sub_002A5B30_0x2a5b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5B30_0x2a5b30");
#endif

    ctx->pc = 0x2a5b30u;

    // 0x2a5b30: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2a5b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b34: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2a5b34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b38: 0x8c480190  lw          $t0, 0x190($v0)
    ctx->pc = 0x2a5b38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 400)));
    // 0x2a5b3c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2a5b3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b40: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a5b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b44: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a5b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5b48: 0x80b7384  j           func_2DCE10
    ctx->pc = 0x2A5B48u;
    ctx->pc = 0x2A5B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5B48u;
    // 0x2a5b4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCE10u;
    sub_002DCE10_0x2dce10(rdram, ctx, runtime); return;
    ctx->pc = 0x2A5B50u;
}

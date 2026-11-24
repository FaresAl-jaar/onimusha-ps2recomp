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

// Function: sub_002496D0
// Address: 0x2496d0 - 0x2496e4
void sub_002496D0_0x2496d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002496D0_0x2496d0");
#endif

    ctx->pc = 0x2496d0u;

    // 0x2496d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2496d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2496d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2496d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2496d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2496d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2496dc: 0x8091a7a  j           func_2469E8
    ctx->pc = 0x2496DCu;
    ctx->pc = 0x2496E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2496DCu;
    // 0x2496e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2469E8u;
    sub_002469E8_0x2469e8(rdram, ctx, runtime); return;
    ctx->pc = 0x2496E4u;
}

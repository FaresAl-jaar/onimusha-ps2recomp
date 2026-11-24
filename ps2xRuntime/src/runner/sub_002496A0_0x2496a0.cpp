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

// Function: sub_002496A0
// Address: 0x2496a0 - 0x2496b4
void sub_002496A0_0x2496a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002496A0_0x2496a0");
#endif

    ctx->pc = 0x2496a0u;

    // 0x2496a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2496a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2496a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2496a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2496a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2496a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2496ac: 0x8091a60  j           func_246980
    ctx->pc = 0x2496ACu;
    ctx->pc = 0x2496B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2496ACu;
    // 0x2496b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246980u;
    sub_00246980_0x246980(rdram, ctx, runtime); return;
    ctx->pc = 0x2496B4u;
}

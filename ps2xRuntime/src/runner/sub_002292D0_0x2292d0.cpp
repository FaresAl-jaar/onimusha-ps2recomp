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

// Function: sub_002292D0
// Address: 0x2292d0 - 0x2292e4
void sub_002292D0_0x2292d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002292D0_0x2292d0");
#endif

    ctx->pc = 0x2292d0u;

    // 0x2292d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2292d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2292d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2292d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2292d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2292d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2292dc: 0x808a17e  j           func_2285F8
    ctx->pc = 0x2292DCu;
    ctx->pc = 0x2292E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2292DCu;
    // 0x2292e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285F8u;
    sub_002285F8_0x2285f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2292E4u;
}

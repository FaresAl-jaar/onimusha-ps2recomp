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

// Function: sub_002012E0
// Address: 0x2012e0 - 0x2012f4
void sub_002012E0_0x2012e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002012E0_0x2012e0");
#endif

    ctx->pc = 0x2012e0u;

    // 0x2012e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2012e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2012e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2012e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2012e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2012e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2012ec: 0x807d3b0  j           func_1F4EC0
    ctx->pc = 0x2012ECu;
    ctx->pc = 0x2012F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2012ECu;
    // 0x2012f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EC0u;
    sub_001F4EC0_0x1f4ec0(rdram, ctx, runtime); return;
    ctx->pc = 0x2012F4u;
}

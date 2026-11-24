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

// Function: sub_002267F0
// Address: 0x2267f0 - 0x226804
void sub_002267F0_0x2267f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002267F0_0x2267f0");
#endif

    ctx->pc = 0x2267f0u;

    // 0x2267f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2267f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2267f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2267f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2267f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2267f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2267fc: 0x8089db0  j           func_2276C0
    ctx->pc = 0x2267FCu;
    ctx->pc = 0x226800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2267FCu;
    // 0x226800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2276C0u;
    sub_002276C0_0x2276c0(rdram, ctx, runtime); return;
    ctx->pc = 0x226804u;
}

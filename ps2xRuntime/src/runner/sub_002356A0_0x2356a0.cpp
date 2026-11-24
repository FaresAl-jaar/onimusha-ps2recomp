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

// Function: sub_002356A0
// Address: 0x2356a0 - 0x2356b4
void sub_002356A0_0x2356a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002356A0_0x2356a0");
#endif

    ctx->pc = 0x2356a0u;

    // 0x2356a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2356a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2356a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2356a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2356a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2356a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2356ac: 0x8093e2e  j           func_24F8B8
    ctx->pc = 0x2356ACu;
    ctx->pc = 0x2356B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2356ACu;
    // 0x2356b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F8B8u;
    sub_0024F8B8_0x24f8b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2356B4u;
}

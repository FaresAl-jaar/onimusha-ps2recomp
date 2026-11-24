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

// Function: sub_00226808
// Address: 0x226808 - 0x22681c
void sub_00226808_0x226808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226808_0x226808");
#endif

    ctx->pc = 0x226808u;

    // 0x226808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22680c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226814: 0x8089dc8  j           func_227720
    ctx->pc = 0x226814u;
    ctx->pc = 0x226818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226814u;
    // 0x226818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227720u;
    sub_00227720_0x227720(rdram, ctx, runtime); return;
    ctx->pc = 0x22681Cu;
}

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

// Function: sub_00225340
// Address: 0x225340 - 0x225354
void sub_00225340_0x225340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225340_0x225340");
#endif

    ctx->pc = 0x225340u;

    // 0x225340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22534c: 0x80894d6  j           func_225358
    ctx->pc = 0x22534Cu;
    ctx->pc = 0x225350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22534Cu;
    // 0x225350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225358u;
    sub_00225358_0x225358(rdram, ctx, runtime); return;
    ctx->pc = 0x225354u;
}

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

// Function: sub_00226820
// Address: 0x226820 - 0x226834
void sub_00226820_0x226820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226820_0x226820");
#endif

    ctx->pc = 0x226820u;

    // 0x226820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22682c: 0x8089a0e  j           func_226838
    ctx->pc = 0x22682Cu;
    ctx->pc = 0x226830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22682Cu;
    // 0x226830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226838u;
    sub_00226838_0x226838(rdram, ctx, runtime); return;
    ctx->pc = 0x226834u;
}

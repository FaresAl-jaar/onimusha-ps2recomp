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

// Function: sub_00235380
// Address: 0x235380 - 0x235394
void sub_00235380_0x235380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235380_0x235380");
#endif

    ctx->pc = 0x235380u;

    // 0x235380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x235384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23538c: 0x80939a0  j           func_24E680
    ctx->pc = 0x23538Cu;
    ctx->pc = 0x235390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23538Cu;
    // 0x235390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E680u;
    sub_0024E680_0x24e680(rdram, ctx, runtime); return;
    ctx->pc = 0x235394u;
}

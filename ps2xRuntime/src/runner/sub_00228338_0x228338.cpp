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

// Function: sub_00228338
// Address: 0x228338 - 0x22834c
void sub_00228338_0x228338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228338_0x228338");
#endif

    ctx->pc = 0x228338u;

    // 0x228338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22833c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22833cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228344: 0x8094bae  j           func_252EB8
    ctx->pc = 0x228344u;
    ctx->pc = 0x228348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228344u;
    // 0x228348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252EB8u;
    sub_00252EB8_0x252eb8(rdram, ctx, runtime); return;
    ctx->pc = 0x22834Cu;
}

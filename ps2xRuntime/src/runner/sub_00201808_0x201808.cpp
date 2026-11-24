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

// Function: sub_00201808
// Address: 0x201808 - 0x201820
void sub_00201808_0x201808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201808_0x201808");
#endif

    ctx->pc = 0x201808u;

    // 0x201808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20180c: 0x24840284  addiu       $a0, $a0, 0x284
    ctx->pc = 0x20180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 644));
    // 0x201810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201818: 0x8082d0e  j           func_20B438
    ctx->pc = 0x201818u;
    ctx->pc = 0x20181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201818u;
    // 0x20181c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B438u;
    sub_0020B438_0x20b438(rdram, ctx, runtime); return;
    ctx->pc = 0x201820u;
}

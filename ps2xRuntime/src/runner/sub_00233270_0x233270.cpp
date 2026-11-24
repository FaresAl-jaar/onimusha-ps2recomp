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

// Function: sub_00233270
// Address: 0x233270 - 0x233284
void sub_00233270_0x233270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233270_0x233270");
#endif

    ctx->pc = 0x233270u;

    // 0x233270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x233274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23327c: 0x8094e4a  j           func_253928
    ctx->pc = 0x23327Cu;
    ctx->pc = 0x233280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23327Cu;
    // 0x233280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253928u;
    sub_00253928_0x253928(rdram, ctx, runtime); return;
    ctx->pc = 0x233284u;
}

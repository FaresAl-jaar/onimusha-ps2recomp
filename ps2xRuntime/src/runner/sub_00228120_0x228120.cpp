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

// Function: sub_00228120
// Address: 0x228120 - 0x228134
void sub_00228120_0x228120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228120_0x228120");
#endif

    ctx->pc = 0x228120u;

    // 0x228120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22812c: 0x808a0a6  j           func_228298
    ctx->pc = 0x22812Cu;
    ctx->pc = 0x228130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22812Cu;
    // 0x228130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228298u;
    sub_00228298_0x228298(rdram, ctx, runtime); return;
    ctx->pc = 0x228134u;
}

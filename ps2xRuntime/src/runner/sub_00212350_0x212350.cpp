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

// Function: sub_00212350
// Address: 0x212350 - 0x212364
void sub_00212350_0x212350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212350_0x212350");
#endif

    ctx->pc = 0x212350u;

    // 0x212350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x212354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x212358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21235c: 0x80848da  j           func_212368
    ctx->pc = 0x21235Cu;
    ctx->pc = 0x212360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21235Cu;
    // 0x212360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212368u;
    sub_00212368_0x212368(rdram, ctx, runtime); return;
    ctx->pc = 0x212364u;
}

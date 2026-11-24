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

// Function: sub_00235578
// Address: 0x235578 - 0x23558c
void sub_00235578_0x235578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235578_0x235578");
#endif

    ctx->pc = 0x235578u;

    // 0x235578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23557c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235584: 0x8093ce8  j           func_24F3A0
    ctx->pc = 0x235584u;
    ctx->pc = 0x235588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235584u;
    // 0x235588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F3A0u;
    sub_0024F3A0_0x24f3a0(rdram, ctx, runtime); return;
    ctx->pc = 0x23558Cu;
}

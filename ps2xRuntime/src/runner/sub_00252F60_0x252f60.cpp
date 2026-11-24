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

// Function: sub_00252F60
// Address: 0x252f60 - 0x252f78
void sub_00252F60_0x252f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252F60_0x252f60");
#endif

    ctx->pc = 0x252f60u;

    // 0x252f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x252f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x252f64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x252f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252f70: 0x8094b84  j           func_252E10
    ctx->pc = 0x252F70u;
    ctx->pc = 0x252F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252F70u;
    // 0x252f74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252E10u;
    sub_00252E10_0x252e10(rdram, ctx, runtime); return;
    ctx->pc = 0x252F78u;
}

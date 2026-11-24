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

// Function: sub_00238D68
// Address: 0x238d68 - 0x238d7c
void sub_00238D68_0x238d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238D68_0x238d68");
#endif

    ctx->pc = 0x238d68u;

    // 0x238d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238d6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238d74: 0x8092554  j           func_249550
    ctx->pc = 0x238D74u;
    ctx->pc = 0x238D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238D74u;
    // 0x238d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249550u;
    sub_00249550_0x249550(rdram, ctx, runtime); return;
    ctx->pc = 0x238D7Cu;
}

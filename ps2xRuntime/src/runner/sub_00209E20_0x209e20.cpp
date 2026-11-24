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

// Function: sub_00209E20
// Address: 0x209e20 - 0x209e34
void sub_00209E20_0x209e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209E20_0x209e20");
#endif

    ctx->pc = 0x209e20u;

    // 0x209e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209e2c: 0x80899f6  j           func_2267D8
    ctx->pc = 0x209E2Cu;
    ctx->pc = 0x209E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E2Cu;
    // 0x209e30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267D8u;
    sub_002267D8_0x2267d8(rdram, ctx, runtime); return;
    ctx->pc = 0x209E34u;
}

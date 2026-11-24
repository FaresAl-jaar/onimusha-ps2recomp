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

// Function: sub_00253958
// Address: 0x253958 - 0x253970
void sub_00253958_0x253958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253958_0x253958");
#endif

    ctx->pc = 0x253958u;

    // 0x253958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25395c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x25395cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x253960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253968: 0x8094dec  j           func_2537B0
    ctx->pc = 0x253968u;
    ctx->pc = 0x25396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253968u;
    // 0x25396c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2537B0u;
    sub_002537B0_0x2537b0(rdram, ctx, runtime); return;
    ctx->pc = 0x253970u;
}

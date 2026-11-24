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

// Function: sub_00234958
// Address: 0x234958 - 0x23496c
void sub_00234958_0x234958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234958_0x234958");
#endif

    ctx->pc = 0x234958u;

    // 0x234958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23495c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23495cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234964: 0x808cc36  j           func_2330D8
    ctx->pc = 0x234964u;
    ctx->pc = 0x234968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234964u;
    // 0x234968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2330D8u;
    sub_002330D8_0x2330d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23496Cu;
}

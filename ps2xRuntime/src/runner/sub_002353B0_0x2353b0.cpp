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

// Function: sub_002353B0
// Address: 0x2353b0 - 0x2353c4
void sub_002353B0_0x2353b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002353B0_0x2353b0");
#endif

    ctx->pc = 0x2353b0u;

    // 0x2353b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2353b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2353b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2353b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2353b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2353b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2353bc: 0x8093a5a  j           func_24E968
    ctx->pc = 0x2353BCu;
    ctx->pc = 0x2353C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2353BCu;
    // 0x2353c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E968u;
    sub_0024E968_0x24e968(rdram, ctx, runtime); return;
    ctx->pc = 0x2353C4u;
}

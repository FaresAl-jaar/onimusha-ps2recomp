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

// Function: sub_00208748
// Address: 0x208748 - 0x20875c
void sub_00208748_0x208748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208748_0x208748");
#endif

    ctx->pc = 0x208748u;

    // 0x208748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20874c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20874cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208754: 0x80897fc  j           func_225FF0
    ctx->pc = 0x208754u;
    ctx->pc = 0x208758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208754u;
    // 0x208758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225FF0u;
    sub_00225FF0_0x225ff0(rdram, ctx, runtime); return;
    ctx->pc = 0x20875Cu;
}

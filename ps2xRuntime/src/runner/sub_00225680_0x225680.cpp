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

// Function: sub_00225680
// Address: 0x225680 - 0x2256a0
void sub_00225680_0x225680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225680_0x225680");
#endif

    ctx->pc = 0x225680u;

    // 0x225680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225688: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x225688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x22568c: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x22568cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x225690: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x225690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x225694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225698: 0x8089434  j           func_2250D0
    ctx->pc = 0x225698u;
    ctx->pc = 0x22569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225698u;
    // 0x22569c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2250D0u;
    sub_002250D0_0x2250d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2256A0u;
}

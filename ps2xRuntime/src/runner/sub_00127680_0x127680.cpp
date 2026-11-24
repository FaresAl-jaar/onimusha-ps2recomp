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

// Function: sub_00127680
// Address: 0x127680 - 0x12769c
void sub_00127680_0x127680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127680_0x127680");
#endif

    ctx->pc = 0x127680u;

    // 0x127680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x127680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x127684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x127684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x127688: 0x8485000e  lh          $a1, 0xE($a0)
    ctx->pc = 0x127688u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x12768c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12768cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127690: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x127690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x127694: 0x8048920  j           func_122480
    ctx->pc = 0x127694u;
    ctx->pc = 0x127698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127694u;
    // 0x127698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    sub_00122480_0x122480(rdram, ctx, runtime); return;
    ctx->pc = 0x12769Cu;
}

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

// Function: sub_00271380
// Address: 0x271380 - 0x271394
void sub_00271380_0x271380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271380_0x271380");
#endif

    ctx->pc = 0x271380u;

    // 0x271380: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x271380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x271384: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x271384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x271388: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x271388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x27138c: 0x809c488  j           func_271220
    ctx->pc = 0x27138Cu;
    ctx->pc = 0x271390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27138Cu;
    // 0x271390: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271220u;
    sub_00271220_0x271220(rdram, ctx, runtime); return;
    ctx->pc = 0x271394u;
}

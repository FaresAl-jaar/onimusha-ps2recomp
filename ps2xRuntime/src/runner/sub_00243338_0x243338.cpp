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

// Function: sub_00243338
// Address: 0x243338 - 0x243350
void sub_00243338_0x243338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243338_0x243338");
#endif

    ctx->pc = 0x243338u;

    // 0x243338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x243338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24333c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24333cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243340: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x243340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x243344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243348: 0x808fe10  j           func_23F840
    ctx->pc = 0x243348u;
    ctx->pc = 0x24334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243348u;
    // 0x24334c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F840u;
    sub_0023F840_0x23f840(rdram, ctx, runtime); return;
    ctx->pc = 0x243350u;
}

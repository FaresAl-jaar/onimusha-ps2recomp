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

// Function: sub_0020F508
// Address: 0x20f508 - 0x20f520
void sub_0020F508_0x20f508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F508_0x20f508");
#endif

    ctx->pc = 0x20f508u;

    // 0x20f508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20f508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20f50c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20f50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20f514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f518: 0x8083d48  j           func_20F520
    ctx->pc = 0x20F518u;
    ctx->pc = 0x20F51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F518u;
    // 0x20f51c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F520u;
    sub_0020F520_0x20f520(rdram, ctx, runtime); return;
    ctx->pc = 0x20F520u;
}

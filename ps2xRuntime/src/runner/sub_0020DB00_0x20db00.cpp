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

// Function: sub_0020DB00
// Address: 0x20db00 - 0x20db18
void sub_0020DB00_0x20db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DB00_0x20db00");
#endif

    ctx->pc = 0x20db00u;

    // 0x20db00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20db04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20db04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20db08: 0x8c85200c  lw          $a1, 0x200C($a0)
    ctx->pc = 0x20db08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8204)));
    // 0x20db0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20db0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20db10: 0x808408e  j           func_210238
    ctx->pc = 0x20DB10u;
    ctx->pc = 0x20DB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DB10u;
    // 0x20db14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210238u;
    sub_00210238_0x210238(rdram, ctx, runtime); return;
    ctx->pc = 0x20DB18u;
}

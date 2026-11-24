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

// Function: sub_00234940
// Address: 0x234940 - 0x234954
void sub_00234940_0x234940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234940_0x234940");
#endif

    ctx->pc = 0x234940u;

    // 0x234940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x234944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23494c: 0x808d206  j           func_234818
    ctx->pc = 0x23494Cu;
    ctx->pc = 0x234950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23494Cu;
    // 0x234950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234818u;
    sub_00234818_0x234818(rdram, ctx, runtime); return;
    ctx->pc = 0x234954u;
}

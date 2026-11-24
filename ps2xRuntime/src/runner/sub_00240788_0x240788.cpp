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

// Function: sub_00240788
// Address: 0x240788 - 0x24079c
void sub_00240788_0x240788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240788_0x240788");
#endif

    ctx->pc = 0x240788u;

    // 0x240788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24078c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24078cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240794: 0x8090ce8  j           func_2433A0
    ctx->pc = 0x240794u;
    ctx->pc = 0x240798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240794u;
    // 0x240798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2433A0u;
    sub_002433A0_0x2433a0(rdram, ctx, runtime); return;
    ctx->pc = 0x24079Cu;
}

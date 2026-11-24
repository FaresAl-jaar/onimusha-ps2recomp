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

// Function: sub_0023C9B0
// Address: 0x23c9b0 - 0x23c9c8
void sub_0023C9B0_0x23c9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C9B0_0x23c9b0");
#endif

    ctx->pc = 0x23c9b0u;

    // 0x23c9b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c9b4: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x23c9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x23c9b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c9bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c9c0: 0x808f286  j           func_23CA18
    ctx->pc = 0x23C9C0u;
    ctx->pc = 0x23C9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C9C0u;
    // 0x23c9c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CA18u;
    sub_0023CA18_0x23ca18(rdram, ctx, runtime); return;
    ctx->pc = 0x23C9C8u;
}

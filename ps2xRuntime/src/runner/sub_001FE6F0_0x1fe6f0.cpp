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

// Function: sub_001FE6F0
// Address: 0x1fe6f0 - 0x1fe70c
void sub_001FE6F0_0x1fe6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE6F0_0x1fe6f0");
#endif

    ctx->pc = 0x1fe6f0u;

    // 0x1fe6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe6f4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x1fe6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x1fe6f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe6fc: 0x24848140  addiu       $a0, $a0, -0x7EC0
    ctx->pc = 0x1fe6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
    // 0x1fe700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe704: 0x807f9c4  j           func_1FE710
    ctx->pc = 0x1FE704u;
    ctx->pc = 0x1FE708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE704u;
    // 0x1fe708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE710u;
    sub_001FE710_0x1fe710(rdram, ctx, runtime); return;
    ctx->pc = 0x1FE70Cu;
}

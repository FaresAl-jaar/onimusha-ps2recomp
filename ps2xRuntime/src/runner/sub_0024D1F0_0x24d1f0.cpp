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

// Function: sub_0024D1F0
// Address: 0x24d1f0 - 0x24d20c
void sub_0024D1F0_0x24d1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D1F0_0x24d1f0");
#endif

    ctx->pc = 0x24d1f0u;

    // 0x24d1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24d1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24d1f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24d1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d1f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d1fc: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x24d1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x24d200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d204: 0x8049590  j           func_125640
    ctx->pc = 0x24D204u;
    ctx->pc = 0x24D208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D204u;
    // 0x24d208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x24D20Cu;
}

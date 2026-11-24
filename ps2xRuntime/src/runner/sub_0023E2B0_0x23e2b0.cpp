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

// Function: sub_0023E2B0
// Address: 0x23e2b0 - 0x23e2d4
void sub_0023E2B0_0x23e2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E2B0_0x23e2b0");
#endif

    ctx->pc = 0x23e2b0u;

    // 0x23e2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23e2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23e2b4: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x23e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x23e2b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e2bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e2c0: 0x24848ff0  addiu       $a0, $a0, -0x7010
    ctx->pc = 0x23e2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938608));
    // 0x23e2c4: 0x240603c0  addiu       $a2, $zero, 0x3C0
    ctx->pc = 0x23e2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x23e2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e2cc: 0x8049590  j           func_125640
    ctx->pc = 0x23E2CCu;
    ctx->pc = 0x23E2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E2CCu;
    // 0x23e2d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x23E2D4u;
}

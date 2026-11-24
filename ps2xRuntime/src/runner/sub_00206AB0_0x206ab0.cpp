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

// Function: sub_00206AB0
// Address: 0x206ab0 - 0x206ac8
void sub_00206AB0_0x206ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206AB0_0x206ab0");
#endif

    ctx->pc = 0x206ab0u;

    // 0x206ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206ab8: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x206ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x206abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206ac0: 0x8083a02  j           func_20E808
    ctx->pc = 0x206AC0u;
    ctx->pc = 0x206AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206AC0u;
    // 0x206ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E808u;
    sub_0020E808_0x20e808(rdram, ctx, runtime); return;
    ctx->pc = 0x206AC8u;
}

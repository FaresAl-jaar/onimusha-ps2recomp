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

// Function: sub_002714E0
// Address: 0x2714e0 - 0x2714f4
void sub_002714E0_0x2714e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002714E0_0x2714e0");
#endif

    ctx->pc = 0x2714e0u;

    // 0x2714e0: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2714e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2714e4: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x2714e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2714e8: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x2714e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2714ec: 0x809c4e8  j           func_2713A0
    ctx->pc = 0x2714ECu;
    ctx->pc = 0x2714F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2714ECu;
    // 0x2714f0: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2713A0u;
    sub_002713A0_0x2713a0(rdram, ctx, runtime); return;
    ctx->pc = 0x2714F4u;
}

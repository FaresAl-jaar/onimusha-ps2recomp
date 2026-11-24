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

// Function: sub_002087A8
// Address: 0x2087a8 - 0x2087bc
void sub_002087A8_0x2087a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002087A8_0x2087a8");
#endif

    ctx->pc = 0x2087a8u;

    // 0x2087a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2087a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2087ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2087acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2087b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2087b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2087b4: 0x80821f0  j           func_2087C0
    ctx->pc = 0x2087B4u;
    ctx->pc = 0x2087B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087B4u;
    // 0x2087b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2087C0u;
    sub_002087C0_0x2087c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2087BCu;
}

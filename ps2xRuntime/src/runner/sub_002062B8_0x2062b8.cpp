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

// Function: sub_002062B8
// Address: 0x2062b8 - 0x2062cc
void sub_002062B8_0x2062b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002062B8_0x2062b8");
#endif

    ctx->pc = 0x2062b8u;

    // 0x2062b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2062b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2062bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2062bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2062c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2062c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2062c4: 0x80818b4  j           func_2062D0
    ctx->pc = 0x2062C4u;
    ctx->pc = 0x2062C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2062C4u;
    // 0x2062c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2062D0u;
    sub_002062D0_0x2062d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2062CCu;
}

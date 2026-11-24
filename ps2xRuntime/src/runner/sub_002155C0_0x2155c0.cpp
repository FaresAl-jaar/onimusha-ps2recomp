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

// Function: sub_002155C0
// Address: 0x2155c0 - 0x2155dc
void sub_002155C0_0x2155c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002155C0_0x2155c0");
#endif

    ctx->pc = 0x2155c0u;

    // 0x2155c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2155c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2155c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2155c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2155c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2155c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2155cc: 0x8c851fcc  lw          $a1, 0x1FCC($a0)
    ctx->pc = 0x2155ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8140)));
    // 0x2155d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2155d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2155d4: 0x8084082  j           func_210208
    ctx->pc = 0x2155D4u;
    ctx->pc = 0x2155D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2155D4u;
    // 0x2155d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210208u;
    sub_00210208_0x210208(rdram, ctx, runtime); return;
    ctx->pc = 0x2155DCu;
}

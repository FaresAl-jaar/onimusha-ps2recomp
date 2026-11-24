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

// Function: sub_00124980
// Address: 0x124980 - 0x1249a0
void sub_00124980_0x124980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124980_0x124980");
#endif

    ctx->pc = 0x124980u;

    // 0x124980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x124980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x124984: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x124984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x124988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12498c: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x12498cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x124990: 0x8de46048  lw          $a0, 0x6048($t7)
    ctx->pc = 0x124990u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x406048u));
    // 0x124994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124998: 0x8048f7a  j           func_123DE8
    ctx->pc = 0x124998u;
    ctx->pc = 0x12499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124998u;
    // 0x12499c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123DE8u;
    sub_00123DE8_0x123de8(rdram, ctx, runtime); return;
    ctx->pc = 0x1249A0u;
}

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

// Function: sub_002084A8
// Address: 0x2084a8 - 0x2084c8
void sub_002084A8_0x2084a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002084A8_0x2084a8");
#endif

    ctx->pc = 0x2084a8u;

    // 0x2084a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2084a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2084ac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2084acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2084b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2084b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2084b4: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x2084b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x2084b8: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x2084b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2084bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2084bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2084c0: 0x8087e0e  j           func_21F838
    ctx->pc = 0x2084C0u;
    ctx->pc = 0x2084C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2084C0u;
    // 0x2084c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x2084C8u;
}

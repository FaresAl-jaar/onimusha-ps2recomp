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

// Function: sub_00208468
// Address: 0x208468 - 0x208488
void sub_00208468_0x208468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208468_0x208468");
#endif

    ctx->pc = 0x208468u;

    // 0x208468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20846c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x20846cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208474: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x208474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x208478: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x208478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x20847c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20847cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208480: 0x8087e0e  j           func_21F838
    ctx->pc = 0x208480u;
    ctx->pc = 0x208484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208480u;
    // 0x208484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x208488u;
}

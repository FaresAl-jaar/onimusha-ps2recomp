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

// Function: sub_00243628
// Address: 0x243628 - 0x24364c
void sub_00243628_0x243628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243628_0x243628");
#endif

    ctx->pc = 0x243628u;

    // 0x243628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x243628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24362c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24362cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243634: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x243634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x243638: 0x2484e978  addiu       $a0, $a0, -0x1688
    ctx->pc = 0x243638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961528));
    // 0x24363c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24363cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243644: 0x8090d7e  j           func_2435F8
    ctx->pc = 0x243644u;
    ctx->pc = 0x243648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243644u;
    // 0x243648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2435F8u;
    sub_002435F8_0x2435f8(rdram, ctx, runtime); return;
    ctx->pc = 0x24364Cu;
}

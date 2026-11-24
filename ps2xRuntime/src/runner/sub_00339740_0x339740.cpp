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

// Function: sub_00339740
// Address: 0x339740 - 0x339758
void sub_00339740_0x339740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339740_0x339740");
#endif

    ctx->pc = 0x339740u;

    // 0x339740: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x339740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x339744: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x339744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x339748: 0x2442d200  addiu       $v0, $v0, -0x2E00
    ctx->pc = 0x339748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955520));
    // 0x33974c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339750: 0x80ce590  j           func_339640
    ctx->pc = 0x339750u;
    ctx->pc = 0x339754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339750u;
    // 0x339754: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339640u;
    sub_00339640_0x339640(rdram, ctx, runtime); return;
    ctx->pc = 0x339758u;
}

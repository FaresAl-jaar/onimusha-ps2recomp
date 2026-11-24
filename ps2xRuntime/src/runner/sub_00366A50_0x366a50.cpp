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

// Function: sub_00366A50
// Address: 0x366a50 - 0x366a70
void sub_00366A50_0x366a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366A50_0x366a50");
#endif

    ctx->pc = 0x366a50u;

    // 0x366a50: 0x80850334  lb          $a1, 0x334($a0)
    ctx->pc = 0x366a50u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x366a54: 0x27838363  addiu       $v1, $gp, -0x7C9D
    ctx->pc = 0x366a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935395));
    // 0x366a58: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x366a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x366a5c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x366a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x366a60: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x366a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x366a64: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x366a64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x366a68: 0x80dc804  j           func_372010
    ctx->pc = 0x366A68u;
    ctx->pc = 0x366A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A68u;
    // 0x366a6c: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    sub_00372010_0x372010(rdram, ctx, runtime); return;
    ctx->pc = 0x366A70u;
}

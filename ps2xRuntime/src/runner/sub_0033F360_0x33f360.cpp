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

// Function: sub_0033F360
// Address: 0x33f360 - 0x33f37c
void sub_0033F360_0x33f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F360_0x33f360");
#endif

    ctx->pc = 0x33f360u;

    // 0x33f360: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x33f360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33f364: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33f364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33f368: 0x90450030  lbu         $a1, 0x30($v0)
    ctx->pc = 0x33f368u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x33f36c: 0x90460032  lbu         $a2, 0x32($v0)
    ctx->pc = 0x33f36cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x33f370: 0x90470033  lbu         $a3, 0x33($v0)
    ctx->pc = 0x33f370u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 51)));
    // 0x33f374: 0x80c8470  j           func_3211C0
    ctx->pc = 0x33F374u;
    ctx->pc = 0x33F378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F374u;
    // 0x33f378: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3211C0u;
    sub_003211C0_0x3211c0(rdram, ctx, runtime); return;
    ctx->pc = 0x33F37Cu;
}

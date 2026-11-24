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

// Function: sub_001F2520
// Address: 0x1f2520 - 0x1f2540
void sub_001F2520_0x1f2520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2520_0x1f2520");
#endif

    ctx->pc = 0x1f2520u;

    // 0x1f2520: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x1f2520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f2524: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f2524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2528: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1f2528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f252c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f252cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f2530: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f2530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f2534: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x1f2534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f2538: 0x807c8cc  j           func_1F2330
    ctx->pc = 0x1F2538u;
    ctx->pc = 0x1F253Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2538u;
    // 0x1f253c: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2330u;
    sub_001F2330_0x1f2330(rdram, ctx, runtime); return;
    ctx->pc = 0x1F2540u;
}

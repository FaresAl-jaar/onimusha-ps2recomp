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

// Function: sub_003A0660
// Address: 0x3a0660 - 0x3a0688
void sub_003A0660_0x3a0660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0660_0x3a0660");
#endif

    ctx->pc = 0x3a0660u;

    // 0x3a0660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a0660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0664: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3a0664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3a0668: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x3a0668u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a066c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a066cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0670: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a0670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a0674: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a0674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0678: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3a0678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3a067c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a067cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0680: 0x8063cd0  j           func_18F340
    ctx->pc = 0x3A0680u;
    ctx->pc = 0x3A0684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0680u;
    // 0x3a0684: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    sub_0018F340_0x18f340(rdram, ctx, runtime); return;
    ctx->pc = 0x3A0688u;
}

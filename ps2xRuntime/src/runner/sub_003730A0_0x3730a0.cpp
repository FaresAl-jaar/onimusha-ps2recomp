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

// Function: sub_003730A0
// Address: 0x3730a0 - 0x3730b0
void sub_003730A0_0x3730a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003730A0_0x3730a0");
#endif

    ctx->pc = 0x3730a0u;

    // 0x3730a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3730a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3730a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3730a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3730a8: 0x80dc810  j           func_372040
    ctx->pc = 0x3730A8u;
    ctx->pc = 0x3730ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3730A8u;
    // 0x3730ac: 0xa082001e  sb          $v0, 0x1E($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372040u;
    sub_00372040_0x372040(rdram, ctx, runtime); return;
    ctx->pc = 0x3730B0u;
}

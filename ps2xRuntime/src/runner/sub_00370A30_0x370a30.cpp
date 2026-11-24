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

// Function: sub_00370A30
// Address: 0x370a30 - 0x370a48
void sub_00370A30_0x370a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370A30_0x370a30");
#endif

    ctx->pc = 0x370a30u;

    // 0x370a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x370a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370a34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x370a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370a38: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x370a38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x370a3c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x370a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x370a40: 0x80cbed0  j           func_32FB40
    ctx->pc = 0x370A40u;
    ctx->pc = 0x370A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370A40u;
    // 0x370a44: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB40u;
    sub_0032FB40_0x32fb40(rdram, ctx, runtime); return;
    ctx->pc = 0x370A48u;
}

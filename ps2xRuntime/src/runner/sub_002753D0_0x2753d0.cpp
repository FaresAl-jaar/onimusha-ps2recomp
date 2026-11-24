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

// Function: sub_002753D0
// Address: 0x2753d0 - 0x2753e8
void sub_002753D0_0x2753d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002753D0_0x2753d0");
#endif

    ctx->pc = 0x2753d0u;

    // 0x2753d0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2753d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2753d4: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x2753d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2753d8: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x2753d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2753dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2753dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753e0: 0x80a2a8c  j           func_28AA30
    ctx->pc = 0x2753E0u;
    ctx->pc = 0x2753E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2753E0u;
    // 0x2753e4: 0x24040098  addiu       $a0, $zero, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    sub_0028AA30_0x28aa30(rdram, ctx, runtime); return;
    ctx->pc = 0x2753E8u;
}

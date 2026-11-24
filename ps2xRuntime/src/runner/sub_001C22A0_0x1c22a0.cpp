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

// Function: sub_001C22A0
// Address: 0x1c22a0 - 0x1c22b4
void sub_001C22A0_0x1c22a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C22A0_0x1c22a0");
#endif

    ctx->pc = 0x1c22a0u;

    // 0x1c22a0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1c22a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x1c22a4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1c22a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1c22a8: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x1c22a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x1c22ac: 0x804bf78  j           func_12FDE0
    ctx->pc = 0x1C22ACu;
    ctx->pc = 0x1C22B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22ACu;
    // 0x1c22b0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    sub_0012FDE0_0x12fde0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C22B4u;
}

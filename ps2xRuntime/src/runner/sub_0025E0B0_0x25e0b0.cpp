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

// Function: sub_0025E0B0
// Address: 0x25e0b0 - 0x25e0c4
void sub_0025E0B0_0x25e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E0B0_0x25e0b0");
#endif

    ctx->pc = 0x25e0b0u;

    // 0x25e0b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25e0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e0b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25e0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e0b8: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x25e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x25e0bc: 0x80e360c  j           func_38D830
    ctx->pc = 0x25E0BCu;
    ctx->pc = 0x25E0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E0BCu;
    // 0x25e0c0: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    sub_0038D830_0x38d830(rdram, ctx, runtime); return;
    ctx->pc = 0x25E0C4u;
}

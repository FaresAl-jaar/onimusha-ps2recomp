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

// Function: sub_002F13A0
// Address: 0x2f13a0 - 0x2f13b8
void sub_002F13A0_0x2f13a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F13A0_0x2f13a0");
#endif

    ctx->pc = 0x2f13a0u;

    // 0x2f13a0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f13a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f13a4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f13a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f13a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f13a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f13ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f13acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f13b0: 0x80bffe0  j           func_2FFF80
    ctx->pc = 0x2F13B0u;
    ctx->pc = 0x2F13B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F13B0u;
    // 0x2f13b4: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFF80u;
    sub_002FFF80_0x2fff80(rdram, ctx, runtime); return;
    ctx->pc = 0x2F13B8u;
}

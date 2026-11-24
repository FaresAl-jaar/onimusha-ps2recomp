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

// Function: sub_002F1DF0
// Address: 0x2f1df0 - 0x2f1e08
void sub_002F1DF0_0x2f1df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1DF0_0x2f1df0");
#endif

    ctx->pc = 0x2f1df0u;

    // 0x2f1df0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f1df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1df4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f1df4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1df8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1dfc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f1dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e00: 0x80e79ec  j           func_39E7B0
    ctx->pc = 0x2F1E00u;
    ctx->pc = 0x2F1E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1E00u;
    // 0x2f1e04: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E7B0u;
    sub_0039E7B0_0x39e7b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F1E08u;
}

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

// Function: sub_002F0EF0
// Address: 0x2f0ef0 - 0x2f0f0c
void sub_002F0EF0_0x2f0ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0EF0_0x2f0ef0");
#endif

    ctx->pc = 0x2f0ef0u;

    // 0x2f0ef0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f0ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ef4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f0ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ef8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f0ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0efc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f0efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0f00: 0x24080027  addiu       $t0, $zero, 0x27
    ctx->pc = 0x2f0f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x2f0f04: 0x80d32fc  j           func_34CBF0
    ctx->pc = 0x2F0F04u;
    ctx->pc = 0x2F0F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F04u;
    // 0x2f0f08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CBF0u;
    sub_0034CBF0_0x34cbf0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F0F0Cu;
}

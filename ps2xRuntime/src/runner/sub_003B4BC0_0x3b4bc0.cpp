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

// Function: sub_003B4BC0
// Address: 0x3b4bc0 - 0x3b4bd0
void sub_003B4BC0_0x3b4bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4BC0_0x3b4bc0");
#endif

    ctx->pc = 0x3b4bc0u;

    // 0x3b4bc0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b4bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4bc4: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3b4bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3b4bc8: 0x80ed2f8  j           func_3B4BE0
    ctx->pc = 0x3B4BC8u;
    ctx->pc = 0x3B4BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4BC8u;
    // 0x3b4bcc: 0x2484fe90  addiu       $a0, $a0, -0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4BE0u;
    sub_003B4BE0_0x3b4be0(rdram, ctx, runtime); return;
    ctx->pc = 0x3B4BD0u;
}

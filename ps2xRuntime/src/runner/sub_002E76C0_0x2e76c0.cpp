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

// Function: sub_002E76C0
// Address: 0x2e76c0 - 0x2e76d0
void sub_002E76C0_0x2e76c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E76C0_0x2e76c0");
#endif

    ctx->pc = 0x2e76c0u;

    // 0x2e76c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e76c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e76c4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2e76c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2e76c8: 0x80ba304  j           func_2E8C10
    ctx->pc = 0x2E76C8u;
    ctx->pc = 0x2E76CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E76C8u;
    // 0x2e76cc: 0x2484b7f0  addiu       $a0, $a0, -0x4810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8C10u;
    sub_002E8C10_0x2e8c10(rdram, ctx, runtime); return;
    ctx->pc = 0x2E76D0u;
}

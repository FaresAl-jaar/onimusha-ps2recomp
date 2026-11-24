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

// Function: sub_003F6CE0
// Address: 0x3f6ce0 - 0x3f6cec
void sub_003F6CE0_0x3f6ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6CE0_0x3f6ce0");
#endif

    ctx->pc = 0x3f6ce0u;

    // 0x3f6ce0: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3f6ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3f6ce4: 0x80fdb5c  j           func_3F6D70
    ctx->pc = 0x3F6CE4u;
    ctx->pc = 0x3F6CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6CE4u;
    // 0x3f6ce8: 0x24846680  addiu       $a0, $a0, 0x6680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6D70u;
    sub_003F6D70_0x3f6d70(rdram, ctx, runtime); return;
    ctx->pc = 0x3F6CECu;
}

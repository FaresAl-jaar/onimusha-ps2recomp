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

// Function: sub_003F6CD0
// Address: 0x3f6cd0 - 0x3f6cdc
void sub_003F6CD0_0x3f6cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6CD0_0x3f6cd0");
#endif

    ctx->pc = 0x3f6cd0u;

    // 0x3f6cd0: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3f6cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3f6cd4: 0x80fdb3c  j           func_3F6CF0
    ctx->pc = 0x3F6CD4u;
    ctx->pc = 0x3F6CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6CD4u;
    // 0x3f6cd8: 0x24846680  addiu       $a0, $a0, 0x6680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6CF0u;
    sub_003F6CF0_0x3f6cf0(rdram, ctx, runtime); return;
    ctx->pc = 0x3F6CDCu;
}

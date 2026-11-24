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

// Function: sub_002CEBD0
// Address: 0x2cebd0 - 0x2cebdc
void sub_002CEBD0_0x2cebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEBD0_0x2cebd0");
#endif

    ctx->pc = 0x2cebd0u;

    // 0x2cebd0: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2cebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x2cebd4: 0x80966fc  j           func_259BF0
    ctx->pc = 0x2CEBD4u;
    ctx->pc = 0x2CEBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEBD4u;
    // 0x2cebd8: 0x2484f5f0  addiu       $a0, $a0, -0xA10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259BF0u;
    sub_00259BF0_0x259bf0(rdram, ctx, runtime); return;
    ctx->pc = 0x2CEBDCu;
}

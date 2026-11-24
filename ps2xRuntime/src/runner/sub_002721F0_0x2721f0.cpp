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

// Function: sub_002721F0
// Address: 0x2721f0 - 0x2721fc
void sub_002721F0_0x2721f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002721F0_0x2721f0");
#endif

    ctx->pc = 0x2721f0u;

    // 0x2721f0: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2721f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x2721f4: 0x809c8a4  j           func_272290
    ctx->pc = 0x2721F4u;
    ctx->pc = 0x2721F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2721F4u;
    // 0x2721f8: 0x24840800  addiu       $a0, $a0, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272290u;
    sub_00272290_0x272290(rdram, ctx, runtime); return;
    ctx->pc = 0x2721FCu;
}

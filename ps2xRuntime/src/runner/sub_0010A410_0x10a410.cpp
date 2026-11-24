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

// Function: sub_0010A410
// Address: 0x10a410 - 0x10a41c
void sub_0010A410_0x10a410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A410_0x10a410");
#endif

    ctx->pc = 0x10a410u;

    // 0x10a410: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x10a410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x10a414: 0x8043536  j           func_10D4D8
    ctx->pc = 0x10A414u;
    ctx->pc = 0x10A418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A414u;
    // 0x10a418: 0x24a52088  addiu       $a1, $a1, 0x2088 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    sub_0010D4D8_0x10d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x10A41Cu;
}

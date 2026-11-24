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

// Function: sub_00167330
// Address: 0x167330 - 0x16733c
void sub_00167330_0x167330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167330_0x167330");
#endif

    ctx->pc = 0x167330u;

    // 0x167330: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x167330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x167334: 0x8059ce0  j           func_167380
    ctx->pc = 0x167334u;
    ctx->pc = 0x167338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167334u;
    // 0x167338: 0x9025cea4  lbu         $a1, -0x315C($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167380u;
    sub_00167380_0x167380(rdram, ctx, runtime); return;
    ctx->pc = 0x16733Cu;
}

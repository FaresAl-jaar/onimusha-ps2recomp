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

// Function: sub_00266D10
// Address: 0x266d10 - 0x266d1c
void sub_00266D10_0x266d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266D10_0x266d10");
#endif

    ctx->pc = 0x266d10u;

    // 0x266d10: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x266d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x266d14: 0x807cce0  j           func_1F3380
    ctx->pc = 0x266D14u;
    ctx->pc = 0x266D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266D14u;
    // 0x266d18: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    sub_001F3380_0x1f3380(rdram, ctx, runtime); return;
    ctx->pc = 0x266D1Cu;
}

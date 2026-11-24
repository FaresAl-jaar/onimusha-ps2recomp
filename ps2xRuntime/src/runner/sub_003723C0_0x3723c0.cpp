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

// Function: sub_003723C0
// Address: 0x3723c0 - 0x3723d8
void sub_003723C0_0x3723c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003723C0_0x3723c0");
#endif

    ctx->pc = 0x3723c0u;

    // 0x3723c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3723c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3723c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3723c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3723c8: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3723c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3723cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3723ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3723d0: 0x80dc910  j           func_372440
    ctx->pc = 0x3723D0u;
    ctx->pc = 0x3723D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3723D0u;
    // 0x3723d4: 0x24841400  addiu       $a0, $a0, 0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372440u;
    sub_00372440_0x372440(rdram, ctx, runtime); return;
    ctx->pc = 0x3723D8u;
}

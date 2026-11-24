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

// Function: sub_00293AB0
// Address: 0x293ab0 - 0x293ac0
void sub_00293AB0_0x293ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293AB0_0x293ab0");
#endif

    ctx->pc = 0x293ab0u;

    // 0x293ab0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x293ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ab4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x293ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x293ab8: 0x8051420  j           func_145080
    ctx->pc = 0x293AB8u;
    ctx->pc = 0x293ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293AB8u;
    // 0x293abc: 0x248486e0  addiu       $a0, $a0, -0x7920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145080u;
    sub_00145080_0x145080(rdram, ctx, runtime); return;
    ctx->pc = 0x293AC0u;
}

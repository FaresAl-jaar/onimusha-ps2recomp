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

// Function: sub_00364F20
// Address: 0x364f20 - 0x364f2c
void sub_00364F20_0x364f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364F20_0x364f20");
#endif

    ctx->pc = 0x364f20u;

    // 0x364f20: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x364f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x364f24: 0x80d93e4  j           func_364F90
    ctx->pc = 0x364F24u;
    ctx->pc = 0x364F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364F24u;
    // 0x364f28: 0x2484e6b0  addiu       $a0, $a0, -0x1950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364F90u;
    sub_00364F90_0x364f90(rdram, ctx, runtime); return;
    ctx->pc = 0x364F2Cu;
}

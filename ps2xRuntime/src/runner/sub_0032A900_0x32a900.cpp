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

// Function: sub_0032A900
// Address: 0x32a900 - 0x32a90c
void sub_0032A900_0x32a900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A900_0x32a900");
#endif

    ctx->pc = 0x32a900u;

    // 0x32a900: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32a900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32a904: 0x80957a0  j           func_255E80
    ctx->pc = 0x32A904u;
    ctx->pc = 0x32A908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A904u;
    // 0x32a908: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    sub_00255E80_0x255e80(rdram, ctx, runtime); return;
    ctx->pc = 0x32A90Cu;
}

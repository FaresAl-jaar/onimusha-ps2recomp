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

// Function: sub_003425E0
// Address: 0x3425e0 - 0x3425f8
void sub_003425E0_0x3425e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003425E0_0x3425e0");
#endif

    ctx->pc = 0x3425e0u;

    // 0x3425e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3425e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3425e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3425e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3425e8: 0x27848b94  addiu       $a0, $gp, -0x746C
    ctx->pc = 0x3425e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937492));
    // 0x3425ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3425ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3425f0: 0x80d0678  j           func_3419E0
    ctx->pc = 0x3425F0u;
    ctx->pc = 0x3425F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3425F0u;
    // 0x3425f4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3419E0u;
    sub_003419E0_0x3419e0(rdram, ctx, runtime); return;
    ctx->pc = 0x3425F8u;
}

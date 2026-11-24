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

// Function: sub_003824F0
// Address: 0x3824f0 - 0x382500
void sub_003824F0_0x3824f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003824F0_0x3824f0");
#endif

    ctx->pc = 0x3824f0u;

    // 0x3824f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3824f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3824f4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3824f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3824f8: 0x80e0954  j           func_382550
    ctx->pc = 0x3824F8u;
    ctx->pc = 0x3824FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3824F8u;
    // 0x3824fc: 0xa08001f0  sb          $zero, 0x1F0($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 496), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382550u;
    sub_00382550_0x382550(rdram, ctx, runtime); return;
    ctx->pc = 0x382500u;
}

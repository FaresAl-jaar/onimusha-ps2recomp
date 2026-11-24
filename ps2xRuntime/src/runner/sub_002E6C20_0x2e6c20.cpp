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

// Function: sub_002E6C20
// Address: 0x2e6c20 - 0x2e6c30
void sub_002E6C20_0x2e6c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6C20_0x2e6c20");
#endif

    ctx->pc = 0x2e6c20u;

    // 0x2e6c20: 0x848200c2  lh          $v0, 0xC2($a0)
    ctx->pc = 0x2e6c20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x2e6c24: 0xa4822b20  sh          $v0, 0x2B20($a0)
    ctx->pc = 0x2e6c24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11040), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e6c28: 0x80a4a1c  j           func_292870
    ctx->pc = 0x2E6C28u;
    ctx->pc = 0x2E6C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6C28u;
    // 0x2e6c2c: 0xa4822b22  sh          $v0, 0x2B22($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 11042), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    sub_00292870_0x292870(rdram, ctx, runtime); return;
    ctx->pc = 0x2E6C30u;
}

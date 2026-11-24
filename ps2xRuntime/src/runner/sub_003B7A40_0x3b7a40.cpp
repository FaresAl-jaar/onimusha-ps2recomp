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

// Function: sub_003B7A40
// Address: 0x3b7a40 - 0x3b7a60
void sub_003B7A40_0x3b7a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7A40_0x3b7a40");
#endif

    ctx->pc = 0x3b7a40u;

    // 0x3b7a40: 0x8c822b88  lw          $v0, 0x2B88($a0)
    ctx->pc = 0x3b7a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11144)));
    // 0x3b7a44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7A44u;
    {
        const bool branch_taken_0x3b7a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7a44) {
            ctx->pc = 0x3B7A58u;
            goto label_3b7a58;
        }
    }
    ctx->pc = 0x3B7A4Cu;
    // 0x3b7a4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b7a50: 0xac822b88  sw          $v0, 0x2B88($a0)
    ctx->pc = 0x3b7a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11144), GPR_U32(ctx, 2));
    // 0x3b7a54: 0x0  nop
    ctx->pc = 0x3b7a54u;
    // NOP
label_3b7a58:
    // 0x3b7a58: 0x80a6188  j           func_298620
    ctx->pc = 0x3B7A58u;
    ctx->pc = 0x3B7A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7A58u;
    // 0x3b7a5c: 0xa0802b4c  sb          $zero, 0x2B4C($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 11084), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    sub_00298620_0x298620(rdram, ctx, runtime); return;
    ctx->pc = 0x3B7A60u;
}

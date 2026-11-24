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

// Function: sub_003A2B70
// Address: 0x3a2b70 - 0x3a2ba0
void sub_003A2B70_0x3a2b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2B70_0x3a2b70");
#endif

    ctx->pc = 0x3a2b70u;

    // 0x3a2b70: 0x908207d8  lbu         $v0, 0x7D8($a0)
    ctx->pc = 0x3a2b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2008)));
    // 0x3a2b74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2B74u;
    {
        const bool branch_taken_0x3a2b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B74u;
        // 0x3a2b78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2b74) {
            ctx->pc = 0x3A2B88u;
            goto label_3a2b88;
        }
    }
    ctx->pc = 0x3A2B7Cu;
    // 0x3a2b7c: 0xa0822b20  sb          $v0, 0x2B20($a0)
    ctx->pc = 0x3a2b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11040), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a2b80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A2B80u;
    {
        const bool branch_taken_0x3a2b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B80u;
        // 0x3a2b84: 0xa08029d1  sb          $zero, 0x29D1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10705), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2b80) {
            ctx->pc = 0x3A2B98u;
            goto label_3a2b98;
        }
    }
    ctx->pc = 0x3A2B88u;
label_3a2b88:
    // 0x3a2b88: 0xa0802b20  sb          $zero, 0x2B20($a0)
    ctx->pc = 0x3a2b88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11040), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a2b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a2b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2b90: 0xa08229d1  sb          $v0, 0x29D1($a0)
    ctx->pc = 0x3a2b90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10705), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a2b94: 0x0  nop
    ctx->pc = 0x3a2b94u;
    // NOP
label_3a2b98:
    // 0x3a2b98: 0x80a4a1c  j           func_292870
    ctx->pc = 0x3A2B98u;
    ctx->pc = 0x292870u;
    sub_00292870_0x292870(rdram, ctx, runtime); return;
    ctx->pc = 0x3A2BA0u;
}

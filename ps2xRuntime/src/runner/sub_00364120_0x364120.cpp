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

// Function: sub_00364120
// Address: 0x364120 - 0x364160
void sub_00364120_0x364120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364120_0x364120");
#endif

    switch (ctx->pc) {
        case 0x364130u: goto label_364130;
        default: break;
    }

    ctx->pc = 0x364120u;

    // 0x364120: 0xa3808bd4  sb          $zero, -0x742C($gp)
    ctx->pc = 0x364120u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937556), (uint8_t)GPR_U32(ctx, 0));
    // 0x364124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364128: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x364128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36412c: 0x0  nop
    ctx->pc = 0x36412cu;
    // NOP
label_364130:
    // 0x364130: 0x93838bd4  lbu         $v1, -0x742C($gp)
    ctx->pc = 0x364130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937556)));
    // 0x364134: 0xc51004  sllv        $v0, $a1, $a2
    ctx->pc = 0x364134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x364138: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x364138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36413c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36413cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x364140: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x364140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x364144: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x364144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x364148: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x364148u;
    {
        const bool branch_taken_0x364148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364148u;
        // 0x36414c: 0xa3838bd4  sb          $v1, -0x742C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937556), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364148) {
            ctx->pc = 0x364130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364130;
        }
    }
    ctx->pc = 0x364150u;
    // 0x364150: 0x93828bd4  lbu         $v0, -0x742C($gp)
    ctx->pc = 0x364150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937556)));
    // 0x364154: 0xa3808bdc  sb          $zero, -0x7424($gp)
    ctx->pc = 0x364154u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937564), (uint8_t)GPR_U32(ctx, 0));
    // 0x364158: 0x80b9db8  j           func_2E76E0
    ctx->pc = 0x364158u;
    ctx->pc = 0x36415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364158u;
    // 0x36415c: 0xa3828bd8  sb          $v0, -0x7428($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937560), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E76E0u;
    sub_002E76E0_0x2e76e0(rdram, ctx, runtime); return;
    ctx->pc = 0x364160u;
}

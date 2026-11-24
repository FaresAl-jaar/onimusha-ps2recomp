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

// Function: sub_001588D0
// Address: 0x1588d0 - 0x158910
void sub_001588D0_0x1588d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001588D0_0x1588d0");
#endif

    ctx->pc = 0x1588d0u;

    // 0x1588d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1588d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1588d4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x1588d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x1588d8: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x1588d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x1588dc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1588DCu;
    {
        const bool branch_taken_0x1588dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1588dc) {
            ctx->pc = 0x158908u;
            goto label_158908;
        }
    }
    ctx->pc = 0x1588E4u;
    // 0x1588e4: 0x8c837a20  lw          $v1, 0x7A20($a0)
    ctx->pc = 0x1588e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31264)));
    // 0x1588e8: 0x3c010149  lui         $at, 0x149
    ctx->pc = 0x1588e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)329 << 16));
    // 0x1588ec: 0x342196ff  ori         $at, $at, 0x96FF
    ctx->pc = 0x1588ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38655);
    // 0x1588f0: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x1588f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1588f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1588F4u;
    {
        const bool branch_taken_0x1588f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1588f4) {
            ctx->pc = 0x158908u;
            goto label_158908;
        }
    }
    ctx->pc = 0x1588FCu;
    // 0x1588fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1588fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x158900: 0xac837a20  sw          $v1, 0x7A20($a0)
    ctx->pc = 0x158900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31264), GPR_U32(ctx, 3));
    // 0x158904: 0x0  nop
    ctx->pc = 0x158904u;
    // NOP
label_158908:
    // 0x158908: 0x3e00008  jr          $ra
    ctx->pc = 0x158908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158910u;
}

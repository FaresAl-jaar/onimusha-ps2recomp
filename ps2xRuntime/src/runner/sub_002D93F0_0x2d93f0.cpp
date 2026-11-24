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

// Function: sub_002D93F0
// Address: 0x2d93f0 - 0x2d9450
void sub_002D93F0_0x2d93f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D93F0_0x2d93f0");
#endif

    ctx->pc = 0x2d93f0u;

    // 0x2d93f0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x2d93f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2d93f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d93f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d93f8: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D93F8u;
    {
        const bool branch_taken_0x2d93f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2d93f8) {
            ctx->pc = 0x2D9438u;
            goto label_2d9438;
        }
    }
    ctx->pc = 0x2D9400u;
    // 0x2d9400: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9400u;
    {
        const bool branch_taken_0x2d9400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9400) {
            ctx->pc = 0x2D9410u;
            goto label_2d9410;
        }
    }
    ctx->pc = 0x2D9408u;
    // 0x2d9408: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D9408u;
    {
        const bool branch_taken_0x2d9408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9408) {
            ctx->pc = 0x2D9448u;
            goto label_2d9448;
        }
    }
    ctx->pc = 0x2D9410u;
label_2d9410:
    // 0x2d9410: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x2d9410u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9414: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x2d9414u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9418: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x2d9418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x2d941c: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x2d941cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d9420: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x2d9420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x2d9424: 0xa08007f5  sb          $zero, 0x7F5($a0)
    ctx->pc = 0x2d9424u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9428: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2d9428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2d942c: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x2d942cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x2d9430: 0xa0850821  sb          $a1, 0x821($a0)
    ctx->pc = 0x2d9430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d9434: 0x0  nop
    ctx->pc = 0x2d9434u;
    // NOP
label_2d9438:
    // 0x2d9438: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x2d9438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x2d943c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D943Cu;
    {
        const bool branch_taken_0x2d943c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D943Cu;
        // 0x2d9440: 0x2403009a  addiu       $v1, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d943c) {
            ctx->pc = 0x2D9448u;
            goto label_2d9448;
        }
    }
    ctx->pc = 0x2D9444u;
    // 0x2d9444: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x2d9444u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2d9448:
    // 0x2d9448: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9450u;
}

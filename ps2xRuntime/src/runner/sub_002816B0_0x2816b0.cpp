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

// Function: sub_002816B0
// Address: 0x2816b0 - 0x281718
void sub_002816B0_0x2816b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002816B0_0x2816b0");
#endif

    ctx->pc = 0x2816b0u;

    // 0x2816b0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x2816b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2816b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2816b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2816b8: 0x10670011  beq         $v1, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2816B8u;
    {
        const bool branch_taken_0x2816b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x2816b8) {
            ctx->pc = 0x281700u;
            goto label_281700;
        }
    }
    ctx->pc = 0x2816C0u;
    // 0x2816c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2816C0u;
    {
        const bool branch_taken_0x2816c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2816c0) {
            ctx->pc = 0x2816D0u;
            goto label_2816d0;
        }
    }
    ctx->pc = 0x2816C8u;
    // 0x2816c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2816C8u;
    {
        const bool branch_taken_0x2816c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2816c8) {
            ctx->pc = 0x281710u;
            goto label_281710;
        }
    }
    ctx->pc = 0x2816D0u;
label_2816d0:
    // 0x2816d0: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x2816d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2816d4: 0x24050093  addiu       $a1, $zero, 0x93
    ctx->pc = 0x2816d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x2816d8: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x2816d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x2816dc: 0x34c60800  ori         $a2, $a2, 0x800
    ctx->pc = 0x2816dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2048);
    // 0x2816e0: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x2816e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
    // 0x2816e4: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x2816e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2816e8: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x2816e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2816ec: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x2816ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x2816f0: 0xa08007f5  sb          $zero, 0x7F5($a0)
    ctx->pc = 0x2816f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2816f4: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x2816f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x2816f8: 0xa0870821  sb          $a3, 0x821($a0)
    ctx->pc = 0x2816f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 7));
    // 0x2816fc: 0x0  nop
    ctx->pc = 0x2816fcu;
    // NOP
label_281700:
    // 0x281700: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x281700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x281704: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x281704u;
    {
        const bool branch_taken_0x281704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x281708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281704u;
        // 0x281708: 0x2403009a  addiu       $v1, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281704) {
            ctx->pc = 0x281710u;
            goto label_281710;
        }
    }
    ctx->pc = 0x28170Cu;
    // 0x28170c: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x28170cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_281710:
    // 0x281710: 0x3e00008  jr          $ra
    ctx->pc = 0x281710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281718u;
}

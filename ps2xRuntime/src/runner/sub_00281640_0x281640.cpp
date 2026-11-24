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

// Function: sub_00281640
// Address: 0x281640 - 0x2816a8
void sub_00281640_0x281640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281640_0x281640");
#endif

    ctx->pc = 0x281640u;

    // 0x281640: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x281640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x281644: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x281644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281648: 0x10670011  beq         $v1, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x281648u;
    {
        const bool branch_taken_0x281648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x281648) {
            ctx->pc = 0x281690u;
            goto label_281690;
        }
    }
    ctx->pc = 0x281650u;
    // 0x281650: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281650u;
    {
        const bool branch_taken_0x281650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x281650) {
            ctx->pc = 0x281660u;
            goto label_281660;
        }
    }
    ctx->pc = 0x281658u;
    // 0x281658: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x281658u;
    {
        const bool branch_taken_0x281658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281658) {
            ctx->pc = 0x2816A0u;
            goto label_2816a0;
        }
    }
    ctx->pc = 0x281660u;
label_281660:
    // 0x281660: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x281660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x281664: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x281664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x281668: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x281668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x28166c: 0x34c60800  ori         $a2, $a2, 0x800
    ctx->pc = 0x28166cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2048);
    // 0x281670: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x281670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
    // 0x281674: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x281674u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x281678: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x281678u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x28167c: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x28167cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x281680: 0xa08007f5  sb          $zero, 0x7F5($a0)
    ctx->pc = 0x281680u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x281684: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x281684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x281688: 0xa0870821  sb          $a3, 0x821($a0)
    ctx->pc = 0x281688u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 7));
    // 0x28168c: 0x0  nop
    ctx->pc = 0x28168cu;
    // NOP
label_281690:
    // 0x281690: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x281690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x281694: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x281694u;
    {
        const bool branch_taken_0x281694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x281698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281694u;
        // 0x281698: 0x24030099  addiu       $v1, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281694) {
            ctx->pc = 0x2816A0u;
            goto label_2816a0;
        }
    }
    ctx->pc = 0x28169Cu;
    // 0x28169c: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x28169cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2816a0:
    // 0x2816a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2816A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2816A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2816A8u;
}

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

// Function: sub_00373170
// Address: 0x373170 - 0x3731b8
void sub_00373170_0x373170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373170_0x373170");
#endif

    switch (ctx->pc) {
        case 0x373188u: goto label_373188;
        default: break;
    }

    ctx->pc = 0x373170u;

    // 0x373170: 0x908601c2  lbu         $a2, 0x1C2($a0)
    ctx->pc = 0x373170u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 450)));
    // 0x373174: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x373174u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x373178: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x373178u;
    {
        const bool branch_taken_0x373178 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373178u;
        // 0x37317c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373178) {
            ctx->pc = 0x3731B0u;
            goto label_3731b0;
        }
    }
    ctx->pc = 0x373180u;
    // 0x373180: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x373180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x373184: 0x0  nop
    ctx->pc = 0x373184u;
    // NOP
label_373188:
    // 0x373188: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x373188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x37318c: 0x906301bd  lbu         $v1, 0x1BD($v1)
    ctx->pc = 0x37318cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 445)));
    // 0x373190: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x373190u;
    {
        const bool branch_taken_0x373190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x373190) {
            ctx->pc = 0x3731A0u;
            goto label_3731a0;
        }
    }
    ctx->pc = 0x373198u;
    // 0x373198: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x373198u;
    {
        const bool branch_taken_0x373198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373198u;
        // 0x37319c: 0xa087032e  sb          $a3, 0x32E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 814), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373198) {
            ctx->pc = 0x3731B0u;
            goto label_3731b0;
        }
    }
    ctx->pc = 0x3731A0u;
label_3731a0:
    // 0x3731a0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3731a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3731a4: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x3731a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3731a8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3731A8u;
    {
        const bool branch_taken_0x3731a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3731a8) {
            ctx->pc = 0x373188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373188;
        }
    }
    ctx->pc = 0x3731B0u;
label_3731b0:
    // 0x3731b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3731B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3731B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3731B8u;
}

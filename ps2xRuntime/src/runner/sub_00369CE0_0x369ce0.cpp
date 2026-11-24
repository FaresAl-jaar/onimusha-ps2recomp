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

// Function: sub_00369CE0
// Address: 0x369ce0 - 0x369d40
void sub_00369CE0_0x369ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369CE0_0x369ce0");
#endif

    switch (ctx->pc) {
        case 0x369cf8u: goto label_369cf8;
        default: break;
    }

    ctx->pc = 0x369ce0u;

    // 0x369ce0: 0x90872b28  lbu         $a3, 0x2B28($a0)
    ctx->pc = 0x369ce0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11048)));
    // 0x369ce4: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x369ce4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x369ce8: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x369CE8u;
    {
        const bool branch_taken_0x369ce8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x369CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369CE8u;
        // 0x369cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369ce8) {
            ctx->pc = 0x369D30u;
            goto label_369d30;
        }
    }
    ctx->pc = 0x369CF0u;
    // 0x369cf0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x369cf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369cf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x369cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_369cf8:
    // 0x369cf8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x369cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x369cfc: 0x90632b4c  lbu         $v1, 0x2B4C($v1)
    ctx->pc = 0x369cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11084)));
    // 0x369d00: 0x14660007  bne         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x369D00u;
    {
        const bool branch_taken_0x369d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x369d00) {
            ctx->pc = 0x369D20u;
            goto label_369d20;
        }
    }
    ctx->pc = 0x369D08u;
    // 0x369d08: 0x8d032b3c  lw          $v1, 0x2B3C($t0)
    ctx->pc = 0x369d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11068)));
    // 0x369d0c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x369D0Cu;
    {
        const bool branch_taken_0x369d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x369d0c) {
            ctx->pc = 0x369D20u;
            goto label_369d20;
        }
    }
    ctx->pc = 0x369D14u;
    // 0x369d14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x369D14u;
    {
        const bool branch_taken_0x369d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369d14) {
            ctx->pc = 0x369D38u;
            goto label_369d38;
        }
    }
    ctx->pc = 0x369D1Cu;
    // 0x369d1c: 0x0  nop
    ctx->pc = 0x369d1cu;
    // NOP
label_369d20:
    // 0x369d20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x369d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x369d24: 0x47182a  slt         $v1, $v0, $a3
    ctx->pc = 0x369d24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x369d28: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x369D28u;
    {
        const bool branch_taken_0x369d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x369D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369D28u;
        // 0x369d2c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369d28) {
            ctx->pc = 0x369CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369cf8;
        }
    }
    ctx->pc = 0x369D30u;
label_369d30:
    // 0x369d30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x369d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x369d34: 0x0  nop
    ctx->pc = 0x369d34u;
    // NOP
label_369d38:
    // 0x369d38: 0x3e00008  jr          $ra
    ctx->pc = 0x369D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369D40u;
}

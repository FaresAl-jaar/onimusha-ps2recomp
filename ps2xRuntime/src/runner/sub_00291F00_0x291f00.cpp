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

// Function: sub_00291F00
// Address: 0x291f00 - 0x291f60
void sub_00291F00_0x291f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291F00_0x291f00");
#endif

    switch (ctx->pc) {
        case 0x291f10u: goto label_291f10;
        default: break;
    }

    ctx->pc = 0x291f00u;

    // 0x291f00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x291f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f04: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x291f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x291f08: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x291f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x291f0c: 0x0  nop
    ctx->pc = 0x291f0cu;
    // NOP
label_291f10:
    // 0x291f10: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x291f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x291f14: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x291F14u;
    {
        const bool branch_taken_0x291f14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x291f14) {
            ctx->pc = 0x291F40u;
            goto label_291f40;
        }
    }
    ctx->pc = 0x291F1Cu;
    // 0x291f1c: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x291f1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x291f20: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x291F20u;
    {
        const bool branch_taken_0x291f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x291f20) {
            ctx->pc = 0x291F40u;
            goto label_291f40;
        }
    }
    ctx->pc = 0x291F28u;
    // 0x291f28: 0x8ca206c8  lw          $v0, 0x6C8($a1)
    ctx->pc = 0x291f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1736)));
    // 0x291f2c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x291f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x291f30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x291F30u;
    {
        const bool branch_taken_0x291f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F30u;
        // 0x291f34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f30) {
            ctx->pc = 0x291F40u;
            goto label_291f40;
        }
    }
    ctx->pc = 0x291F38u;
    // 0x291f38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x291F38u;
    {
        const bool branch_taken_0x291f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291f38) {
            ctx->pc = 0x291F58u;
            goto label_291f58;
        }
    }
    ctx->pc = 0x291F40u;
label_291f40:
    // 0x291f40: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x291f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x291f44: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x291f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x291f48: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x291F48u;
    {
        const bool branch_taken_0x291f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291F48u;
        // 0x291f4c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f48) {
            ctx->pc = 0x291F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291f10;
        }
    }
    ctx->pc = 0x291F50u;
    // 0x291f50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x291f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f54: 0x0  nop
    ctx->pc = 0x291f54u;
    // NOP
label_291f58:
    // 0x291f58: 0x3e00008  jr          $ra
    ctx->pc = 0x291F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291F60u;
}

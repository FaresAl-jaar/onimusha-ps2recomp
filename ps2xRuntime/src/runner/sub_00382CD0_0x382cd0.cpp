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

// Function: sub_00382CD0
// Address: 0x382cd0 - 0x382d38
void sub_00382CD0_0x382cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382CD0_0x382cd0");
#endif

    switch (ctx->pc) {
        case 0x382d00u: goto label_382d00;
        default: break;
    }

    ctx->pc = 0x382cd0u;

    // 0x382cd0: 0x93828c28  lbu         $v0, -0x73D8($gp)
    ctx->pc = 0x382cd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937640)));
    // 0x382cd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x382CD4u;
    {
        const bool branch_taken_0x382cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382CD4u;
        // 0x382cd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382cd4) {
            ctx->pc = 0x382CE8u;
            goto label_382ce8;
        }
    }
    ctx->pc = 0x382CDCu;
    // 0x382cdc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x382CDCu;
    {
        const bool branch_taken_0x382cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x382cdc) {
            ctx->pc = 0x382D30u;
            goto label_382d30;
        }
    }
    ctx->pc = 0x382CE4u;
    // 0x382ce4: 0x0  nop
    ctx->pc = 0x382ce4u;
    // NOP
label_382ce8:
    // 0x382ce8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x382ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x382cec: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x382cecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x382cf0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x382CF0u;
    {
        const bool branch_taken_0x382cf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x382CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382CF0u;
        // 0x382cf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382cf0) {
            ctx->pc = 0x382D28u;
            goto label_382d28;
        }
    }
    ctx->pc = 0x382CF8u;
    // 0x382cf8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x382cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x382cfc: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x382cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_382d00:
    // 0x382d00: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x382d00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x382d04: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x382D04u;
    {
        const bool branch_taken_0x382d04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x382D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382D04u;
        // 0x382d08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382d04) {
            ctx->pc = 0x382D18u;
            goto label_382d18;
        }
    }
    ctx->pc = 0x382D0Cu;
    // 0x382d0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x382D0Cu;
    {
        const bool branch_taken_0x382d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x382d0c) {
            ctx->pc = 0x382D30u;
            goto label_382d30;
        }
    }
    ctx->pc = 0x382D14u;
    // 0x382d14: 0x0  nop
    ctx->pc = 0x382d14u;
    // NOP
label_382d18:
    // 0x382d18: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x382d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x382d1c: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x382d1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x382d20: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x382D20u;
    {
        const bool branch_taken_0x382d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382D20u;
        // 0x382d24: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382d20) {
            ctx->pc = 0x382D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382d00;
        }
    }
    ctx->pc = 0x382D28u;
label_382d28:
    // 0x382d28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x382d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382d2c: 0x0  nop
    ctx->pc = 0x382d2cu;
    // NOP
label_382d30:
    // 0x382d30: 0x3e00008  jr          $ra
    ctx->pc = 0x382D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382D38u;
}

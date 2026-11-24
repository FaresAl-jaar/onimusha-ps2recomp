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

// Function: sub_00193CE0
// Address: 0x193ce0 - 0x193d70
void sub_00193CE0_0x193ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193CE0_0x193ce0");
#endif

    switch (ctx->pc) {
        case 0x193cf8u: goto label_193cf8;
        default: break;
    }

    ctx->pc = 0x193ce0u;

    // 0x193ce0: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x193ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193ce4: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x193ce4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x193ce8: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x193CE8u;
    {
        const bool branch_taken_0x193ce8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CE8u;
        // 0x193cec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ce8) {
            ctx->pc = 0x193D68u;
            goto label_193d68;
        }
    }
    ctx->pc = 0x193CF0u;
    // 0x193cf0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x193cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x193cf4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x193cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_193cf8:
    // 0x193cf8: 0x90830011  lbu         $v1, 0x11($a0)
    ctx->pc = 0x193cf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x193cfc: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x193CFCu;
    {
        const bool branch_taken_0x193cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x193D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CFCu;
        // 0x193d00: 0x24870010  addiu       $a3, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193cfc) {
            ctx->pc = 0x193D58u;
            goto label_193d58;
        }
    }
    ctx->pc = 0x193D04u;
    // 0x193d04: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x193d04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x193d08: 0x1066000b  beq         $v1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x193D08u;
    {
        const bool branch_taken_0x193d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x193d08) {
            ctx->pc = 0x193D38u;
            goto label_193d38;
        }
    }
    ctx->pc = 0x193D10u;
    // 0x193d10: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x193D10u;
    {
        const bool branch_taken_0x193d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x193d10) {
            ctx->pc = 0x193D28u;
            goto label_193d28;
        }
    }
    ctx->pc = 0x193D18u;
    // 0x193d18: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x193D18u;
    {
        const bool branch_taken_0x193d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x193d18) {
            ctx->pc = 0x193D28u;
            goto label_193d28;
        }
    }
    ctx->pc = 0x193D20u;
    // 0x193d20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x193D20u;
    {
        const bool branch_taken_0x193d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193d20) {
            ctx->pc = 0x193D48u;
            goto label_193d48;
        }
    }
    ctx->pc = 0x193D28u;
label_193d28:
    // 0x193d28: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x193d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x193d2c: 0x90630009  lbu         $v1, 0x9($v1)
    ctx->pc = 0x193d2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x193d30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x193D30u;
    {
        const bool branch_taken_0x193d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D30u;
        // 0x193d34: 0x30680004  andi        $t0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d30) {
            ctx->pc = 0x193D48u;
            goto label_193d48;
        }
    }
    ctx->pc = 0x193D38u;
label_193d38:
    // 0x193d38: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x193d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x193d3c: 0x90630009  lbu         $v1, 0x9($v1)
    ctx->pc = 0x193d3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x193d40: 0x30680004  andi        $t0, $v1, 0x4
    ctx->pc = 0x193d40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x193d44: 0x0  nop
    ctx->pc = 0x193d44u;
    // NOP
label_193d48:
    // 0x193d48: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x193D48u;
    {
        const bool branch_taken_0x193d48 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x193d48) {
            ctx->pc = 0x193D58u;
            goto label_193d58;
        }
    }
    ctx->pc = 0x193D50u;
    // 0x193d50: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x193d50u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x193d54: 0x0  nop
    ctx->pc = 0x193d54u;
    // NOP
label_193d58:
    // 0x193d58: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x193d58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x193d5c: 0x149182a  slt         $v1, $t2, $t1
    ctx->pc = 0x193d5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x193d60: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x193D60u;
    {
        const bool branch_taken_0x193d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x193D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D60u;
        // 0x193d64: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d60) {
            ctx->pc = 0x193CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193cf8;
        }
    }
    ctx->pc = 0x193D68u;
label_193d68:
    // 0x193d68: 0x3e00008  jr          $ra
    ctx->pc = 0x193D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193D70u;
}

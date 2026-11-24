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

// Function: sub_00349D80
// Address: 0x349d80 - 0x349e54
void sub_00349D80_0x349d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349D80_0x349d80");
#endif

    switch (ctx->pc) {
        case 0x349d9cu: goto label_349d9c;
        case 0x349dd8u: goto label_349dd8;
        default: break;
    }

    ctx->pc = 0x349d80u;

    // 0x349d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x349d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x349d84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x349d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x349d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x349d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x349d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x349d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x349d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x349d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349d94: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x349D94u;
    SET_GPR_U32(ctx, 31, 0x349D9Cu);
    ctx->pc = 0x349D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349D94u;
    // 0x349d98: 0x94840058  lhu         $a0, 0x58($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x349D94u, 0x349D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D9Cu;
label_349d9c:
    // 0x349d9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x349d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349da0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349DA0u;
    {
        const bool branch_taken_0x349da0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x349da0) {
            ctx->pc = 0x349DB0u;
            goto label_349db0;
        }
    }
    ctx->pc = 0x349DA8u;
    // 0x349da8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x349DA8u;
    {
        const bool branch_taken_0x349da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349DA8u;
        // 0x349dac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349da8) {
            ctx->pc = 0x349E40u;
            goto label_349e40;
        }
    }
    ctx->pc = 0x349DB0u;
label_349db0:
    // 0x349db0: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x349db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x349db4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x349DB4u;
    {
        const bool branch_taken_0x349db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x349DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349DB4u;
        // 0x349db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349db4) {
            ctx->pc = 0x349DC8u;
            goto label_349dc8;
        }
    }
    ctx->pc = 0x349DBCu;
    // 0x349dbc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x349DBCu;
    {
        const bool branch_taken_0x349dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349dbc) {
            ctx->pc = 0x349E40u;
            goto label_349e40;
        }
    }
    ctx->pc = 0x349DC4u;
    // 0x349dc4: 0x0  nop
    ctx->pc = 0x349dc4u;
    // NOP
label_349dc8:
    // 0x349dc8: 0x96250044  lhu         $a1, 0x44($s1)
    ctx->pc = 0x349dc8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x349dcc: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x349dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x349dd0: 0xc0bce3c  jal         func_2F38F0
    ctx->pc = 0x349DD0u;
    SET_GPR_U32(ctx, 31, 0x349DD8u);
    ctx->pc = 0x349DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349DD0u;
    // 0x349dd4: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F38F0u, 0x349DD0u, 0x349DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349DD8u;
label_349dd8:
    // 0x349dd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349DD8u;
    {
        const bool branch_taken_0x349dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x349dd8) {
            ctx->pc = 0x349DE8u;
            goto label_349de8;
        }
    }
    ctx->pc = 0x349DE0u;
    // 0x349de0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x349DE0u;
    {
        const bool branch_taken_0x349de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349DE0u;
        // 0x349de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349de0) {
            ctx->pc = 0x349E40u;
            goto label_349e40;
        }
    }
    ctx->pc = 0x349DE8u;
label_349de8:
    // 0x349de8: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x349de8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x349dec: 0x9202001f  lbu         $v0, 0x1F($s0)
    ctx->pc = 0x349decu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
    // 0x349df0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x349df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x349df4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x349df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x349df8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x349df8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x349dfc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x349DFCu;
    {
        const bool branch_taken_0x349dfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x349dfc) {
            ctx->pc = 0x349E10u;
            goto label_349e10;
        }
    }
    ctx->pc = 0x349E04u;
    // 0x349e04: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x349E04u;
    {
        const bool branch_taken_0x349e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E04u;
        // 0x349e08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349e04) {
            ctx->pc = 0x349E40u;
            goto label_349e40;
        }
    }
    ctx->pc = 0x349E0Cu;
    // 0x349e0c: 0x0  nop
    ctx->pc = 0x349e0cu;
    // NOP
label_349e10:
    // 0x349e10: 0x92020020  lbu         $v0, 0x20($s0)
    ctx->pc = 0x349e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x349e14: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x349e14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x349e18: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x349E18u;
    {
        const bool branch_taken_0x349e18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x349E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E18u;
        // 0x349e1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349e18) {
            ctx->pc = 0x349E28u;
            goto label_349e28;
        }
    }
    ctx->pc = 0x349E20u;
    // 0x349e20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x349E20u;
    {
        const bool branch_taken_0x349e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349e20) {
            ctx->pc = 0x349E40u;
            goto label_349e40;
        }
    }
    ctx->pc = 0x349E28u;
label_349e28:
    // 0x349e28: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x349e28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x349e2c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x349e2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x349e30: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x349E30u;
    {
        const bool branch_taken_0x349e30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x349E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E30u;
        // 0x349e34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349e30) {
            ctx->pc = 0x349E40u;
            goto label_349e40;
        }
    }
    ctx->pc = 0x349E38u;
    // 0x349e38: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x349E38u;
    {
        const bool branch_taken_0x349e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E38u;
        // 0x349e3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349e38) {
            ctx->pc = 0x349E40u;
            goto label_349e40;
        }
    }
    ctx->pc = 0x349E40u;
label_349e40:
    // 0x349e40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x349e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349e44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x349e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x349E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E4Cu;
        // 0x349e50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349E54u;
}

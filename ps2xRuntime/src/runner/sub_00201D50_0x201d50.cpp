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

// Function: sub_00201D50
// Address: 0x201d50 - 0x201e50
void sub_00201D50_0x201d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201D50_0x201d50");
#endif

    switch (ctx->pc) {
        case 0x201d84u: goto label_201d84;
        case 0x201d8cu: goto label_201d8c;
        case 0x201dacu: goto label_201dac;
        case 0x201dc8u: goto label_201dc8;
        case 0x201de4u: goto label_201de4;
        case 0x201df8u: goto label_201df8;
        case 0x201e14u: goto label_201e14;
        case 0x201e2cu: goto label_201e2c;
        default: break;
    }

    ctx->pc = 0x201d50u;

    // 0x201d50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x201d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x201d54: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x201d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x201d58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x201d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d5c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x201d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x201d60: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x201d60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x201d64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x201d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x201d68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x201d68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d6c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x201d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x201d70: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x201d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x201d74: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x201d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x201d78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x201d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x201d7c: 0xc0806a8  jal         func_201AA0
    ctx->pc = 0x201D7Cu;
    SET_GPR_U32(ctx, 31, 0x201D84u);
    ctx->pc = 0x201D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D7Cu;
    // 0x201d80: 0x2655000a  addiu       $s5, $s2, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AA0u, 0x201D7Cu, 0x201D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D84u;
label_201d84:
    // 0x201d84: 0xc049f18  jal         func_127C60
    ctx->pc = 0x201D84u;
    SET_GPR_U32(ctx, 31, 0x201D8Cu);
    ctx->pc = 0x201D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D84u;
    // 0x201d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x201D84u, 0x201D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D8Cu;
label_201d8c:
    // 0x201d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d90: 0x27b40002  addiu       $s4, $sp, 0x2
    ctx->pc = 0x201d90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x201d94: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x201d94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x201d98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x201d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d9c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x201d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201da0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x201da0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201da4: 0xc0806b8  jal         func_201AE0
    ctx->pc = 0x201DA4u;
    SET_GPR_U32(ctx, 31, 0x201DACu);
    ctx->pc = 0x201DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DA4u;
    // 0x201da8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AE0u, 0x201DA4u, 0x201DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201DACu;
label_201dac:
    // 0x201dac: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x201dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201db0: 0x97a40000  lhu         $a0, 0x0($sp)
    ctx->pc = 0x201db0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201db4: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x201db4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x201db8: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x201db8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x201dbc: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x201dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x201dc0: 0xa6430008  sh          $v1, 0x8($s2)
    ctx->pc = 0x201dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x201dc4: 0xa6440004  sh          $a0, 0x4($s2)
    ctx->pc = 0x201dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 4));
label_201dc8:
    // 0x201dc8: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x201dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x201dcc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x201dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x201dd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201dd4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x201dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201dd8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x201dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ddc: 0xc080742  jal         func_201D08
    ctx->pc = 0x201DDCu;
    SET_GPR_U32(ctx, 31, 0x201DE4u);
    ctx->pc = 0x201DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DDCu;
    // 0x201de0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D08u, 0x201DDCu, 0x201DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201DE4u;
label_201de4:
    // 0x201de4: 0x97a40000  lhu         $a0, 0x0($sp)
    ctx->pc = 0x201de4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201de8: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x201DE8u;
    {
        const bool branch_taken_0x201de8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x201DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DE8u;
        // 0x201dec: 0xa6440004  sh          $a0, 0x4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201de8) {
            ctx->pc = 0x201DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201dc8;
        }
    }
    ctx->pc = 0x201DF0u;
    // 0x201df0: 0x26b00040  addiu       $s0, $s5, 0x40
    ctx->pc = 0x201df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x201df4: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x201df4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_201df8:
    // 0x201df8: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x201df8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x201dfc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x201dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x201e00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x201e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x201e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e0c: 0xc080742  jal         func_201D08
    ctx->pc = 0x201E0Cu;
    SET_GPR_U32(ctx, 31, 0x201E14u);
    ctx->pc = 0x201E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E0Cu;
    // 0x201e10: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D08u, 0x201E0Cu, 0x201E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E14u;
label_201e14:
    // 0x201e14: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x201e14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201e18: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x201e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e1c: 0x621fff6  bgez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x201E1Cu;
    {
        const bool branch_taken_0x201e1c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x201E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E1Cu;
        // 0x201e20: 0xa6440004  sh          $a0, 0x4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e1c) {
            ctx->pc = 0x201DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201df8;
        }
    }
    ctx->pc = 0x201E24u;
    // 0x201e24: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x201E24u;
    SET_GPR_U32(ctx, 31, 0x201E2Cu);
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x201E24u, 0x201E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E2Cu;
label_201e2c:
    // 0x201e2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x201e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201e30: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x201e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x201e34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x201e34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201e38: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x201e38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x201e3c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x201e3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201e40: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x201e40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x201e44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x201e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201e48: 0x3e00008  jr          $ra
    ctx->pc = 0x201E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E48u;
        // 0x201e4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201E50u;
}

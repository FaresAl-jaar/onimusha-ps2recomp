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

// Function: sub_00326DD0
// Address: 0x326dd0 - 0x326e68
void sub_00326DD0_0x326dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326DD0_0x326dd0");
#endif

    switch (ctx->pc) {
        case 0x326dd0u: goto label_326dd0;
        case 0x326dd4u: goto label_326dd4;
        case 0x326dd8u: goto label_326dd8;
        case 0x326ddcu: goto label_326ddc;
        case 0x326de0u: goto label_326de0;
        case 0x326de4u: goto label_326de4;
        case 0x326de8u: goto label_326de8;
        case 0x326decu: goto label_326dec;
        case 0x326df0u: goto label_326df0;
        case 0x326df4u: goto label_326df4;
        case 0x326df8u: goto label_326df8;
        case 0x326dfcu: goto label_326dfc;
        case 0x326e00u: goto label_326e00;
        case 0x326e04u: goto label_326e04;
        case 0x326e08u: goto label_326e08;
        case 0x326e0cu: goto label_326e0c;
        case 0x326e10u: goto label_326e10;
        case 0x326e14u: goto label_326e14;
        case 0x326e18u: goto label_326e18;
        case 0x326e1cu: goto label_326e1c;
        case 0x326e20u: goto label_326e20;
        case 0x326e24u: goto label_326e24;
        case 0x326e28u: goto label_326e28;
        case 0x326e2cu: goto label_326e2c;
        case 0x326e30u: goto label_326e30;
        case 0x326e34u: goto label_326e34;
        case 0x326e38u: goto label_326e38;
        case 0x326e3cu: goto label_326e3c;
        case 0x326e40u: goto label_326e40;
        case 0x326e44u: goto label_326e44;
        case 0x326e48u: goto label_326e48;
        case 0x326e4cu: goto label_326e4c;
        case 0x326e50u: goto label_326e50;
        case 0x326e54u: goto label_326e54;
        case 0x326e58u: goto label_326e58;
        case 0x326e5cu: goto label_326e5c;
        case 0x326e60u: goto label_326e60;
        case 0x326e64u: goto label_326e64;
        default: break;
    }

    ctx->pc = 0x326dd0u;

label_326dd0:
    // 0x326dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x326dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_326dd4:
    // 0x326dd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x326dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_326dd8:
    // 0x326dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x326dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_326ddc:
    // 0x326ddc: 0xc0a6d4c  jal         func_29B530
label_326de0:
    if (ctx->pc == 0x326DE0u) {
        ctx->pc = 0x326DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DDCu;
        // 0x326de0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326DE4u;
        goto label_326de4;
    }
    ctx->pc = 0x326DDCu;
    SET_GPR_U32(ctx, 31, 0x326DE4u);
    ctx->pc = 0x326DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326DDCu;
    // 0x326de0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B530u, 0x326DDCu, 0x326DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326DE4u;
label_326de4:
    // 0x326de4: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x326de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_326de8:
    // 0x326de8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x326de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_326dec:
    // 0x326dec: 0x320f809  jalr        $t9
label_326df0:
    if (ctx->pc == 0x326DF0u) {
        ctx->pc = 0x326DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DECu;
        // 0x326df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326DF4u;
        goto label_326df4;
    }
    ctx->pc = 0x326DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x326DF4u);
        ctx->pc = 0x326DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DECu;
        // 0x326df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326DECu, 0x326DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326DF4u;
label_326df4:
    // 0x326df4: 0xc0a6da0  jal         func_29B680
label_326df8:
    if (ctx->pc == 0x326DF8u) {
        ctx->pc = 0x326DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DF4u;
        // 0x326df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326DFCu;
        goto label_326dfc;
    }
    ctx->pc = 0x326DF4u;
    SET_GPR_U32(ctx, 31, 0x326DFCu);
    ctx->pc = 0x326DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326DF4u;
    // 0x326df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B680u, 0x326DF4u, 0x326DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326DFCu;
label_326dfc:
    // 0x326dfc: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x326dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_326e00:
    // 0x326e00: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_326e04:
    if (ctx->pc == 0x326E04u) {
        ctx->pc = 0x326E08u;
        goto label_326e08;
    }
    ctx->pc = 0x326E00u;
    {
        const bool branch_taken_0x326e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x326e00) {
            ctx->pc = 0x326E58u;
            goto label_326e58;
        }
    }
    ctx->pc = 0x326E08u;
label_326e08:
    // 0x326e08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x326e08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_326e0c:
    // 0x326e0c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x326e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_326e10:
    // 0x326e10: 0x320f809  jalr        $t9
label_326e14:
    if (ctx->pc == 0x326E14u) {
        ctx->pc = 0x326E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E10u;
        // 0x326e14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326E18u;
        goto label_326e18;
    }
    ctx->pc = 0x326E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x326E18u);
        ctx->pc = 0x326E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E10u;
        // 0x326e14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326E10u, 0x326E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326E18u;
label_326e18:
    // 0x326e18: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x326e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_326e1c:
    // 0x326e1c: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x326e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_326e20:
    // 0x326e20: 0x30420600  andi        $v0, $v0, 0x600
    ctx->pc = 0x326e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1536);
label_326e24:
    // 0x326e24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_326e28:
    if (ctx->pc == 0x326E28u) {
        ctx->pc = 0x326E2Cu;
        goto label_326e2c;
    }
    ctx->pc = 0x326E24u;
    {
        const bool branch_taken_0x326e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326e24) {
            ctx->pc = 0x326E40u;
            goto label_326e40;
        }
    }
    ctx->pc = 0x326E2Cu;
label_326e2c:
    // 0x326e2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x326e2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_326e30:
    // 0x326e30: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x326e30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_326e34:
    // 0x326e34: 0x320f809  jalr        $t9
label_326e38:
    if (ctx->pc == 0x326E38u) {
        ctx->pc = 0x326E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E34u;
        // 0x326e38: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326E3Cu;
        goto label_326e3c;
    }
    ctx->pc = 0x326E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x326E3Cu);
        ctx->pc = 0x326E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E34u;
        // 0x326e38: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326E34u, 0x326E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326E3Cu;
label_326e3c:
    // 0x326e3c: 0x0  nop
    ctx->pc = 0x326e3cu;
    // NOP
label_326e40:
    // 0x326e40: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x326e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_326e44:
    // 0x326e44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x326e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_326e48:
    // 0x326e48: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x326e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_326e4c:
    // 0x326e4c: 0x320f809  jalr        $t9
label_326e50:
    if (ctx->pc == 0x326E50u) {
        ctx->pc = 0x326E54u;
        goto label_326e54;
    }
    ctx->pc = 0x326E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x326E54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326E4Cu, 0x326E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326E54u;
label_326e54:
    // 0x326e54: 0x0  nop
    ctx->pc = 0x326e54u;
    // NOP
label_326e58:
    // 0x326e58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x326e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_326e5c:
    // 0x326e5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x326e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_326e60:
    // 0x326e60: 0x3e00008  jr          $ra
label_326e64:
    if (ctx->pc == 0x326E64u) {
        ctx->pc = 0x326E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E60u;
        // 0x326e64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326E68u;
        goto label_fallthrough_0x326e60;
    }
    ctx->pc = 0x326E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E60u;
        // 0x326e64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x326e60:
    ctx->pc = 0x326E68u;
}

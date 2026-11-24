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

// Function: sub_002F5DB0
// Address: 0x2f5db0 - 0x2f5e9c
void sub_002F5DB0_0x2f5db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5DB0_0x2f5db0");
#endif

    switch (ctx->pc) {
        case 0x2f5dd4u: goto label_2f5dd4;
        case 0x2f5de8u: goto label_2f5de8;
        case 0x2f5e20u: goto label_2f5e20;
        case 0x2f5e2cu: goto label_2f5e2c;
        case 0x2f5e58u: goto label_2f5e58;
        case 0x2f5e68u: goto label_2f5e68;
        case 0x2f5e84u: goto label_2f5e84;
        default: break;
    }

    ctx->pc = 0x2f5db0u;

    // 0x2f5db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f5db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f5db4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f5db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f5db8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f5db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f5dbc: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x2f5dbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f5dc0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F5DC0u;
    {
        const bool branch_taken_0x2f5dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DC0u;
        // 0x2f5dc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5dc0) {
            ctx->pc = 0x2F5DE0u;
            goto label_2f5de0;
        }
    }
    ctx->pc = 0x2F5DC8u;
    // 0x2f5dc8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2f5dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f5dcc: 0xc09c870  jal         func_2721C0
    ctx->pc = 0x2F5DCCu;
    SET_GPR_U32(ctx, 31, 0x2F5DD4u);
    ctx->pc = 0x2F5DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5DCCu;
    // 0x2f5dd0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2721C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2721C0u, 0x2F5DCCu, 0x2F5DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DD4u;
label_2f5dd4:
    // 0x2f5dd4: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x2f5dd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f5dd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f5ddc: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f5ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
label_2f5de0:
    // 0x2f5de0: 0xc09c87c  jal         func_2721F0
    ctx->pc = 0x2F5DE0u;
    SET_GPR_U32(ctx, 31, 0x2F5DE8u);
    ctx->pc = 0x2721F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2721F0u, 0x2F5DE0u, 0x2F5DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DE8u;
label_2f5de8:
    // 0x2f5de8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2F5DE8u;
    {
        const bool branch_taken_0x2f5de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5de8) {
            ctx->pc = 0x2F5E88u;
            goto label_2f5e88;
        }
    }
    ctx->pc = 0x2F5DF0u;
    // 0x2f5df0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2f5df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f5df4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f5df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f5df8: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F5DF8u;
    {
        const bool branch_taken_0x2f5df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DF8u;
        // 0x2f5dfc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5df8) {
            ctx->pc = 0x2F5E70u;
            goto label_2f5e70;
        }
    }
    ctx->pc = 0x2F5E00u;
    // 0x2f5e00: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F5E00u;
    {
        const bool branch_taken_0x2f5e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f5e00) {
            ctx->pc = 0x2F5E38u;
            goto label_2f5e38;
        }
    }
    ctx->pc = 0x2F5E08u;
    // 0x2f5e08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5E08u;
    {
        const bool branch_taken_0x2f5e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e08) {
            ctx->pc = 0x2F5E18u;
            goto label_2f5e18;
        }
    }
    ctx->pc = 0x2F5E10u;
    // 0x2f5e10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F5E10u;
    {
        const bool branch_taken_0x2f5e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e10) {
            ctx->pc = 0x2F5E38u;
            goto label_2f5e38;
        }
    }
    ctx->pc = 0x2F5E18u;
label_2f5e18:
    // 0x2f5e18: 0xc0bd754  jal         func_2F5D50
    ctx->pc = 0x2F5E18u;
    SET_GPR_U32(ctx, 31, 0x2F5E20u);
    ctx->pc = 0x2F5D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5D50u, 0x2F5E18u, 0x2F5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E20u;
label_2f5e20:
    // 0x2f5e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5e24: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F5E24u;
    SET_GPR_U32(ctx, 31, 0x2F5E2Cu);
    ctx->pc = 0x2F5E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E24u;
    // 0x2f5e28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F5E24u, 0x2F5E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E2Cu;
label_2f5e2c:
    // 0x2f5e2c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2F5E2Cu;
    {
        const bool branch_taken_0x2f5e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e2c) {
            ctx->pc = 0x2F5E88u;
            goto label_2f5e88;
        }
    }
    ctx->pc = 0x2F5E34u;
    // 0x2f5e34: 0x0  nop
    ctx->pc = 0x2f5e34u;
    // NOP
label_2f5e38:
    // 0x2f5e38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f5e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5e3c: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5E3Cu;
    {
        const bool branch_taken_0x2f5e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2f5e3c) {
            ctx->pc = 0x2F5E60u;
            goto label_2f5e60;
        }
    }
    ctx->pc = 0x2F5E44u;
    // 0x2f5e44: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f5e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f5e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5e4c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f5e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5e50: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F5E50u;
    SET_GPR_U32(ctx, 31, 0x2F5E58u);
    ctx->pc = 0x2F5E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E50u;
    // 0x2f5e54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F5E50u, 0x2F5E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E58u;
label_2f5e58:
    // 0x2f5e58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F5E58u;
    {
        const bool branch_taken_0x2f5e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e58) {
            ctx->pc = 0x2F5E88u;
            goto label_2f5e88;
        }
    }
    ctx->pc = 0x2F5E60u;
label_2f5e60:
    // 0x2f5e60: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F5E60u;
    SET_GPR_U32(ctx, 31, 0x2F5E68u);
    ctx->pc = 0x2F5E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E60u;
    // 0x2f5e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F5E60u, 0x2F5E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E68u;
label_2f5e68:
    // 0x2f5e68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F5E68u;
    {
        const bool branch_taken_0x2f5e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e68) {
            ctx->pc = 0x2F5E88u;
            goto label_2f5e88;
        }
    }
    ctx->pc = 0x2F5E70u;
label_2f5e70:
    // 0x2f5e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5e74: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2f5e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2f5e78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f5e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5e7c: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F5E7Cu;
    SET_GPR_U32(ctx, 31, 0x2F5E84u);
    ctx->pc = 0x2F5E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E7Cu;
    // 0x2f5e80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F5E7Cu, 0x2F5E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E84u;
label_2f5e84:
    // 0x2f5e84: 0x0  nop
    ctx->pc = 0x2f5e84u;
    // NOP
label_2f5e88:
    // 0x2f5e88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f5e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5e8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5e94: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E94u;
        // 0x2f5e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5E9Cu;
}

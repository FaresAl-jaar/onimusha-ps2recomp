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

// Function: sub_002B2DB0
// Address: 0x2b2db0 - 0x2b2e3c
void sub_002B2DB0_0x2b2db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2DB0_0x2b2db0");
#endif

    switch (ctx->pc) {
        case 0x2b2dd0u: goto label_2b2dd0;
        case 0x2b2dd8u: goto label_2b2dd8;
        case 0x2b2e08u: goto label_2b2e08;
        case 0x2b2e1cu: goto label_2b2e1c;
        default: break;
    }

    ctx->pc = 0x2b2db0u;

    // 0x2b2db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2db4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b2db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b2db8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b2db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b2dbc: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x2b2dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    // 0x2b2dc0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2b2dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b2dc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b2dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2dc8: 0xc0ad0d8  jal         func_2B4360
    ctx->pc = 0x2B2DC8u;
    SET_GPR_U32(ctx, 31, 0x2B2DD0u);
    ctx->pc = 0x2B2DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2DC8u;
    // 0x2b2dcc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4360u, 0x2B2DC8u, 0x2B2DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2DD0u;
label_2b2dd0:
    // 0x2b2dd0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B2DD0u;
    {
        const bool branch_taken_0x2b2dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2DD0u;
        // 0x2b2dd4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2dd0) {
            ctx->pc = 0x2B2E28u;
            goto label_2b2e28;
        }
    }
    ctx->pc = 0x2B2DD8u;
label_2b2dd8:
    // 0x2b2dd8: 0x9203002d  lbu         $v1, 0x2D($s0)
    ctx->pc = 0x2b2dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x2b2ddc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2de0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2DE0u;
    {
        const bool branch_taken_0x2b2de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2DE0u;
        // 0x2b2de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2de0) {
            ctx->pc = 0x2B2DF8u;
            goto label_2b2df8;
        }
    }
    ctx->pc = 0x2B2DE8u;
    // 0x2b2de8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2DE8u;
    {
        const bool branch_taken_0x2b2de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b2de8) {
            ctx->pc = 0x2B2DF8u;
            goto label_2b2df8;
        }
    }
    ctx->pc = 0x2B2DF0u;
    // 0x2b2df0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2DF0u;
    {
        const bool branch_taken_0x2b2df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2df0) {
            ctx->pc = 0x2B2E08u;
            goto label_2b2e08;
        }
    }
    ctx->pc = 0x2B2DF8u;
label_2b2df8:
    // 0x2b2df8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b2df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b2dfc: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x2b2dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    // 0x2b2e00: 0xc0ad0ec  jal         func_2B43B0
    ctx->pc = 0x2B2E00u;
    SET_GPR_U32(ctx, 31, 0x2B2E08u);
    ctx->pc = 0x2B2E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2E00u;
    // 0x2b2e04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B43B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B43B0u, 0x2B2E00u, 0x2B2E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E08u;
label_2b2e08:
    // 0x2b2e08: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b2e0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b2e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e10: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x2b2e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    // 0x2b2e14: 0xc0ad0d8  jal         func_2B4360
    ctx->pc = 0x2B2E14u;
    SET_GPR_U32(ctx, 31, 0x2B2E1Cu);
    ctx->pc = 0x2B2E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2E14u;
    // 0x2b2e18: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4360u, 0x2B2E14u, 0x2B2E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E1Cu;
label_2b2e1c:
    // 0x2b2e1c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2B2E1Cu;
    {
        const bool branch_taken_0x2b2e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E1Cu;
        // 0x2b2e20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e1c) {
            ctx->pc = 0x2B2DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2dd8;
        }
    }
    ctx->pc = 0x2B2E24u;
    // 0x2b2e24: 0x0  nop
    ctx->pc = 0x2b2e24u;
    // NOP
label_2b2e28:
    // 0x2b2e28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b2e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2e2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b2e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2e30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e34: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E34u;
        // 0x2b2e38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2E3Cu;
}

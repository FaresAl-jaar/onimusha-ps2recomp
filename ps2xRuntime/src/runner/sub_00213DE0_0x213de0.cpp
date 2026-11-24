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

// Function: sub_00213DE0
// Address: 0x213de0 - 0x213e34
void sub_00213DE0_0x213de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213DE0_0x213de0");
#endif

    switch (ctx->pc) {
        case 0x213dfcu: goto label_213dfc;
        case 0x213e04u: goto label_213e04;
        case 0x213e0cu: goto label_213e0c;
        case 0x213e14u: goto label_213e14;
        case 0x213e1cu: goto label_213e1c;
        case 0x213e24u: goto label_213e24;
        default: break;
    }

    ctx->pc = 0x213de0u;

    // 0x213de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x213de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x213de4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x213de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x213de8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213dec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x213decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213df0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x213df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x213df4: 0xc085052  jal         func_214148
    ctx->pc = 0x213DF4u;
    SET_GPR_U32(ctx, 31, 0x213DFCu);
    ctx->pc = 0x213DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213DF4u;
    // 0x213df8: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214148u, 0x213DF4u, 0x213DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DFCu;
label_213dfc:
    // 0x213dfc: 0xc084f8e  jal         func_213E38
    ctx->pc = 0x213DFCu;
    SET_GPR_U32(ctx, 31, 0x213E04u);
    ctx->pc = 0x213E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213DFCu;
    // 0x213e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213E38u, 0x213DFCu, 0x213E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E04u;
label_213e04:
    // 0x213e04: 0xc08507e  jal         func_2141F8
    ctx->pc = 0x213E04u;
    SET_GPR_U32(ctx, 31, 0x213E0Cu);
    ctx->pc = 0x213E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E04u;
    // 0x213e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2141F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2141F8u, 0x213E04u, 0x213E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E0Cu;
label_213e0c:
    // 0x213e0c: 0xc085014  jal         func_214050
    ctx->pc = 0x213E0Cu;
    SET_GPR_U32(ctx, 31, 0x213E14u);
    ctx->pc = 0x213E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E0Cu;
    // 0x213e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214050u, 0x213E0Cu, 0x213E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E14u;
label_213e14:
    // 0x213e14: 0xc0850a4  jal         func_214290
    ctx->pc = 0x213E14u;
    SET_GPR_U32(ctx, 31, 0x213E1Cu);
    ctx->pc = 0x213E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E14u;
    // 0x213e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214290u, 0x213E14u, 0x213E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E1Cu;
label_213e1c:
    // 0x213e1c: 0xc0850d0  jal         func_214340
    ctx->pc = 0x213E1Cu;
    SET_GPR_U32(ctx, 31, 0x213E24u);
    ctx->pc = 0x213E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E1Cu;
    // 0x213e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214340u, 0x213E1Cu, 0x213E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E24u;
label_213e24:
    // 0x213e24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x213e24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213e28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x213e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x213E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E2Cu;
        // 0x213e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213E34u;
}

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

// Function: sub_00211DA8
// Address: 0x211da8 - 0x211e20
void sub_00211DA8_0x211da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211DA8_0x211da8");
#endif

    switch (ctx->pc) {
        case 0x211dd8u: goto label_211dd8;
        case 0x211de4u: goto label_211de4;
        default: break;
    }

    ctx->pc = 0x211da8u;

    // 0x211da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x211da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x211dac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x211dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x211db0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x211db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211db4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x211db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x211db8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x211db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211dbc: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x211dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x211dc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x211dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x211dc4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x211dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x211dc8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x211DC8u;
    {
        const bool branch_taken_0x211dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DC8u;
        // 0x211dcc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211dc8) {
            ctx->pc = 0x211E04u;
            goto label_211e04;
        }
    }
    ctx->pc = 0x211DD0u;
    // 0x211dd0: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x211dd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x211dd4: 0x0  nop
    ctx->pc = 0x211dd4u;
    // NOP
label_211dd8:
    // 0x211dd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ddc: 0xc088eb6  jal         func_223AD8
    ctx->pc = 0x211DDCu;
    SET_GPR_U32(ctx, 31, 0x211DE4u);
    ctx->pc = 0x211DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211DDCu;
    // 0x211de0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD8u, 0x211DDCu, 0x211DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211DE4u;
label_211de4:
    // 0x211de4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211DE4u;
    {
        const bool branch_taken_0x211de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DE4u;
        // 0x211de8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211de4) {
            ctx->pc = 0x211DF4u;
            goto label_211df4;
        }
    }
    ctx->pc = 0x211DECu;
    // 0x211dec: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x211DECu;
    {
        const bool branch_taken_0x211dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x211DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DECu;
        // 0x211df0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211dec) {
            ctx->pc = 0x211E08u;
            goto label_211e08;
        }
    }
    ctx->pc = 0x211DF4u;
label_211df4:
    // 0x211df4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x211df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x211df8: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x211df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x211dfc: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x211DFCu;
    {
        const bool branch_taken_0x211dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211DFCu;
        // 0x211e00: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211dfc) {
            ctx->pc = 0x211DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211dd8;
        }
    }
    ctx->pc = 0x211E04u;
label_211e04:
    // 0x211e04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x211e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211e08:
    // 0x211e08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x211e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211e0c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x211e0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x211e10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x211e10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211e14: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x211e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x211e18: 0x3e00008  jr          $ra
    ctx->pc = 0x211E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211E18u;
        // 0x211e1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211E20u;
}

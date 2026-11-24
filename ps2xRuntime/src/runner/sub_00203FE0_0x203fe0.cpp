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

// Function: sub_00203FE0
// Address: 0x203fe0 - 0x20403c
void sub_00203FE0_0x203fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203FE0_0x203fe0");
#endif

    switch (ctx->pc) {
        case 0x204000u: goto label_204000;
        case 0x204014u: goto label_204014;
        default: break;
    }

    ctx->pc = 0x203fe0u;

    // 0x203fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203fe4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x203fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x203fe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x203fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203fec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x203fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x203ff0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203ff4: 0x26300280  addiu       $s0, $s1, 0x280
    ctx->pc = 0x203ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    // 0x203ff8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x203ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x203ffc: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x203ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_204000:
    // 0x204000: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x204000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x204004: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x204004u;
    {
        const bool branch_taken_0x204004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x204004) {
            ctx->pc = 0x204008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204004u;
            // 0x204008: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20401Cu;
            goto label_20401c;
        }
    }
    ctx->pc = 0x20400Cu;
    // 0x20400c: 0xc080fd4  jal         func_203F50
    ctx->pc = 0x20400Cu;
    SET_GPR_U32(ctx, 31, 0x204014u);
    ctx->pc = 0x204010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20400Cu;
    // 0x204010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F50u, 0x20400Cu, 0x204014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204014u;
label_204014:
    // 0x204014: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x204014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x204018: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x204018u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_20401c:
    // 0x20401c: 0x641fff8  bgez        $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20401Cu;
    {
        const bool branch_taken_0x20401c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x204020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20401Cu;
        // 0x204020: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20401c) {
            ctx->pc = 0x204000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204000;
        }
    }
    ctx->pc = 0x204024u;
    // 0x204024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x204024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204028: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x204028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20402c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20402cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204030: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x204030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204034: 0x3e00008  jr          $ra
    ctx->pc = 0x204034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204034u;
        // 0x204038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20403Cu;
}

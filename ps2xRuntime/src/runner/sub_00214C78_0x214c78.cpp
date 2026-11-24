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

// Function: sub_00214C78
// Address: 0x214c78 - 0x214cec
void sub_00214C78_0x214c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214C78_0x214c78");
#endif

    switch (ctx->pc) {
        case 0x214cb0u: goto label_214cb0;
        case 0x214cc4u: goto label_214cc4;
        default: break;
    }

    ctx->pc = 0x214c78u;

    // 0x214c78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x214c7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x214c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x214c80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214c84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214c88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214c8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x214c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x214c90: 0x8c821fc0  lw          $v0, 0x1FC0($a0)
    ctx->pc = 0x214c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x214c94: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x214c94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214c98: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x214C98u;
    {
        const bool branch_taken_0x214c98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x214C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C98u;
        // 0x214c9c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c98) {
            ctx->pc = 0x214CD0u;
            goto label_214cd0;
        }
    }
    ctx->pc = 0x214CA0u;
    // 0x214ca0: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x214CA0u;
    {
        const bool branch_taken_0x214ca0 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x214CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CA0u;
        // 0x214ca4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ca0) {
            ctx->pc = 0x214CD0u;
            goto label_214cd0;
        }
    }
    ctx->pc = 0x214CA8u;
    // 0x214ca8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x214ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cac: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x214cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_214cb0:
    // 0x214cb0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x214cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x214cb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214cb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x214cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x214cbc: 0xc08042c  jal         func_2010B0
    ctx->pc = 0x214CBCu;
    SET_GPR_U32(ctx, 31, 0x214CC4u);
    ctx->pc = 0x214CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214CBCu;
    // 0x214cc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010B0u, 0x214CBCu, 0x214CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214CC4u;
label_214cc4:
    // 0x214cc4: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x214cc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x214cc8: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x214CC8u;
    {
        const bool branch_taken_0x214cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x214cc8) {
            ctx->pc = 0x214CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214CC8u;
            // 0x214ccc: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214cb0;
        }
    }
    ctx->pc = 0x214CD0u;
label_214cd0:
    // 0x214cd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214cd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214cd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214cd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214cd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214cdc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x214cdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214ce0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x214ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x214CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CE4u;
        // 0x214ce8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214CECu;
}

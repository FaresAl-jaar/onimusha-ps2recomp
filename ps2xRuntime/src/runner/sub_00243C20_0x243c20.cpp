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

// Function: sub_00243C20
// Address: 0x243c20 - 0x243c9c
void sub_00243C20_0x243c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243C20_0x243c20");
#endif

    switch (ctx->pc) {
        case 0x243c50u: goto label_243c50;
        case 0x243c60u: goto label_243c60;
        default: break;
    }

    ctx->pc = 0x243c20u;

    // 0x243c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x243c24: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x243c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x243c28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x243c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x243c2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x243c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x243c30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x243c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x243c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x243c38: 0x24515f44  addiu       $s1, $v0, 0x5F44
    ctx->pc = 0x243c38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24388));
    // 0x243c3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x243c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x243c40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x243c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c44: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x243c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x243c48: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x243c48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x243c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243c50:
    // 0x243c50: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x243c50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x243c54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x243c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c58: 0xc049fd2  jal         func_127F48
    ctx->pc = 0x243C58u;
    SET_GPR_U32(ctx, 31, 0x243C60u);
    ctx->pc = 0x243C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C58u;
    // 0x243c5c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x243C58u, 0x243C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C60u;
label_243c60:
    // 0x243c60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x243C60u;
    {
        const bool branch_taken_0x243c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C60u;
        // 0x243c64: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c60) {
            ctx->pc = 0x243C70u;
            goto label_243c70;
        }
    }
    ctx->pc = 0x243C68u;
    // 0x243c68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x243C68u;
    {
        const bool branch_taken_0x243c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C68u;
        // 0x243c6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c68) {
            ctx->pc = 0x243C80u;
            goto label_243c80;
        }
    }
    ctx->pc = 0x243C70u;
label_243c70:
    // 0x243c70: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x243c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x243c74: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x243C74u;
    {
        const bool branch_taken_0x243c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C74u;
        // 0x243c78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c74) {
            ctx->pc = 0x243C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243c50;
        }
    }
    ctx->pc = 0x243C7Cu;
    // 0x243c7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x243c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243c80:
    // 0x243c80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243c84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x243c84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x243c88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x243c88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243c8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x243c8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243c90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x243c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243c94: 0x3e00008  jr          $ra
    ctx->pc = 0x243C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C94u;
        // 0x243c98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243C9Cu;
}

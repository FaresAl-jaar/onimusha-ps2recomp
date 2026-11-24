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

// Function: sub_00213D28
// Address: 0x213d28 - 0x213d78
void sub_00213D28_0x213d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213D28_0x213d28");
#endif

    switch (ctx->pc) {
        case 0x213d4cu: goto label_213d4c;
        case 0x213d5cu: goto label_213d5c;
        default: break;
    }

    ctx->pc = 0x213d28u;

    // 0x213d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213d2c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x213d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x213d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213d34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x213d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x213d3c: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x213D3Cu;
    {
        const bool branch_taken_0x213d3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x213D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D3Cu;
        // 0x213d40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d3c) {
            ctx->pc = 0x213D68u;
            goto label_213d68;
        }
    }
    ctx->pc = 0x213D44u;
    // 0x213d44: 0xc084144  jal         func_210510
    ctx->pc = 0x213D44u;
    SET_GPR_U32(ctx, 31, 0x213D4Cu);
    ctx->pc = 0x210510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210510u, 0x213D44u, 0x213D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D4Cu;
label_213d4c:
    // 0x213d4c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x213D4Cu;
    {
        const bool branch_taken_0x213d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D4Cu;
        // 0x213d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d4c) {
            ctx->pc = 0x213D64u;
            goto label_213d64;
        }
    }
    ctx->pc = 0x213D54u;
    // 0x213d54: 0xc08414c  jal         func_210530
    ctx->pc = 0x213D54u;
    SET_GPR_U32(ctx, 31, 0x213D5Cu);
    ctx->pc = 0x210530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210530u, 0x213D54u, 0x213D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D5Cu;
label_213d5c:
    // 0x213d5c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x213D5Cu;
    {
        const bool branch_taken_0x213d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213d5c) {
            ctx->pc = 0x213D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213D5Cu;
            // 0x213d60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213D68u;
            goto label_213d68;
        }
    }
    ctx->pc = 0x213D64u;
label_213d64:
    // 0x213d64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x213d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213d68:
    // 0x213d68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213d6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x213d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213d70: 0x3e00008  jr          $ra
    ctx->pc = 0x213D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D70u;
        // 0x213d74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213D78u;
}

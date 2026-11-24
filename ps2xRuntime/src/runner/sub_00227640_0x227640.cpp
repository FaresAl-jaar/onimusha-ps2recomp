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

// Function: sub_00227640
// Address: 0x227640 - 0x2276a0
void sub_00227640_0x227640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227640_0x227640");
#endif

    switch (ctx->pc) {
        case 0x22768cu: goto label_22768c;
        default: break;
    }

    ctx->pc = 0x227640u;

    // 0x227640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227644: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x227644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x227648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22764c: 0x2c850011  sltiu       $a1, $a0, 0x11
    ctx->pc = 0x22764cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x227650: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x227650u;
    {
        const bool branch_taken_0x227650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x227654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227650u;
        // 0x227654: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227650) {
            ctx->pc = 0x227690u;
            goto label_227690;
        }
    }
    ctx->pc = 0x227658u;
    // 0x227658: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x227658u;
    {
        const bool branch_taken_0x227658 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227658u;
        // 0x22765c: 0x3c060067  lui         $a2, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227658) {
            ctx->pc = 0x22767Cu;
            goto label_22767c;
        }
    }
    ctx->pc = 0x227660u;
    // 0x227660: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x227660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x227664: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x227664u;
    {
        const bool branch_taken_0x227664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x227668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227664u;
        // 0x227668: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227664) {
            ctx->pc = 0x227690u;
            goto label_227690;
        }
    }
    ctx->pc = 0x22766Cu;
    // 0x22766c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x22766cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x227670: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x227670u;
    {
        const bool branch_taken_0x227670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x227674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227670u;
        // 0x227674: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227670) {
            ctx->pc = 0x227690u;
            goto label_227690;
        }
    }
    ctx->pc = 0x227678u;
    // 0x227678: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x227678u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_22767c:
    // 0x22767c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22767cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227680: 0x24c694d0  addiu       $a2, $a2, -0x6B30
    ctx->pc = 0x227680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939856));
    // 0x227684: 0xc0898b2  jal         func_2262C8
    ctx->pc = 0x227684u;
    SET_GPR_U32(ctx, 31, 0x22768Cu);
    ctx->pc = 0x227688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227684u;
    // 0x227688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262C8u, 0x227684u, 0x22768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22768Cu;
label_22768c:
    // 0x22768c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22768cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227690:
    // 0x227690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227694: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x227694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227698: 0x3e00008  jr          $ra
    ctx->pc = 0x227698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227698u;
        // 0x22769c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2276A0u;
}

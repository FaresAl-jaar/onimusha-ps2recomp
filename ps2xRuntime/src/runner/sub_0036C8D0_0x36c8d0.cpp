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

// Function: sub_0036C8D0
// Address: 0x36c8d0 - 0x36c954
void sub_0036C8D0_0x36c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C8D0_0x36c8d0");
#endif

    switch (ctx->pc) {
        case 0x36c918u: goto label_36c918;
        case 0x36c928u: goto label_36c928;
        case 0x36c938u: goto label_36c938;
        case 0x36c948u: goto label_36c948;
        default: break;
    }

    ctx->pc = 0x36c8d0u;

    // 0x36c8d0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x36c8d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x36c8d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c8d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c8d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x36c8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36c8dc: 0x10a40018  beq         $a1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x36C8DCu;
    {
        const bool branch_taken_0x36c8dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x36C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C8DCu;
        // 0x36c8e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c8dc) {
            ctx->pc = 0x36C940u;
            goto label_36c940;
        }
    }
    ctx->pc = 0x36C8E4u;
    // 0x36c8e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c8e8: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36C8E8u;
    {
        const bool branch_taken_0x36c8e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36c8e8) {
            ctx->pc = 0x36C930u;
            goto label_36c930;
        }
    }
    ctx->pc = 0x36C8F0u;
    // 0x36c8f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c8f4: 0x10a4000a  beq         $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x36C8F4u;
    {
        const bool branch_taken_0x36c8f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x36c8f4) {
            ctx->pc = 0x36C920u;
            goto label_36c920;
        }
    }
    ctx->pc = 0x36C8FCu;
    // 0x36c8fc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36C8FCu;
    {
        const bool branch_taken_0x36c8fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c8fc) {
            ctx->pc = 0x36C910u;
            goto label_36c910;
        }
    }
    ctx->pc = 0x36C904u;
    // 0x36c904: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x36C904u;
    {
        const bool branch_taken_0x36c904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c904) {
            ctx->pc = 0x36C948u;
            goto label_36c948;
        }
    }
    ctx->pc = 0x36C90Cu;
    // 0x36c90c: 0x0  nop
    ctx->pc = 0x36c90cu;
    // NOP
label_36c910:
    // 0x36c910: 0xc0db13c  jal         func_36C4F0
    ctx->pc = 0x36C910u;
    SET_GPR_U32(ctx, 31, 0x36C918u);
    ctx->pc = 0x36C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C4F0u, 0x36C910u, 0x36C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C918u;
label_36c918:
    // 0x36c918: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x36C918u;
    {
        const bool branch_taken_0x36c918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c918) {
            ctx->pc = 0x36C948u;
            goto label_36c948;
        }
    }
    ctx->pc = 0x36C920u;
label_36c920:
    // 0x36c920: 0xc0db13c  jal         func_36C4F0
    ctx->pc = 0x36C920u;
    SET_GPR_U32(ctx, 31, 0x36C928u);
    ctx->pc = 0x36C924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C920u;
    // 0x36c924: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C4F0u, 0x36C920u, 0x36C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C928u;
label_36c928:
    // 0x36c928: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36C928u;
    {
        const bool branch_taken_0x36c928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c928) {
            ctx->pc = 0x36C948u;
            goto label_36c948;
        }
    }
    ctx->pc = 0x36C930u;
label_36c930:
    // 0x36c930: 0xc0db13c  jal         func_36C4F0
    ctx->pc = 0x36C930u;
    SET_GPR_U32(ctx, 31, 0x36C938u);
    ctx->pc = 0x36C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C4F0u, 0x36C930u, 0x36C938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C938u;
label_36c938:
    // 0x36c938: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36C938u;
    {
        const bool branch_taken_0x36c938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c938) {
            ctx->pc = 0x36C948u;
            goto label_36c948;
        }
    }
    ctx->pc = 0x36C940u;
label_36c940:
    // 0x36c940: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x36C940u;
    SET_GPR_U32(ctx, 31, 0x36C948u);
    ctx->pc = 0x36C944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C940u;
    // 0x36c944: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x36C940u, 0x36C948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C948u;
label_36c948:
    // 0x36c948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c94c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C94Cu;
        // 0x36c950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C954u;
}

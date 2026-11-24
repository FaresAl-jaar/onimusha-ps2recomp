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

// Function: sub_001538D0
// Address: 0x1538d0 - 0x153948
void sub_001538D0_0x1538d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001538D0_0x1538d0");
#endif

    switch (ctx->pc) {
        case 0x1538e0u: goto label_1538e0;
        case 0x1538fcu: goto label_1538fc;
        case 0x153904u: goto label_153904;
        case 0x153910u: goto label_153910;
        case 0x153918u: goto label_153918;
        case 0x153920u: goto label_153920;
        case 0x153928u: goto label_153928;
        default: break;
    }

    ctx->pc = 0x1538d0u;

    // 0x1538d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1538d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1538d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1538d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1538d8: 0xc08e30e  jal         func_238C38
    ctx->pc = 0x1538D8u;
    SET_GPR_U32(ctx, 31, 0x1538E0u);
    ctx->pc = 0x1538DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1538D8u;
    // 0x1538dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238C38u, 0x1538D8u, 0x1538E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1538E0u;
label_1538e0:
    // 0x1538e0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x1538e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x1538e4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x1538e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x1538e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1538e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1538ec: 0x24a55018  addiu       $a1, $a1, 0x5018
    ctx->pc = 0x1538ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20504));
    // 0x1538f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1538f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1538f4: 0xc08bcec  jal         func_22F3B0
    ctx->pc = 0x1538F4u;
    SET_GPR_U32(ctx, 31, 0x1538FCu);
    ctx->pc = 0x1538F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1538F4u;
    // 0x1538f8: 0x24e71300  addiu       $a3, $a3, 0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F3B0u, 0x1538F4u, 0x1538FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1538FCu;
label_1538fc:
    // 0x1538fc: 0xc08beea  jal         func_22FBA8
    ctx->pc = 0x1538FCu;
    SET_GPR_U32(ctx, 31, 0x153904u);
    ctx->pc = 0x153900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1538FCu;
    // 0x153900: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FBA8u, 0x1538FCu, 0x153904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153904u;
label_153904:
    // 0x153904: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x153904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153908: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x153908u;
    {
        const bool branch_taken_0x153908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x153908) {
            ctx->pc = 0x153938u;
            goto label_153938;
        }
    }
    ctx->pc = 0x153910u;
label_153910:
    // 0x153910: 0xc08d256  jal         func_234958
    ctx->pc = 0x153910u;
    SET_GPR_U32(ctx, 31, 0x153918u);
    ctx->pc = 0x234958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234958u, 0x153910u, 0x153918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153918u;
label_153918:
    // 0x153918: 0xc040d08  jal         func_103420
    ctx->pc = 0x153918u;
    SET_GPR_U32(ctx, 31, 0x153920u);
    ctx->pc = 0x15391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153918u;
    // 0x15391c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x153918u, 0x153920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153920u;
label_153920:
    // 0x153920: 0xc08beea  jal         func_22FBA8
    ctx->pc = 0x153920u;
    SET_GPR_U32(ctx, 31, 0x153928u);
    ctx->pc = 0x153924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153920u;
    // 0x153924: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FBA8u, 0x153920u, 0x153928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153928u;
label_153928:
    // 0x153928: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x153928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15392c: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15392Cu;
    {
        const bool branch_taken_0x15392c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15392c) {
            ctx->pc = 0x153910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153910;
        }
    }
    ctx->pc = 0x153934u;
    // 0x153934: 0x0  nop
    ctx->pc = 0x153934u;
    // NOP
label_153938:
    // 0x153938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15393c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15393cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153940: 0x3e00008  jr          $ra
    ctx->pc = 0x153940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153940u;
        // 0x153944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153948u;
}

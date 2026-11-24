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

// Function: sub_003BE340
// Address: 0x3be340 - 0x3be384
void sub_003BE340_0x3be340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE340_0x3be340");
#endif

    switch (ctx->pc) {
        case 0x3be354u: goto label_3be354;
        case 0x3be360u: goto label_3be360;
        case 0x3be36cu: goto label_3be36c;
        case 0x3be378u: goto label_3be378;
        default: break;
    }

    ctx->pc = 0x3be340u;

    // 0x3be340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3be340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3be344: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3be344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3be348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3be34c: 0xc099b48  jal         func_266D20
    ctx->pc = 0x3BE34Cu;
    SET_GPR_U32(ctx, 31, 0x3BE354u);
    ctx->pc = 0x3BE350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE34Cu;
    // 0x3be350: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D20u, 0x3BE34Cu, 0x3BE354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE354u;
label_3be354:
    // 0x3be354: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3be354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3be358: 0xc099b48  jal         func_266D20
    ctx->pc = 0x3BE358u;
    SET_GPR_U32(ctx, 31, 0x3BE360u);
    ctx->pc = 0x3BE35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE358u;
    // 0x3be35c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D20u, 0x3BE358u, 0x3BE360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE360u;
label_3be360:
    // 0x3be360: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3be360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3be364: 0xc099b48  jal         func_266D20
    ctx->pc = 0x3BE364u;
    SET_GPR_U32(ctx, 31, 0x3BE36Cu);
    ctx->pc = 0x3BE368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE364u;
    // 0x3be368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D20u, 0x3BE364u, 0x3BE36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE36Cu;
label_3be36c:
    // 0x3be36c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3be36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3be370: 0xc099b48  jal         func_266D20
    ctx->pc = 0x3BE370u;
    SET_GPR_U32(ctx, 31, 0x3BE378u);
    ctx->pc = 0x3BE374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE370u;
    // 0x3be374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D20u, 0x3BE370u, 0x3BE378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE378u;
label_3be378:
    // 0x3be378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3be378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3be37c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE37Cu;
        // 0x3be380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE384u;
}

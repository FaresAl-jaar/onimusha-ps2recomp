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

// Function: sub_0020CD70
// Address: 0x20cd70 - 0x20cdac
void sub_0020CD70_0x20cd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CD70_0x20cd70");
#endif

    switch (ctx->pc) {
        case 0x20cd80u: goto label_20cd80;
        case 0x20cd88u: goto label_20cd88;
        case 0x20cd9cu: goto label_20cd9c;
        default: break;
    }

    ctx->pc = 0x20cd70u;

    // 0x20cd70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20cd74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20cd78: 0xc08c9b6  jal         func_2326D8
    ctx->pc = 0x20CD78u;
    SET_GPR_U32(ctx, 31, 0x20CD80u);
    ctx->pc = 0x2326D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326D8u, 0x20CD78u, 0x20CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD80u;
label_20cd80:
    // 0x20cd80: 0xc08d5ee  jal         func_2357B8
    ctx->pc = 0x20CD80u;
    SET_GPR_U32(ctx, 31, 0x20CD88u);
    ctx->pc = 0x2357B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2357B8u, 0x20CD80u, 0x20CD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD88u;
label_20cd88:
    // 0x20cd88: 0x3c040088  lui         $a0, 0x88
    ctx->pc = 0x20cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)136 << 16));
    // 0x20cd8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20cd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cd90: 0x2484fb50  addiu       $a0, $a0, -0x4B0
    ctx->pc = 0x20cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966096));
    // 0x20cd94: 0xc07ec84  jal         func_1FB210
    ctx->pc = 0x20CD94u;
    SET_GPR_U32(ctx, 31, 0x20CD9Cu);
    ctx->pc = 0x20CD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD94u;
    // 0x20cd98: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB210u, 0x20CD94u, 0x20CD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD9Cu;
label_20cd9c:
    // 0x20cd9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20cd9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cda0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cda4: 0x3e00008  jr          $ra
    ctx->pc = 0x20CDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDA4u;
        // 0x20cda8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CDACu;
}

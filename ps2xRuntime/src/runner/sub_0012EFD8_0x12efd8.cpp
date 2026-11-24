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

// Function: sub_0012EFD8
// Address: 0x12efd8 - 0x12f004
void sub_0012EFD8_0x12efd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EFD8_0x12efd8");
#endif

    switch (ctx->pc) {
        case 0x12eff8u: goto label_12eff8;
        default: break;
    }

    ctx->pc = 0x12efd8u;

    // 0x12efd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12efd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12efdc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12efe0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12efe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12efe4: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x12efe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x12efe8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12efe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12efec: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x12efecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x12eff0: 0xc04b956  jal         func_12E558
    ctx->pc = 0x12EFF0u;
    SET_GPR_U32(ctx, 31, 0x12EFF8u);
    ctx->pc = 0x12EFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EFF0u;
    // 0x12eff4: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E558u, 0x12EFF0u, 0x12EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EFF8u;
label_12eff8:
    // 0x12eff8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12eff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12effc: 0x3e00008  jr          $ra
    ctx->pc = 0x12EFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFFCu;
        // 0x12f000: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F004u;
}

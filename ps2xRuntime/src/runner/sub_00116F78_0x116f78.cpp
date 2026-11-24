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

// Function: sub_00116F78
// Address: 0x116f78 - 0x116f94
void sub_00116F78_0x116f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116F78_0x116f78");
#endif

    switch (ctx->pc) {
        case 0x116f88u: goto label_116f88;
        default: break;
    }

    ctx->pc = 0x116f78u;

    // 0x116f78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x116f7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x116f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x116f80: 0xc045a6a  jal         func_1169A8
    ctx->pc = 0x116F80u;
    SET_GPR_U32(ctx, 31, 0x116F88u);
    ctx->pc = 0x116F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F80u;
    // 0x116f84: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1169A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1169A8u, 0x116F80u, 0x116F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116F88u;
label_116f88:
    // 0x116f88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x116f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x116F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F8Cu;
        // 0x116f90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116F94u;
}

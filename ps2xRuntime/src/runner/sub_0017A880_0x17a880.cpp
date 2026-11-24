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

// Function: sub_0017A880
// Address: 0x17a880 - 0x17a8a4
void sub_0017A880_0x17a880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A880_0x17a880");
#endif

    switch (ctx->pc) {
        case 0x17a894u: goto label_17a894;
        default: break;
    }

    ctx->pc = 0x17a880u;

    // 0x17a880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17a884: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x17a884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x17a888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a88c: 0xc0c98c0  jal         func_326300
    ctx->pc = 0x17A88Cu;
    SET_GPR_U32(ctx, 31, 0x17A894u);
    ctx->pc = 0x17A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A88Cu;
    // 0x17a890: 0x24844aa0  addiu       $a0, $a0, 0x4AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326300u, 0x17A88Cu, 0x17A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A894u;
label_17a894:
    // 0x17a894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a89c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A89Cu;
        // 0x17a8a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A8A4u;
}

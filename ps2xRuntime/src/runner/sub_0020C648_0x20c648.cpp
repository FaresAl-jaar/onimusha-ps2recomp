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

// Function: sub_0020C648
// Address: 0x20c648 - 0x20c66c
void sub_0020C648_0x20c648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C648_0x20c648");
#endif

    switch (ctx->pc) {
        case 0x20c658u: goto label_20c658;
        default: break;
    }

    ctx->pc = 0x20c648u;

    // 0x20c648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c64c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20c650: 0xc08314e  jal         func_20C538
    ctx->pc = 0x20C650u;
    SET_GPR_U32(ctx, 31, 0x20C658u);
    ctx->pc = 0x20C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C538u, 0x20C650u, 0x20C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C658u;
label_20c658:
    // 0x20c658: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20c658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x20c65c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c660: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x20c660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20c664: 0x3e00008  jr          $ra
    ctx->pc = 0x20C664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C664u;
        // 0x20c668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C66Cu;
}

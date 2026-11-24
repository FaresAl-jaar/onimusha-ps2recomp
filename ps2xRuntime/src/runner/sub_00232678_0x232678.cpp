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

// Function: sub_00232678
// Address: 0x232678 - 0x232698
void sub_00232678_0x232678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232678_0x232678");
#endif

    switch (ctx->pc) {
        case 0x232688u: goto label_232688;
        default: break;
    }

    ctx->pc = 0x232678u;

    // 0x232678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23267c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23267cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232680: 0xc08cc22  jal         func_233088
    ctx->pc = 0x232680u;
    SET_GPR_U32(ctx, 31, 0x232688u);
    ctx->pc = 0x233088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233088u, 0x232680u, 0x232688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232688u;
label_232688:
    // 0x232688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23268c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23268cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232690: 0x3e00008  jr          $ra
    ctx->pc = 0x232690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232690u;
        // 0x232694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232698u;
}

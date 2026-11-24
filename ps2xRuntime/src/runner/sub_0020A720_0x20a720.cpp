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

// Function: sub_0020A720
// Address: 0x20a720 - 0x20a744
void sub_0020A720_0x20a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A720_0x20a720");
#endif

    switch (ctx->pc) {
        case 0x20a730u: goto label_20a730;
        default: break;
    }

    ctx->pc = 0x20a720u;

    // 0x20a720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20a724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20a728: 0xc092e5e  jal         func_24B978
    ctx->pc = 0x20A728u;
    SET_GPR_U32(ctx, 31, 0x20A730u);
    ctx->pc = 0x24B978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B978u, 0x20A728u, 0x20A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A730u;
label_20a730:
    // 0x20a730: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x20a730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x20a734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a738: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x20a738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x20a73c: 0x3e00008  jr          $ra
    ctx->pc = 0x20A73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A73Cu;
        // 0x20a740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A744u;
}

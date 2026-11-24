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

// Function: sub_00100300
// Address: 0x100300 - 0x100324
void sub_00100300_0x100300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100300_0x100300");
#endif

    switch (ctx->pc) {
        case 0x100310u: goto label_100310;
        default: break;
    }

    ctx->pc = 0x100300u;

    // 0x100300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100308: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x100308u;
    SET_GPR_U32(ctx, 31, 0x100310u);
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x100308u, 0x100310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100310u;
label_100310:
    // 0x100310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100314: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x100314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100318: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10031c: 0x3e00008  jr          $ra
    ctx->pc = 0x10031Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10031Cu;
        // 0x100320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10031Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100324u;
}

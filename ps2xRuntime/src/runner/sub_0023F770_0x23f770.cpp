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

// Function: sub_0023F770
// Address: 0x23f770 - 0x23f798
void sub_0023F770_0x23f770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F770_0x23f770");
#endif

    switch (ctx->pc) {
        case 0x23f780u: goto label_23f780;
        default: break;
    }

    ctx->pc = 0x23f770u;

    // 0x23f770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f778: 0xc08fdda  jal         func_23F768
    ctx->pc = 0x23F778u;
    SET_GPR_U32(ctx, 31, 0x23F780u);
    ctx->pc = 0x23F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F768u, 0x23F778u, 0x23F780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F780u;
label_23f780:
    // 0x23f780: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x23f780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23f784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f788: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23f788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f78c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x23f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23f790: 0x3e00008  jr          $ra
    ctx->pc = 0x23F790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F790u;
        // 0x23f794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F798u;
}

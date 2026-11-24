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

// Function: sub_00231270
// Address: 0x231270 - 0x2312a0
void sub_00231270_0x231270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231270_0x231270");
#endif

    switch (ctx->pc) {
        case 0x231288u: goto label_231288;
        default: break;
    }

    ctx->pc = 0x231270u;

    // 0x231270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231274: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x231274u;
    {
        const bool branch_taken_0x231274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x231278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231274u;
        // 0x231278: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231274) {
            ctx->pc = 0x231290u;
            goto label_231290;
        }
    }
    ctx->pc = 0x23127Cu;
    // 0x23127c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23127cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x231280: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x231280u;
    SET_GPR_U32(ctx, 31, 0x231288u);
    ctx->pc = 0x231284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231280u;
    // 0x231284: 0x2484a878  addiu       $a0, $a0, -0x5788 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x231280u, 0x231288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231288u;
label_231288:
    // 0x231288: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x231288u;
    {
        const bool branch_taken_0x231288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231288u;
        // 0x23128c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231288) {
            ctx->pc = 0x231294u;
            goto label_231294;
        }
    }
    ctx->pc = 0x231290u;
label_231290:
    // 0x231290: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x231290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_231294:
    // 0x231294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231298: 0x3e00008  jr          $ra
    ctx->pc = 0x231298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231298u;
        // 0x23129c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2312A0u;
}

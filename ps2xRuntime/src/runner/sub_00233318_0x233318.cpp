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

// Function: sub_00233318
// Address: 0x233318 - 0x233350
void sub_00233318_0x233318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233318_0x233318");
#endif

    switch (ctx->pc) {
        case 0x233330u: goto label_233330;
        default: break;
    }

    ctx->pc = 0x233318u;

    // 0x233318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23331c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x233320: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x233320u;
    {
        const bool branch_taken_0x233320 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x233324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233320u;
        // 0x233324: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233320) {
            ctx->pc = 0x233340u;
            goto label_233340;
        }
    }
    ctx->pc = 0x233328u;
    // 0x233328: 0xc08cffe  jal         func_233FF8
    ctx->pc = 0x233328u;
    SET_GPR_U32(ctx, 31, 0x233330u);
    ctx->pc = 0x233FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233FF8u, 0x233328u, 0x233330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233330u;
label_233330:
    // 0x233330: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233334: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x233334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x233338: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x233338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23333c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x23333cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_233340:
    // 0x233340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233344: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x233344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233348: 0x3e00008  jr          $ra
    ctx->pc = 0x233348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233348u;
        // 0x23334c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233350u;
}

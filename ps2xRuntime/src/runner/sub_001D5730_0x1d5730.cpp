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

// Function: sub_001D5730
// Address: 0x1d5730 - 0x1d5764
void sub_001D5730_0x1d5730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5730_0x1d5730");
#endif

    switch (ctx->pc) {
        case 0x1d574cu: goto label_1d574c;
        case 0x1d5758u: goto label_1d5758;
        default: break;
    }

    ctx->pc = 0x1d5730u;

    // 0x1d5730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5738: 0xaf848800  sw          $a0, -0x7800($gp)
    ctx->pc = 0x1d5738u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936576), GPR_U32(ctx, 4));
    // 0x1d573c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1d573cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1d5740: 0xaf808804  sw          $zero, -0x77FC($gp)
    ctx->pc = 0x1d5740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936580), GPR_U32(ctx, 0));
    // 0x1d5744: 0xc0768d8  jal         func_1DA360
    ctx->pc = 0x1D5744u;
    SET_GPR_U32(ctx, 31, 0x1D574Cu);
    ctx->pc = 0x1D5748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5744u;
    // 0x1d5748: 0x24846a20  addiu       $a0, $a0, 0x6A20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA360u, 0x1D5744u, 0x1D574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D574Cu;
label_1d574c:
    // 0x1d574c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1d574cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1d5750: 0xc0768e0  jal         func_1DA380
    ctx->pc = 0x1D5750u;
    SET_GPR_U32(ctx, 31, 0x1D5758u);
    ctx->pc = 0x1D5754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5750u;
    // 0x1d5754: 0x24846b60  addiu       $a0, $a0, 0x6B60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA380u, 0x1D5750u, 0x1D5758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5758u;
label_1d5758:
    // 0x1d5758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d575c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D575Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D575Cu;
        // 0x1d5760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D575Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5764u;
}

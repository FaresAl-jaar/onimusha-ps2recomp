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

// Function: sub_001D5270
// Address: 0x1d5270 - 0x1d52a4
void sub_001D5270_0x1d5270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5270_0x1d5270");
#endif

    switch (ctx->pc) {
        case 0x1d528cu: goto label_1d528c;
        case 0x1d5298u: goto label_1d5298;
        default: break;
    }

    ctx->pc = 0x1d5270u;

    // 0x1d5270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5278: 0xaf8487f8  sw          $a0, -0x7808($gp)
    ctx->pc = 0x1d5278u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936568), GPR_U32(ctx, 4));
    // 0x1d527c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1d527cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1d5280: 0xaf8087fc  sw          $zero, -0x7804($gp)
    ctx->pc = 0x1d5280u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936572), GPR_U32(ctx, 0));
    // 0x1d5284: 0xc0768d8  jal         func_1DA360
    ctx->pc = 0x1D5284u;
    SET_GPR_U32(ctx, 31, 0x1D528Cu);
    ctx->pc = 0x1D5288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5284u;
    // 0x1d5288: 0x24846a20  addiu       $a0, $a0, 0x6A20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA360u, 0x1D5284u, 0x1D528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D528Cu;
label_1d528c:
    // 0x1d528c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1d528cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1d5290: 0xc0768e0  jal         func_1DA380
    ctx->pc = 0x1D5290u;
    SET_GPR_U32(ctx, 31, 0x1D5298u);
    ctx->pc = 0x1D5294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5290u;
    // 0x1d5294: 0x24846b60  addiu       $a0, $a0, 0x6B60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA380u, 0x1D5290u, 0x1D5298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5298u;
label_1d5298:
    // 0x1d5298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d529c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D529Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D52A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D529Cu;
        // 0x1d52a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D529Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D52A4u;
}

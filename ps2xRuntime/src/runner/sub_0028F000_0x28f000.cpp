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

// Function: sub_0028F000
// Address: 0x28f000 - 0x28f038
void sub_0028F000_0x28f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F000_0x28f000");
#endif

    switch (ctx->pc) {
        case 0x28f028u: goto label_28f028;
        default: break;
    }

    ctx->pc = 0x28f000u;

    // 0x28f000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28f004: 0x24860040  addiu       $a2, $a0, 0x40
    ctx->pc = 0x28f004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x28f008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f00c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x28f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x28f010: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x28f010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x28f014: 0x8c87001c  lw          $a3, 0x1C($a0)
    ctx->pc = 0x28f014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x28f018: 0x8c890014  lw          $t1, 0x14($a0)
    ctx->pc = 0x28f018u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x28f01c: 0x2402b  sltu        $t0, $zero, $v0
    ctx->pc = 0x28f01cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28f020: 0xc0d1a3c  jal         func_3468F0
    ctx->pc = 0x28F020u;
    SET_GPR_U32(ctx, 31, 0x28F028u);
    ctx->pc = 0x28F024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F020u;
    // 0x28f024: 0x27848ba0  addiu       $a0, $gp, -0x7460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3468F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3468F0u, 0x28F020u, 0x28F028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F028u;
label_28f028:
    // 0x28f028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f02c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f02cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f030: 0x3e00008  jr          $ra
    ctx->pc = 0x28F030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F030u;
        // 0x28f034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F038u;
}

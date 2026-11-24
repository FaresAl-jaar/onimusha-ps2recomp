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

// Function: sub_002A9450
// Address: 0x2a9450 - 0x2a9490
void sub_002A9450_0x2a9450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9450_0x2a9450");
#endif

    switch (ctx->pc) {
        case 0x2a9484u: goto label_2a9484;
        default: break;
    }

    ctx->pc = 0x2a9450u;

    // 0x2a9450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9454: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a9454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9458: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a9458u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a945c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a945cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a9460: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a9460u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9464: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a9464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a9468: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a9468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a946c: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2a946cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2a9470: 0x344591d4  ori         $a1, $v0, 0x91D4
    ctx->pc = 0x2a9470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37332);
    // 0x2a9474: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a9474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9478: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a9478u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a947c: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A947Cu;
    SET_GPR_U32(ctx, 31, 0x2A9484u);
    ctx->pc = 0x2A9480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A947Cu;
    // 0x2a9480: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A947Cu, 0x2A9484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9484u;
label_2a9484:
    // 0x2a9484: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a9484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9488: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9488u;
        // 0x2a948c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9490u;
}

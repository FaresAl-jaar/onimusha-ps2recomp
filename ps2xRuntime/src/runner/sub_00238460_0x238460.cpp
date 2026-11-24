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

// Function: sub_00238460
// Address: 0x238460 - 0x238498
void sub_00238460_0x238460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238460_0x238460");
#endif

    switch (ctx->pc) {
        case 0x238474u: goto label_238474;
        case 0x23847cu: goto label_23847c;
        case 0x238484u: goto label_238484;
        default: break;
    }

    ctx->pc = 0x238460u;

    // 0x238460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238468: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x238468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23846c: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x23846Cu;
    SET_GPR_U32(ctx, 31, 0x238474u);
    ctx->pc = 0x238470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23846Cu;
    // 0x238470: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x23846Cu, 0x238474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238474u;
label_238474:
    // 0x238474: 0xc08e126  jal         func_238498
    ctx->pc = 0x238474u;
    SET_GPR_U32(ctx, 31, 0x23847Cu);
    ctx->pc = 0x238478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238474u;
    // 0x238478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238498u, 0x238474u, 0x23847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23847Cu;
label_23847c:
    // 0x23847c: 0xc08e2c2  jal         func_238B08
    ctx->pc = 0x23847Cu;
    SET_GPR_U32(ctx, 31, 0x238484u);
    ctx->pc = 0x238480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23847Cu;
    // 0x238480: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B08u, 0x23847Cu, 0x238484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238484u;
label_238484:
    // 0x238484: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x238484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238488: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x238488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23848c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23848cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238490: 0x3e00008  jr          $ra
    ctx->pc = 0x238490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238490u;
        // 0x238494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238498u;
}

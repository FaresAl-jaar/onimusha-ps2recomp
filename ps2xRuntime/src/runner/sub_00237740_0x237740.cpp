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

// Function: sub_00237740
// Address: 0x237740 - 0x237778
void sub_00237740_0x237740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237740_0x237740");
#endif

    switch (ctx->pc) {
        case 0x237754u: goto label_237754;
        case 0x23775cu: goto label_23775c;
        case 0x237764u: goto label_237764;
        default: break;
    }

    ctx->pc = 0x237740u;

    // 0x237740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x237744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237748: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x237748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23774c: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x23774Cu;
    SET_GPR_U32(ctx, 31, 0x237754u);
    ctx->pc = 0x237750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23774Cu;
    // 0x237750: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x23774Cu, 0x237754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237754u;
label_237754:
    // 0x237754: 0xc08ddde  jal         func_237778
    ctx->pc = 0x237754u;
    SET_GPR_U32(ctx, 31, 0x23775Cu);
    ctx->pc = 0x237758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237754u;
    // 0x237758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237778u, 0x237754u, 0x23775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23775Cu;
label_23775c:
    // 0x23775c: 0xc08e2c2  jal         func_238B08
    ctx->pc = 0x23775Cu;
    SET_GPR_U32(ctx, 31, 0x237764u);
    ctx->pc = 0x237760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23775Cu;
    // 0x237760: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B08u, 0x23775Cu, 0x237764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237764u;
label_237764:
    // 0x237764: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x237764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237768: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x237768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23776c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23776cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237770: 0x3e00008  jr          $ra
    ctx->pc = 0x237770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237770u;
        // 0x237774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237778u;
}

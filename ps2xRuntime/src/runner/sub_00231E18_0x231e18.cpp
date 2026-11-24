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

// Function: sub_00231E18
// Address: 0x231e18 - 0x231e50
void sub_00231E18_0x231e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231E18_0x231e18");
#endif

    switch (ctx->pc) {
        case 0x231e2cu: goto label_231e2c;
        case 0x231e34u: goto label_231e34;
        case 0x231e3cu: goto label_231e3c;
        default: break;
    }

    ctx->pc = 0x231e18u;

    // 0x231e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231e1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231e20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x231e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x231e24: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x231E24u;
    SET_GPR_U32(ctx, 31, 0x231E2Cu);
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x231E24u, 0x231E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E2Cu;
label_231e2c:
    // 0x231e2c: 0xc08c794  jal         func_231E50
    ctx->pc = 0x231E2Cu;
    SET_GPR_U32(ctx, 31, 0x231E34u);
    ctx->pc = 0x231E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E50u, 0x231E2Cu, 0x231E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E34u;
label_231e34:
    // 0x231e34: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x231E34u;
    SET_GPR_U32(ctx, 31, 0x231E3Cu);
    ctx->pc = 0x231E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E34u;
    // 0x231e38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x231E34u, 0x231E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E3Cu;
label_231e3c:
    // 0x231e3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x231e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231e40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x231e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231e48: 0x3e00008  jr          $ra
    ctx->pc = 0x231E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231E48u;
        // 0x231e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231E50u;
}

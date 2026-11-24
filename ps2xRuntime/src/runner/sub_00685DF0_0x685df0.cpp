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

// Function: sub_00685DF0
// Address: 0x685df0 - 0x685e34
void sub_00685DF0_0x685df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00685DF0_0x685df0");
#endif

    switch (ctx->pc) {
        case 0x685e10u: goto label_685e10;
        case 0x685e28u: goto label_685e28;
        default: break;
    }

    ctx->pc = 0x685df0u;

    // 0x685df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x685df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x685df4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x685df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x685df8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x685df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x685dfc: 0x2484ea58  addiu       $a0, $a0, -0x15A8
    ctx->pc = 0x685dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961752));
    // 0x685e00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x685e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x685e04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x685e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x685e08: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x685E08u;
    SET_GPR_U32(ctx, 31, 0x685E10u);
    ctx->pc = 0x685E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x685E08u;
    // 0x685e0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x685E08u, 0x685E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x685E10u;
label_685e10:
    // 0x685e10: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x685e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x685e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x685e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x685e18: 0x2484ea68  addiu       $a0, $a0, -0x1598
    ctx->pc = 0x685e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961768));
    // 0x685e1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x685e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x685e20: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x685E20u;
    SET_GPR_U32(ctx, 31, 0x685E28u);
    ctx->pc = 0x685E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x685E20u;
    // 0x685e24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x685E20u, 0x685E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x685E28u;
label_685e28:
    // 0x685e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x685e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x685e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x685E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x685E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x685E2Cu;
        // 0x685e30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x685E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x685E34u;
}

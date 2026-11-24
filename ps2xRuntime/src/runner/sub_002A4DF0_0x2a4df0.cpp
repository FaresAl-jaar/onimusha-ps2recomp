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

// Function: sub_002A4DF0
// Address: 0x2a4df0 - 0x2a4e30
void sub_002A4DF0_0x2a4df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4DF0_0x2a4df0");
#endif

    switch (ctx->pc) {
        case 0x2a4e24u: goto label_2a4e24;
        default: break;
    }

    ctx->pc = 0x2a4df0u;

    // 0x2a4df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a4df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a4df4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a4df4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4df8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a4df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a4dfc: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a4dfcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e00: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2a4e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2a4e04: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a4e04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4e08: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a4e08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e0c: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a4e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a4e10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a4e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e14: 0x24053ccc  addiu       $a1, $zero, 0x3CCC
    ctx->pc = 0x2a4e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15564));
    // 0x2a4e18: 0x24060068  addiu       $a2, $zero, 0x68
    ctx->pc = 0x2a4e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2a4e1c: 0xc0f8304  jal         func_3E0C10
    ctx->pc = 0x2A4E1Cu;
    SET_GPR_U32(ctx, 31, 0x2A4E24u);
    ctx->pc = 0x2A4E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4E1Cu;
    // 0x2a4e20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0C10u, 0x2A4E1Cu, 0x2A4E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E24u;
label_2a4e24:
    // 0x2a4e24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a4e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4e28: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4E28u;
        // 0x2a4e2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4E30u;
}

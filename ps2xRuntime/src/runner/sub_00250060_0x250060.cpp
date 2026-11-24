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

// Function: sub_00250060
// Address: 0x250060 - 0x250098
void sub_00250060_0x250060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250060_0x250060");
#endif

    switch (ctx->pc) {
        case 0x250074u: goto label_250074;
        case 0x25007cu: goto label_25007c;
        case 0x250084u: goto label_250084;
        default: break;
    }

    ctx->pc = 0x250060u;

    // 0x250060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x250064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x250068: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x250068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25006c: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x25006Cu;
    SET_GPR_U32(ctx, 31, 0x250074u);
    ctx->pc = 0x250070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25006Cu;
    // 0x250070: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x25006Cu, 0x250074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250074u;
label_250074:
    // 0x250074: 0xc094026  jal         func_250098
    ctx->pc = 0x250074u;
    SET_GPR_U32(ctx, 31, 0x25007Cu);
    ctx->pc = 0x250078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250074u;
    // 0x250078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250098u, 0x250074u, 0x25007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25007Cu;
label_25007c:
    // 0x25007c: 0xc093f40  jal         func_24FD00
    ctx->pc = 0x25007Cu;
    SET_GPR_U32(ctx, 31, 0x250084u);
    ctx->pc = 0x250080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25007Cu;
    // 0x250080: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD00u, 0x25007Cu, 0x250084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250084u;
label_250084:
    // 0x250084: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x250084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x250088: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x250088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25008c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25008cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250090: 0x3e00008  jr          $ra
    ctx->pc = 0x250090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250090u;
        // 0x250094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250098u;
}

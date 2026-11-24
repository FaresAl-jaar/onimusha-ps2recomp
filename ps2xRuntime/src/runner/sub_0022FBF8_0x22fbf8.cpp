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

// Function: sub_0022FBF8
// Address: 0x22fbf8 - 0x22fc30
void sub_0022FBF8_0x22fbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FBF8_0x22fbf8");
#endif

    switch (ctx->pc) {
        case 0x22fc0cu: goto label_22fc0c;
        case 0x22fc14u: goto label_22fc14;
        case 0x22fc1cu: goto label_22fc1c;
        default: break;
    }

    ctx->pc = 0x22fbf8u;

    // 0x22fbf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22fbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22fbfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22fbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22fc00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22fc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22fc04: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x22FC04u;
    SET_GPR_U32(ctx, 31, 0x22FC0Cu);
    ctx->pc = 0x22FC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC04u;
    // 0x22fc08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x22FC04u, 0x22FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC0Cu;
label_22fc0c:
    // 0x22fc0c: 0xc08bf0c  jal         func_22FC30
    ctx->pc = 0x22FC0Cu;
    SET_GPR_U32(ctx, 31, 0x22FC14u);
    ctx->pc = 0x22FC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC0Cu;
    // 0x22fc10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FC30u, 0x22FC0Cu, 0x22FC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC14u;
label_22fc14:
    // 0x22fc14: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x22FC14u;
    SET_GPR_U32(ctx, 31, 0x22FC1Cu);
    ctx->pc = 0x22FC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC14u;
    // 0x22fc18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x22FC14u, 0x22FC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC1Cu;
label_22fc1c:
    // 0x22fc1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22fc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22fc20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22fc20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fc24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22fc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fc28: 0x3e00008  jr          $ra
    ctx->pc = 0x22FC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC28u;
        // 0x22fc2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FC30u;
}

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

// Function: sub_0024FD50
// Address: 0x24fd50 - 0x24fd94
void sub_0024FD50_0x24fd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FD50_0x24fd50");
#endif

    switch (ctx->pc) {
        case 0x24fd70u: goto label_24fd70;
        case 0x24fd7cu: goto label_24fd7c;
        case 0x24fd84u: goto label_24fd84;
        default: break;
    }

    ctx->pc = 0x24fd50u;

    // 0x24fd50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24fd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24fd54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24fd54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd58: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x24fd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x24fd5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24fd5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24fd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd64: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x24fd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x24fd68: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x24FD68u;
    SET_GPR_U32(ctx, 31, 0x24FD70u);
    ctx->pc = 0x24FD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FD68u;
    // 0x24fd6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x24FD68u, 0x24FD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD70u;
label_24fd70:
    // 0x24fd70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24fd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd74: 0xc049dd0  jal         func_127740
    ctx->pc = 0x24FD74u;
    SET_GPR_U32(ctx, 31, 0x24FD7Cu);
    ctx->pc = 0x24FD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FD74u;
    // 0x24fd78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x24FD74u, 0x24FD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD7Cu;
label_24fd7c:
    // 0x24fd7c: 0xc093f46  jal         func_24FD18
    ctx->pc = 0x24FD7Cu;
    SET_GPR_U32(ctx, 31, 0x24FD84u);
    ctx->pc = 0x24FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FD7Cu;
    // 0x24fd80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD18u, 0x24FD7Cu, 0x24FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD84u;
label_24fd84:
    // 0x24fd84: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x24fd84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24fd88: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x24fd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24fd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x24FD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FD8Cu;
        // 0x24fd90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FD94u;
}

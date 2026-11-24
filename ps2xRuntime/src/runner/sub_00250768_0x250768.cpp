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

// Function: sub_00250768
// Address: 0x250768 - 0x2507ac
void sub_00250768_0x250768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250768_0x250768");
#endif

    switch (ctx->pc) {
        case 0x250788u: goto label_250788;
        case 0x250794u: goto label_250794;
        case 0x25079cu: goto label_25079c;
        default: break;
    }

    ctx->pc = 0x250768u;

    // 0x250768: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x250768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25076c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25076cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250770: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x250770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x250774: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x250774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250778: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x250778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25077c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x25077cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x250780: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x250780u;
    SET_GPR_U32(ctx, 31, 0x250788u);
    ctx->pc = 0x250784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250780u;
    // 0x250784: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x250780u, 0x250788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250788u;
label_250788:
    // 0x250788: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x250788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25078c: 0xc049dd0  jal         func_127740
    ctx->pc = 0x25078Cu;
    SET_GPR_U32(ctx, 31, 0x250794u);
    ctx->pc = 0x250790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25078Cu;
    // 0x250790: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x25078Cu, 0x250794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250794u;
label_250794:
    // 0x250794: 0xc093f46  jal         func_24FD18
    ctx->pc = 0x250794u;
    SET_GPR_U32(ctx, 31, 0x25079Cu);
    ctx->pc = 0x250798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250794u;
    // 0x250798: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD18u, 0x250794u, 0x25079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25079Cu;
label_25079c:
    // 0x25079c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x25079cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2507a0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2507a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2507a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2507A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2507A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2507A4u;
        // 0x2507a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2507A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2507ACu;
}

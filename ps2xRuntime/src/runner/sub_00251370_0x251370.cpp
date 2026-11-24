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

// Function: sub_00251370
// Address: 0x251370 - 0x2513b4
void sub_00251370_0x251370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251370_0x251370");
#endif

    switch (ctx->pc) {
        case 0x251390u: goto label_251390;
        case 0x25139cu: goto label_25139c;
        case 0x2513a4u: goto label_2513a4;
        default: break;
    }

    ctx->pc = 0x251370u;

    // 0x251370: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x251370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x251374: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x251374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251378: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x251378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x25137c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25137cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251380: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x251380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251384: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x251384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x251388: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x251388u;
    SET_GPR_U32(ctx, 31, 0x251390u);
    ctx->pc = 0x25138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251388u;
    // 0x25138c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x251388u, 0x251390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251390u;
label_251390:
    // 0x251390: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x251390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251394: 0xc049dd0  jal         func_127740
    ctx->pc = 0x251394u;
    SET_GPR_U32(ctx, 31, 0x25139Cu);
    ctx->pc = 0x251398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251394u;
    // 0x251398: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x251394u, 0x25139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25139Cu;
label_25139c:
    // 0x25139c: 0xc093f46  jal         func_24FD18
    ctx->pc = 0x25139Cu;
    SET_GPR_U32(ctx, 31, 0x2513A4u);
    ctx->pc = 0x2513A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25139Cu;
    // 0x2513a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD18u, 0x25139Cu, 0x2513A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2513A4u;
label_2513a4:
    // 0x2513a4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2513a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2513a8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2513a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2513ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2513ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2513B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2513ACu;
        // 0x2513b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2513ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2513B4u;
}

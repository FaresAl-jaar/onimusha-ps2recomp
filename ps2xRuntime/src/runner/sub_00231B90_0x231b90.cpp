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

// Function: sub_00231B90
// Address: 0x231b90 - 0x231bc8
void sub_00231B90_0x231b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231B90_0x231b90");
#endif

    switch (ctx->pc) {
        case 0x231ba4u: goto label_231ba4;
        case 0x231bacu: goto label_231bac;
        case 0x231bb4u: goto label_231bb4;
        default: break;
    }

    ctx->pc = 0x231b90u;

    // 0x231b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231b94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231b98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x231b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x231b9c: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x231B9Cu;
    SET_GPR_U32(ctx, 31, 0x231BA4u);
    ctx->pc = 0x231BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B9Cu;
    // 0x231ba0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x231B9Cu, 0x231BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BA4u;
label_231ba4:
    // 0x231ba4: 0xc08c6f2  jal         func_231BC8
    ctx->pc = 0x231BA4u;
    SET_GPR_U32(ctx, 31, 0x231BACu);
    ctx->pc = 0x231BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231BA4u;
    // 0x231ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231BC8u, 0x231BA4u, 0x231BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BACu;
label_231bac:
    // 0x231bac: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x231BACu;
    SET_GPR_U32(ctx, 31, 0x231BB4u);
    ctx->pc = 0x231BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231BACu;
    // 0x231bb0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x231BACu, 0x231BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BB4u;
label_231bb4:
    // 0x231bb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x231bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231bb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x231bb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231bbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x231BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231BC0u;
        // 0x231bc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231BC8u;
}

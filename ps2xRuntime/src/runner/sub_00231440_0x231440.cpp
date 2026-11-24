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

// Function: sub_00231440
// Address: 0x231440 - 0x231488
void sub_00231440_0x231440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231440_0x231440");
#endif

    switch (ctx->pc) {
        case 0x23145cu: goto label_23145c;
        case 0x231468u: goto label_231468;
        case 0x231470u: goto label_231470;
        default: break;
    }

    ctx->pc = 0x231440u;

    // 0x231440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x231440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x231444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231448: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x231448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23144c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23144cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x231450: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x231450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x231454: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x231454u;
    SET_GPR_U32(ctx, 31, 0x23145Cu);
    ctx->pc = 0x231458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231454u;
    // 0x231458: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x231454u, 0x23145Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23145Cu;
label_23145c:
    // 0x23145c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23145cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231460: 0xc08c522  jal         func_231488
    ctx->pc = 0x231460u;
    SET_GPR_U32(ctx, 31, 0x231468u);
    ctx->pc = 0x231464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231460u;
    // 0x231464: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231488u, 0x231460u, 0x231468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231468u;
label_231468:
    // 0x231468: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x231468u;
    SET_GPR_U32(ctx, 31, 0x231470u);
    ctx->pc = 0x23146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231468u;
    // 0x23146c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x231468u, 0x231470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231470u;
label_231470:
    // 0x231470: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x231470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231474: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x231474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x231478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23147c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23147cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231480: 0x3e00008  jr          $ra
    ctx->pc = 0x231480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231480u;
        // 0x231484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231488u;
}

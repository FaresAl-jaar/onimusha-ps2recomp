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

// Function: sub_002318E8
// Address: 0x2318e8 - 0x231920
void sub_002318E8_0x2318e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002318E8_0x2318e8");
#endif

    switch (ctx->pc) {
        case 0x2318fcu: goto label_2318fc;
        case 0x231904u: goto label_231904;
        case 0x23190cu: goto label_23190c;
        default: break;
    }

    ctx->pc = 0x2318e8u;

    // 0x2318e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2318e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2318ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2318ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2318f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2318f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2318f4: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x2318F4u;
    SET_GPR_U32(ctx, 31, 0x2318FCu);
    ctx->pc = 0x2318F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2318F4u;
    // 0x2318f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x2318F4u, 0x2318FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2318FCu;
label_2318fc:
    // 0x2318fc: 0xc08c648  jal         func_231920
    ctx->pc = 0x2318FCu;
    SET_GPR_U32(ctx, 31, 0x231904u);
    ctx->pc = 0x231900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2318FCu;
    // 0x231900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231920u, 0x2318FCu, 0x231904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231904u;
label_231904:
    // 0x231904: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x231904u;
    SET_GPR_U32(ctx, 31, 0x23190Cu);
    ctx->pc = 0x231908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231904u;
    // 0x231908: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x231904u, 0x23190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23190Cu;
label_23190c:
    // 0x23190c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23190cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231910: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x231910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231918: 0x3e00008  jr          $ra
    ctx->pc = 0x231918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231918u;
        // 0x23191c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231920u;
}

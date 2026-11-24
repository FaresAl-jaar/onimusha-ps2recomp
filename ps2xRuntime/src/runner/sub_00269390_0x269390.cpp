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

// Function: sub_00269390
// Address: 0x269390 - 0x2693b4
void sub_00269390_0x269390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269390_0x269390");
#endif

    ctx->pc = 0x269390u;

    // 0x269390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x269390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x269394: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x269394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x269398: 0xffa70028  sd          $a3, 0x28($sp)
    ctx->pc = 0x269398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 7));
    // 0x26939c: 0xffa80030  sd          $t0, 0x30($sp)
    ctx->pc = 0x26939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 8));
    // 0x2693a0: 0xffa90038  sd          $t1, 0x38($sp)
    ctx->pc = 0x2693a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 9));
    // 0x2693a4: 0xffaa0040  sd          $t2, 0x40($sp)
    ctx->pc = 0x2693a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 10));
    // 0x2693a8: 0xffab0048  sd          $t3, 0x48($sp)
    ctx->pc = 0x2693a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 11));
    // 0x2693ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2693ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2693B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693ACu;
        // 0x2693b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2693ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2693B4u;
}

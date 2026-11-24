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

// Function: sub_002AE390
// Address: 0x2ae390 - 0x2ae3bc
void sub_002AE390_0x2ae390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE390_0x2ae390");
#endif

    ctx->pc = 0x2ae390u;

    // 0x2ae390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ae390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ae394: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x2ae394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x2ae398: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x2ae398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x2ae39c: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x2ae39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x2ae3a0: 0xffa70018  sd          $a3, 0x18($sp)
    ctx->pc = 0x2ae3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 7));
    // 0x2ae3a4: 0xffa80020  sd          $t0, 0x20($sp)
    ctx->pc = 0x2ae3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 8));
    // 0x2ae3a8: 0xffa90028  sd          $t1, 0x28($sp)
    ctx->pc = 0x2ae3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 9));
    // 0x2ae3ac: 0xffaa0030  sd          $t2, 0x30($sp)
    ctx->pc = 0x2ae3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 10));
    // 0x2ae3b0: 0xffab0038  sd          $t3, 0x38($sp)
    ctx->pc = 0x2ae3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 11));
    // 0x2ae3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3B4u;
        // 0x2ae3b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE3BCu;
}

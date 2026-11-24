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

// Function: sub_00231698
// Address: 0x231698 - 0x2316c4
void sub_00231698_0x231698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231698_0x231698");
#endif

    switch (ctx->pc) {
        case 0x2316b8u: goto label_2316b8;
        default: break;
    }

    ctx->pc = 0x231698u;

    // 0x231698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x231698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23169c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x23169cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316a0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2316a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316a4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2316a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316a8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2316a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2316acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2316b0: 0xc08c5d6  jal         func_231758
    ctx->pc = 0x2316B0u;
    SET_GPR_U32(ctx, 31, 0x2316B8u);
    ctx->pc = 0x2316B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2316B0u;
    // 0x2316b4: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231758u, 0x2316B0u, 0x2316B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2316B8u;
label_2316b8:
    // 0x2316b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2316b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2316bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2316BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2316C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316BCu;
        // 0x2316c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2316BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2316C4u;
}

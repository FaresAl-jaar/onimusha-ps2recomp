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

// Function: sub_0021BF90
// Address: 0x21bf90 - 0x21bfb8
void sub_0021BF90_0x21bf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BF90_0x21bf90");
#endif

    switch (ctx->pc) {
        case 0x21bfacu: goto label_21bfac;
        default: break;
    }

    ctx->pc = 0x21bf90u;

    // 0x21bf90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21bf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21bf94: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x21bf94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf98: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x21bf98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21bf9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21bf9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bfa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21bfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21bfa4: 0xc0888d6  jal         func_222358
    ctx->pc = 0x21BFA4u;
    SET_GPR_U32(ctx, 31, 0x21BFACu);
    ctx->pc = 0x21BFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFA4u;
    // 0x21bfa8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222358u, 0x21BFA4u, 0x21BFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BFACu;
label_21bfac:
    // 0x21bfac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21bfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x21BFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFB0u;
        // 0x21bfb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BFB8u;
}

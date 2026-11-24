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

// Function: sub_003EFCC0
// Address: 0x3efcc0 - 0x3efcf4
void sub_003EFCC0_0x3efcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EFCC0_0x3efcc0");
#endif

    switch (ctx->pc) {
        case 0x3efcd8u: goto label_3efcd8;
        case 0x3efce4u: goto label_3efce4;
        default: break;
    }

    ctx->pc = 0x3efcc0u;

    // 0x3efcc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3efcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3efcc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3efcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3efcc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3efcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3efccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3efcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3efcd0: 0xc097834  jal         func_25E0D0
    ctx->pc = 0x3EFCD0u;
    SET_GPR_U32(ctx, 31, 0x3EFCD8u);
    ctx->pc = 0x3EFCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFCD0u;
    // 0x3efcd4: 0x8c842be8  lw          $a0, 0x2BE8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E0D0u, 0x3EFCD0u, 0x3EFCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFCD8u;
label_3efcd8:
    // 0x3efcd8: 0xae022be8  sw          $v0, 0x2BE8($s0)
    ctx->pc = 0x3efcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11240), GPR_U32(ctx, 2));
    // 0x3efcdc: 0xc0a6188  jal         func_298620
    ctx->pc = 0x3EFCDCu;
    SET_GPR_U32(ctx, 31, 0x3EFCE4u);
    ctx->pc = 0x3EFCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFCDCu;
    // 0x3efce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298620u, 0x3EFCDCu, 0x3EFCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFCE4u;
label_3efce4:
    // 0x3efce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3efce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3efce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3efce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3efcec: 0x3e00008  jr          $ra
    ctx->pc = 0x3EFCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFCECu;
        // 0x3efcf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EFCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EFCF4u;
}

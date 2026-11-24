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

// Function: sub_0023BC90
// Address: 0x23bc90 - 0x23bcd8
void sub_0023BC90_0x23bc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BC90_0x23bc90");
#endif

    switch (ctx->pc) {
        case 0x23bcacu: goto label_23bcac;
        case 0x23bcb8u: goto label_23bcb8;
        case 0x23bcc0u: goto label_23bcc0;
        default: break;
    }

    ctx->pc = 0x23bc90u;

    // 0x23bc90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23bc94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23bc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23bc98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23bc98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bc9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23bc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23bca0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23bca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23bca4: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23BCA4u;
    SET_GPR_U32(ctx, 31, 0x23BCACu);
    ctx->pc = 0x23BCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BCA4u;
    // 0x23bca8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23BCA4u, 0x23BCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BCACu;
label_23bcac:
    // 0x23bcac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bcb0: 0xc08ef36  jal         func_23BCD8
    ctx->pc = 0x23BCB0u;
    SET_GPR_U32(ctx, 31, 0x23BCB8u);
    ctx->pc = 0x23BCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BCB0u;
    // 0x23bcb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCD8u, 0x23BCB0u, 0x23BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BCB8u;
label_23bcb8:
    // 0x23bcb8: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23BCB8u;
    SET_GPR_U32(ctx, 31, 0x23BCC0u);
    ctx->pc = 0x23BCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BCB8u;
    // 0x23bcbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23BCB8u, 0x23BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BCC0u;
label_23bcc0:
    // 0x23bcc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23bcc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23bcc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23bcc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bcc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23bcc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bcccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x23BCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BCD0u;
        // 0x23bcd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BCD8u;
}

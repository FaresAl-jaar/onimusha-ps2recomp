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

// Function: sub_0020BF98
// Address: 0x20bf98 - 0x20bfe4
void sub_0020BF98_0x20bf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BF98_0x20bf98");
#endif

    switch (ctx->pc) {
        case 0x20bfacu: goto label_20bfac;
        case 0x20bfb4u: goto label_20bfb4;
        case 0x20bfccu: goto label_20bfcc;
        default: break;
    }

    ctx->pc = 0x20bf98u;

    // 0x20bf98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20bf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20bf9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20bf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20bfa0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20bfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20bfa4: 0xc0831d6  jal         func_20C758
    ctx->pc = 0x20BFA4u;
    SET_GPR_U32(ctx, 31, 0x20BFACu);
    ctx->pc = 0x20BFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BFA4u;
    // 0x20bfa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C758u, 0x20BFA4u, 0x20BFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFACu;
label_20bfac:
    // 0x20bfac: 0xc08300c  jal         func_20C030
    ctx->pc = 0x20BFACu;
    SET_GPR_U32(ctx, 31, 0x20BFB4u);
    ctx->pc = 0x20C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C030u, 0x20BFACu, 0x20BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFB4u;
label_20bfb4:
    // 0x20bfb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bfb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bfbc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20BFBCu;
    {
        const bool branch_taken_0x20bfbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFBCu;
        // 0x20bfc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bfbc) {
            ctx->pc = 0x20BFD0u;
            goto label_20bfd0;
        }
    }
    ctx->pc = 0x20BFC4u;
    // 0x20bfc4: 0xc083094  jal         func_20C250
    ctx->pc = 0x20BFC4u;
    SET_GPR_U32(ctx, 31, 0x20BFCCu);
    ctx->pc = 0x20C250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C250u, 0x20BFC4u, 0x20BFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFCCu;
label_20bfcc:
    // 0x20bfcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20bfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20bfd0:
    // 0x20bfd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20bfd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20bfd4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20bfd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bfd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20bfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20bfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x20BFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFDCu;
        // 0x20bfe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BFE4u;
}

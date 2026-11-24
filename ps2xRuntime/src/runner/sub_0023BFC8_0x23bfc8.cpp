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

// Function: sub_0023BFC8
// Address: 0x23bfc8 - 0x23c000
void sub_0023BFC8_0x23bfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BFC8_0x23bfc8");
#endif

    switch (ctx->pc) {
        case 0x23bfdcu: goto label_23bfdc;
        case 0x23bfe4u: goto label_23bfe4;
        case 0x23bfecu: goto label_23bfec;
        default: break;
    }

    ctx->pc = 0x23bfc8u;

    // 0x23bfc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23bfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23bfcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23bfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23bfd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23bfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23bfd4: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23BFD4u;
    SET_GPR_U32(ctx, 31, 0x23BFDCu);
    ctx->pc = 0x23BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BFD4u;
    // 0x23bfd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23BFD4u, 0x23BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BFDCu;
label_23bfdc:
    // 0x23bfdc: 0xc08f000  jal         func_23C000
    ctx->pc = 0x23BFDCu;
    SET_GPR_U32(ctx, 31, 0x23BFE4u);
    ctx->pc = 0x23BFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BFDCu;
    // 0x23bfe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C000u, 0x23BFDCu, 0x23BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BFE4u;
label_23bfe4:
    // 0x23bfe4: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23BFE4u;
    SET_GPR_U32(ctx, 31, 0x23BFECu);
    ctx->pc = 0x23BFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BFE4u;
    // 0x23bfe8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23BFE4u, 0x23BFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BFECu;
label_23bfec:
    // 0x23bfec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23bfecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23bff0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23bff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bff4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bff8: 0x3e00008  jr          $ra
    ctx->pc = 0x23BFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFF8u;
        // 0x23bffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C000u;
}

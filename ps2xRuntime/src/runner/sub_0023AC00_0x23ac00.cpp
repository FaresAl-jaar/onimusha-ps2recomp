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

// Function: sub_0023AC00
// Address: 0x23ac00 - 0x23ac38
void sub_0023AC00_0x23ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AC00_0x23ac00");
#endif

    switch (ctx->pc) {
        case 0x23ac14u: goto label_23ac14;
        case 0x23ac1cu: goto label_23ac1c;
        case 0x23ac24u: goto label_23ac24;
        default: break;
    }

    ctx->pc = 0x23ac00u;

    // 0x23ac00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ac00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23ac04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ac04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ac08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23ac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23ac0c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23AC0Cu;
    SET_GPR_U32(ctx, 31, 0x23AC14u);
    ctx->pc = 0x23AC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AC0Cu;
    // 0x23ac10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23AC0Cu, 0x23AC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AC14u;
label_23ac14:
    // 0x23ac14: 0xc08eb0e  jal         func_23AC38
    ctx->pc = 0x23AC14u;
    SET_GPR_U32(ctx, 31, 0x23AC1Cu);
    ctx->pc = 0x23AC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AC14u;
    // 0x23ac18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC38u, 0x23AC14u, 0x23AC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AC1Cu;
label_23ac1c:
    // 0x23ac1c: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23AC1Cu;
    SET_GPR_U32(ctx, 31, 0x23AC24u);
    ctx->pc = 0x23AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AC1Cu;
    // 0x23ac20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23AC1Cu, 0x23AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AC24u;
label_23ac24:
    // 0x23ac24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23ac24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23ac28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23ac28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ac2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ac2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ac30: 0x3e00008  jr          $ra
    ctx->pc = 0x23AC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC30u;
        // 0x23ac34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AC38u;
}

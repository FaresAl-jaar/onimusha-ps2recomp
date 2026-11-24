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

// Function: sub_0010BFC0
// Address: 0x10bfc0 - 0x10bfe4
void sub_0010BFC0_0x10bfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BFC0_0x10bfc0");
#endif

    switch (ctx->pc) {
        case 0x10bfd4u: goto label_10bfd4;
        default: break;
    }

    ctx->pc = 0x10bfc0u;

    // 0x10bfc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10bfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10bfc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10bfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10bfc8: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x10bfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10bfcc: 0xc0435d2  jal         func_10D748
    ctx->pc = 0x10BFCCu;
    SET_GPR_U32(ctx, 31, 0x10BFD4u);
    ctx->pc = 0x10BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BFCCu;
    // 0x10bfd0: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D748u, 0x10BFCCu, 0x10BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BFD4u;
label_10bfd4:
    // 0x10bfd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bfd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x10BFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BFDCu;
        // 0x10bfe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BFE4u;
}

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

// Function: sub_003F6720
// Address: 0x3f6720 - 0x3f6758
void sub_003F6720_0x3f6720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6720_0x3f6720");
#endif

    switch (ctx->pc) {
        case 0x3f6744u: goto label_3f6744;
        case 0x3f674cu: goto label_3f674c;
        default: break;
    }

    ctx->pc = 0x3f6720u;

    // 0x3f6720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f6720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f6724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f6724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f6728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f6728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f672c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f672cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f6730: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x3f6730u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f6734: 0xa0800021  sb          $zero, 0x21($a0)
    ctx->pc = 0x3f6734u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f6738: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3f6738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3f673c: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x3F673Cu;
    SET_GPR_U32(ctx, 31, 0x3F6744u);
    ctx->pc = 0x3F6740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F673Cu;
    // 0x3f6740: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x3F673Cu, 0x3F6744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6744u;
label_3f6744:
    // 0x3f6744: 0xc0ed6d4  jal         func_3B5B50
    ctx->pc = 0x3F6744u;
    SET_GPR_U32(ctx, 31, 0x3F674Cu);
    ctx->pc = 0x3F6748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6744u;
    // 0x3f6748: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B50u, 0x3F6744u, 0x3F674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F674Cu;
label_3f674c:
    // 0x3f674c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f674cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f6750: 0x3e00008  jr          $ra
    ctx->pc = 0x3F6750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6750u;
        // 0x3f6754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F6758u;
}

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

// Function: sub_0036FDA0
// Address: 0x36fda0 - 0x36fdf8
void sub_0036FDA0_0x36fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FDA0_0x36fda0");
#endif

    switch (ctx->pc) {
        case 0x36fdbcu: goto label_36fdbc;
        case 0x36fddcu: goto label_36fddc;
        case 0x36fde8u: goto label_36fde8;
        default: break;
    }

    ctx->pc = 0x36fda0u;

    // 0x36fda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36fda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36fda4: 0x24050188  addiu       $a1, $zero, 0x188
    ctx->pc = 0x36fda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
    // 0x36fda8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36fda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36fdac: 0x24060183  addiu       $a2, $zero, 0x183
    ctx->pc = 0x36fdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
    // 0x36fdb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36fdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36fdb4: 0xc0dbfd4  jal         func_36FF50
    ctx->pc = 0x36FDB4u;
    SET_GPR_U32(ctx, 31, 0x36FDBCu);
    ctx->pc = 0x36FDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FDB4u;
    // 0x36fdb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FF50u, 0x36FDB4u, 0x36FDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FDBCu;
label_36fdbc:
    // 0x36fdbc: 0x82090331  lb          $t1, 0x331($s0)
    ctx->pc = 0x36fdbcu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 817)));
    // 0x36fdc0: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x36fdc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x36fdc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36fdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fdc8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x36fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36fdcc: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x36fdccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x36fdd0: 0x24e7abb0  addiu       $a3, $a3, -0x5450
    ctx->pc = 0x36fdd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945712));
    // 0x36fdd4: 0xc0dc390  jal         func_370E40
    ctx->pc = 0x36FDD4u;
    SET_GPR_U32(ctx, 31, 0x36FDDCu);
    ctx->pc = 0x36FDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FDD4u;
    // 0x36fdd8: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370E40u, 0x36FDD4u, 0x36FDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FDDCu;
label_36fddc:
    // 0x36fddc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36fddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36fde0: 0xc0cc01c  jal         func_330070
    ctx->pc = 0x36FDE0u;
    SET_GPR_U32(ctx, 31, 0x36FDE8u);
    ctx->pc = 0x36FDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FDE0u;
    // 0x36fde4: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330070u, 0x36FDE0u, 0x36FDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FDE8u;
label_36fde8:
    // 0x36fde8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36fde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36fdec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36fdecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x36FDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FDF0u;
        // 0x36fdf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FDF8u;
}

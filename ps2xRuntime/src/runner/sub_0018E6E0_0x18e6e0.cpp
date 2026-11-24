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

// Function: sub_0018E6E0
// Address: 0x18e6e0 - 0x18e714
void sub_0018E6E0_0x18e6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E6E0_0x18e6e0");
#endif

    switch (ctx->pc) {
        case 0x18e6fcu: goto label_18e6fc;
        case 0x18e704u: goto label_18e704;
        default: break;
    }

    ctx->pc = 0x18e6e0u;

    // 0x18e6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e6e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e6e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18e6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e6ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e6f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18e6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6f4: 0xc0639a4  jal         func_18E690
    ctx->pc = 0x18E6F4u;
    SET_GPR_U32(ctx, 31, 0x18E6FCu);
    ctx->pc = 0x18E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6F4u;
    // 0x18e6f8: 0xa0820020  sb          $v0, 0x20($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E690u, 0x18E6F4u, 0x18E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6FCu;
label_18e6fc:
    // 0x18e6fc: 0xc0639c8  jal         func_18E720
    ctx->pc = 0x18E6FCu;
    SET_GPR_U32(ctx, 31, 0x18E704u);
    ctx->pc = 0x18E700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6FCu;
    // 0x18e700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E720u, 0x18E6FCu, 0x18E704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E704u;
label_18e704:
    // 0x18e704: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e70c: 0x3e00008  jr          $ra
    ctx->pc = 0x18E70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E70Cu;
        // 0x18e710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E714u;
}

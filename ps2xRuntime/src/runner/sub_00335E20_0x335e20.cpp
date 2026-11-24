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

// Function: sub_00335E20
// Address: 0x335e20 - 0x335e54
void sub_00335E20_0x335e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335E20_0x335e20");
#endif

    switch (ctx->pc) {
        case 0x335e34u: goto label_335e34;
        case 0x335e44u: goto label_335e44;
        default: break;
    }

    ctx->pc = 0x335e20u;

    // 0x335e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335e24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x335e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x335e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x335e2c: 0xc0a52d0  jal         func_294B40
    ctx->pc = 0x335E2Cu;
    SET_GPR_U32(ctx, 31, 0x335E34u);
    ctx->pc = 0x335E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335E2Cu;
    // 0x335e30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B40u, 0x335E2Cu, 0x335E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335E34u;
label_335e34:
    // 0x335e34: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x335e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x335e38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x335e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335e3c: 0xc0a739c  jal         func_29CE70
    ctx->pc = 0x335E3Cu;
    SET_GPR_U32(ctx, 31, 0x335E44u);
    ctx->pc = 0x335E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335E3Cu;
    // 0x335e40: 0x24842f20  addiu       $a0, $a0, 0x2F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x335E3Cu, 0x335E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335E44u;
label_335e44:
    // 0x335e44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x335e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x335E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E4Cu;
        // 0x335e50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335E54u;
}

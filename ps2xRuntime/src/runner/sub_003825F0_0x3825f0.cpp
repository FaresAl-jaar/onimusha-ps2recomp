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

// Function: sub_003825F0
// Address: 0x3825f0 - 0x382624
void sub_003825F0_0x3825f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003825F0_0x3825f0");
#endif

    switch (ctx->pc) {
        case 0x38260cu: goto label_38260c;
        case 0x382614u: goto label_382614;
        default: break;
    }

    ctx->pc = 0x3825f0u;

    // 0x3825f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3825f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3825f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3825f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3825f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3825f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3825fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3825fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382600: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x382600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x382604: 0xc0e0a04  jal         func_382810
    ctx->pc = 0x382604u;
    SET_GPR_U32(ctx, 31, 0x38260Cu);
    ctx->pc = 0x382608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382604u;
    // 0x382608: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382810u, 0x382604u, 0x38260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38260Cu;
label_38260c:
    // 0x38260c: 0xc0e0954  jal         func_382550
    ctx->pc = 0x38260Cu;
    SET_GPR_U32(ctx, 31, 0x382614u);
    ctx->pc = 0x382610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38260Cu;
    // 0x382610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382550u, 0x38260Cu, 0x382614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382614u;
label_382614:
    // 0x382614: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x382614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x382618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38261c: 0x3e00008  jr          $ra
    ctx->pc = 0x38261Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38261Cu;
        // 0x382620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38261Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382624u;
}

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

// Function: sub_002F34E0
// Address: 0x2f34e0 - 0x2f3514
void sub_002F34E0_0x2f34e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F34E0_0x2f34e0");
#endif

    switch (ctx->pc) {
        case 0x2f34f4u: goto label_2f34f4;
        case 0x2f3504u: goto label_2f3504;
        default: break;
    }

    ctx->pc = 0x2f34e0u;

    // 0x2f34e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f34e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f34e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f34e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f34e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f34e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f34ec: 0xc0c2e84  jal         func_30BA10
    ctx->pc = 0x2F34ECu;
    SET_GPR_U32(ctx, 31, 0x2F34F4u);
    ctx->pc = 0x2F34F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34ECu;
    // 0x2f34f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA10u, 0x2F34ECu, 0x2F34F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34F4u;
label_2f34f4:
    // 0x2f34f4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2f34f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2f34f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f34f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34fc: 0xc049590  jal         func_125640
    ctx->pc = 0x2F34FCu;
    SET_GPR_U32(ctx, 31, 0x2F3504u);
    ctx->pc = 0x2F3500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34FCu;
    // 0x2f3500: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2F34FCu, 0x2F3504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3504u;
label_2f3504:
    // 0x2f3504: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f3504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f3508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f350c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F350Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F350Cu;
        // 0x2f3510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F350Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3514u;
}

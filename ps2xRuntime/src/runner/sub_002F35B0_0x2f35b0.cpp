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

// Function: sub_002F35B0
// Address: 0x2f35b0 - 0x2f35e0
void sub_002F35B0_0x2f35b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F35B0_0x2f35b0");
#endif

    switch (ctx->pc) {
        case 0x2f35c8u: goto label_2f35c8;
        case 0x2f35d0u: goto label_2f35d0;
        default: break;
    }

    ctx->pc = 0x2f35b0u;

    // 0x2f35b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f35b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f35b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f35b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f35b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f35b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f35bc: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2f35bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f35c0: 0xc0bcd48  jal         func_2F3520
    ctx->pc = 0x2F35C0u;
    SET_GPR_U32(ctx, 31, 0x2F35C8u);
    ctx->pc = 0x2F35C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F35C0u;
    // 0x2f35c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3520u, 0x2F35C0u, 0x2F35C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F35C8u;
label_2f35c8:
    // 0x2f35c8: 0xc0c2e84  jal         func_30BA10
    ctx->pc = 0x2F35C8u;
    SET_GPR_U32(ctx, 31, 0x2F35D0u);
    ctx->pc = 0x2F35CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F35C8u;
    // 0x2f35cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA10u, 0x2F35C8u, 0x2F35D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F35D0u;
label_2f35d0:
    // 0x2f35d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f35d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f35d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f35d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f35d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F35D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F35DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F35D8u;
        // 0x2f35dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F35D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F35E0u;
}

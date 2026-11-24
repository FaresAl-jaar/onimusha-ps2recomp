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

// Function: sub_002A9070
// Address: 0x2a9070 - 0x2a90b0
void sub_002A9070_0x2a9070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9070_0x2a9070");
#endif

    switch (ctx->pc) {
        case 0x2a90a4u: goto label_2a90a4;
        default: break;
    }

    ctx->pc = 0x2a9070u;

    // 0x2a9070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9074: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a9074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9078: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a9078u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a907c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a907cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a9080: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a9080u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9084: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a9084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a9088: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a9088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a908c: 0x24060088  addiu       $a2, $zero, 0x88
    ctx->pc = 0x2a908cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x2a9090: 0x34456544  ori         $a1, $v0, 0x6544
    ctx->pc = 0x2a9090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25924);
    // 0x2a9094: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a9094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9098: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a9098u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a909c: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A909Cu;
    SET_GPR_U32(ctx, 31, 0x2A90A4u);
    ctx->pc = 0x2A90A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A909Cu;
    // 0x2a90a0: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A909Cu, 0x2A90A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A90A4u;
label_2a90a4:
    // 0x2a90a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a90a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a90a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A90A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90A8u;
        // 0x2a90ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A90A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A90B0u;
}

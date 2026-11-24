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

// Function: sub_0020EB30
// Address: 0x20eb30 - 0x20eb84
void sub_0020EB30_0x20eb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EB30_0x20eb30");
#endif

    switch (ctx->pc) {
        case 0x20eb50u: goto label_20eb50;
        case 0x20eb70u: goto label_20eb70;
        default: break;
    }

    ctx->pc = 0x20eb30u;

    // 0x20eb30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20eb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20eb34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20eb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20eb38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20eb38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb3c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x20eb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20eb40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20eb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20eb44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20eb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20eb48: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20EB48u;
    SET_GPR_U32(ctx, 31, 0x20EB50u);
    ctx->pc = 0x20EB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB48u;
    // 0x20eb4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20EB48u, 0x20EB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB50u;
label_20eb50:
    // 0x20eb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20eb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb54: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20eb54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20eb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20eb5c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x20eb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20eb60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EB60u;
    {
        const bool branch_taken_0x20eb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB60u;
        // 0x20eb64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb60) {
            ctx->pc = 0x20EB70u;
            goto label_20eb70;
        }
    }
    ctx->pc = 0x20EB68u;
    // 0x20eb68: 0xc0888d6  jal         func_222358
    ctx->pc = 0x20EB68u;
    SET_GPR_U32(ctx, 31, 0x20EB70u);
    ctx->pc = 0x222358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222358u, 0x20EB68u, 0x20EB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB70u;
label_20eb70:
    // 0x20eb70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20eb70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20eb74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20eb74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20eb78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20eb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20eb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x20EB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB7Cu;
        // 0x20eb80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EB84u;
}

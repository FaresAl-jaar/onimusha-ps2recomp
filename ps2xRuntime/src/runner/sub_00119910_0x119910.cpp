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

// Function: sub_00119910
// Address: 0x119910 - 0x11995c
void sub_00119910_0x119910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119910_0x119910");
#endif

    switch (ctx->pc) {
        case 0x119928u: goto label_119928;
        case 0x119934u: goto label_119934;
        case 0x119944u: goto label_119944;
        default: break;
    }

    ctx->pc = 0x119910u;

    // 0x119910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x119914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119918: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11991c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11991cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119920: 0xc046028  jal         func_1180A0
    ctx->pc = 0x119920u;
    SET_GPR_U32(ctx, 31, 0x119928u);
    ctx->pc = 0x119924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119920u;
    // 0x119924: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x119920u, 0x119928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119928u;
label_119928:
    // 0x119928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11992c: 0xc046628  jal         func_1198A0
    ctx->pc = 0x11992Cu;
    SET_GPR_U32(ctx, 31, 0x119934u);
    ctx->pc = 0x119930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11992Cu;
    // 0x119930: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1198A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1198A0u, 0x11992Cu, 0x119934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119934u;
label_119934:
    // 0x119934: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x119934u;
    {
        const bool branch_taken_0x119934 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x119938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119934u;
        // 0x119938: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119934) {
            ctx->pc = 0x119944u;
            goto label_119944;
        }
    }
    ctx->pc = 0x11993Cu;
    // 0x11993c: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x11993Cu;
    SET_GPR_U32(ctx, 31, 0x119944u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x11993Cu, 0x119944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119944u;
label_119944:
    // 0x119944: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x119944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119948: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11994c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11994cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119950: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119954: 0x3e00008  jr          $ra
    ctx->pc = 0x119954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119954u;
        // 0x119958: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11995Cu;
}

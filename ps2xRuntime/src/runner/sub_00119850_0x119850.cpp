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

// Function: sub_00119850
// Address: 0x119850 - 0x11989c
void sub_00119850_0x119850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119850_0x119850");
#endif

    switch (ctx->pc) {
        case 0x119868u: goto label_119868;
        case 0x119874u: goto label_119874;
        case 0x119884u: goto label_119884;
        default: break;
    }

    ctx->pc = 0x119850u;

    // 0x119850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x119854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119858: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11985c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11985cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119860: 0xc046028  jal         func_1180A0
    ctx->pc = 0x119860u;
    SET_GPR_U32(ctx, 31, 0x119868u);
    ctx->pc = 0x119864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119860u;
    // 0x119864: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x119860u, 0x119868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119868u;
label_119868:
    // 0x119868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11986c: 0xc046602  jal         func_119808
    ctx->pc = 0x11986Cu;
    SET_GPR_U32(ctx, 31, 0x119874u);
    ctx->pc = 0x119870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11986Cu;
    // 0x119870: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119808u, 0x11986Cu, 0x119874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119874u;
label_119874:
    // 0x119874: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x119874u;
    {
        const bool branch_taken_0x119874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x119878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119874u;
        // 0x119878: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119874) {
            ctx->pc = 0x119884u;
            goto label_119884;
        }
    }
    ctx->pc = 0x11987Cu;
    // 0x11987c: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x11987Cu;
    SET_GPR_U32(ctx, 31, 0x119884u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x11987Cu, 0x119884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119884u;
label_119884:
    // 0x119884: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x119884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119888: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11988c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11988cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119894: 0x3e00008  jr          $ra
    ctx->pc = 0x119894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119894u;
        // 0x119898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11989Cu;
}

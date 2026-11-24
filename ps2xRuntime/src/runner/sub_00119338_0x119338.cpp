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

// Function: sub_00119338
// Address: 0x119338 - 0x119380
void sub_00119338_0x119338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119338_0x119338");
#endif

    switch (ctx->pc) {
        case 0x119350u: goto label_119350;
        case 0x119358u: goto label_119358;
        case 0x119368u: goto label_119368;
        default: break;
    }

    ctx->pc = 0x119338u;

    // 0x119338: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11933c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11933cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x119344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119348: 0xc046028  jal         func_1180A0
    ctx->pc = 0x119348u;
    SET_GPR_U32(ctx, 31, 0x119350u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x119348u, 0x119350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119350u;
label_119350:
    // 0x119350: 0xc0464b2  jal         func_1192C8
    ctx->pc = 0x119350u;
    SET_GPR_U32(ctx, 31, 0x119358u);
    ctx->pc = 0x119354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119350u;
    // 0x119354: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1192C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1192C8u, 0x119350u, 0x119358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119358u;
label_119358:
    // 0x119358: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119358u;
    {
        const bool branch_taken_0x119358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119358u;
        // 0x11935c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119358) {
            ctx->pc = 0x119368u;
            goto label_119368;
        }
    }
    ctx->pc = 0x119360u;
    // 0x119360: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x119360u;
    SET_GPR_U32(ctx, 31, 0x119368u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x119360u, 0x119368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119368u;
label_119368:
    // 0x119368: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x119368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11936c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11936cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119370: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119378: 0x3e00008  jr          $ra
    ctx->pc = 0x119378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119378u;
        // 0x11937c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119380u;
}

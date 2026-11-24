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

// Function: sub_001196E8
// Address: 0x1196e8 - 0x119734
void sub_001196E8_0x1196e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001196E8_0x1196e8");
#endif

    switch (ctx->pc) {
        case 0x119700u: goto label_119700;
        case 0x11970cu: goto label_11970c;
        case 0x11971cu: goto label_11971c;
        default: break;
    }

    ctx->pc = 0x1196e8u;

    // 0x1196e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1196e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1196ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1196ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1196f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1196f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1196f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1196f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1196f8: 0xc046028  jal         func_1180A0
    ctx->pc = 0x1196F8u;
    SET_GPR_U32(ctx, 31, 0x119700u);
    ctx->pc = 0x1196FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1196F8u;
    // 0x1196fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x1196F8u, 0x119700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119700u;
label_119700:
    // 0x119700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119704: 0xc046588  jal         func_119620
    ctx->pc = 0x119704u;
    SET_GPR_U32(ctx, 31, 0x11970Cu);
    ctx->pc = 0x119708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119704u;
    // 0x119708: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119620u, 0x119704u, 0x11970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11970Cu;
label_11970c:
    // 0x11970c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11970Cu;
    {
        const bool branch_taken_0x11970c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x119710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11970Cu;
        // 0x119710: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11970c) {
            ctx->pc = 0x11971Cu;
            goto label_11971c;
        }
    }
    ctx->pc = 0x119714u;
    // 0x119714: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x119714u;
    SET_GPR_U32(ctx, 31, 0x11971Cu);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x119714u, 0x11971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11971Cu;
label_11971c:
    // 0x11971c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11971cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119724: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11972c: 0x3e00008  jr          $ra
    ctx->pc = 0x11972Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11972Cu;
        // 0x119730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11972Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119734u;
}

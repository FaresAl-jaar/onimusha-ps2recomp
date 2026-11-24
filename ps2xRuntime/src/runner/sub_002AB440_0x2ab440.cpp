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

// Function: sub_002AB440
// Address: 0x2ab440 - 0x2ab480
void sub_002AB440_0x2ab440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB440_0x2ab440");
#endif

    switch (ctx->pc) {
        case 0x2ab474u: goto label_2ab474;
        default: break;
    }

    ctx->pc = 0x2ab440u;

    // 0x2ab440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab444: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ab444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab448: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2ab448u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab44c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab450: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2ab450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab454: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2ab454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2ab458: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ab458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab45c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x2ab45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2ab460: 0x34453d94  ori         $a1, $v0, 0x3D94
    ctx->pc = 0x2ab460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15764);
    // 0x2ab464: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2ab464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab468: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ab468u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab46c: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2AB46Cu;
    SET_GPR_U32(ctx, 31, 0x2AB474u);
    ctx->pc = 0x2AB470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB46Cu;
    // 0x2ab470: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2AB46Cu, 0x2AB474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB474u;
label_2ab474:
    // 0x2ab474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab478: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB478u;
        // 0x2ab47c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB480u;
}

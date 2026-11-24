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

// Function: sub_002A8440
// Address: 0x2a8440 - 0x2a8484
void sub_002A8440_0x2a8440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8440_0x2a8440");
#endif

    switch (ctx->pc) {
        case 0x2a8478u: goto label_2a8478;
        default: break;
    }

    ctx->pc = 0x2a8440u;

    // 0x2a8440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a8444: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a8444u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a8448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a844c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a844cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8450: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x2a8450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x2a8454: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a8454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8458: 0xffa90008  sd          $t1, 0x8($sp)
    ctx->pc = 0x2a8458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 9));
    // 0x2a845c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a845cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a8460: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a8460u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8464: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8468: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x2a8468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2a846c: 0x34451c38  ori         $a1, $v0, 0x1C38
    ctx->pc = 0x2a846cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7224);
    // 0x2a8470: 0xc0e187c  jal         func_3861F0
    ctx->pc = 0x2A8470u;
    SET_GPR_U32(ctx, 31, 0x2A8478u);
    ctx->pc = 0x2A8474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8470u;
    // 0x2a8474: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3861F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3861F0u, 0x2A8470u, 0x2A8478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8478u;
label_2a8478:
    // 0x2a8478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a847c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A847Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A847Cu;
        // 0x2a8480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A847Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8484u;
}

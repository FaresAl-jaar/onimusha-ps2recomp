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

// Function: sub_0022F558
// Address: 0x22f558 - 0x22f5a4
void sub_0022F558_0x22f558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F558_0x22f558");
#endif

    switch (ctx->pc) {
        case 0x22f598u: goto label_22f598;
        default: break;
    }

    ctx->pc = 0x22f558u;

    // 0x22f558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22f558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22f55c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x22f55cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f560: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x22f560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22f564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f568: 0x3c0a000f  lui         $t2, 0xF
    ctx->pc = 0x22f568u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15 << 16));
    // 0x22f56c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x22f56cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f570: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x22f570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x22f574: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x22f574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f578: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x22f578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x22f57c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f57cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f580: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f584: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x22f584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f588: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x22f588u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x22f58c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22f58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22f590: 0xc08be04  jal         func_22F810
    ctx->pc = 0x22F590u;
    SET_GPR_U32(ctx, 31, 0x22F598u);
    ctx->pc = 0x22F594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F590u;
    // 0x22f594: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F810u, 0x22F590u, 0x22F598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F598u;
label_22f598:
    // 0x22f598: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22f598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f59c: 0x3e00008  jr          $ra
    ctx->pc = 0x22F59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F59Cu;
        // 0x22f5a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F5A4u;
}

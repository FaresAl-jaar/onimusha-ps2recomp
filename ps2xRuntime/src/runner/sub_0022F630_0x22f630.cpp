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

// Function: sub_0022F630
// Address: 0x22f630 - 0x22f66c
void sub_0022F630_0x22f630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F630_0x22f630");
#endif

    switch (ctx->pc) {
        case 0x22f660u: goto label_22f660;
        default: break;
    }

    ctx->pc = 0x22f630u;

    // 0x22f630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22f630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22f634: 0x3c0a000f  lui         $t2, 0xF
    ctx->pc = 0x22f634u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15 << 16));
    // 0x22f638: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x22f638u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f63c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f63cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f640: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x22f640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x22f644: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f644u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f648: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x22f648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x22f64c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f64cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f650: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x22f650u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x22f654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22f654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22f658: 0xc08be04  jal         func_22F810
    ctx->pc = 0x22F658u;
    SET_GPR_U32(ctx, 31, 0x22F660u);
    ctx->pc = 0x22F65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F658u;
    // 0x22f65c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F810u, 0x22F658u, 0x22F660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F660u;
label_22f660:
    // 0x22f660: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22f660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f664: 0x3e00008  jr          $ra
    ctx->pc = 0x22F664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F664u;
        // 0x22f668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F66Cu;
}

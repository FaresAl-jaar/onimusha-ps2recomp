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

// Function: sub_002A7750
// Address: 0x2a7750 - 0x2a778c
void sub_002A7750_0x2a7750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7750_0x2a7750");
#endif

    switch (ctx->pc) {
        case 0x2a7780u: goto label_2a7780;
        default: break;
    }

    ctx->pc = 0x2a7750u;

    // 0x2a7750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a7754: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a7754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7758: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a7758u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a775c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a775cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7760: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a7760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7764: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7768: 0x3405e128  ori         $a1, $zero, 0xE128
    ctx->pc = 0x2a7768u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57640);
    // 0x2a776c: 0x240601d8  addiu       $a2, $zero, 0x1D8
    ctx->pc = 0x2a776cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
    // 0x2a7770: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a7770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7774: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7774u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7778: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A7778u;
    SET_GPR_U32(ctx, 31, 0x2A7780u);
    ctx->pc = 0x2A777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7778u;
    // 0x2a777c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A7778u, 0x2A7780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7780u;
label_2a7780:
    // 0x2a7780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7784: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7784u;
        // 0x2a7788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A778Cu;
}

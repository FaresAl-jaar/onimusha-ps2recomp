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

// Function: sub_002A6850
// Address: 0x2a6850 - 0x2a688c
void sub_002A6850_0x2a6850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6850_0x2a6850");
#endif

    switch (ctx->pc) {
        case 0x2a6880u: goto label_2a6880;
        default: break;
    }

    ctx->pc = 0x2a6850u;

    // 0x2a6850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a6854: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a6854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6858: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a6858u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a685c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a685cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6860: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a6864: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a6864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6868: 0x3405a3e8  ori         $a1, $zero, 0xA3E8
    ctx->pc = 0x2a6868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41960);
    // 0x2a686c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2a686cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2a6870: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a6870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6874: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a6874u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6878: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A6878u;
    SET_GPR_U32(ctx, 31, 0x2A6880u);
    ctx->pc = 0x2A687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6878u;
    // 0x2a687c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A6878u, 0x2A6880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6880u;
label_2a6880:
    // 0x2a6880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6884: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6884u;
        // 0x2a6888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A688Cu;
}

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

// Function: sub_002A8520
// Address: 0x2a8520 - 0x2a8560
void sub_002A8520_0x2a8520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8520_0x2a8520");
#endif

    switch (ctx->pc) {
        case 0x2a8554u: goto label_2a8554;
        default: break;
    }

    ctx->pc = 0x2a8520u;

    // 0x2a8520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a8524: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a8524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8528: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a8528u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a852c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a852cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a8530: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a8530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8534: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a8534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a8538: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a853c: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2a853cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2a8540: 0x34451e6c  ori         $a1, $v0, 0x1E6C
    ctx->pc = 0x2a8540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7788);
    // 0x2a8544: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a8544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8548: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8548u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a854c: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A854Cu;
    SET_GPR_U32(ctx, 31, 0x2A8554u);
    ctx->pc = 0x2A8550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A854Cu;
    // 0x2a8550: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A854Cu, 0x2A8554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8554u;
label_2a8554:
    // 0x2a8554: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8558: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8558u;
        // 0x2a855c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8560u;
}

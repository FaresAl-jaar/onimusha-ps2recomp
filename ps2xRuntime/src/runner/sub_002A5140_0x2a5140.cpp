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

// Function: sub_002A5140
// Address: 0x2a5140 - 0x2a5180
void sub_002A5140_0x2a5140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5140_0x2a5140");
#endif

    switch (ctx->pc) {
        case 0x2a5174u: goto label_2a5174;
        default: break;
    }

    ctx->pc = 0x2a5140u;

    // 0x2a5140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5144: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a5144u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a514c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a514cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5150: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2a5150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2a5154: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a5154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5158: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a5158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a515c: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a515cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a5160: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a5160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5164: 0x2405499c  addiu       $a1, $zero, 0x499C
    ctx->pc = 0x2a5164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18844));
    // 0x2a5168: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x2a5168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2a516c: 0xc0f8304  jal         func_3E0C10
    ctx->pc = 0x2A516Cu;
    SET_GPR_U32(ctx, 31, 0x2A5174u);
    ctx->pc = 0x2A5170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A516Cu;
    // 0x2a5170: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0C10u, 0x2A516Cu, 0x2A5174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5174u;
label_2a5174:
    // 0x2a5174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a5174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5178: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5178u;
        // 0x2a517c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5180u;
}

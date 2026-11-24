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

// Function: sub_00220540
// Address: 0x220540 - 0x22057c
void sub_00220540_0x220540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220540_0x220540");
#endif

    switch (ctx->pc) {
        case 0x220554u: goto label_220554;
        case 0x220568u: goto label_220568;
        default: break;
    }

    ctx->pc = 0x220540u;

    // 0x220540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220548: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x220548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22054c: 0xc088160  jal         func_220580
    ctx->pc = 0x22054Cu;
    SET_GPR_U32(ctx, 31, 0x220554u);
    ctx->pc = 0x220550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22054Cu;
    // 0x220550: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220580u, 0x22054Cu, 0x220554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220554u;
label_220554:
    // 0x220554: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x220554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x220558: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x220558u;
    {
        const bool branch_taken_0x220558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220558u;
        // 0x22055c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220558) {
            ctx->pc = 0x22056Cu;
            goto label_22056c;
        }
    }
    ctx->pc = 0x220560u;
    // 0x220560: 0xc0848e0  jal         func_212380
    ctx->pc = 0x220560u;
    SET_GPR_U32(ctx, 31, 0x220568u);
    ctx->pc = 0x220564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220560u;
    // 0x220564: 0x34a50222  ori         $a1, $a1, 0x222 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)546);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x220560u, 0x220568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220568u;
label_220568:
    // 0x220568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x220568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22056c:
    // 0x22056c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22056cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220570: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x220570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220574: 0x3e00008  jr          $ra
    ctx->pc = 0x220574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220574u;
        // 0x220578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22057Cu;
}

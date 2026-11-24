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

// Function: sub_00210530
// Address: 0x210530 - 0x210578
void sub_00210530_0x210530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210530_0x210530");
#endif

    switch (ctx->pc) {
        case 0x210548u: goto label_210548;
        case 0x21055cu: goto label_21055c;
        default: break;
    }

    ctx->pc = 0x210530u;

    // 0x210530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x210530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x210534: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x210534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x210538: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21053c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21053cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x210540: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x210540u;
    SET_GPR_U32(ctx, 31, 0x210548u);
    ctx->pc = 0x210544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210540u;
    // 0x210544: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x210540u, 0x210548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210548u;
label_210548:
    // 0x210548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21054c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21054Cu;
    {
        const bool branch_taken_0x21054c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21054Cu;
        // 0x210550: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21054c) {
            ctx->pc = 0x210564u;
            goto label_210564;
        }
    }
    ctx->pc = 0x210554u;
    // 0x210554: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x210554u;
    SET_GPR_U32(ctx, 31, 0x21055Cu);
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x210554u, 0x21055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21055Cu;
label_21055c:
    // 0x21055c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21055Cu;
    {
        const bool branch_taken_0x21055c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21055Cu;
        // 0x210560: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21055c) {
            ctx->pc = 0x21056Cu;
            goto label_21056c;
        }
    }
    ctx->pc = 0x210564u;
label_210564:
    // 0x210564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21056c:
    // 0x21056c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21056cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210570: 0x3e00008  jr          $ra
    ctx->pc = 0x210570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210570u;
        // 0x210574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210578u;
}

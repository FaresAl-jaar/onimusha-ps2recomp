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

// Function: sub_00277420
// Address: 0x277420 - 0x277488
void sub_00277420_0x277420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277420_0x277420");
#endif

    switch (ctx->pc) {
        case 0x277440u: goto label_277440;
        case 0x277450u: goto label_277450;
        case 0x277470u: goto label_277470;
        default: break;
    }

    ctx->pc = 0x277420u;

    // 0x277420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x277424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x277424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x277428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x277428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27742c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27742cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277430: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x277430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x277434: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x277434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x277438: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x277438u;
    SET_GPR_U32(ctx, 31, 0x277440u);
    ctx->pc = 0x27743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277438u;
    // 0x27743c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x277438u, 0x277440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277440u;
label_277440:
    // 0x277440: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x277440u;
    {
        const bool branch_taken_0x277440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277440u;
        // 0x277444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277440) {
            ctx->pc = 0x277458u;
            goto label_277458;
        }
    }
    ctx->pc = 0x277448u;
    // 0x277448: 0xc09daa8  jal         func_276AA0
    ctx->pc = 0x277448u;
    SET_GPR_U32(ctx, 31, 0x277450u);
    ctx->pc = 0x276AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276AA0u, 0x277448u, 0x277450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277450u;
label_277450:
    // 0x277450: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x277450u;
    {
        const bool branch_taken_0x277450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277450) {
            ctx->pc = 0x277478u;
            goto label_277478;
        }
    }
    ctx->pc = 0x277458u;
label_277458:
    // 0x277458: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x277458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x27745c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x27745cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x277460: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x277460u;
    {
        const bool branch_taken_0x277460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x277464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277460u;
        // 0x277464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277460) {
            ctx->pc = 0x277478u;
            goto label_277478;
        }
    }
    ctx->pc = 0x277468u;
    // 0x277468: 0xc09daa8  jal         func_276AA0
    ctx->pc = 0x277468u;
    SET_GPR_U32(ctx, 31, 0x277470u);
    ctx->pc = 0x276AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276AA0u, 0x277468u, 0x277470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277470u;
label_277470:
    // 0x277470: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x277470u;
    {
        const bool branch_taken_0x277470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277470) {
            ctx->pc = 0x277478u;
            goto label_277478;
        }
    }
    ctx->pc = 0x277478u;
label_277478:
    // 0x277478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x277478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27747c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27747cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277480: 0x3e00008  jr          $ra
    ctx->pc = 0x277480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277480u;
        // 0x277484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277488u;
}

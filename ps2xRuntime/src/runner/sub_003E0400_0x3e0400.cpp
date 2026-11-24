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

// Function: sub_003E0400
// Address: 0x3e0400 - 0x3e045c
void sub_003E0400_0x3e0400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0400_0x3e0400");
#endif

    switch (ctx->pc) {
        case 0x3e0418u: goto label_3e0418;
        case 0x3e0428u: goto label_3e0428;
        default: break;
    }

    ctx->pc = 0x3e0400u;

    // 0x3e0400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e0400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e0404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e0404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e0408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e0408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e040c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e040cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e0410: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e0410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e0414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e0418:
    // 0x3e0418: 0x8e052b70  lw          $a1, 0x2B70($s0)
    ctx->pc = 0x3e0418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11120)));
    // 0x3e041c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3e041cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3e0420: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3E0420u;
    SET_GPR_U32(ctx, 31, 0x3E0428u);
    ctx->pc = 0x3E0424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0420u;
    // 0x3e0424: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3E0420u, 0x3E0428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0428u;
label_3e0428:
    // 0x3e0428: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E0428u;
    {
        const bool branch_taken_0x3e0428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0428u;
        // 0x3e042c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0428) {
            ctx->pc = 0x3E0438u;
            goto label_3e0438;
        }
    }
    ctx->pc = 0x3E0430u;
    // 0x3e0430: 0xa0430780  sb          $v1, 0x780($v0)
    ctx->pc = 0x3e0430u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e0434: 0x0  nop
    ctx->pc = 0x3e0434u;
    // NOP
label_3e0438:
    // 0x3e0438: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3e0438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3e043c: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x3e043cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3e0440: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E0440u;
    {
        const bool branch_taken_0x3e0440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0440u;
        // 0x3e0444: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0440) {
            ctx->pc = 0x3E0418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0418;
        }
    }
    ctx->pc = 0x3E0448u;
    // 0x3e0448: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e0448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e044c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e044cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e0450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e0450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e0454: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0454u;
        // 0x3e0458: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E045Cu;
}

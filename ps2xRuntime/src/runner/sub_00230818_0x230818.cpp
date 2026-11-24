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

// Function: sub_00230818
// Address: 0x230818 - 0x230878
void sub_00230818_0x230818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230818_0x230818");
#endif

    switch (ctx->pc) {
        case 0x230840u: goto label_230840;
        case 0x230854u: goto label_230854;
        default: break;
    }

    ctx->pc = 0x230818u;

    // 0x230818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23081c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x23081cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x230820: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x230820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x230824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230828: 0x2450c478  addiu       $s0, $v0, -0x3B88
    ctx->pc = 0x230828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952056));
    // 0x23082c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23082cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x230830: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x230830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x230834: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x230834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x230838: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x230838u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23083c: 0x0  nop
    ctx->pc = 0x23083cu;
    // NOP
label_230840:
    // 0x230840: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x230840u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x230844: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x230844u;
    {
        const bool branch_taken_0x230844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x230844) {
            ctx->pc = 0x230848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230844u;
            // 0x230848: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230858u;
            goto label_230858;
        }
    }
    ctx->pc = 0x23084Cu;
    // 0x23084c: 0xc08c1ce  jal         func_230738
    ctx->pc = 0x23084Cu;
    SET_GPR_U32(ctx, 31, 0x230854u);
    ctx->pc = 0x230850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23084Cu;
    // 0x230850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230738u, 0x23084Cu, 0x230854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230854u;
label_230854:
    // 0x230854: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x230854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_230858:
    // 0x230858: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x230858u;
    {
        const bool branch_taken_0x230858 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x23085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230858u;
        // 0x23085c: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230858) {
            ctx->pc = 0x230840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230840;
        }
    }
    ctx->pc = 0x230860u;
    // 0x230860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230864: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230868: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x230868u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23086c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23086cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230870: 0x3e00008  jr          $ra
    ctx->pc = 0x230870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230870u;
        // 0x230874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230878u;
}

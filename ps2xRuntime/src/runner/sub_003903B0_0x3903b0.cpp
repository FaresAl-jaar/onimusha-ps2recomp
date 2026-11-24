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

// Function: sub_003903B0
// Address: 0x3903b0 - 0x390408
void sub_003903B0_0x3903b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003903B0_0x3903b0");
#endif

    switch (ctx->pc) {
        case 0x3903d8u: goto label_3903d8;
        case 0x3903e4u: goto label_3903e4;
        default: break;
    }

    ctx->pc = 0x3903b0u;

    // 0x3903b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3903b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3903b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3903b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3903b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3903b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3903bc: 0x8f838c48  lw          $v1, -0x73B8($gp)
    ctx->pc = 0x3903bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x3903c0: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3903C0u;
    {
        const bool branch_taken_0x3903c0 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x3903c0) {
            ctx->pc = 0x3903F8u;
            goto label_3903f8;
        }
    }
    ctx->pc = 0x3903C8u;
    // 0x3903c8: 0x8f838c40  lw          $v1, -0x73C0($gp)
    ctx->pc = 0x3903c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x3903cc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3903CCu;
    {
        const bool branch_taken_0x3903cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3903cc) {
            ctx->pc = 0x3903F8u;
            goto label_3903f8;
        }
    }
    ctx->pc = 0x3903D4u;
    // 0x3903d4: 0x0  nop
    ctx->pc = 0x3903d4u;
    // NOP
label_3903d8:
    // 0x3903d8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3903d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3903dc: 0xc0c0860  jal         func_302180
    ctx->pc = 0x3903DCu;
    SET_GPR_U32(ctx, 31, 0x3903E4u);
    ctx->pc = 0x3903E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3903DCu;
    // 0x3903e0: 0x8c700564  lw          $s0, 0x564($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302180u, 0x3903DCu, 0x3903E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3903E4u;
label_3903e4:
    // 0x3903e4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3903e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3903e8: 0x0  nop
    ctx->pc = 0x3903e8u;
    // NOP
    // 0x3903ec: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3903ECu;
    {
        const bool branch_taken_0x3903ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3903ec) {
            ctx->pc = 0x3903D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3903d8;
        }
    }
    ctx->pc = 0x3903F4u;
    // 0x3903f4: 0x0  nop
    ctx->pc = 0x3903f4u;
    // NOP
label_3903f8:
    // 0x3903f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3903f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3903fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3903fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x390400: 0x3e00008  jr          $ra
    ctx->pc = 0x390400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390400u;
        // 0x390404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390408u;
}

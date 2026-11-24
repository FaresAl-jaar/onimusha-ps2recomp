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

// Function: sub_003EDAD0
// Address: 0x3edad0 - 0x3edb28
void sub_003EDAD0_0x3edad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDAD0_0x3edad0");
#endif

    switch (ctx->pc) {
        case 0x3edaf8u: goto label_3edaf8;
        case 0x3edb10u: goto label_3edb10;
        default: break;
    }

    ctx->pc = 0x3edad0u;

    // 0x3edad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3edad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3edad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3edad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3edad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3edad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3edadc: 0x8f838d1c  lw          $v1, -0x72E4($gp)
    ctx->pc = 0x3edadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937884)));
    // 0x3edae0: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3EDAE0u;
    {
        const bool branch_taken_0x3edae0 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x3edae0) {
            ctx->pc = 0x3EDB18u;
            goto label_3edb18;
        }
    }
    ctx->pc = 0x3EDAE8u;
    // 0x3edae8: 0x8f848d14  lw          $a0, -0x72EC($gp)
    ctx->pc = 0x3edae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937876)));
    // 0x3edaec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3EDAECu;
    {
        const bool branch_taken_0x3edaec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3edaec) {
            ctx->pc = 0x3EDB18u;
            goto label_3edb18;
        }
    }
    ctx->pc = 0x3EDAF4u;
    // 0x3edaf4: 0x0  nop
    ctx->pc = 0x3edaf4u;
    // NOP
label_3edaf8:
    // 0x3edaf8: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x3edaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x3edafc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3edafcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3edb00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EDB00u;
    {
        const bool branch_taken_0x3edb00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB00u;
        // 0x3edb04: 0x8c902b24  lw          $s0, 0x2B24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edb00) {
            ctx->pc = 0x3EDB10u;
            goto label_3edb10;
        }
    }
    ctx->pc = 0x3EDB08u;
    // 0x3edb08: 0xc0fb7d4  jal         func_3EDF50
    ctx->pc = 0x3EDB08u;
    SET_GPR_U32(ctx, 31, 0x3EDB10u);
    ctx->pc = 0x3EDF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDF50u, 0x3EDB08u, 0x3EDB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDB10u;
label_3edb10:
    // 0x3edb10: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3EDB10u;
    {
        const bool branch_taken_0x3edb10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EDB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB10u;
        // 0x3edb14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edb10) {
            ctx->pc = 0x3EDAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3edaf8;
        }
    }
    ctx->pc = 0x3EDB18u;
label_3edb18:
    // 0x3edb18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3edb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3edb1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3edb1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3edb20: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB20u;
        // 0x3edb24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDB28u;
}

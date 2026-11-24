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

// Function: sub_0038DA10
// Address: 0x38da10 - 0x38dac0
void sub_0038DA10_0x38da10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DA10_0x38da10");
#endif

    switch (ctx->pc) {
        case 0x38da50u: goto label_38da50;
        case 0x38da60u: goto label_38da60;
        case 0x38da7cu: goto label_38da7c;
        default: break;
    }

    ctx->pc = 0x38da10u;

    // 0x38da10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38da10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38da14: 0x24021e61  addiu       $v0, $zero, 0x1E61
    ctx->pc = 0x38da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7777));
    // 0x38da18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38da18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x38da1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38da1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38da20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38da20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38da24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38da24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38da28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38da28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38da2c: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38DA2Cu;
    {
        const bool branch_taken_0x38da2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x38DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA2Cu;
        // 0x38da30: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38da2c) {
            ctx->pc = 0x38DA40u;
            goto label_38da40;
        }
    }
    ctx->pc = 0x38DA34u;
    // 0x38da34: 0x34029246  ori         $v0, $zero, 0x9246
    ctx->pc = 0x38da34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37446);
    // 0x38da38: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38DA38u;
    {
        const bool branch_taken_0x38da38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x38da38) {
            ctx->pc = 0x38DA58u;
            goto label_38da58;
        }
    }
    ctx->pc = 0x38DA40u;
label_38da40:
    // 0x38da40: 0x8e450184  lw          $a1, 0x184($s2)
    ctx->pc = 0x38da40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x38da44: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x38da44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x38da48: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x38DA48u;
    SET_GPR_U32(ctx, 31, 0x38DA50u);
    ctx->pc = 0x38DA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DA48u;
    // 0x38da4c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x38DA48u, 0x38DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DA50u;
label_38da50:
    // 0x38da50: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x38DA50u;
    {
        const bool branch_taken_0x38da50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38da50) {
            ctx->pc = 0x38DAA8u;
            goto label_38daa8;
        }
    }
    ctx->pc = 0x38DA58u;
label_38da58:
    // 0x38da58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x38da58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38da5c: 0x0  nop
    ctx->pc = 0x38da5cu;
    // NOP
label_38da60:
    // 0x38da60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x38da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38da64: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38DA64u;
    {
        const bool branch_taken_0x38da64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x38da64) {
            ctx->pc = 0x38DA90u;
            goto label_38da90;
        }
    }
    ctx->pc = 0x38DA6Cu;
    // 0x38da6c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x38da6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x38da70: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x38da70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x38da74: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x38DA74u;
    SET_GPR_U32(ctx, 31, 0x38DA7Cu);
    ctx->pc = 0x38DA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DA74u;
    // 0x38da78: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x38DA74u, 0x38DA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DA7Cu;
label_38da7c:
    // 0x38da7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38DA7Cu;
    {
        const bool branch_taken_0x38da7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38da7c) {
            ctx->pc = 0x38DA90u;
            goto label_38da90;
        }
    }
    ctx->pc = 0x38DA84u;
    // 0x38da84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38DA84u;
    {
        const bool branch_taken_0x38da84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38da84) {
            ctx->pc = 0x38DAA8u;
            goto label_38daa8;
        }
    }
    ctx->pc = 0x38DA8Cu;
    // 0x38da8c: 0x0  nop
    ctx->pc = 0x38da8cu;
    // NOP
label_38da90:
    // 0x38da90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x38da90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x38da94: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x38da94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x38da98: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x38DA98u;
    {
        const bool branch_taken_0x38da98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DA98u;
        // 0x38da9c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38da98) {
            ctx->pc = 0x38DA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38da60;
        }
    }
    ctx->pc = 0x38DAA0u;
    // 0x38daa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38daa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38daa4: 0x0  nop
    ctx->pc = 0x38daa4u;
    // NOP
label_38daa8:
    // 0x38daa8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38daa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38daac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38daacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38dab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38dab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38dab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38dab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38dab8: 0x3e00008  jr          $ra
    ctx->pc = 0x38DAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DAB8u;
        // 0x38dabc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DAC0u;
}

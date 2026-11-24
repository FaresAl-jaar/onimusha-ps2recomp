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

// Function: sub_0014ADC0
// Address: 0x14adc0 - 0x14ae74
void sub_0014ADC0_0x14adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ADC0_0x14adc0");
#endif

    switch (ctx->pc) {
        case 0x14ae18u: goto label_14ae18;
        case 0x14ae24u: goto label_14ae24;
        default: break;
    }

    ctx->pc = 0x14adc0u;

    // 0x14adc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14adc4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x14adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14adc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14adc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14adcc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x14adccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14add0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14add0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14add4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14add4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14add8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14add8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14addc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14addcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14ade0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14ade0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14ade4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14ade8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ade8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14adec: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x14adecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14adf0: 0x8c82027c  lw          $v0, 0x27C($a0)
    ctx->pc = 0x14adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 636)));
    // 0x14adf4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14adf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14adf8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x14adf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14adfc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x14ADFCu;
    {
        const bool branch_taken_0x14adfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ADFCu;
        // 0x14ae00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14adfc) {
            ctx->pc = 0x14AE50u;
            goto label_14ae50;
        }
    }
    ctx->pc = 0x14AE04u;
    // 0x14ae04: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14ae08: 0x51ac0  sll         $v1, $a1, 11
    ctx->pc = 0x14ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x14ae0c: 0x24428f40  addiu       $v0, $v0, -0x70C0
    ctx->pc = 0x14ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938432));
    // 0x14ae10: 0x2492027c  addiu       $s2, $a0, 0x27C
    ctx->pc = 0x14ae10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 636));
    // 0x14ae14: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x14ae14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14ae18:
    // 0x14ae18: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x14ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x14ae1c: 0xc049da8  jal         func_1276A0
    ctx->pc = 0x14AE1Cu;
    SET_GPR_U32(ctx, 31, 0x14AE24u);
    ctx->pc = 0x14AE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE1Cu;
    // 0x14ae20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1276A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1276A0u, 0x14AE1Cu, 0x14AE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE24u;
label_14ae24:
    // 0x14ae24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AE24u;
    {
        const bool branch_taken_0x14ae24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ae24) {
            ctx->pc = 0x14AE38u;
            goto label_14ae38;
        }
    }
    ctx->pc = 0x14AE2Cu;
    // 0x14ae2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14AE2Cu;
    {
        const bool branch_taken_0x14ae2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE2Cu;
        // 0x14ae30: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae2c) {
            ctx->pc = 0x14AE58u;
            goto label_14ae58;
        }
    }
    ctx->pc = 0x14AE34u;
    // 0x14ae34: 0x0  nop
    ctx->pc = 0x14ae34u;
    // NOP
label_14ae38:
    // 0x14ae38: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14ae3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14ae3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14ae40: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x14ae40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ae44: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14AE44u;
    {
        const bool branch_taken_0x14ae44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE44u;
        // 0x14ae48: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae44) {
            ctx->pc = 0x14AE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ae18;
        }
    }
    ctx->pc = 0x14AE4Cu;
    // 0x14ae4c: 0x0  nop
    ctx->pc = 0x14ae4cu;
    // NOP
label_14ae50:
    // 0x14ae50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14ae54: 0x0  nop
    ctx->pc = 0x14ae54u;
    // NOP
label_14ae58:
    // 0x14ae58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14ae58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ae5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14ae5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ae60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14ae60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ae64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14ae64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ae68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ae68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ae6c: 0x3e00008  jr          $ra
    ctx->pc = 0x14AE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE6Cu;
        // 0x14ae70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AE74u;
}

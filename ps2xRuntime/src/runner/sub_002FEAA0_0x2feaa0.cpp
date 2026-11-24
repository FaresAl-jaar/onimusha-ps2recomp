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

// Function: sub_002FEAA0
// Address: 0x2feaa0 - 0x2feb74
void sub_002FEAA0_0x2feaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEAA0_0x2feaa0");
#endif

    switch (ctx->pc) {
        case 0x2feac8u: goto label_2feac8;
        case 0x2fead4u: goto label_2fead4;
        case 0x2feae4u: goto label_2feae4;
        case 0x2feaf8u: goto label_2feaf8;
        case 0x2feb08u: goto label_2feb08;
        case 0x2feb20u: goto label_2feb20;
        case 0x2feb34u: goto label_2feb34;
        case 0x2feb54u: goto label_2feb54;
        default: break;
    }

    ctx->pc = 0x2feaa0u;

    // 0x2feaa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2feaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2feaa4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2feaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2feaa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2feaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2feaac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2feaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2feab0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2feab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2feab4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2feab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2feab8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2feab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feabc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2feabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feac0: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x2FEAC0u;
    SET_GPR_U32(ctx, 31, 0x2FEAC8u);
    ctx->pc = 0x2FEAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEAC0u;
    // 0x2feac4: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x2FEAC0u, 0x2FEAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEAC8u;
label_2feac8:
    // 0x2feac8: 0x8e050190  lw          $a1, 0x190($s0)
    ctx->pc = 0x2feac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x2feacc: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x2FEACCu;
    SET_GPR_U32(ctx, 31, 0x2FEAD4u);
    ctx->pc = 0x2FEAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEACCu;
    // 0x2fead0: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x2FEACCu, 0x2FEAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEAD4u;
label_2fead4:
    // 0x2fead4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2fead4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fead8: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x2fead8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2feadc: 0xc09d524  jal         func_275490
    ctx->pc = 0x2FEADCu;
    SET_GPR_U32(ctx, 31, 0x2FEAE4u);
    ctx->pc = 0x2FEAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEADCu;
    // 0x2feae0: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2FEADCu, 0x2FEAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEAE4u;
label_2feae4:
    // 0x2feae4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2feae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feae8: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FEAE8u;
    {
        const bool branch_taken_0x2feae8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEAE8u;
        // 0x2feaec: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feae8) {
            ctx->pc = 0x2FEB00u;
            goto label_2feb00;
        }
    }
    ctx->pc = 0x2FEAF0u;
    // 0x2feaf0: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2FEAF0u;
    SET_GPR_U32(ctx, 31, 0x2FEAF8u);
    ctx->pc = 0x2FEAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEAF0u;
    // 0x2feaf4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2FEAF0u, 0x2FEAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEAF8u;
label_2feaf8:
    // 0x2feaf8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2FEAF8u;
    {
        const bool branch_taken_0x2feaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2feaf8) {
            ctx->pc = 0x2FEB58u;
            goto label_2feb58;
        }
    }
    ctx->pc = 0x2FEB00u;
label_2feb00:
    // 0x2feb00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2feb00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb04: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2feb04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2feb08:
    // 0x2feb08: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x2feb08u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2feb0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2feb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2feb10: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FEB10u;
    {
        const bool branch_taken_0x2feb10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB10u;
        // 0x2feb14: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb10) {
            ctx->pc = 0x2FEB38u;
            goto label_2feb38;
        }
    }
    ctx->pc = 0x2FEB18u;
    // 0x2feb18: 0xc09d524  jal         func_275490
    ctx->pc = 0x2FEB18u;
    SET_GPR_U32(ctx, 31, 0x2FEB20u);
    ctx->pc = 0x2FEB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEB18u;
    // 0x2feb1c: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2FEB18u, 0x2FEB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEB20u;
label_2feb20:
    // 0x2feb20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FEB20u;
    {
        const bool branch_taken_0x2feb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB20u;
        // 0x2feb24: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb20) {
            ctx->pc = 0x2FEB38u;
            goto label_2feb38;
        }
    }
    ctx->pc = 0x2FEB28u;
    // 0x2feb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2feb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb2c: 0xc0bdb8c  jal         func_2F6E30
    ctx->pc = 0x2FEB2Cu;
    SET_GPR_U32(ctx, 31, 0x2FEB34u);
    ctx->pc = 0x2FEB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEB2Cu;
    // 0x2feb30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6E30u, 0x2FEB2Cu, 0x2FEB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEB34u;
label_2feb34:
    // 0x2feb34: 0x0  nop
    ctx->pc = 0x2feb34u;
    // NOP
label_2feb38:
    // 0x2feb38: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2feb38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2feb3c: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x2feb3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2feb40: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2FEB40u;
    {
        const bool branch_taken_0x2feb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB40u;
        // 0x2feb44: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb40) {
            ctx->pc = 0x2FEB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2feb08;
        }
    }
    ctx->pc = 0x2FEB48u;
    // 0x2feb48: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x2feb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2feb4c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2FEB4Cu;
    SET_GPR_U32(ctx, 31, 0x2FEB54u);
    ctx->pc = 0x2FEB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEB4Cu;
    // 0x2feb50: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2FEB4Cu, 0x2FEB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEB54u;
label_2feb54:
    // 0x2feb54: 0x0  nop
    ctx->pc = 0x2feb54u;
    // NOP
label_2feb58:
    // 0x2feb58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2feb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2feb5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2feb5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2feb60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2feb60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2feb64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2feb64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2feb68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2feb68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2feb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB6Cu;
        // 0x2feb70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEB74u;
}

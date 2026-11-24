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

// Function: sub_003BF6F0
// Address: 0x3bf6f0 - 0x3bf7c0
void sub_003BF6F0_0x3bf6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF6F0_0x3bf6f0");
#endif

    switch (ctx->pc) {
        case 0x3bf74cu: goto label_3bf74c;
        case 0x3bf77cu: goto label_3bf77c;
        case 0x3bf7a4u: goto label_3bf7a4;
        default: break;
    }

    ctx->pc = 0x3bf6f0u;

    // 0x3bf6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bf6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bf6f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bf6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bf6f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bf6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bf6fc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3bf6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3bf700: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x3BF700u;
    {
        const bool branch_taken_0x3bf700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF700u;
        // 0x3bf704: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf700) {
            ctx->pc = 0x3BF7B0u;
            goto label_3bf7b0;
        }
    }
    ctx->pc = 0x3BF708u;
    // 0x3bf708: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3bf708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3bf70c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3bf70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3bf710: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3bf710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3bf714: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3bf714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3bf718: 0x1c600025  bgtz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3BF718u;
    {
        const bool branch_taken_0x3bf718 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3bf718) {
            ctx->pc = 0x3BF7B0u;
            goto label_3bf7b0;
        }
    }
    ctx->pc = 0x3BF720u;
    // 0x3bf720: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3bf720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bf724: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x3bf724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x3bf728: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3BF728u;
    {
        const bool branch_taken_0x3bf728 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3BF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF728u;
        // 0x3bf72c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf728) {
            ctx->pc = 0x3BF758u;
            goto label_3bf758;
        }
    }
    ctx->pc = 0x3BF730u;
    // 0x3bf730: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3bf730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3bf734: 0x8c25cebc  lw          $a1, -0x3144($at)
    ctx->pc = 0x3bf734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x3bf738: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3bf738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3bf73c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3BF73Cu;
    {
        const bool branch_taken_0x3bf73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf73c) {
            ctx->pc = 0x3BF7B0u;
            goto label_3bf7b0;
        }
    }
    ctx->pc = 0x3BF744u;
    // 0x3bf744: 0xc0ef8d0  jal         func_3BE340
    ctx->pc = 0x3BF744u;
    SET_GPR_U32(ctx, 31, 0x3BF74Cu);
    ctx->pc = 0x3BE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE340u, 0x3BF744u, 0x3BF74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF74Cu;
label_3bf74c:
    // 0x3bf74c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3BF74Cu;
    {
        const bool branch_taken_0x3bf74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF74Cu;
        // 0x3bf750: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf74c) {
            ctx->pc = 0x3BF7B0u;
            goto label_3bf7b0;
        }
    }
    ctx->pc = 0x3BF754u;
    // 0x3bf754: 0x0  nop
    ctx->pc = 0x3bf754u;
    // NOP
label_3bf758:
    // 0x3bf758: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3bf758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3bf75c: 0x240408c7  addiu       $a0, $zero, 0x8C7
    ctx->pc = 0x3bf75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
    // 0x3bf760: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF760u;
    {
        const bool branch_taken_0x3bf760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BF764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF760u;
        // 0x3bf764: 0x30a700ff  andi        $a3, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf760) {
            ctx->pc = 0x3BF788u;
            goto label_3bf788;
        }
    }
    ctx->pc = 0x3BF768u;
    // 0x3bf768: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bf768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf76c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bf76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf770: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bf770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf774: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3BF774u;
    SET_GPR_U32(ctx, 31, 0x3BF77Cu);
    ctx->pc = 0x3BF778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF774u;
    // 0x3bf778: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3BF774u, 0x3BF77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF77Cu;
label_3bf77c:
    // 0x3bf77c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3BF77Cu;
    {
        const bool branch_taken_0x3bf77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf77c) {
            ctx->pc = 0x3BF7A8u;
            goto label_3bf7a8;
        }
    }
    ctx->pc = 0x3BF784u;
    // 0x3bf784: 0x0  nop
    ctx->pc = 0x3bf784u;
    // NOP
label_3bf788:
    // 0x3bf788: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x3bf788u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3bf78c: 0x24040c50  addiu       $a0, $zero, 0xC50
    ctx->pc = 0x3bf78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
    // 0x3bf790: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bf790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf794: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bf794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf798: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bf798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf79c: 0xc0d6dd8  jal         func_35B760
    ctx->pc = 0x3BF79Cu;
    SET_GPR_U32(ctx, 31, 0x3BF7A4u);
    ctx->pc = 0x3BF7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF79Cu;
    // 0x3bf7a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B760u, 0x3BF79Cu, 0x3BF7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF7A4u;
label_3bf7a4:
    // 0x3bf7a4: 0x0  nop
    ctx->pc = 0x3bf7a4u;
    // NOP
label_3bf7a8:
    // 0x3bf7a8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3bf7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3bf7ac: 0x0  nop
    ctx->pc = 0x3bf7acu;
    // NOP
label_3bf7b0:
    // 0x3bf7b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bf7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bf7b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bf7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF7B8u;
        // 0x3bf7bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF7C0u;
}

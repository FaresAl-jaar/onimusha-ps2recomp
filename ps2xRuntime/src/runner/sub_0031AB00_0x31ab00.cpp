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

// Function: sub_0031AB00
// Address: 0x31ab00 - 0x31afb4
void sub_0031AB00_0x31ab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AB00_0x31ab00");
#endif

    switch (ctx->pc) {
        case 0x31ab48u: goto label_31ab48;
        case 0x31ab5cu: goto label_31ab5c;
        case 0x31ab7cu: goto label_31ab7c;
        case 0x31ab90u: goto label_31ab90;
        case 0x31abb8u: goto label_31abb8;
        case 0x31abecu: goto label_31abec;
        case 0x31ac5cu: goto label_31ac5c;
        case 0x31acb8u: goto label_31acb8;
        case 0x31ad10u: goto label_31ad10;
        case 0x31ad3cu: goto label_31ad3c;
        case 0x31ad70u: goto label_31ad70;
        case 0x31ad84u: goto label_31ad84;
        case 0x31ada8u: goto label_31ada8;
        case 0x31ae04u: goto label_31ae04;
        case 0x31ae24u: goto label_31ae24;
        case 0x31ae60u: goto label_31ae60;
        case 0x31aebcu: goto label_31aebc;
        case 0x31af00u: goto label_31af00;
        case 0x31af2cu: goto label_31af2c;
        case 0x31af64u: goto label_31af64;
        case 0x31af88u: goto label_31af88;
        default: break;
    }

    ctx->pc = 0x31ab00u;

    // 0x31ab00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x31ab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x31ab04: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x31ab04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x31ab08: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x31ab08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x31ab0c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x31ab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x31ab10: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x31ab10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab14: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x31ab14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x31ab18: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31ab18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x31ab1c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x31ab1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x31ab20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31ab20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31ab24: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x31ab24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ab28: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x31ab28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ab2c: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x31ab2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ab30: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x31ab30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ab34: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x31ab34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ab38: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x31ab38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ab3c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31ab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31ab40: 0xc05e454  jal         func_179150
    ctx->pc = 0x31AB40u;
    SET_GPR_U32(ctx, 31, 0x31AB48u);
    ctx->pc = 0x31AB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AB40u;
    // 0x31ab44: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179150u, 0x31AB40u, 0x31AB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AB48u;
label_31ab48:
    // 0x31ab48: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x31ab48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x31ab4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31ab4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab50: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x31ab50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x31ab54: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x31AB54u;
    SET_GPR_U32(ctx, 31, 0x31AB5Cu);
    ctx->pc = 0x31AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AB54u;
    // 0x31ab58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x31AB54u, 0x31AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AB5Cu;
label_31ab5c:
    // 0x31ab5c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31ab60: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x31ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x31ab64: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x31ab64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x31ab68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31ab68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31ab6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31ab70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab74: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x31AB74u;
    SET_GPR_U32(ctx, 31, 0x31AB7Cu);
    ctx->pc = 0x31AB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AB74u;
    // 0x31ab78: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x31AB74u, 0x31AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AB7Cu;
label_31ab7c:
    // 0x31ab7c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x31ab7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31ab80: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x31ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x31ab84: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x31ab84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x31ab88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31ab88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab8c: 0x24849460  addiu       $a0, $a0, -0x6BA0
    ctx->pc = 0x31ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939744));
label_31ab90:
    // 0x31ab90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x31ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31ab94: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31AB94u;
    {
        const bool branch_taken_0x31ab94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31ab94) {
            ctx->pc = 0x31ABA8u;
            goto label_31aba8;
        }
    }
    ctx->pc = 0x31AB9Cu;
    // 0x31ab9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31AB9Cu;
    {
        const bool branch_taken_0x31ab9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB9Cu;
        // 0x31aba0: 0xa2a50005  sb          $a1, 0x5($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab9c) {
            ctx->pc = 0x31ABB8u;
            goto label_31abb8;
        }
    }
    ctx->pc = 0x31ABA4u;
    // 0x31aba4: 0x0  nop
    ctx->pc = 0x31aba4u;
    // NOP
label_31aba8:
    // 0x31aba8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31aba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31abac: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x31abacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x31abb0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31ABB0u;
    {
        const bool branch_taken_0x31abb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABB0u;
        // 0x31abb4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abb0) {
            ctx->pc = 0x31AB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ab90;
        }
    }
    ctx->pc = 0x31ABB8u;
label_31abb8:
    // 0x31abb8: 0x92a30002  lbu         $v1, 0x2($s5)
    ctx->pc = 0x31abb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x31abbc: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x31abbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31abc0: 0x106c006d  beq         $v1, $t4, . + 4 + (0x6D << 2)
    ctx->pc = 0x31ABC0u;
    {
        const bool branch_taken_0x31abc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x31ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABC0u;
        // 0x31abc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abc0) {
            ctx->pc = 0x31AD78u;
            goto label_31ad78;
        }
    }
    ctx->pc = 0x31ABC8u;
    // 0x31abc8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x31ABC8u;
    {
        const bool branch_taken_0x31abc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31abc8) {
            ctx->pc = 0x31AC08u;
            goto label_31ac08;
        }
    }
    ctx->pc = 0x31ABD0u;
    // 0x31abd0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31ABD0u;
    {
        const bool branch_taken_0x31abd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31abd0) {
            ctx->pc = 0x31ABE0u;
            goto label_31abe0;
        }
    }
    ctx->pc = 0x31ABD8u;
    // 0x31abd8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x31ABD8u;
    {
        const bool branch_taken_0x31abd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31abd8) {
            ctx->pc = 0x31ADB0u;
            goto label_31adb0;
        }
    }
    ctx->pc = 0x31ABE0u;
label_31abe0:
    // 0x31abe0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31abe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31abe4: 0xc063d48  jal         func_18F520
    ctx->pc = 0x31ABE4u;
    SET_GPR_U32(ctx, 31, 0x31ABECu);
    ctx->pc = 0x31ABE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ABE4u;
    // 0x31abe8: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x31ABE4u, 0x31ABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ABECu;
label_31abec:
    // 0x31abec: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x31ABECu;
    {
        const bool branch_taken_0x31abec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31abec) {
            ctx->pc = 0x31ADB0u;
            goto label_31adb0;
        }
    }
    ctx->pc = 0x31ABF4u;
    // 0x31abf4: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x31abf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x31abf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31abfc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x31ABFCu;
    {
        const bool branch_taken_0x31abfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ABFCu;
        // 0x31ac00: 0xa2a20002  sb          $v0, 0x2($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abfc) {
            ctx->pc = 0x31ADB0u;
            goto label_31adb0;
        }
    }
    ctx->pc = 0x31AC04u;
    // 0x31ac04: 0x0  nop
    ctx->pc = 0x31ac04u;
    // NOP
label_31ac08:
    // 0x31ac08: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x31ac08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x31ac0c: 0x8c23ea28  lw          $v1, -0x15D8($at)
    ctx->pc = 0x31ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x31ac10: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x31ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x31ac14: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x31ac14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x31ac18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31ac18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31ac1c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31AC1Cu;
    {
        const bool branch_taken_0x31ac1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ac1c) {
            ctx->pc = 0x31AC60u;
            goto label_31ac60;
        }
    }
    ctx->pc = 0x31AC24u;
    // 0x31ac24: 0x82a20005  lb          $v0, 0x5($s5)
    ctx->pc = 0x31ac24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x31ac28: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31ac2c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x31ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x31ac30: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x31ac30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x31ac34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31ac34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31ac38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31ac3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31ac40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac44: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31ac44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac48: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31ac48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31ac50: 0xa2a20005  sb          $v0, 0x5($s5)
    ctx->pc = 0x31ac50u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x31ac54: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x31AC54u;
    SET_GPR_U32(ctx, 31, 0x31AC5Cu);
    ctx->pc = 0x31AC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AC54u;
    // 0x31ac58: 0xffac0000  sd          $t4, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x31AC54u, 0x31AC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AC5Cu;
label_31ac5c:
    // 0x31ac5c: 0x0  nop
    ctx->pc = 0x31ac5cu;
    // NOP
label_31ac60:
    // 0x31ac60: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x31ac60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x31ac64: 0x8c23ea28  lw          $v1, -0x15D8($at)
    ctx->pc = 0x31ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x31ac68: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x31ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x31ac6c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x31ac6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x31ac70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31ac70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31ac74: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31AC74u;
    {
        const bool branch_taken_0x31ac74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ac74) {
            ctx->pc = 0x31ACB8u;
            goto label_31acb8;
        }
    }
    ctx->pc = 0x31AC7Cu;
    // 0x31ac7c: 0x82a30005  lb          $v1, 0x5($s5)
    ctx->pc = 0x31ac7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x31ac80: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31ac84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31ac88: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x31ac88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x31ac8c: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x31ac8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x31ac90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31ac90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31ac94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31ac98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ac9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31ac9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aca0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31aca0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aca4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31aca4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aca8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31acac: 0xa2a30005  sb          $v1, 0x5($s5)
    ctx->pc = 0x31acacu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x31acb0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x31ACB0u;
    SET_GPR_U32(ctx, 31, 0x31ACB8u);
    ctx->pc = 0x31ACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ACB0u;
    // 0x31acb4: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x31ACB0u, 0x31ACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ACB8u;
label_31acb8:
    // 0x31acb8: 0x82a30005  lb          $v1, 0x5($s5)
    ctx->pc = 0x31acb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x31acbc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x31acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31acc0: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x31acc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x31acc4: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x31acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x31acc8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x31acc8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x31accc: 0x0  nop
    ctx->pc = 0x31acccu;
    // NOP
    // 0x31acd0: 0x0  nop
    ctx->pc = 0x31acd0u;
    // NOP
    // 0x31acd4: 0x1010  mfhi        $v0
    ctx->pc = 0x31acd4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31acd8: 0xa2a20005  sb          $v0, 0x5($s5)
    ctx->pc = 0x31acd8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x31acdc: 0x8c22ea24  lw          $v0, -0x15DC($at)
    ctx->pc = 0x31acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
    // 0x31ace0: 0x30422008  andi        $v0, $v0, 0x2008
    ctx->pc = 0x31ace0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8200);
    // 0x31ace4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x31ACE4u;
    {
        const bool branch_taken_0x31ace4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ace4) {
            ctx->pc = 0x31ADB0u;
            goto label_31adb0;
        }
    }
    ctx->pc = 0x31ACECu;
    // 0x31acec: 0x82a30005  lb          $v1, 0x5($s5)
    ctx->pc = 0x31acecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x31acf0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x31acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x31acf4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31acf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31acf8: 0x24429460  addiu       $v0, $v0, -0x6BA0
    ctx->pc = 0x31acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939744));
    // 0x31acfc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x31acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x31ad00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ad04: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x31ad04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31ad08: 0xc05e564  jal         func_179590
    ctx->pc = 0x31AD08u;
    SET_GPR_U32(ctx, 31, 0x31AD10u);
    ctx->pc = 0x31AD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD08u;
    // 0x31ad0c: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179590u, 0x31AD08u, 0x31AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD10u;
label_31ad10:
    // 0x31ad10: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x31ad10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x31ad14: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31ad18: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x31ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x31ad1c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x31ad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x31ad20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31ad20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31ad24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31ad28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad2c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x31ad2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31ad30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31ad34: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x31AD34u;
    SET_GPR_U32(ctx, 31, 0x31AD3Cu);
    ctx->pc = 0x31AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD34u;
    // 0x31ad38: 0xa2a20002  sb          $v0, 0x2($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x31AD34u, 0x31AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD3Cu;
label_31ad3c:
    // 0x31ad3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31ad40: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31ad40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31ad44: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x31ad44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x31ad48: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x31ad48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x31ad4c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x31ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x31ad50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31ad50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad54: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x31ad54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x31ad58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31ad58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31ad5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31ad60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31ad64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ad68: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x31AD68u;
    SET_GPR_U32(ctx, 31, 0x31AD70u);
    ctx->pc = 0x31AD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD68u;
    // 0x31ad6c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x31AD68u, 0x31AD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD70u;
label_31ad70:
    // 0x31ad70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x31AD70u;
    {
        const bool branch_taken_0x31ad70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ad70) {
            ctx->pc = 0x31ADB0u;
            goto label_31adb0;
        }
    }
    ctx->pc = 0x31AD78u;
label_31ad78:
    // 0x31ad78: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31ad78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31ad7c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x31AD7Cu;
    SET_GPR_U32(ctx, 31, 0x31AD84u);
    ctx->pc = 0x31AD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD7Cu;
    // 0x31ad80: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x31AD7Cu, 0x31AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD84u;
label_31ad84:
    // 0x31ad84: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31AD84u;
    {
        const bool branch_taken_0x31ad84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ad84) {
            ctx->pc = 0x31ADB0u;
            goto label_31adb0;
        }
    }
    ctx->pc = 0x31AD8Cu;
    // 0x31ad8c: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x31ad8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x31ad90: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31ad94: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x31ad94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x31ad98: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x31ad98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31ad9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31ada0: 0xc04c918  jal         func_132460
    ctx->pc = 0x31ADA0u;
    SET_GPR_U32(ctx, 31, 0x31ADA8u);
    ctx->pc = 0x31ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ADA0u;
    // 0x31ada4: 0xa2a20002  sb          $v0, 0x2($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x31ADA0u, 0x31ADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ADA8u;
label_31ada8:
    // 0x31ada8: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x31ADA8u;
    {
        const bool branch_taken_0x31ada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ada8) {
            ctx->pc = 0x31AF90u;
            goto label_31af90;
        }
    }
    ctx->pc = 0x31ADB0u;
label_31adb0:
    // 0x31adb0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x31adb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31adb4: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x31adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x31adb8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x31adb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x31adbc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x31ADBCu;
    {
        const bool branch_taken_0x31adbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31adbc) {
            ctx->pc = 0x31AE10u;
            goto label_31ae10;
        }
    }
    ctx->pc = 0x31ADC4u;
    // 0x31adc4: 0x8eaa0010  lw          $t2, 0x10($s5)
    ctx->pc = 0x31adc4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x31adc8: 0x1140006b  beqz        $t2, . + 4 + (0x6B << 2)
    ctx->pc = 0x31ADC8u;
    {
        const bool branch_taken_0x31adc8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x31adc8) {
            ctx->pc = 0x31AF78u;
            goto label_31af78;
        }
    }
    ctx->pc = 0x31ADD0u;
    // 0x31add0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x31add0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x31add4: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x31add4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x31add8: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x31add8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x31addc: 0x3c028060  lui         $v0, 0x8060
    ctx->pc = 0x31addcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32864 << 16));
    // 0x31ade0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x31ade0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x31ade4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31ade4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ade8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31ade8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31adec: 0x3406fffc  ori         $a2, $zero, 0xFFFC
    ctx->pc = 0x31adecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x31adf0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x31adf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31adf4: 0x34496060  ori         $t1, $v0, 0x6060
    ctx->pc = 0x31adf4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24672);
    // 0x31adf8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31adf8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31adfc: 0xc052564  jal         func_149590
    ctx->pc = 0x31ADFCu;
    SET_GPR_U32(ctx, 31, 0x31AE04u);
    ctx->pc = 0x31AE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ADFCu;
    // 0x31ae00: 0xffa00018  sd          $zero, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149590u, 0x31ADFCu, 0x31AE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AE04u;
label_31ae04:
    // 0x31ae04: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x31AE04u;
    {
        const bool branch_taken_0x31ae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ae04) {
            ctx->pc = 0x31AF78u;
            goto label_31af78;
        }
    }
    ctx->pc = 0x31AE0Cu;
    // 0x31ae0c: 0x0  nop
    ctx->pc = 0x31ae0cu;
    // NOP
label_31ae10:
    // 0x31ae10: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x31ae10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x31ae14: 0x10a00058  beqz        $a1, . + 4 + (0x58 << 2)
    ctx->pc = 0x31AE14u;
    {
        const bool branch_taken_0x31ae14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE14u;
        // 0x31ae18: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae14) {
            ctx->pc = 0x31AF78u;
            goto label_31af78;
        }
    }
    ctx->pc = 0x31AE1Cu;
    // 0x31ae1c: 0xc09c46c  jal         func_2711B0
    ctx->pc = 0x31AE1Cu;
    SET_GPR_U32(ctx, 31, 0x31AE24u);
    ctx->pc = 0x2711B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2711B0u, 0x31AE1Cu, 0x31AE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AE24u;
label_31ae24:
    // 0x31ae24: 0x82a30005  lb          $v1, 0x5($s5)
    ctx->pc = 0x31ae24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x31ae28: 0x3c10004f  lui         $s0, 0x4F
    ctx->pc = 0x31ae28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
    // 0x31ae2c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x31ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x31ae30: 0x26109460  addiu       $s0, $s0, -0x6BA0
    ctx->pc = 0x31ae30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939744));
    // 0x31ae34: 0x24429430  addiu       $v0, $v0, -0x6BD0
    ctx->pc = 0x31ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939696));
    // 0x31ae38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31ae38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae3c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x31ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x31ae40: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x31ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x31ae44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x31ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31ae48: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x31ae48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31ae4c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31ae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31ae50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31ae54: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x31ae54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31ae58: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x31ae58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ae5c: 0x0  nop
    ctx->pc = 0x31ae5cu;
    // NOP
label_31ae60:
    // 0x31ae60: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x31ae60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31ae64: 0x3c028060  lui         $v0, 0x8060
    ctx->pc = 0x31ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32864 << 16));
    // 0x31ae68: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x31ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x31ae6c: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x31ae6cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31ae70: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x31ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x31ae74: 0x34496060  ori         $t1, $v0, 0x6060
    ctx->pc = 0x31ae74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24672);
    // 0x31ae78: 0x24849430  addiu       $a0, $a0, -0x6BD0
    ctx->pc = 0x31ae78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939696));
    // 0x31ae7c: 0x246392e0  addiu       $v1, $v1, -0x6D20
    ctx->pc = 0x31ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939360));
    // 0x31ae80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31ae80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae84: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x31ae84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x31ae88: 0x3408fffc  ori         $t0, $zero, 0xFFFC
    ctx->pc = 0x31ae88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x31ae8c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x31ae8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x31ae90: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x31ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x31ae94: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x31ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x31ae98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31ae98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae9c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x31ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31aea0: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x31aea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31aea4: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x31aea4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31aea8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x31aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31aeac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31aeb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31aeb4: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x31AEB4u;
    SET_GPR_U32(ctx, 31, 0x31AEBCu);
    ctx->pc = 0x31AEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AEB4u;
    // 0x31aeb8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x31AEB4u, 0x31AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AEBCu;
label_31aebc:
    // 0x31aebc: 0x922a0002  lbu         $t2, 0x2($s1)
    ctx->pc = 0x31aebcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x31aec0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x31aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31aec4: 0x1143000e  beq         $t2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x31AEC4u;
    {
        const bool branch_taken_0x31aec4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 3));
        if (branch_taken_0x31aec4) {
            ctx->pc = 0x31AF00u;
            goto label_31af00;
        }
    }
    ctx->pc = 0x31AECCu;
    // 0x31aecc: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x31aeccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x31aed0: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x31AED0u;
    {
        const bool branch_taken_0x31aed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31aed0) {
            ctx->pc = 0x31AF00u;
            goto label_31af00;
        }
    }
    ctx->pc = 0x31AED8u;
    // 0x31aed8: 0x928b0001  lbu         $t3, 0x1($s4)
    ctx->pc = 0x31aed8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x31aedc: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x31aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x31aee0: 0x3c028060  lui         $v0, 0x8060
    ctx->pc = 0x31aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32864 << 16));
    // 0x31aee4: 0x2646fffc  addiu       $a2, $s2, -0x4
    ctx->pc = 0x31aee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x31aee8: 0x248493a0  addiu       $a0, $a0, -0x6C60
    ctx->pc = 0x31aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939552));
    // 0x31aeec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31aeecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aef0: 0x24070108  addiu       $a3, $zero, 0x108
    ctx->pc = 0x31aef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x31aef4: 0x3408fffc  ori         $t0, $zero, 0xFFFC
    ctx->pc = 0x31aef4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x31aef8: 0xc09c6a4  jal         func_271A90
    ctx->pc = 0x31AEF8u;
    SET_GPR_U32(ctx, 31, 0x31AF00u);
    ctx->pc = 0x31AEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AEF8u;
    // 0x31aefc: 0x34496060  ori         $t1, $v0, 0x6060 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A90u, 0x31AEF8u, 0x31AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AF00u;
label_31af00:
    // 0x31af00: 0x82a20005  lb          $v0, 0x5($s5)
    ctx->pc = 0x31af00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x31af04: 0x16620018  bne         $s3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x31AF04u;
    {
        const bool branch_taken_0x31af04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x31AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF04u;
        // 0x31af08: 0x3c04004f  lui         $a0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af04) {
            ctx->pc = 0x31AF68u;
            goto label_31af68;
        }
    }
    ctx->pc = 0x31AF0Cu;
    // 0x31af0c: 0x3c028060  lui         $v0, 0x8060
    ctx->pc = 0x31af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32864 << 16));
    // 0x31af10: 0x2646fffd  addiu       $a2, $s2, -0x3
    ctx->pc = 0x31af10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967293));
    // 0x31af14: 0x24849388  addiu       $a0, $a0, -0x6C78
    ctx->pc = 0x31af14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939528));
    // 0x31af18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31af18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31af1c: 0x240700cd  addiu       $a3, $zero, 0xCD
    ctx->pc = 0x31af1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x31af20: 0x3408fffc  ori         $t0, $zero, 0xFFFC
    ctx->pc = 0x31af20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x31af24: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x31AF24u;
    SET_GPR_U32(ctx, 31, 0x31AF2Cu);
    ctx->pc = 0x31AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AF24u;
    // 0x31af28: 0x34496060  ori         $t1, $v0, 0x6060 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x31AF24u, 0x31AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AF2Cu;
label_31af2c:
    // 0x31af2c: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x31af2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x31af30: 0x3c028060  lui         $v0, 0x8060
    ctx->pc = 0x31af30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32864 << 16));
    // 0x31af34: 0x34496060  ori         $t1, $v0, 0x6060
    ctx->pc = 0x31af34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24672);
    // 0x31af38: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x31af38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x31af3c: 0x246392e0  addiu       $v1, $v1, -0x6D20
    ctx->pc = 0x31af3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939360));
    // 0x31af40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31af40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31af44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31af44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31af48: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x31af48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x31af4c: 0x3408fffc  ori         $t0, $zero, 0xFFFC
    ctx->pc = 0x31af4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x31af50: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x31af50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31af54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31af54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31af58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31af58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31af5c: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x31AF5Cu;
    SET_GPR_U32(ctx, 31, 0x31AF64u);
    ctx->pc = 0x31AF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AF5Cu;
    // 0x31af60: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x31AF5Cu, 0x31AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AF64u;
label_31af64:
    // 0x31af64: 0x0  nop
    ctx->pc = 0x31af64u;
    // NOP
label_31af68:
    // 0x31af68: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x31af68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x31af6c: 0x2e620005  sltiu       $v0, $s3, 0x5
    ctx->pc = 0x31af6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x31af70: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x31AF70u;
    {
        const bool branch_taken_0x31af70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF70u;
        // 0x31af74: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af70) {
            ctx->pc = 0x31AE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ae60;
        }
    }
    ctx->pc = 0x31AF78u;
label_31af78:
    // 0x31af78: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31af78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31af7c: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x31af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x31af80: 0xc04c918  jal         func_132460
    ctx->pc = 0x31AF80u;
    SET_GPR_U32(ctx, 31, 0x31AF88u);
    ctx->pc = 0x31AF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AF80u;
    // 0x31af84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x31AF80u, 0x31AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AF88u;
label_31af88:
    // 0x31af88: 0x1000ff0b  b           . + 4 + (-0xF5 << 2)
    ctx->pc = 0x31AF88u;
    {
        const bool branch_taken_0x31af88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31af88) {
            ctx->pc = 0x31ABB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31abb8;
        }
    }
    ctx->pc = 0x31AF90u;
label_31af90:
    // 0x31af90: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x31af90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31af94: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x31af94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31af98: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x31af98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31af9c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x31af9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31afa0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31afa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31afa4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x31afa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31afa8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31afa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31afac: 0x3e00008  jr          $ra
    ctx->pc = 0x31AFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFACu;
        // 0x31afb0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AFB4u;
}

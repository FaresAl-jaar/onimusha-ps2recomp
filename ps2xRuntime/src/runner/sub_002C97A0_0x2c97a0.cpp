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

// Function: sub_002C97A0
// Address: 0x2c97a0 - 0x2c9960
void sub_002C97A0_0x2c97a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C97A0_0x2c97a0");
#endif

    switch (ctx->pc) {
        case 0x2c97c0u: goto label_2c97c0;
        case 0x2c9800u: goto label_2c9800;
        case 0x2c9820u: goto label_2c9820;
        case 0x2c9898u: goto label_2c9898;
        default: break;
    }

    ctx->pc = 0x2c97a0u;

    // 0x2c97a0: 0x948500e2  lhu         $a1, 0xE2($a0)
    ctx->pc = 0x2c97a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 226)));
    // 0x2c97a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c97a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c97a8: 0x94830104  lhu         $v1, 0x104($a0)
    ctx->pc = 0x2c97a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2c97ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c97acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c97b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c97b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c97b4: 0xa34825  or          $t1, $a1, $v1
    ctx->pc = 0x2c97b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2c97b8: 0xa48900e2  sh          $t1, 0xE2($a0)
    ctx->pc = 0x2c97b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 226), (uint16_t)GPR_U32(ctx, 9));
    // 0x2c97bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c97bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c97c0:
    // 0x2c97c0: 0x1041804  sllv        $v1, $a0, $t0
    ctx->pc = 0x2c97c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 8) & 0x1F));
    // 0x2c97c4: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x2c97c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x2c97c8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C97C8u;
    {
        const bool branch_taken_0x2c97c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c97c8) {
            ctx->pc = 0x2C97E0u;
            goto label_2c97e0;
        }
    }
    ctx->pc = 0x2C97D0u;
    // 0x2c97d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2c97d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2c97d4: 0x29030010  slti        $v1, $t0, 0x10
    ctx->pc = 0x2c97d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2c97d8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C97D8u;
    {
        const bool branch_taken_0x2c97d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c97d8) {
            ctx->pc = 0x2C97C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c97c0;
        }
    }
    ctx->pc = 0x2C97E0u;
label_2c97e0:
    // 0x2c97e0: 0x25050010  addiu       $a1, $t0, 0x10
    ctx->pc = 0x2c97e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2c97e4: 0x91c00  sll         $v1, $t1, 16
    ctx->pc = 0x2c97e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x2c97e8: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x2c97e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c97ec: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C97ECu;
    {
        const bool branch_taken_0x2c97ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C97F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97ECu;
        // 0x2c97f0: 0x1234825  or          $t1, $t1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97ec) {
            ctx->pc = 0x2C9870u;
            goto label_2c9870;
        }
    }
    ctx->pc = 0x2C97F4u;
    // 0x2c97f4: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x2c97f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x2c97f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c97f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c97fc: 0x0  nop
    ctx->pc = 0x2c97fcu;
    // NOP
label_2c9800:
    // 0x2c9800: 0x1041804  sllv        $v1, $a0, $t0
    ctx->pc = 0x2c9800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 8) & 0x1F));
    // 0x2c9804: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x2c9804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x2c9808: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C9808u;
    {
        const bool branch_taken_0x2c9808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9808u;
        // 0x2c980c: 0x25070001  addiu       $a3, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9808) {
            ctx->pc = 0x2C9860u;
            goto label_2c9860;
        }
    }
    ctx->pc = 0x2C9810u;
    // 0x2c9810: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x2c9810u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c9814: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2C9814u;
    {
        const bool branch_taken_0x2c9814 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9814) {
            ctx->pc = 0x2C9840u;
            goto label_2c9840;
        }
    }
    ctx->pc = 0x2C981Cu;
    // 0x2c981c: 0x0  nop
    ctx->pc = 0x2c981cu;
    // NOP
label_2c9820:
    // 0x2c9820: 0xe41804  sllv        $v1, $a0, $a3
    ctx->pc = 0x2c9820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x2c9824: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x2c9824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x2c9828: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9828u;
    {
        const bool branch_taken_0x2c9828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9828) {
            ctx->pc = 0x2C9840u;
            goto label_2c9840;
        }
    }
    ctx->pc = 0x2C9830u;
    // 0x2c9830: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c9830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2c9834: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x2c9834u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c9838: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C9838u;
    {
        const bool branch_taken_0x2c9838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9838) {
            ctx->pc = 0x2C9820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9820;
        }
    }
    ctx->pc = 0x2C9840u;
label_2c9840:
    // 0x2c9840: 0x3103000f  andi        $v1, $t0, 0xF
    ctx->pc = 0x2c9840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x2c9844: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2c9844u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9848: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c9848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c984c: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x2c984cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2c9850: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x2c9850u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9854: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2c9854u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9858: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2c9858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2c985c: 0x0  nop
    ctx->pc = 0x2c985cu;
    // NOP
label_2c9860:
    // 0x2c9860: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2c9860u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2c9864: 0x105182a  slt         $v1, $t0, $a1
    ctx->pc = 0x2c9864u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2c9868: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2C9868u;
    {
        const bool branch_taken_0x2c9868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9868) {
            ctx->pc = 0x2C9800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9800;
        }
    }
    ctx->pc = 0x2C9870u;
label_2c9870:
    // 0x2c9870: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9870u;
    {
        const bool branch_taken_0x2c9870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9870) {
            ctx->pc = 0x2C9880u;
            goto label_2c9880;
        }
    }
    ctx->pc = 0x2C9878u;
    // 0x2c9878: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2C9878u;
    {
        const bool branch_taken_0x2c9878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9878u;
        // 0x2c987c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9878) {
            ctx->pc = 0x2C9958u;
            goto label_2c9958;
        }
    }
    ctx->pc = 0x2C9880u;
label_2c9880:
    // 0x2c9880: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2c9880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c9884: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c9884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9888: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c9888u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c988c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C988Cu;
    {
        const bool branch_taken_0x2c988c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C988Cu;
        // 0x2c9890: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c988c) {
            ctx->pc = 0x2C98E8u;
            goto label_2c98e8;
        }
    }
    ctx->pc = 0x2C9894u;
    // 0x2c9894: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x2c9894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_2c9898:
    // 0x2c9898: 0x90c50001  lbu         $a1, 0x1($a2)
    ctx->pc = 0x2c9898u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c989c: 0xa8082b  sltu        $at, $a1, $t0
    ctx->pc = 0x2c989cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c98a0: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2C98A0u;
    {
        const bool branch_taken_0x2c98a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c98a0) {
            ctx->pc = 0x2C98D8u;
            goto label_2c98d8;
        }
    }
    ctx->pc = 0x2C98A8u;
    // 0x2c98a8: 0x11050003  beq         $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C98A8u;
    {
        const bool branch_taken_0x2c98a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c98a8) {
            ctx->pc = 0x2C98B8u;
            goto label_2c98b8;
        }
    }
    ctx->pc = 0x2C98B0u;
    // 0x2c98b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c98b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c98b4: 0x0  nop
    ctx->pc = 0x2c98b4u;
    // NOP
label_2c98b8:
    // 0x2c98b8: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x2c98b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2c98bc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2c98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2c98c0: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x2c98c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c98c4: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x2c98c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x2c98c8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2c98c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2c98cc: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x2c98ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c98d0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2c98d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c98d4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2c98d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2c98d8:
    // 0x2c98d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c98d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2c98dc: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x2c98dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c98e0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2C98E0u;
    {
        const bool branch_taken_0x2c98e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C98E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C98E0u;
        // 0x2c98e4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c98e0) {
            ctx->pc = 0x2C9898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9898;
        }
    }
    ctx->pc = 0x2C98E8u;
label_2c98e8:
    // 0x2c98e8: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2c98e8u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2c98ec: 0x48232001  qmfc2.i     $v1, $vf4
    ctx->pc = 0x2c98ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c98f0: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2c98f0u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2c98f4: 0x48252001  qmfc2.i     $a1, $vf4
    ctx->pc = 0x2c98f4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c98f8: 0x81300  sll         $v0, $t0, 12
    ctx->pc = 0x2c98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 12));
    // 0x2c98fc: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x2c98fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x2c9900: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2c9900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2c9904: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x2c9904u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2c9908: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2c9908u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2c990c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2c990cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2c9910: 0xa9001b  divu        $zero, $a1, $t1
    ctx->pc = 0x2c9910u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2c9914: 0x0  nop
    ctx->pc = 0x2c9914u;
    // NOP
    // 0x2c9918: 0x0  nop
    ctx->pc = 0x2c9918u;
    // NOP
    // 0x2c991c: 0x2810  mfhi        $a1
    ctx->pc = 0x2c991cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2c9920: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2c9920u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2c9924: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2c9924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c9928: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c9928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c992c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2c992cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c9930: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x2c9930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x2c9934: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c9934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c9938: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c9938u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c993c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2c993cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c9940: 0x1010  mfhi        $v0
    ctx->pc = 0x2c9940u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2c9944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c9944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9948: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c9948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c994c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c994cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c9950: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2c9950u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2c9954: 0x0  nop
    ctx->pc = 0x2c9954u;
    // NOP
label_2c9958:
    // 0x2c9958: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9958u;
        // 0x2c995c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9960u;
}

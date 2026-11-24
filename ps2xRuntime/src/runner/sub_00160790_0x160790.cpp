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

// Function: sub_00160790
// Address: 0x160790 - 0x161728
void sub_00160790_0x160790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160790_0x160790");
#endif

    switch (ctx->pc) {
        case 0x1607d0u: goto label_1607d0;
        case 0x160c30u: goto label_160c30;
        case 0x160c38u: goto label_160c38;
        case 0x160fe0u: goto label_160fe0;
        case 0x160ff0u: goto label_160ff0;
        case 0x1611a8u: goto label_1611a8;
        case 0x16143cu: goto label_16143c;
        case 0x1615f0u: goto label_1615f0;
        case 0x1616bcu: goto label_1616bc;
        case 0x1616d4u: goto label_1616d4;
        case 0x1616ecu: goto label_1616ec;
        case 0x161704u: goto label_161704;
        default: break;
    }

    ctx->pc = 0x160790u;

    // 0x160790: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x160790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x160794: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x160794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x160798: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x160798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16079c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16079cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1607a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1607a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1607a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1607a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1607a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1607ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1607acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1607b0: 0x90830030  lbu         $v1, 0x30($a0)
    ctx->pc = 0x1607b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1607b4: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1607b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1607b8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1607B8u;
    {
        const bool branch_taken_0x1607b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1607BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607B8u;
        // 0x1607bc: 0x2610aad0  addiu       $s0, $s0, -0x5530 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1607b8) {
            ctx->pc = 0x160800u;
            goto label_160800;
        }
    }
    ctx->pc = 0x1607C0u;
    // 0x1607c0: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x1607c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1607c4: 0x90450038  lbu         $a1, 0x38($v0)
    ctx->pc = 0x1607c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1607c8: 0xc05a388  jal         func_168E20
    ctx->pc = 0x1607C8u;
    SET_GPR_U32(ctx, 31, 0x1607D0u);
    ctx->pc = 0x1607CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1607C8u;
    // 0x1607cc: 0x968600a0  lhu         $a2, 0xA0($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168E20u, 0x1607C8u, 0x1607D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1607D0u;
label_1607d0:
    // 0x1607d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1607D0u;
    {
        const bool branch_taken_0x1607d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1607d0) {
            ctx->pc = 0x1607E8u;
            goto label_1607e8;
        }
    }
    ctx->pc = 0x1607D8u;
    // 0x1607d8: 0x96830010  lhu         $v1, 0x10($s4)
    ctx->pc = 0x1607d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1607dc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1607dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1607e0: 0x100003c9  b           . + 4 + (0x3C9 << 2)
    ctx->pc = 0x1607E0u;
    {
        const bool branch_taken_0x1607e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1607E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1607E0u;
        // 0x1607e4: 0xa6830010  sh          $v1, 0x10($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1607e0) {
            ctx->pc = 0x161708u;
            goto label_161708;
        }
    }
    ctx->pc = 0x1607E8u;
label_1607e8:
    // 0x1607e8: 0x96840010  lhu         $a0, 0x10($s4)
    ctx->pc = 0x1607e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1607ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1607ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1607f0: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x1607f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x1607f4: 0xa6840010  sh          $a0, 0x10($s4)
    ctx->pc = 0x1607f4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x1607f8: 0xa2830030  sb          $v1, 0x30($s4)
    ctx->pc = 0x1607f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x1607fc: 0x0  nop
    ctx->pc = 0x1607fcu;
    // NOP
label_160800:
    // 0x160800: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x160800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x160804: 0x9065000d  lbu         $a1, 0xD($v1)
    ctx->pc = 0x160804u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x160808: 0x9066000f  lbu         $a2, 0xF($v1)
    ctx->pc = 0x160808u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x16080c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x16080Cu;
    {
        const bool branch_taken_0x16080c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x160810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16080Cu;
        // 0x160810: 0x8e930034  lw          $s3, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16080c) {
            ctx->pc = 0x160858u;
            goto label_160858;
        }
    }
    ctx->pc = 0x160814u;
    // 0x160814: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160818: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x160818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x16081c: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x16081cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x160820: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x160820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x160824: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x160824u;
    {
        const bool branch_taken_0x160824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160824u;
        // 0x160828: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160824) {
            ctx->pc = 0x160840u;
            goto label_160840;
        }
    }
    ctx->pc = 0x16082Cu;
    // 0x16082c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x16082cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x160830: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x160830u;
    {
        const bool branch_taken_0x160830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160830) {
            ctx->pc = 0x160858u;
            goto label_160858;
        }
    }
    ctx->pc = 0x160838u;
    // 0x160838: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x160838u;
    {
        const bool branch_taken_0x160838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160838u;
        // 0x16083c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160838) {
            ctx->pc = 0x160888u;
            goto label_160888;
        }
    }
    ctx->pc = 0x160840u;
label_160840:
    // 0x160840: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x160840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x160844: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x160844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x160848: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160848u;
    {
        const bool branch_taken_0x160848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160848u;
        // 0x16084c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160848) {
            ctx->pc = 0x160858u;
            goto label_160858;
        }
    }
    ctx->pc = 0x160850u;
    // 0x160850: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x160850u;
    {
        const bool branch_taken_0x160850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160850) {
            ctx->pc = 0x160888u;
            goto label_160888;
        }
    }
    ctx->pc = 0x160858u;
label_160858:
    // 0x160858: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x160858u;
    {
        const bool branch_taken_0x160858 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160858u;
        // 0x16085c: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160858) {
            ctx->pc = 0x160880u;
            goto label_160880;
        }
    }
    ctx->pc = 0x160860u;
    // 0x160860: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x160860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x160864: 0x902368a3  lbu         $v1, 0x68A3($at)
    ctx->pc = 0x160864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26787)));
    // 0x160868: 0x831827  nor         $v1, $a0, $v1
    ctx->pc = 0x160868u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 3)));
    // 0x16086c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16086cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x160870: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160870u;
    {
        const bool branch_taken_0x160870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160870u;
        // 0x160874: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160870) {
            ctx->pc = 0x160880u;
            goto label_160880;
        }
    }
    ctx->pc = 0x160878u;
    // 0x160878: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x160878u;
    {
        const bool branch_taken_0x160878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160878) {
            ctx->pc = 0x160888u;
            goto label_160888;
        }
    }
    ctx->pc = 0x160880u;
label_160880:
    // 0x160880: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x160880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160884: 0x0  nop
    ctx->pc = 0x160884u;
    // NOP
label_160888:
    // 0x160888: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x160888u;
    {
        const bool branch_taken_0x160888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160888) {
            ctx->pc = 0x1608A0u;
            goto label_1608a0;
        }
    }
    ctx->pc = 0x160890u;
    // 0x160890: 0x96830010  lhu         $v1, 0x10($s4)
    ctx->pc = 0x160890u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x160894: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x160894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x160898: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x160898u;
    {
        const bool branch_taken_0x160898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160898u;
        // 0x16089c: 0xa6830010  sh          $v1, 0x10($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160898) {
            ctx->pc = 0x1608B0u;
            goto label_1608b0;
        }
    }
    ctx->pc = 0x1608A0u;
label_1608a0:
    // 0x1608a0: 0x96830010  lhu         $v1, 0x10($s4)
    ctx->pc = 0x1608a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1608a4: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x1608a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x1608a8: 0xa6830010  sh          $v1, 0x10($s4)
    ctx->pc = 0x1608a8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x1608ac: 0x0  nop
    ctx->pc = 0x1608acu;
    // NOP
label_1608b0:
    // 0x1608b0: 0x92830098  lbu         $v1, 0x98($s4)
    ctx->pc = 0x1608b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x1608b4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1608b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1608b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1608B8u;
    {
        const bool branch_taken_0x1608b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1608BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608B8u;
        // 0x1608bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1608b8) {
            ctx->pc = 0x1608C8u;
            goto label_1608c8;
        }
    }
    ctx->pc = 0x1608C0u;
    // 0x1608c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1608C0u;
    {
        const bool branch_taken_0x1608c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1608c0) {
            ctx->pc = 0x1608D0u;
            goto label_1608d0;
        }
    }
    ctx->pc = 0x1608C8u;
label_1608c8:
    // 0x1608c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1608c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1608cc: 0x0  nop
    ctx->pc = 0x1608ccu;
    // NOP
label_1608d0:
    // 0x1608d0: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1608D0u;
    {
        const bool branch_taken_0x1608d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1608d0) {
            ctx->pc = 0x1609A8u;
            goto label_1609a8;
        }
    }
    ctx->pc = 0x1608D8u;
    // 0x1608d8: 0x92830098  lbu         $v1, 0x98($s4)
    ctx->pc = 0x1608d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x1608dc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1608dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1608e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1608E0u;
    {
        const bool branch_taken_0x1608e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1608E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1608E0u;
        // 0x1608e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1608e0) {
            ctx->pc = 0x1608F0u;
            goto label_1608f0;
        }
    }
    ctx->pc = 0x1608E8u;
    // 0x1608e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1608E8u;
    {
        const bool branch_taken_0x1608e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1608e8) {
            ctx->pc = 0x1608F8u;
            goto label_1608f8;
        }
    }
    ctx->pc = 0x1608F0u;
label_1608f0:
    // 0x1608f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1608f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1608f4: 0x0  nop
    ctx->pc = 0x1608f4u;
    // NOP
label_1608f8:
    // 0x1608f8: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1608F8u;
    {
        const bool branch_taken_0x1608f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1608f8) {
            ctx->pc = 0x1609A8u;
            goto label_1609a8;
        }
    }
    ctx->pc = 0x160900u;
    // 0x160900: 0x8283009a  lb          $v1, 0x9A($s4)
    ctx->pc = 0x160900u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 154)));
    // 0x160904: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x160904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x160908: 0xa283009a  sb          $v1, 0x9A($s4)
    ctx->pc = 0x160908u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 154), (uint8_t)GPR_U32(ctx, 3));
    // 0x16090c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x16090cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x160910: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x160910u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x160914: 0x1c600018  bgtz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x160914u;
    {
        const bool branch_taken_0x160914 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x160914) {
            ctx->pc = 0x160978u;
            goto label_160978;
        }
    }
    ctx->pc = 0x16091Cu;
    // 0x16091c: 0x9286009b  lbu         $a2, 0x9B($s4)
    ctx->pc = 0x16091cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 155)));
    // 0x160920: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x160920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x160924: 0x92840099  lbu         $a0, 0x99($s4)
    ctx->pc = 0x160924u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 153)));
    // 0x160928: 0x92850098  lbu         $a1, 0x98($s4)
    ctx->pc = 0x160928u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x16092c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x16092cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x160930: 0x30a40030  andi        $a0, $a1, 0x30
    ctx->pc = 0x160930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)48);
    // 0x160934: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x160934u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x160938: 0x832007  srav        $a0, $v1, $a0
    ctx->pc = 0x160938u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x16093c: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x16093cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x160940: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x160940u;
    {
        const bool branch_taken_0x160940 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160940u;
        // 0x160944: 0x30a30080  andi        $v1, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160940) {
            ctx->pc = 0x160968u;
            goto label_160968;
        }
    }
    ctx->pc = 0x160948u;
    // 0x160948: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160948u;
    {
        const bool branch_taken_0x160948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160948u;
        // 0x16094c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160948) {
            ctx->pc = 0x160958u;
            goto label_160958;
        }
    }
    ctx->pc = 0x160950u;
    // 0x160950: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x160950u;
    {
        const bool branch_taken_0x160950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160950) {
            ctx->pc = 0x160968u;
            goto label_160968;
        }
    }
    ctx->pc = 0x160958u;
label_160958:
    // 0x160958: 0x30a300bf  andi        $v1, $a1, 0xBF
    ctx->pc = 0x160958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)191);
    // 0x16095c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x16095cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160960: 0xa2830098  sb          $v1, 0x98($s4)
    ctx->pc = 0x160960u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 152), (uint8_t)GPR_U32(ctx, 3));
    // 0x160964: 0x0  nop
    ctx->pc = 0x160964u;
    // NOP
label_160968:
    // 0x160968: 0xa286009b  sb          $a2, 0x9B($s4)
    ctx->pc = 0x160968u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 155), (uint8_t)GPR_U32(ctx, 6));
    // 0x16096c: 0x92830098  lbu         $v1, 0x98($s4)
    ctx->pc = 0x16096cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x160970: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x160970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x160974: 0xa283009a  sb          $v1, 0x9A($s4)
    ctx->pc = 0x160974u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 154), (uint8_t)GPR_U32(ctx, 3));
label_160978:
    // 0x160978: 0x9286009b  lbu         $a2, 0x9B($s4)
    ctx->pc = 0x160978u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 155)));
    // 0x16097c: 0x8e85009c  lw          $a1, 0x9C($s4)
    ctx->pc = 0x16097cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x160980: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x160980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x160984: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x160984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x160988: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x160988u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16098c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x16098cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x160990: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x160990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x160994: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x160994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x160998: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x160998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x16099c: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x16099cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x1609a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1609a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1609a4: 0xae830020  sw          $v1, 0x20($s4)
    ctx->pc = 0x1609a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
label_1609a8:
    // 0x1609a8: 0x92840031  lbu         $a0, 0x31($s4)
    ctx->pc = 0x1609a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 49)));
    // 0x1609ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1609acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1609b0: 0x108302ef  beq         $a0, $v1, . + 4 + (0x2EF << 2)
    ctx->pc = 0x1609B0u;
    {
        const bool branch_taken_0x1609b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1609b0) {
            ctx->pc = 0x161570u;
            goto label_161570;
        }
    }
    ctx->pc = 0x1609B8u;
    // 0x1609b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1609b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1609bc: 0x108202a4  beq         $a0, $v0, . + 4 + (0x2A4 << 2)
    ctx->pc = 0x1609BCu;
    {
        const bool branch_taken_0x1609bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1609C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609BCu;
        // 0x1609c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609bc) {
            ctx->pc = 0x161450u;
            goto label_161450;
        }
    }
    ctx->pc = 0x1609C4u;
    // 0x1609c4: 0x1082006e  beq         $a0, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1609C4u;
    {
        const bool branch_taken_0x1609c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1609c4) {
            ctx->pc = 0x160B80u;
            goto label_160b80;
        }
    }
    ctx->pc = 0x1609CCu;
    // 0x1609cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1609CCu;
    {
        const bool branch_taken_0x1609cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1609cc) {
            ctx->pc = 0x1609E0u;
            goto label_1609e0;
        }
    }
    ctx->pc = 0x1609D4u;
    // 0x1609d4: 0x100002ee  b           . + 4 + (0x2EE << 2)
    ctx->pc = 0x1609D4u;
    {
        const bool branch_taken_0x1609d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1609d4) {
            ctx->pc = 0x161590u;
            goto label_161590;
        }
    }
    ctx->pc = 0x1609DCu;
    // 0x1609dc: 0x0  nop
    ctx->pc = 0x1609dcu;
    // NOP
label_1609e0:
    // 0x1609e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1609e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1609e4: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x1609e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x1609e8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1609e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1609ec: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x1609ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1609f0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1609f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1609f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1609f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1609f8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1609f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1609fc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1609fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x160a00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x160a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x160a04: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x160a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x160a08: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x160a08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x160a0c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x160a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x160a10: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x160a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x160a14: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x160a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x160a18: 0x9444003e  lhu         $a0, 0x3E($v0)
    ctx->pc = 0x160a18u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x160a1c: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x160a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x160a20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160A20u;
    {
        const bool branch_taken_0x160a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A20u;
        // 0x160a24: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a20) {
            ctx->pc = 0x160A30u;
            goto label_160a30;
        }
    }
    ctx->pc = 0x160A28u;
    // 0x160a28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x160A28u;
    {
        const bool branch_taken_0x160a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160a28) {
            ctx->pc = 0x160A58u;
            goto label_160a58;
        }
    }
    ctx->pc = 0x160A30u;
label_160a30:
    // 0x160a30: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x160a30u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x160a34: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x160a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x160a38: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x160a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x160a3c: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x160a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x160a40: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x160a40u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x160a44: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x160a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x160a48: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x160a48u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x160a4c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x160a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x160a50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160a54: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x160a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_160a58:
    // 0x160a58: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x160a58u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x160a5c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x160a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x160a60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x160a60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x160a64: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x160A64u;
    {
        const bool branch_taken_0x160a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A64u;
        // 0x160a68: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a64) {
            ctx->pc = 0x160B70u;
            goto label_160b70;
        }
    }
    ctx->pc = 0x160A6Cu;
    // 0x160a6c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x160a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x160a70: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x160a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x160a74: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x160a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x160a78: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x160a78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x160a7c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160a80: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x160a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x160a84: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x160a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x160a88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x160a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x160a8c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x160a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x160a90: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x160a90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x160a94: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x160a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x160a98: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x160a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x160a9c: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x160a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x160aa0: 0x9444003c  lhu         $a0, 0x3C($v0)
    ctx->pc = 0x160aa0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x160aa4: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x160aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x160aa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160AA8u;
    {
        const bool branch_taken_0x160aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AA8u;
        // 0x160aac: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160aa8) {
            ctx->pc = 0x160AB8u;
            goto label_160ab8;
        }
    }
    ctx->pc = 0x160AB0u;
    // 0x160ab0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x160AB0u;
    {
        const bool branch_taken_0x160ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160ab0) {
            ctx->pc = 0x160AE0u;
            goto label_160ae0;
        }
    }
    ctx->pc = 0x160AB8u;
label_160ab8:
    // 0x160ab8: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x160ab8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x160abc: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x160abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x160ac0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x160ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x160ac4: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x160ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x160ac8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x160ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x160acc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x160accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x160ad0: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x160ad0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x160ad4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x160ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x160ad8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160adc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x160adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_160ae0:
    // 0x160ae0: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x160ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x160ae4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160ae8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x160ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x160aec: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x160aecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x160af0: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x160af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x160af4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x160af4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x160af8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160afc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x160afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x160b00: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x160b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x160b04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x160b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x160b08: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x160b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x160b0c: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x160b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x160b10: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x160b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x160b14: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x160b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x160b18: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x160b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x160b1c: 0x94440040  lhu         $a0, 0x40($v0)
    ctx->pc = 0x160b1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x160b20: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x160b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x160b24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x160B24u;
    {
        const bool branch_taken_0x160b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160b24) {
            ctx->pc = 0x160B38u;
            goto label_160b38;
        }
    }
    ctx->pc = 0x160B2Cu;
    // 0x160b2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x160B2Cu;
    {
        const bool branch_taken_0x160b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B2Cu;
        // 0x160b30: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b2c) {
            ctx->pc = 0x160B60u;
            goto label_160b60;
        }
    }
    ctx->pc = 0x160B34u;
    // 0x160b34: 0x0  nop
    ctx->pc = 0x160b34u;
    // NOP
label_160b38:
    // 0x160b38: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x160b38u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x160b3c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x160b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x160b40: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x160b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x160b44: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x160b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x160b48: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x160b48u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x160b4c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x160b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x160b50: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x160b50u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x160b54: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x160b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x160b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160b5c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x160b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_160b60:
    // 0x160b60: 0xa6820096  sh          $v0, 0x96($s4)
    ctx->pc = 0x160b60u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x160b64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160b68: 0x10000289  b           . + 4 + (0x289 << 2)
    ctx->pc = 0x160B68u;
    {
        const bool branch_taken_0x160b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B68u;
        // 0x160b6c: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b68) {
            ctx->pc = 0x161590u;
            goto label_161590;
        }
    }
    ctx->pc = 0x160B70u;
label_160b70:
    // 0x160b70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160b74: 0x10000286  b           . + 4 + (0x286 << 2)
    ctx->pc = 0x160B74u;
    {
        const bool branch_taken_0x160b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B74u;
        // 0x160b78: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b74) {
            ctx->pc = 0x161590u;
            goto label_161590;
        }
    }
    ctx->pc = 0x160B7Cu;
    // 0x160b7c: 0x0  nop
    ctx->pc = 0x160b7cu;
    // NOP
label_160b80:
    // 0x160b80: 0x86820096  lh          $v0, 0x96($s4)
    ctx->pc = 0x160b80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 150)));
    // 0x160b84: 0x144001b4  bnez        $v0, . + 4 + (0x1B4 << 2)
    ctx->pc = 0x160B84u;
    {
        const bool branch_taken_0x160b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B84u;
        // 0x160b88: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b84) {
            ctx->pc = 0x161258u;
            goto label_161258;
        }
    }
    ctx->pc = 0x160B8Cu;
    // 0x160b8c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x160b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x160b90: 0xac20000c  sw          $zero, 0xC($at)
    ctx->pc = 0x160b90u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 12), GPR_U32(ctx, 0)); // MMIO: 0x7000000c
    // 0x160b94: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x160b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x160b98: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x160b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x160b9c: 0xac200004  sw          $zero, 0x4($at)
    ctx->pc = 0x160b9cu;
    runtime->Store32(rdram, ctx, 0x70000004u, GPR_U32(ctx, 0)); // MMIO: 0x70000004
    // 0x160ba0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x160ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x160ba4: 0xac200000  sw          $zero, 0x0($at)
    ctx->pc = 0x160ba4u;
    runtime->Store32(rdram, ctx, 0x70000000u, GPR_U32(ctx, 0)); // MMIO: 0x70000000
    // 0x160ba8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x160ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x160bac: 0xa4200284  sh          $zero, 0x284($at)
    ctx->pc = 0x160bacu;
    runtime->Store16(rdram, ctx, 0x70000284u, (uint16_t)GPR_U32(ctx, 0));
    // 0x160bb0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160bb4: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x160bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x160bb8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x160bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x160bbc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160bc0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x160bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x160bc4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x160bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x160bc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x160bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x160bcc: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x160bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x160bd0: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x160bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x160bd4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x160bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x160bd8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x160bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x160bdc: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x160bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x160be0: 0x9444003a  lhu         $a0, 0x3A($v0)
    ctx->pc = 0x160be0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x160be4: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x160be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x160be8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160BE8u;
    {
        const bool branch_taken_0x160be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160BE8u;
        // 0x160bec: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160be8) {
            ctx->pc = 0x160BF8u;
            goto label_160bf8;
        }
    }
    ctx->pc = 0x160BF0u;
    // 0x160bf0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x160BF0u;
    {
        const bool branch_taken_0x160bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160bf0) {
            ctx->pc = 0x160C20u;
            goto label_160c20;
        }
    }
    ctx->pc = 0x160BF8u;
label_160bf8:
    // 0x160bf8: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x160bf8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x160bfc: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x160bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x160c00: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x160c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x160c04: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x160c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x160c08: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x160c08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x160c0c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x160c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x160c10: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x160c10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x160c14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x160c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x160c18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160c1c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x160c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_160c20:
    // 0x160c20: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x160c20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x160c24: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x160C24u;
    {
        const bool branch_taken_0x160c24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x160c24) {
            ctx->pc = 0x160C30u;
            goto label_160c30;
        }
    }
    ctx->pc = 0x160C2Cu;
    // 0x160c2c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x160c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160c30:
    // 0x160c30: 0xc05d368  jal         func_174DA0
    ctx->pc = 0x160C30u;
    SET_GPR_U32(ctx, 31, 0x160C38u);
    ctx->pc = 0x160C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160C30u;
    // 0x160c34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174DA0u, 0x160C30u, 0x160C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C38u;
label_160c38:
    // 0x160c38: 0x10400165  beqz        $v0, . + 4 + (0x165 << 2)
    ctx->pc = 0x160C38u;
    {
        const bool branch_taken_0x160c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C38u;
        // 0x160c3c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c38) {
            ctx->pc = 0x1611D0u;
            goto label_1611d0;
        }
    }
    ctx->pc = 0x160C40u;
    // 0x160c40: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160c44: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x160c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x160c48: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x160c48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x160c4c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x160c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x160c50: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x160c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x160c54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160c58: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x160c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x160c5c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x160c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x160c60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x160c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x160c64: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x160c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x160c68: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x160c68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x160c6c: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x160c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x160c70: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x160c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x160c74: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x160c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x160c78: 0x94440046  lhu         $a0, 0x46($v0)
    ctx->pc = 0x160c78u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x160c7c: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x160c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x160c80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160C80u;
    {
        const bool branch_taken_0x160c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160C80u;
        // 0x160c84: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c80) {
            ctx->pc = 0x160C90u;
            goto label_160c90;
        }
    }
    ctx->pc = 0x160C88u;
    // 0x160c88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x160C88u;
    {
        const bool branch_taken_0x160c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160c88) {
            ctx->pc = 0x160CB8u;
            goto label_160cb8;
        }
    }
    ctx->pc = 0x160C90u;
label_160c90:
    // 0x160c90: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x160c90u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x160c94: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x160c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x160c98: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x160c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x160c9c: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x160c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x160ca0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x160ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x160ca4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x160ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x160ca8: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x160ca8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x160cac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x160cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x160cb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160cb4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x160cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_160cb8:
    // 0x160cb8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160cbc: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x160cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x160cc0: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x160cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x160cc4: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x160cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x160cc8: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x160cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x160ccc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160cd0: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x160cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x160cd4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x160cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x160cd8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x160cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x160cdc: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x160cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x160ce0: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x160ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x160ce4: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x160ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x160ce8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x160ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x160cec: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x160cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x160cf0: 0x94650044  lhu         $a1, 0x44($v1)
    ctx->pc = 0x160cf0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x160cf4: 0x30a3f000  andi        $v1, $a1, 0xF000
    ctx->pc = 0x160cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
    // 0x160cf8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160CF8u;
    {
        const bool branch_taken_0x160cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CF8u;
        // 0x160cfc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cf8) {
            ctx->pc = 0x160D08u;
            goto label_160d08;
        }
    }
    ctx->pc = 0x160D00u;
    // 0x160d00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x160D00u;
    {
        const bool branch_taken_0x160d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D00u;
        // 0x160d04: 0x30a30fff  andi        $v1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d00) {
            ctx->pc = 0x160D30u;
            goto label_160d30;
        }
    }
    ctx->pc = 0x160D08u;
label_160d08:
    // 0x160d08: 0x53b03  sra         $a3, $a1, 12
    ctx->pc = 0x160d08u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 12));
    // 0x160d0c: 0x30a30fff  andi        $v1, $a1, 0xFFF
    ctx->pc = 0x160d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x160d10: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x160d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x160d14: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x160d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x160d18: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x160d18u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x160d1c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x160d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x160d20: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x160d20u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x160d24: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x160d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x160d28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x160d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x160d2c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x160d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_160d30:
    // 0x160d30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160d34: 0x8c25f00c  lw          $a1, -0xFF4($at)
    ctx->pc = 0x160d34u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x160d38: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x160d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x160d3c: 0x3484a9e5  ori         $a0, $a0, 0xA9E5
    ctx->pc = 0x160d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x160d40: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x160d40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x160d44: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160d48: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x160d48u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x160d4c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x160d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x160d50: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x160d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x160d54: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x160d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x160d58: 0xac24f00c  sw          $a0, -0xFF4($at)
    ctx->pc = 0x160d58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 4));
    // 0x160d5c: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x160d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x160d60: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x160d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x160d64: 0x8e840090  lw          $a0, 0x90($s4)
    ctx->pc = 0x160d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x160d68: 0x94860042  lhu         $a2, 0x42($a0)
    ctx->pc = 0x160d68u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x160d6c: 0x30c4f000  andi        $a0, $a2, 0xF000
    ctx->pc = 0x160d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)61440);
    // 0x160d70: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160D70u;
    {
        const bool branch_taken_0x160d70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x160D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D70u;
        // 0x160d74: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d70) {
            ctx->pc = 0x160D80u;
            goto label_160d80;
        }
    }
    ctx->pc = 0x160D78u;
    // 0x160d78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x160D78u;
    {
        const bool branch_taken_0x160d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D78u;
        // 0x160d7c: 0x30c40fff  andi        $a0, $a2, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d78) {
            ctx->pc = 0x160DA8u;
            goto label_160da8;
        }
    }
    ctx->pc = 0x160D80u;
label_160d80:
    // 0x160d80: 0x64303  sra         $t0, $a2, 12
    ctx->pc = 0x160d80u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 12));
    // 0x160d84: 0x30c40fff  andi        $a0, $a2, 0xFFF
    ctx->pc = 0x160d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x160d88: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x160d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x160d8c: 0x24060fff  addiu       $a2, $zero, 0xFFF
    ctx->pc = 0x160d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x160d90: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x160d90u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x160d94: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x160d94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x160d98: 0xe63007  srav        $a2, $a2, $a3
    ctx->pc = 0x160d98u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x160d9c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x160d9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x160da0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x160da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x160da4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x160da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_160da8:
    // 0x160da8: 0x92880023  lbu         $t0, 0x23($s4)
    ctx->pc = 0x160da8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 35)));
    // 0x160dac: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x160dacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x160db0: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x160DB0u;
    {
        const bool branch_taken_0x160db0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x160DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160DB0u;
        // 0x160db4: 0x26460008  addiu       $a2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160db0) {
            ctx->pc = 0x160E08u;
            goto label_160e08;
        }
    }
    ctx->pc = 0x160DB8u;
    // 0x160db8: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x160db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x160dbc: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x160dbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x160dc0: 0xa2400006  sb          $zero, 0x6($s2)
    ctx->pc = 0x160dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x160dc4: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x160dc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x160dc8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x160DC8u;
    {
        const bool branch_taken_0x160dc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160DC8u;
        // 0x160dcc: 0xa0c80002  sb          $t0, 0x2($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160dc8) {
            ctx->pc = 0x160DE0u;
            goto label_160de0;
        }
    }
    ctx->pc = 0x160DD0u;
    // 0x160dd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x160dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160dd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x160DD4u;
    {
        const bool branch_taken_0x160dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160DD4u;
        // 0x160dd8: 0xa0c40003  sb          $a0, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160dd4) {
            ctx->pc = 0x160DF8u;
            goto label_160df8;
        }
    }
    ctx->pc = 0x160DDCu;
    // 0x160ddc: 0x0  nop
    ctx->pc = 0x160ddcu;
    // NOP
label_160de0:
    // 0x160de0: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x160de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x160de4: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x160de4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x160de8: 0x0  nop
    ctx->pc = 0x160de8u;
    // NOP
    // 0x160dec: 0x0  nop
    ctx->pc = 0x160decu;
    // NOP
    // 0x160df0: 0x2012  mflo        $a0
    ctx->pc = 0x160df0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x160df4: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x160df4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
label_160df8:
    // 0x160df8: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x160df8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x160dfc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x160DFCu;
    {
        const bool branch_taken_0x160dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160DFCu;
        // 0x160e00: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160dfc) {
            ctx->pc = 0x160E28u;
            goto label_160e28;
        }
    }
    ctx->pc = 0x160E04u;
    // 0x160e04: 0x0  nop
    ctx->pc = 0x160e04u;
    // NOP
label_160e08:
    // 0x160e08: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x160E08u;
    {
        const bool branch_taken_0x160e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E08u;
        // 0x160e0c: 0xa2480006  sb          $t0, 0x6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e08) {
            ctx->pc = 0x160E20u;
            goto label_160e20;
        }
    }
    ctx->pc = 0x160E10u;
    // 0x160e10: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x160e10u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x160e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x160e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160e18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x160E18u;
    {
        const bool branch_taken_0x160e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E18u;
        // 0x160e1c: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e18) {
            ctx->pc = 0x160E28u;
            goto label_160e28;
        }
    }
    ctx->pc = 0x160E20u;
label_160e20:
    // 0x160e20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x160e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160e24: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x160e24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_160e28:
    // 0x160e28: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x160E28u;
    {
        const bool branch_taken_0x160e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E28u;
        // 0x160e2c: 0x310300ff  andi        $v1, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e28) {
            ctx->pc = 0x160E70u;
            goto label_160e70;
        }
    }
    ctx->pc = 0x160E30u;
    // 0x160e30: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x160e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x160e34: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x160e34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x160e38: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x160E38u;
    {
        const bool branch_taken_0x160e38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x160e38) {
            ctx->pc = 0x160E50u;
            goto label_160e50;
        }
    }
    ctx->pc = 0x160E40u;
    // 0x160e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160e44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x160E44u;
    {
        const bool branch_taken_0x160e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E44u;
        // 0x160e48: 0xa2420007  sb          $v0, 0x7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e44) {
            ctx->pc = 0x160E78u;
            goto label_160e78;
        }
    }
    ctx->pc = 0x160E4Cu;
    // 0x160e4c: 0x0  nop
    ctx->pc = 0x160e4cu;
    // NOP
label_160e50:
    // 0x160e50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x160e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x160e54: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x160e54u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x160e58: 0x0  nop
    ctx->pc = 0x160e58u;
    // NOP
    // 0x160e5c: 0x0  nop
    ctx->pc = 0x160e5cu;
    // NOP
    // 0x160e60: 0x1012  mflo        $v0
    ctx->pc = 0x160e60u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x160e64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x160E64u;
    {
        const bool branch_taken_0x160e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E64u;
        // 0x160e68: 0xa2420007  sb          $v0, 0x7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e64) {
            ctx->pc = 0x160E78u;
            goto label_160e78;
        }
    }
    ctx->pc = 0x160E6Cu;
    // 0x160e6c: 0x0  nop
    ctx->pc = 0x160e6cu;
    // NOP
label_160e70:
    // 0x160e70: 0xa2480007  sb          $t0, 0x7($s2)
    ctx->pc = 0x160e70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 8));
    // 0x160e74: 0x0  nop
    ctx->pc = 0x160e74u;
    // NOP
label_160e78:
    // 0x160e78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160e7c: 0x8c25f00c  lw          $a1, -0xFF4($at)
    ctx->pc = 0x160e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x160e80: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x160e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x160e84: 0x3444a9e5  ori         $a0, $v0, 0xA9E5
    ctx->pc = 0x160e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x160e88: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x160e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x160e8c: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x160e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x160e90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x160e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160e94: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160e98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x160e9c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x160e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x160ea0: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x160ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x160ea4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x160ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x160ea8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x160ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x160eac: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x160eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x160eb0: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x160eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x160eb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x160eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x160eb8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x160eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x160ebc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x160ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160ec0: 0xc442005c  lwc1        $f2, 0x5C($v0)
    ctx->pc = 0x160ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x160ec4: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x160ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160ec8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x160ec8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x160ecc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x160eccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x160ed0: 0xe4200008  swc1        $f0, 0x8($at)
    ctx->pc = 0x160ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 8), bits); }
    // 0x160ed4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160ed8: 0x8c22f00c  lw          $v0, -0xFF4($at)
    ctx->pc = 0x160ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x160edc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x160edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x160ee0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160ee4: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x160ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x160ee8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x160ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160eec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x160ef0: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x160ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x160ef4: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x160ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x160ef8: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x160ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x160efc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x160efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x160f00: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x160f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x160f04: 0x94440054  lhu         $a0, 0x54($v0)
    ctx->pc = 0x160f04u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x160f08: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x160f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x160f0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x160F0Cu;
    {
        const bool branch_taken_0x160f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F0Cu;
        // 0x160f10: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f0c) {
            ctx->pc = 0x160F20u;
            goto label_160f20;
        }
    }
    ctx->pc = 0x160F14u;
    // 0x160f14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x160F14u;
    {
        const bool branch_taken_0x160f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160f14) {
            ctx->pc = 0x160F48u;
            goto label_160f48;
        }
    }
    ctx->pc = 0x160F1Cu;
    // 0x160f1c: 0x0  nop
    ctx->pc = 0x160f1cu;
    // NOP
label_160f20:
    // 0x160f20: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x160f20u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x160f24: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x160f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x160f28: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x160f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x160f2c: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x160f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x160f30: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x160f30u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x160f34: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x160f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x160f38: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x160f38u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x160f3c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x160f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x160f40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160f44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x160f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_160f48:
    // 0x160f48: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x160f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x160f4c: 0xa4220280  sh          $v0, 0x280($at)
    ctx->pc = 0x160f4cu;
    runtime->Store16(rdram, ctx, 0x70000280u, (uint16_t)GPR_U32(ctx, 2));
    // 0x160f50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160f54: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x160f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x160f58: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x160f58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x160f5c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x160f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x160f60: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x160f60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x160f64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x160f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x160f68: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x160f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x160f6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x160f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x160f70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x160f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x160f74: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x160f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x160f78: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x160f78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x160f7c: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x160f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x160f80: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x160f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x160f84: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x160f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x160f88: 0x94440056  lhu         $a0, 0x56($v0)
    ctx->pc = 0x160f88u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 86)));
    // 0x160f8c: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x160f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x160f90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160F90u;
    {
        const bool branch_taken_0x160f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160f90) {
            ctx->pc = 0x160FA0u;
            goto label_160fa0;
        }
    }
    ctx->pc = 0x160F98u;
    // 0x160f98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x160F98u;
    {
        const bool branch_taken_0x160f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F98u;
        // 0x160f9c: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f98) {
            ctx->pc = 0x160FC8u;
            goto label_160fc8;
        }
    }
    ctx->pc = 0x160FA0u;
label_160fa0:
    // 0x160fa0: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x160fa0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x160fa4: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x160fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x160fa8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x160fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x160fac: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x160facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x160fb0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x160fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x160fb4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x160fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x160fb8: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x160fb8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x160fbc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x160fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x160fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160fc4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x160fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_160fc8:
    // 0x160fc8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x160fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x160fcc: 0xa4220282  sh          $v0, 0x282($at)
    ctx->pc = 0x160fccu;
    runtime->Store16(rdram, ctx, 0x70000282u, (uint16_t)GPR_U32(ctx, 2));
    // 0x160fd0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x160fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x160fd4: 0x34440200  ori         $a0, $v0, 0x200
    ctx->pc = 0x160fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x160fd8: 0xc04d52c  jal         func_1354B0
    ctx->pc = 0x160FD8u;
    SET_GPR_U32(ctx, 31, 0x160FE0u);
    ctx->pc = 0x160FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160FD8u;
    // 0x160fdc: 0x34450280  ori         $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)640);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1354B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1354B0u, 0x160FD8u, 0x160FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160FE0u;
label_160fe0:
    // 0x160fe0: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x160fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x160fe4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x160fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x160fe8: 0xc041442  jal         func_105108
    ctx->pc = 0x160FE8u;
    SET_GPR_U32(ctx, 31, 0x160FF0u);
    ctx->pc = 0x160FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160FE8u;
    // 0x160fec: 0x34c50200  ori         $a1, $a2, 0x200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x160FE8u, 0x160FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160FF0u;
label_160ff0:
    // 0x160ff0: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x160ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x160ff4: 0x90420021  lbu         $v0, 0x21($v0)
    ctx->pc = 0x160ff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x160ff8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x160FF8u;
    {
        const bool branch_taken_0x160ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FF8u;
        // 0x160ffc: 0x3c02007e  lui         $v0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ff8) {
            ctx->pc = 0x161018u;
            goto label_161018;
        }
    }
    ctx->pc = 0x161000u;
    // 0x161000: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x161000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x161004: 0x244268d0  addiu       $v0, $v0, 0x68D0
    ctx->pc = 0x161004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26832));
    // 0x161008: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x161008u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16100c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16100cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161010: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x161010u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x161014: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x161014u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_161018:
    // 0x161018: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x161018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16101c: 0x26820050  addiu       $v0, $s4, 0x50
    ctx->pc = 0x16101cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x161020: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x161020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x161024: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x161024u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161028: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16102c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16102cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x161030: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x161030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x161034: 0x8c28f00c  lw          $t0, -0xFF4($at)
    ctx->pc = 0x161034u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x161038: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x161038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16103c: 0x3446a9e5  ori         $a2, $v0, 0xA9E5
    ctx->pc = 0x16103cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x161040: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x161040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x161044: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x161044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x161048: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x161048u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16104c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16104cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x161050: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161054: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x161054u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x161058: 0x8c27f00c  lw          $a3, -0xFF4($at)
    ctx->pc = 0x161058u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x16105c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x16105cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x161060: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x161060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x161064: 0x3445a9e5  ori         $a1, $v0, 0xA9E5
    ctx->pc = 0x161064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x161068: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x161068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16106c: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x16106cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x161070: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x161070u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x161074: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161078: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x161078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x16107c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16107cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x161080: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x161084: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x161084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x161088: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x161088u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x16108c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16108cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x161090: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x161090u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x161094: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161098: 0x3066003f  andi        $a2, $v1, 0x3F
    ctx->pc = 0x161098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x16109c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x16109cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1610a0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1610a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1610a4: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x1610a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1610a8: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x1610a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1610ac: 0x3444a9e5  ori         $a0, $v0, 0xA9E5
    ctx->pc = 0x1610acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1610b0: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x1610b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1610b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1610b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1610b8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1610b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1610bc: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1610bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1610c0: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x1610c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1610c4: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x1610c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1610c8: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x1610c8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x1610cc: 0x46053941  sub.s       $f5, $f7, $f5
    ctx->pc = 0x1610ccu;
    ctx->f[5] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x1610d0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1610d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1610d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1610d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1610d8: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1610d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1610dc: 0x8c26f00c  lw          $a2, -0xFF4($at)
    ctx->pc = 0x1610dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x1610e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1610e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1610e4: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x1610e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1610e8: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x1610e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x1610ec: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1610ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1610f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1610f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1610f4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1610f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1610f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1610f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1610fc: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x1610fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x161100: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x161100u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x161104: 0x31b82  srl         $v1, $v1, 14
    ctx->pc = 0x161104u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 14));
    // 0x161108: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16110c: 0x3065003f  andi        $a1, $v1, 0x3F
    ctx->pc = 0x16110cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x161110: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x161110u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x161114: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x161114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x161118: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x161118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x16111c: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x16111cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x161120: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x161120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161124: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x161124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161128: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x161128u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x16112c: 0x460328c1  sub.s       $f3, $f5, $f3
    ctx->pc = 0x16112cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x161130: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x161130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x161134: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161138: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x161138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x16113c: 0x8c25f00c  lw          $a1, -0xFF4($at)
    ctx->pc = 0x16113cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x161140: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161144: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x161144u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x161148: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x161148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x16114c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x16114cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x161150: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161154: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x161154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x161158: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16115c: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x16115cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x161160: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x161160u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x161164: 0x31c42  srl         $v1, $v1, 17
    ctx->pc = 0x161164u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 17));
    // 0x161168: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x161168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x16116c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16116cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x161170: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x161170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x161174: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x161174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x161178: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x161178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16117c: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x16117cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161180: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x161180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161184: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x161184u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x161188: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x161188u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x16118c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16118cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x161190: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161194: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x161194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x161198: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x161198u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x16119c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16119cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1611a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1611A0u;
    {
        const bool branch_taken_0x1611a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1611A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611A0u;
        // 0x1611a4: 0x2465ffff  addiu       $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611a0) {
            ctx->pc = 0x1611C8u;
            goto label_1611c8;
        }
    }
    ctx->pc = 0x1611A8u;
label_1611a8:
    // 0x1611a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1611a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1611ac: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1611acu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1611b0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1611b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1611b4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1611b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1611b8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1611b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1611bc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1611bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1611c0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1611c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1611c4: 0x0  nop
    ctx->pc = 0x1611c4u;
    // NOP
label_1611c8:
    // 0x1611c8: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1611C8u;
    {
        const bool branch_taken_0x1611c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1611c8) {
            ctx->pc = 0x1611A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1611a8;
        }
    }
    ctx->pc = 0x1611D0u;
label_1611d0:
    // 0x1611d0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1611d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1611d4: 0x1620fe96  bnez        $s1, . + 4 + (-0x16A << 2)
    ctx->pc = 0x1611D4u;
    {
        const bool branch_taken_0x1611d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1611D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611D4u;
        // 0x1611d8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611d4) {
            ctx->pc = 0x160C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160c30;
        }
    }
    ctx->pc = 0x1611DCu;
    // 0x1611dc: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1611dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1611e0: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x1611e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x1611e4: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x1611e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1611e8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1611e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1611ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1611ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1611f0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1611f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1611f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1611f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1611f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1611f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1611fc: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1611fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x161200: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x161200u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x161204: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x161204u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x161208: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x161208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16120c: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x16120cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x161210: 0x94440040  lhu         $a0, 0x40($v0)
    ctx->pc = 0x161210u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x161214: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x161214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x161218: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161218u;
    {
        const bool branch_taken_0x161218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161218u;
        // 0x16121c: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161218) {
            ctx->pc = 0x161228u;
            goto label_161228;
        }
    }
    ctx->pc = 0x161220u;
    // 0x161220: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x161220u;
    {
        const bool branch_taken_0x161220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161220) {
            ctx->pc = 0x161250u;
            goto label_161250;
        }
    }
    ctx->pc = 0x161228u;
label_161228:
    // 0x161228: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x161228u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x16122c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x16122cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x161230: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x161230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x161234: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x161234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x161238: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x161238u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16123c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16123cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x161240: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x161240u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x161244: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x161244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x161248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16124c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16124cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_161250:
    // 0x161250: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x161250u;
    {
        const bool branch_taken_0x161250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161250u;
        // 0x161254: 0xa6820096  sh          $v0, 0x96($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161250) {
            ctx->pc = 0x161260u;
            goto label_161260;
        }
    }
    ctx->pc = 0x161258u;
label_161258:
    // 0x161258: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x161258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16125c: 0xa6820096  sh          $v0, 0x96($s4)
    ctx->pc = 0x16125cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 2));
label_161260:
    // 0x161260: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x161260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x161264: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x161264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x161268: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x161268u;
    {
        const bool branch_taken_0x161268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161268) {
            ctx->pc = 0x161298u;
            goto label_161298;
        }
    }
    ctx->pc = 0x161270u;
    // 0x161270: 0x968200a2  lhu         $v0, 0xA2($s4)
    ctx->pc = 0x161270u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 162)));
    // 0x161274: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x161274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x161278: 0xa68200a2  sh          $v0, 0xA2($s4)
    ctx->pc = 0x161278u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x16127c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16127cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x161280: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x161280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x161284: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x161284u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x161288: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161288u;
    {
        const bool branch_taken_0x161288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161288u;
        // 0x16128c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161288) {
            ctx->pc = 0x161298u;
            goto label_161298;
        }
    }
    ctx->pc = 0x161290u;
    // 0x161290: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x161290u;
    {
        const bool branch_taken_0x161290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161290u;
        // 0x161294: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161290) {
            ctx->pc = 0x161590u;
            goto label_161590;
        }
    }
    ctx->pc = 0x161298u;
label_161298:
    // 0x161298: 0x86820094  lh          $v0, 0x94($s4)
    ctx->pc = 0x161298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x16129c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16129cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1612a0: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x1612a0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x1612a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1612a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1612a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1612a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1612ac: 0x1c4000b8  bgtz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x1612ACu;
    {
        const bool branch_taken_0x1612ac = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1612B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612ACu;
        // 0x1612b0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612ac) {
            ctx->pc = 0x161590u;
            goto label_161590;
        }
    }
    ctx->pc = 0x1612B4u;
    // 0x1612b4: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1612b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1612b8: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x1612b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x1612bc: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x1612bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1612c0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1612c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1612c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1612c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1612c8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1612c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1612cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1612ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1612d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1612d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1612d4: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1612d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1612d8: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x1612d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x1612dc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1612dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1612e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1612e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1612e4: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x1612e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1612e8: 0x9444003e  lhu         $a0, 0x3E($v0)
    ctx->pc = 0x1612e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x1612ec: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x1612ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x1612f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1612F0u;
    {
        const bool branch_taken_0x1612f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1612F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612F0u;
        // 0x1612f4: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612f0) {
            ctx->pc = 0x161300u;
            goto label_161300;
        }
    }
    ctx->pc = 0x1612F8u;
    // 0x1612f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1612F8u;
    {
        const bool branch_taken_0x1612f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1612f8) {
            ctx->pc = 0x161328u;
            goto label_161328;
        }
    }
    ctx->pc = 0x161300u;
label_161300:
    // 0x161300: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x161300u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x161304: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x161304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x161308: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x161308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16130c: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x16130cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x161310: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x161310u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x161314: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x161314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x161318: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x161318u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x16131c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16131cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x161320: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161324: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x161324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_161328:
    // 0x161328: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x161328u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x16132c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x16132cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x161330: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x161330u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x161334: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x161334u;
    {
        const bool branch_taken_0x161334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161334u;
        // 0x161338: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161334) {
            ctx->pc = 0x161440u;
            goto label_161440;
        }
    }
    ctx->pc = 0x16133Cu;
    // 0x16133c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x16133cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x161340: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x161340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x161344: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x161344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x161348: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x161348u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x16134c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16134cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161350: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x161350u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x161354: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x161354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161358: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16135c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x16135cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x161360: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x161360u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x161364: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x161364u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x161368: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x161368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16136c: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x16136cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x161370: 0x9444003c  lhu         $a0, 0x3C($v0)
    ctx->pc = 0x161370u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x161374: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x161374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x161378: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161378u;
    {
        const bool branch_taken_0x161378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161378u;
        // 0x16137c: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161378) {
            ctx->pc = 0x161388u;
            goto label_161388;
        }
    }
    ctx->pc = 0x161380u;
    // 0x161380: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x161380u;
    {
        const bool branch_taken_0x161380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161380) {
            ctx->pc = 0x1613B0u;
            goto label_1613b0;
        }
    }
    ctx->pc = 0x161388u;
label_161388:
    // 0x161388: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x161388u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x16138c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x16138cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x161390: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x161390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x161394: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x161394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x161398: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x161398u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16139c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16139cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1613a0: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x1613a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1613a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1613a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1613a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1613a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1613ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1613acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1613b0:
    // 0x1613b0: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x1613b0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x1613b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1613b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1613b8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1613b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1613bc: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x1613bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x1613c0: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x1613c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1613c4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1613c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1613c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1613c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1613cc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1613ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1613d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1613d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1613d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1613d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1613d8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1613d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1613dc: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x1613dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x1613e0: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x1613e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x1613e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1613e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1613e8: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x1613e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1613ec: 0x94440040  lhu         $a0, 0x40($v0)
    ctx->pc = 0x1613ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1613f0: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x1613f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x1613f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1613F4u;
    {
        const bool branch_taken_0x1613f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1613f4) {
            ctx->pc = 0x161408u;
            goto label_161408;
        }
    }
    ctx->pc = 0x1613FCu;
    // 0x1613fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1613FCu;
    {
        const bool branch_taken_0x1613fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613FCu;
        // 0x161400: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613fc) {
            ctx->pc = 0x161430u;
            goto label_161430;
        }
    }
    ctx->pc = 0x161404u;
    // 0x161404: 0x0  nop
    ctx->pc = 0x161404u;
    // NOP
label_161408:
    // 0x161408: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x161408u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x16140c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x16140cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x161410: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x161410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x161414: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x161414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x161418: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x161418u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16141c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16141cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x161420: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x161420u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x161424: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x161424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x161428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16142c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16142cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_161430:
    // 0x161430: 0xa6820096  sh          $v0, 0x96($s4)
    ctx->pc = 0x161430u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x161434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161438: 0x10000055  b           . + 4 + (0x55 << 2)
label_16143c:
    if (ctx->pc == 0x16143Cu) {
        ctx->pc = 0x16143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161438u;
        // 0x16143c: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161440u;
        goto label_161440;
    }
    ctx->pc = 0x161438u;
    {
        const bool branch_taken_0x161438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161438u;
        // 0x16143c: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161438) {
            ctx->pc = 0x161590u;
            goto label_161590;
        }
    }
    ctx->pc = 0x161440u;
label_161440:
    // 0x161440: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161444: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x161444u;
    {
        const bool branch_taken_0x161444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161444u;
        // 0x161448: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161444) {
            ctx->pc = 0x161590u;
            goto label_161590;
        }
    }
    ctx->pc = 0x16144Cu;
    // 0x16144c: 0x0  nop
    ctx->pc = 0x16144cu;
    // NOP
label_161450:
    // 0x161450: 0x86820094  lh          $v0, 0x94($s4)
    ctx->pc = 0x161450u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x161454: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x161454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x161458: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x161458u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x16145c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x16145cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x161460: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x161460u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x161464: 0x1c40004a  bgtz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x161464u;
    {
        const bool branch_taken_0x161464 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x161468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161464u;
        // 0x161468: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161464) {
            ctx->pc = 0x161590u;
            goto label_161590;
        }
    }
    ctx->pc = 0x16146Cu;
    // 0x16146c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x16146cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x161470: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x161470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x161474: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x161474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x161478: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x161478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x16147c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16147cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161480: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x161480u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x161484: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x161484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161488: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16148c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x16148cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x161490: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x161490u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x161494: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x161494u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x161498: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x161498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16149c: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x16149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1614a0: 0x9444003c  lhu         $a0, 0x3C($v0)
    ctx->pc = 0x1614a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1614a4: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x1614a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x1614a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1614A8u;
    {
        const bool branch_taken_0x1614a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1614ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1614A8u;
        // 0x1614ac: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1614a8) {
            ctx->pc = 0x1614B8u;
            goto label_1614b8;
        }
    }
    ctx->pc = 0x1614B0u;
    // 0x1614b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1614B0u;
    {
        const bool branch_taken_0x1614b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1614b0) {
            ctx->pc = 0x1614E0u;
            goto label_1614e0;
        }
    }
    ctx->pc = 0x1614B8u;
label_1614b8:
    // 0x1614b8: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x1614b8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x1614bc: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x1614bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1614c0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1614c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1614c4: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x1614c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x1614c8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1614c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1614cc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1614ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1614d0: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x1614d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1614d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1614d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1614d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1614d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1614dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1614dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1614e0:
    // 0x1614e0: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x1614e0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x1614e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1614e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1614e8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1614e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1614ec: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x1614ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x1614f0: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x1614f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1614f4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1614f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1614f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1614f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1614fc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1614fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x161500: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x161500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161504: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x161508: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x161508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x16150c: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x16150cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x161510: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x161510u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x161514: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x161514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x161518: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x161518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x16151c: 0x94440040  lhu         $a0, 0x40($v0)
    ctx->pc = 0x16151cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x161520: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x161520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x161524: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161524u;
    {
        const bool branch_taken_0x161524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161524) {
            ctx->pc = 0x161538u;
            goto label_161538;
        }
    }
    ctx->pc = 0x16152Cu;
    // 0x16152c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16152Cu;
    {
        const bool branch_taken_0x16152c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16152Cu;
        // 0x161530: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16152c) {
            ctx->pc = 0x161560u;
            goto label_161560;
        }
    }
    ctx->pc = 0x161534u;
    // 0x161534: 0x0  nop
    ctx->pc = 0x161534u;
    // NOP
label_161538:
    // 0x161538: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x161538u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x16153c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x16153cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x161540: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x161540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x161544: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x161544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x161548: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x161548u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16154c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16154cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x161550: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x161550u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x161554: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x161554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x161558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16155c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16155cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_161560:
    // 0x161560: 0xa6820096  sh          $v0, 0x96($s4)
    ctx->pc = 0x161560u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x161564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161568: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x161568u;
    {
        const bool branch_taken_0x161568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161568u;
        // 0x16156c: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161568) {
            ctx->pc = 0x161590u;
            goto label_161590;
        }
    }
    ctx->pc = 0x161570u;
label_161570:
    // 0x161570: 0x968300aa  lhu         $v1, 0xAA($s4)
    ctx->pc = 0x161570u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 170)));
    // 0x161574: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x161574u;
    {
        const bool branch_taken_0x161574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x161574) {
            ctx->pc = 0x161590u;
            goto label_161590;
        }
    }
    ctx->pc = 0x16157Cu;
    // 0x16157c: 0x96830010  lhu         $v1, 0x10($s4)
    ctx->pc = 0x16157cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x161580: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x161580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x161584: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x161584u;
    {
        const bool branch_taken_0x161584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161584u;
        // 0x161588: 0xa6830010  sh          $v1, 0x10($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161584) {
            ctx->pc = 0x161708u;
            goto label_161708;
        }
    }
    ctx->pc = 0x16158Cu;
    // 0x16158c: 0x0  nop
    ctx->pc = 0x16158cu;
    // NOP
label_161590:
    // 0x161590: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161594: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x161594u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x161598: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x161598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x16159c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x16159cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1615a0: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x1615a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x1615a4: 0x26850070  addiu       $a1, $s4, 0x70
    ctx->pc = 0x1615a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x1615a8: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x1615a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1615ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1615acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1615b0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1615b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1615b4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1615b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1615b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1615b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1615bc: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1615bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1615c0: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x1615c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x1615c4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1615c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1615c8: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x1615c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1615cc: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x1615ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1615d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1615d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1615d4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1615d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1615d8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1615d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1615dc: 0xc4420064  lwc1        $f2, 0x64($v0)
    ctx->pc = 0x1615dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1615e0: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x1615e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1615e4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1615e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1615e8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1615E8u;
    SET_GPR_U32(ctx, 31, 0x1615F0u);
    ctx->pc = 0x1615ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1615E8u;
    // 0x1615ec: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1615E8u, 0x1615F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1615F0u;
label_1615f0:
    // 0x1615f0: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x1615f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1615f4: 0x90420021  lbu         $v0, 0x21($v0)
    ctx->pc = 0x1615f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x1615f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1615F8u;
    {
        const bool branch_taken_0x1615f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1615FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615F8u;
        // 0x1615fc: 0x3c02007e  lui         $v0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1615f8) {
            ctx->pc = 0x161620u;
            goto label_161620;
        }
    }
    ctx->pc = 0x161600u;
    // 0x161600: 0x26830080  addiu       $v1, $s4, 0x80
    ctx->pc = 0x161600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x161604: 0x244268e0  addiu       $v0, $v0, 0x68E0
    ctx->pc = 0x161604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26848));
    // 0x161608: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x161608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x16160c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16160cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161610: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x161610u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161614: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x161614u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x161618: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x161618u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x16161c: 0x0  nop
    ctx->pc = 0x16161cu;
    // NOP
label_161620:
    // 0x161620: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161624: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x161624u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x161628: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x161628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x16162c: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x16162cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x161630: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161634: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x161634u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x161638: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16163c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x16163cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x161640: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x161640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x161644: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x161644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x161648: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x161648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x16164c: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x16164cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x161650: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x161650u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x161654: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x161654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x161658: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x161658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x16165c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16165cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x161660: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x161660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x161664: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x161664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x161668: 0xc6800084  lwc1        $f0, 0x84($s4)
    ctx->pc = 0x161668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16166c: 0xc463006c  lwc1        $f3, 0x6C($v1)
    ctx->pc = 0x16166cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x161670: 0xc4610068  lwc1        $f1, 0x68($v1)
    ctx->pc = 0x161670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161674: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x161674u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x161678: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x161678u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x16167c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16167cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x161680: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x161680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
    // 0x161684: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x161684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x161688: 0x90630038  lbu         $v1, 0x38($v1)
    ctx->pc = 0x161688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x16168c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16168Cu;
    {
        const bool branch_taken_0x16168c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x161690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16168Cu;
        // 0x161690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16168c) {
            ctx->pc = 0x1616E0u;
            goto label_1616e0;
        }
    }
    ctx->pc = 0x161694u;
    // 0x161694: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x161694u;
    {
        const bool branch_taken_0x161694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161694) {
            ctx->pc = 0x1616C8u;
            goto label_1616c8;
        }
    }
    ctx->pc = 0x16169Cu;
    // 0x16169c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16169Cu;
    {
        const bool branch_taken_0x16169c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16169c) {
            ctx->pc = 0x1616B0u;
            goto label_1616b0;
        }
    }
    ctx->pc = 0x1616A4u;
    // 0x1616a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1616A4u;
    {
        const bool branch_taken_0x1616a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1616a4) {
            ctx->pc = 0x1616F8u;
            goto label_1616f8;
        }
    }
    ctx->pc = 0x1616ACu;
    // 0x1616ac: 0x0  nop
    ctx->pc = 0x1616acu;
    // NOP
label_1616b0:
    // 0x1616b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1616b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616b4: 0xc05d188  jal         func_174620
    ctx->pc = 0x1616B4u;
    SET_GPR_U32(ctx, 31, 0x1616BCu);
    ctx->pc = 0x1616B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616B4u;
    // 0x1616b8: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174620u, 0x1616B4u, 0x1616BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1616BCu;
label_1616bc:
    // 0x1616bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1616BCu;
    {
        const bool branch_taken_0x1616bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1616C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616BCu;
        // 0x1616c0: 0xa68200aa  sh          $v0, 0xAA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 170), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616bc) {
            ctx->pc = 0x161708u;
            goto label_161708;
        }
    }
    ctx->pc = 0x1616C4u;
    // 0x1616c4: 0x0  nop
    ctx->pc = 0x1616c4u;
    // NOP
label_1616c8:
    // 0x1616c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1616c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616cc: 0xc05d1f8  jal         func_1747E0
    ctx->pc = 0x1616CCu;
    SET_GPR_U32(ctx, 31, 0x1616D4u);
    ctx->pc = 0x1616D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616CCu;
    // 0x1616d0: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1747E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1747E0u, 0x1616CCu, 0x1616D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1616D4u;
label_1616d4:
    // 0x1616d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1616D4u;
    {
        const bool branch_taken_0x1616d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1616D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616D4u;
        // 0x1616d8: 0xa68200aa  sh          $v0, 0xAA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 170), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616d4) {
            ctx->pc = 0x161708u;
            goto label_161708;
        }
    }
    ctx->pc = 0x1616DCu;
    // 0x1616dc: 0x0  nop
    ctx->pc = 0x1616dcu;
    // NOP
label_1616e0:
    // 0x1616e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1616e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616e4: 0xc05d26c  jal         func_1749B0
    ctx->pc = 0x1616E4u;
    SET_GPR_U32(ctx, 31, 0x1616ECu);
    ctx->pc = 0x1616E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616E4u;
    // 0x1616e8: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1749B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1749B0u, 0x1616E4u, 0x1616ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1616ECu;
label_1616ec:
    // 0x1616ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1616ECu;
    {
        const bool branch_taken_0x1616ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1616F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616ECu;
        // 0x1616f0: 0xa68200aa  sh          $v0, 0xAA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 170), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616ec) {
            ctx->pc = 0x161708u;
            goto label_161708;
        }
    }
    ctx->pc = 0x1616F4u;
    // 0x1616f4: 0x0  nop
    ctx->pc = 0x1616f4u;
    // NOP
label_1616f8:
    // 0x1616f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1616f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616fc: 0xc05d2e8  jal         func_174BA0
    ctx->pc = 0x1616FCu;
    SET_GPR_U32(ctx, 31, 0x161704u);
    ctx->pc = 0x161700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616FCu;
    // 0x161700: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174BA0u, 0x1616FCu, 0x161704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161704u;
label_161704:
    // 0x161704: 0xa68200aa  sh          $v0, 0xAA($s4)
    ctx->pc = 0x161704u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 170), (uint16_t)GPR_U32(ctx, 2));
label_161708:
    // 0x161708: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x161708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16170c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16170cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161710: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x161710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161714: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x161714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16171c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16171cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161720: 0x3e00008  jr          $ra
    ctx->pc = 0x161720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161720u;
        // 0x161724: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161728u;
}

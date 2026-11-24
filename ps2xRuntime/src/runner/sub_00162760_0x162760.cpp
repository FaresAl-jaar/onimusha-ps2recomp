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

// Function: sub_00162760
// Address: 0x162760 - 0x162b68
void sub_00162760_0x162760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162760_0x162760");
#endif

    ctx->pc = 0x162760u;

    // 0x162760: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x162760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x162764: 0x9066000d  lbu         $a2, 0xD($v1)
    ctx->pc = 0x162764u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x162768: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x162768u;
    {
        const bool branch_taken_0x162768 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162768u;
        // 0x16276c: 0x9067000f  lbu         $a3, 0xF($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162768) {
            ctx->pc = 0x1627B8u;
            goto label_1627b8;
        }
    }
    ctx->pc = 0x162770u;
    // 0x162770: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162774: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x162774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x162778: 0x8c25cebc  lw          $a1, -0x3144($at)
    ctx->pc = 0x162778u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x16277c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x16277cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x162780: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x162780u;
    {
        const bool branch_taken_0x162780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162780u;
        // 0x162784: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162780) {
            ctx->pc = 0x1627A0u;
            goto label_1627a0;
        }
    }
    ctx->pc = 0x162788u;
    // 0x162788: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x162788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x16278c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16278Cu;
    {
        const bool branch_taken_0x16278c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16278c) {
            ctx->pc = 0x1627B8u;
            goto label_1627b8;
        }
    }
    ctx->pc = 0x162794u;
    // 0x162794: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x162794u;
    {
        const bool branch_taken_0x162794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162794u;
        // 0x162798: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162794) {
            ctx->pc = 0x1627E8u;
            goto label_1627e8;
        }
    }
    ctx->pc = 0x16279Cu;
    // 0x16279c: 0x0  nop
    ctx->pc = 0x16279cu;
    // NOP
label_1627a0:
    // 0x1627a0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1627a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1627a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1627a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1627a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1627A8u;
    {
        const bool branch_taken_0x1627a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1627ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627A8u;
        // 0x1627ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627a8) {
            ctx->pc = 0x1627B8u;
            goto label_1627b8;
        }
    }
    ctx->pc = 0x1627B0u;
    // 0x1627b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1627B0u;
    {
        const bool branch_taken_0x1627b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1627b0) {
            ctx->pc = 0x1627E8u;
            goto label_1627e8;
        }
    }
    ctx->pc = 0x1627B8u;
label_1627b8:
    // 0x1627b8: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1627B8u;
    {
        const bool branch_taken_0x1627b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1627BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627B8u;
        // 0x1627bc: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627b8) {
            ctx->pc = 0x1627E0u;
            goto label_1627e0;
        }
    }
    ctx->pc = 0x1627C0u;
    // 0x1627c0: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x1627c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1627c4: 0x902368a3  lbu         $v1, 0x68A3($at)
    ctx->pc = 0x1627c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26787)));
    // 0x1627c8: 0xa31827  nor         $v1, $a1, $v1
    ctx->pc = 0x1627c8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 3)));
    // 0x1627cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1627ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1627d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1627D0u;
    {
        const bool branch_taken_0x1627d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1627D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627D0u;
        // 0x1627d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627d0) {
            ctx->pc = 0x1627E0u;
            goto label_1627e0;
        }
    }
    ctx->pc = 0x1627D8u;
    // 0x1627d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1627D8u;
    {
        const bool branch_taken_0x1627d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1627d8) {
            ctx->pc = 0x1627E8u;
            goto label_1627e8;
        }
    }
    ctx->pc = 0x1627E0u;
label_1627e0:
    // 0x1627e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1627e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1627e4: 0x0  nop
    ctx->pc = 0x1627e4u;
    // NOP
label_1627e8:
    // 0x1627e8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1627E8u;
    {
        const bool branch_taken_0x1627e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1627e8) {
            ctx->pc = 0x162800u;
            goto label_162800;
        }
    }
    ctx->pc = 0x1627F0u;
    // 0x1627f0: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x1627f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1627f4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1627f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1627f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1627F8u;
    {
        const bool branch_taken_0x1627f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1627FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627F8u;
        // 0x1627fc: 0xa4830010  sh          $v1, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627f8) {
            ctx->pc = 0x162810u;
            goto label_162810;
        }
    }
    ctx->pc = 0x162800u;
label_162800:
    // 0x162800: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x162800u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x162804: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x162804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x162808: 0xa4830010  sh          $v1, 0x10($a0)
    ctx->pc = 0x162808u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x16280c: 0x0  nop
    ctx->pc = 0x16280cu;
    // NOP
label_162810:
    // 0x162810: 0x90830098  lbu         $v1, 0x98($a0)
    ctx->pc = 0x162810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x162814: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x162814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x162818: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x162818u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16281c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x16281Cu;
    {
        const bool branch_taken_0x16281c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16281c) {
            ctx->pc = 0x1628D0u;
            goto label_1628d0;
        }
    }
    ctx->pc = 0x162824u;
    // 0x162824: 0x8083009a  lb          $v1, 0x9A($a0)
    ctx->pc = 0x162824u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x162828: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x162828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16282c: 0xa083009a  sb          $v1, 0x9A($a0)
    ctx->pc = 0x16282cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 154), (uint8_t)GPR_U32(ctx, 3));
    // 0x162830: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x162830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x162834: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x162834u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x162838: 0x1c600019  bgtz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x162838u;
    {
        const bool branch_taken_0x162838 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x162838) {
            ctx->pc = 0x1628A0u;
            goto label_1628a0;
        }
    }
    ctx->pc = 0x162840u;
    // 0x162840: 0x9087009b  lbu         $a3, 0x9B($a0)
    ctx->pc = 0x162840u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 155)));
    // 0x162844: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x162844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x162848: 0x90850099  lbu         $a1, 0x99($a0)
    ctx->pc = 0x162848u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 153)));
    // 0x16284c: 0x90860098  lbu         $a2, 0x98($a0)
    ctx->pc = 0x16284cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x162850: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x162850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x162854: 0x30c50030  andi        $a1, $a2, 0x30
    ctx->pc = 0x162854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)48);
    // 0x162858: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x162858u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x16285c: 0xa32807  srav        $a1, $v1, $a1
    ctx->pc = 0x16285cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x162860: 0xa7082b  sltu        $at, $a1, $a3
    ctx->pc = 0x162860u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x162864: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x162864u;
    {
        const bool branch_taken_0x162864 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x162868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162864u;
        // 0x162868: 0x30c30080  andi        $v1, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162864) {
            ctx->pc = 0x162890u;
            goto label_162890;
        }
    }
    ctx->pc = 0x16286Cu;
    // 0x16286c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16286Cu;
    {
        const bool branch_taken_0x16286c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16286Cu;
        // 0x162870: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16286c) {
            ctx->pc = 0x162880u;
            goto label_162880;
        }
    }
    ctx->pc = 0x162874u;
    // 0x162874: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x162874u;
    {
        const bool branch_taken_0x162874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162874) {
            ctx->pc = 0x162890u;
            goto label_162890;
        }
    }
    ctx->pc = 0x16287Cu;
    // 0x16287c: 0x0  nop
    ctx->pc = 0x16287cu;
    // NOP
label_162880:
    // 0x162880: 0x30c300bf  andi        $v1, $a2, 0xBF
    ctx->pc = 0x162880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)191);
    // 0x162884: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x162884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162888: 0xa0830098  sb          $v1, 0x98($a0)
    ctx->pc = 0x162888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 3));
    // 0x16288c: 0x0  nop
    ctx->pc = 0x16288cu;
    // NOP
label_162890:
    // 0x162890: 0xa087009b  sb          $a3, 0x9B($a0)
    ctx->pc = 0x162890u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 155), (uint8_t)GPR_U32(ctx, 7));
    // 0x162894: 0x90830098  lbu         $v1, 0x98($a0)
    ctx->pc = 0x162894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x162898: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x162898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x16289c: 0xa083009a  sb          $v1, 0x9A($a0)
    ctx->pc = 0x16289cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 154), (uint8_t)GPR_U32(ctx, 3));
label_1628a0:
    // 0x1628a0: 0x9087009b  lbu         $a3, 0x9B($a0)
    ctx->pc = 0x1628a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 155)));
    // 0x1628a4: 0x8c86009c  lw          $a2, 0x9C($a0)
    ctx->pc = 0x1628a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x1628a8: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1628a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1628ac: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x1628acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1628b0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1628b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1628b4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1628b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1628b8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1628b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1628bc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1628bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1628c0: 0x52a3c  dsll32      $a1, $a1, 8
    ctx->pc = 0x1628c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 8));
    // 0x1628c4: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x1628c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x1628c8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1628c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1628cc: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x1628ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_1628d0:
    // 0x1628d0: 0x908300a0  lbu         $v1, 0xA0($a0)
    ctx->pc = 0x1628d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x1628d4: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1628D4u;
    {
        const bool branch_taken_0x1628d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1628d4) {
            ctx->pc = 0x162A18u;
            goto label_162a18;
        }
    }
    ctx->pc = 0x1628DCu;
    // 0x1628dc: 0x908300a1  lbu         $v1, 0xA1($a0)
    ctx->pc = 0x1628dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 161)));
    // 0x1628e0: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1628E0u;
    {
        const bool branch_taken_0x1628e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1628E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628E0u;
        // 0x1628e4: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628e0) {
            ctx->pc = 0x162990u;
            goto label_162990;
        }
    }
    ctx->pc = 0x1628E8u;
    // 0x1628e8: 0x848700a2  lh          $a3, 0xA2($a0)
    ctx->pc = 0x1628e8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 162)));
    // 0x1628ec: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1628ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1628f0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1628f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1628f4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1628f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1628f8: 0x24c66540  addiu       $a2, $a2, 0x6540
    ctx->pc = 0x1628f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25920));
    // 0x1628fc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1628fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x162900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x162900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162904: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x162904u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x162908: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x162908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x16290c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16290cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x162910: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x162910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x162914: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x162914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x162918: 0xc48100a4  lwc1        $f1, 0xA4($a0)
    ctx->pc = 0x162918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16291c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x16291cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x162920: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x162920u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x162924: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x162924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x162928: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x162928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16292c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x16292Cu;
    {
        const bool branch_taken_0x16292c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16292c) {
            ctx->pc = 0x162944u;
            goto label_162944;
        }
    }
    ctx->pc = 0x162934u;
    // 0x162934: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x162934u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x162938: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x162938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x16293c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16293Cu;
    {
        const bool branch_taken_0x16293c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16293Cu;
        // 0x162940: 0x8c830090  lw          $v1, 0x90($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16293c) {
            ctx->pc = 0x162960u;
            goto label_162960;
        }
    }
    ctx->pc = 0x162944u;
label_162944:
    // 0x162944: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x162944u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x162948: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x162948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16294c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16294cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x162950: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x162950u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x162954: 0x0  nop
    ctx->pc = 0x162954u;
    // NOP
    // 0x162958: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x162958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x16295c: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x16295cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_162960:
    // 0x162960: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x162960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x162964: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x162964u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x162968: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x162968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16296c: 0xa0830023  sb          $v1, 0x23($a0)
    ctx->pc = 0x16296cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x162970: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x162970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x162974: 0x948300a2  lhu         $v1, 0xA2($a0)
    ctx->pc = 0x162974u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 162)));
    // 0x162978: 0x94a50032  lhu         $a1, 0x32($a1)
    ctx->pc = 0x162978u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x16297c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16297cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x162980: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x162980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x162984: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x162984u;
    {
        const bool branch_taken_0x162984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162984u;
        // 0x162988: 0xa48300a2  sh          $v1, 0xA2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 162), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162984) {
            ctx->pc = 0x162A18u;
            goto label_162a18;
        }
    }
    ctx->pc = 0x16298Cu;
    // 0x16298c: 0x0  nop
    ctx->pc = 0x16298cu;
    // NOP
label_162990:
    // 0x162990: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162994: 0x8c25f008  lw          $a1, -0xFF8($at)
    ctx->pc = 0x162994u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F008u));
    // 0x162998: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x162998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x16299c: 0x90870023  lbu         $a3, 0x23($a0)
    ctx->pc = 0x16299cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x1629a0: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x1629a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1629a4: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x1629a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1629a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1629a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1629ac: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1629acu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1629b0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1629b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1629b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1629b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1629b8: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x1629b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x1629bc: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x1629bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x1629c0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1629c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1629c4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1629c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1629c8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1629C8u;
    {
        const bool branch_taken_0x1629c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1629c8) {
            ctx->pc = 0x1629F0u;
            goto label_1629f0;
        }
    }
    ctx->pc = 0x1629D0u;
    // 0x1629d0: 0x908300a4  lbu         $v1, 0xA4($a0)
    ctx->pc = 0x1629d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1629d4: 0x908500a3  lbu         $a1, 0xA3($a0)
    ctx->pc = 0x1629d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 163)));
    // 0x1629d8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1629d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1629dc: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x1629dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1629e0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1629E0u;
    {
        const bool branch_taken_0x1629e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1629e0) {
            ctx->pc = 0x162A10u;
            goto label_162a10;
        }
    }
    ctx->pc = 0x1629E8u;
    // 0x1629e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1629E8u;
    {
        const bool branch_taken_0x1629e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1629ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1629E8u;
        // 0x1629ec: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1629e8) {
            ctx->pc = 0x162A10u;
            goto label_162a10;
        }
    }
    ctx->pc = 0x1629F0u;
label_1629f0:
    // 0x1629f0: 0x908300a4  lbu         $v1, 0xA4($a0)
    ctx->pc = 0x1629f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1629f4: 0x908500a2  lbu         $a1, 0xA2($a0)
    ctx->pc = 0x1629f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 162)));
    // 0x1629f8: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x1629f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1629fc: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x1629fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x162a00: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x162A00u;
    {
        const bool branch_taken_0x162a00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a00) {
            ctx->pc = 0x162A10u;
            goto label_162a10;
        }
    }
    ctx->pc = 0x162A08u;
    // 0x162a08: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x162a08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a0c: 0x0  nop
    ctx->pc = 0x162a0cu;
    // NOP
label_162a10:
    // 0x162a10: 0xa0830023  sb          $v1, 0x23($a0)
    ctx->pc = 0x162a10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x162a14: 0x0  nop
    ctx->pc = 0x162a14u;
    // NOP
label_162a18:
    // 0x162a18: 0x908300a8  lbu         $v1, 0xA8($a0)
    ctx->pc = 0x162a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x162a1c: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x162A1Cu;
    {
        const bool branch_taken_0x162a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a1c) {
            ctx->pc = 0x162B60u;
            goto label_162b60;
        }
    }
    ctx->pc = 0x162A24u;
    // 0x162a24: 0x908300a9  lbu         $v1, 0xA9($a0)
    ctx->pc = 0x162a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 169)));
    // 0x162a28: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x162A28u;
    {
        const bool branch_taken_0x162a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x162A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A28u;
        // 0x162a2c: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a28) {
            ctx->pc = 0x162AD8u;
            goto label_162ad8;
        }
    }
    ctx->pc = 0x162A30u;
    // 0x162a30: 0x848700aa  lh          $a3, 0xAA($a0)
    ctx->pc = 0x162a30u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x162a34: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x162a34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x162a38: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x162a38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x162a3c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x162a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x162a40: 0x24c66540  addiu       $a2, $a2, 0x6540
    ctx->pc = 0x162a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25920));
    // 0x162a44: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x162a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x162a48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x162a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162a4c: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x162a4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x162a50: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x162a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x162a54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x162a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x162a58: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x162a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x162a5c: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x162a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x162a60: 0xc48100ac  lwc1        $f1, 0xAC($a0)
    ctx->pc = 0x162a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162a64: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x162a64u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x162a68: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x162a68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x162a6c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x162a6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x162a70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x162a70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162a74: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x162A74u;
    {
        const bool branch_taken_0x162a74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162a74) {
            ctx->pc = 0x162A8Cu;
            goto label_162a8c;
        }
    }
    ctx->pc = 0x162A7Cu;
    // 0x162a7c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x162a7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x162a80: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x162a80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x162a84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x162A84u;
    {
        const bool branch_taken_0x162a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162A84u;
        // 0x162a88: 0x8c830090  lw          $v1, 0x90($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a84) {
            ctx->pc = 0x162AA8u;
            goto label_162aa8;
        }
    }
    ctx->pc = 0x162A8Cu;
label_162a8c:
    // 0x162a8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x162a8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x162a90: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x162a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x162a94: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x162a94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x162a98: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x162a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x162a9c: 0x0  nop
    ctx->pc = 0x162a9cu;
    // NOP
    // 0x162aa0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x162aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x162aa4: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x162aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_162aa8:
    // 0x162aa8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x162aa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x162aac: 0x94630024  lhu         $v1, 0x24($v1)
    ctx->pc = 0x162aacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x162ab0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x162ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x162ab4: 0xa4830028  sh          $v1, 0x28($a0)
    ctx->pc = 0x162ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x162ab8: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x162ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x162abc: 0x948300aa  lhu         $v1, 0xAA($a0)
    ctx->pc = 0x162abcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x162ac0: 0x94a50036  lhu         $a1, 0x36($a1)
    ctx->pc = 0x162ac0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 54)));
    // 0x162ac4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x162ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x162ac8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x162ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x162acc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x162ACCu;
    {
        const bool branch_taken_0x162acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162ACCu;
        // 0x162ad0: 0xa48300aa  sh          $v1, 0xAA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 170), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162acc) {
            ctx->pc = 0x162B60u;
            goto label_162b60;
        }
    }
    ctx->pc = 0x162AD4u;
    // 0x162ad4: 0x0  nop
    ctx->pc = 0x162ad4u;
    // NOP
label_162ad8:
    // 0x162ad8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162adc: 0x8c25f008  lw          $a1, -0xFF8($at)
    ctx->pc = 0x162adcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F008u));
    // 0x162ae0: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x162ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x162ae4: 0x94870028  lhu         $a3, 0x28($a0)
    ctx->pc = 0x162ae4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x162ae8: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x162ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x162aec: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x162aecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x162af0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162af4: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x162af4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x162af8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x162af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x162afc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x162afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x162b00: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x162b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x162b04: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x162b04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x162b08: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x162b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x162b0c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x162b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x162b10: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x162B10u;
    {
        const bool branch_taken_0x162b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162b10) {
            ctx->pc = 0x162B38u;
            goto label_162b38;
        }
    }
    ctx->pc = 0x162B18u;
    // 0x162b18: 0x948300ae  lhu         $v1, 0xAE($a0)
    ctx->pc = 0x162b18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 174)));
    // 0x162b1c: 0x948500ac  lhu         $a1, 0xAC($a0)
    ctx->pc = 0x162b1cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x162b20: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x162b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x162b24: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x162b24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x162b28: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x162B28u;
    {
        const bool branch_taken_0x162b28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x162b28) {
            ctx->pc = 0x162B58u;
            goto label_162b58;
        }
    }
    ctx->pc = 0x162B30u;
    // 0x162b30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x162B30u;
    {
        const bool branch_taken_0x162b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B30u;
        // 0x162b34: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b30) {
            ctx->pc = 0x162B58u;
            goto label_162b58;
        }
    }
    ctx->pc = 0x162B38u;
label_162b38:
    // 0x162b38: 0x948300ae  lhu         $v1, 0xAE($a0)
    ctx->pc = 0x162b38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 174)));
    // 0x162b3c: 0x948500aa  lhu         $a1, 0xAA($a0)
    ctx->pc = 0x162b3cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x162b40: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x162b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x162b44: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x162b44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x162b48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x162B48u;
    {
        const bool branch_taken_0x162b48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x162b48) {
            ctx->pc = 0x162B58u;
            goto label_162b58;
        }
    }
    ctx->pc = 0x162B50u;
    // 0x162b50: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x162b50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b54: 0x0  nop
    ctx->pc = 0x162b54u;
    // NOP
label_162b58:
    // 0x162b58: 0xa4830028  sh          $v1, 0x28($a0)
    ctx->pc = 0x162b58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x162b5c: 0x0  nop
    ctx->pc = 0x162b5cu;
    // NOP
label_162b60:
    // 0x162b60: 0x3e00008  jr          $ra
    ctx->pc = 0x162B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162B68u;
}

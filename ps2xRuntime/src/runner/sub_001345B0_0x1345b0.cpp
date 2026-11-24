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

// Function: sub_001345B0
// Address: 0x1345b0 - 0x134a54
void sub_001345B0_0x1345b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001345B0_0x1345b0");
#endif

    switch (ctx->pc) {
        case 0x134600u: goto label_134600;
        case 0x134678u: goto label_134678;
        case 0x1346b0u: goto label_1346b0;
        case 0x134768u: goto label_134768;
        case 0x134798u: goto label_134798;
        default: break;
    }

    ctx->pc = 0x1345b0u;

    // 0x1345b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1345b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1345b4: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x1345b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1345b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1345b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1345bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1345bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1345c0: 0x24be0010  addiu       $fp, $a1, 0x10
    ctx->pc = 0x1345c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1345c4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1345c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1345c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1345c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1345cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1345ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1345d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1345d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1345d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1345d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1345d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1345d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1345dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1345dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1345e0: 0x90a6000b  lbu         $a2, 0xB($a1)
    ctx->pc = 0x1345e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x1345e4: 0x90a3001c  lbu         $v1, 0x1C($a1)
    ctx->pc = 0x1345e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1345e8: 0x94970008  lhu         $s7, 0x8($a0)
    ctx->pc = 0x1345e8u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1345ec: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1345ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1345f0: 0x28610000  slti        $at, $v1, 0x0
    ctx->pc = 0x1345f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1345f4: 0x1420010c  bnez        $at, . + 4 + (0x10C << 2)
    ctx->pc = 0x1345F4u;
    {
        const bool branch_taken_0x1345f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1345F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345F4u;
        // 0x1345f8: 0x3c6c821  addu        $t9, $fp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345f4) {
            ctx->pc = 0x134A28u;
            goto label_134a28;
        }
    }
    ctx->pc = 0x1345FCu;
    // 0x1345fc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1345fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_134600:
    // 0x134600: 0x93c80008  lbu         $t0, 0x8($fp)
    ctx->pc = 0x134600u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x134604: 0x93c7000a  lbu         $a3, 0xA($fp)
    ctx->pc = 0x134604u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x134608: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x134608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13460c: 0x1063004  sllv        $a2, $a2, $t0
    ctx->pc = 0x13460cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
    // 0x134610: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x134610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x134614: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x134614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x134618: 0x10e6004d  beq         $a3, $a2, . + 4 + (0x4D << 2)
    ctx->pc = 0x134618u;
    {
        const bool branch_taken_0x134618 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x13461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134618u;
        // 0x13461c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134618) {
            ctx->pc = 0x134750u;
            goto label_134750;
        }
    }
    ctx->pc = 0x134620u;
    // 0x134620: 0x10e6004b  beq         $a3, $a2, . + 4 + (0x4B << 2)
    ctx->pc = 0x134620u;
    {
        const bool branch_taken_0x134620 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x134620) {
            ctx->pc = 0x134750u;
            goto label_134750;
        }
    }
    ctx->pc = 0x134628u;
    // 0x134628: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x134628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x13462c: 0x10e60008  beq         $a3, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x13462Cu;
    {
        const bool branch_taken_0x13462c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x134630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13462Cu;
        // 0x134630: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13462c) {
            ctx->pc = 0x134650u;
            goto label_134650;
        }
    }
    ctx->pc = 0x134634u;
    // 0x134634: 0x10e60006  beq         $a3, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x134634u;
    {
        const bool branch_taken_0x134634 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x134634) {
            ctx->pc = 0x134650u;
            goto label_134650;
        }
    }
    ctx->pc = 0x13463Cu;
    // 0x13463c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x13463cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x134640: 0x10e60003  beq         $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x134640u;
    {
        const bool branch_taken_0x134640 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x134640) {
            ctx->pc = 0x134650u;
            goto label_134650;
        }
    }
    ctx->pc = 0x134648u;
    // 0x134648: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x134648u;
    {
        const bool branch_taken_0x134648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134648) {
            ctx->pc = 0x1349F8u;
            goto label_1349f8;
        }
    }
    ctx->pc = 0x134650u;
label_134650:
    // 0x134650: 0x93260009  lbu         $a2, 0x9($t9)
    ctx->pc = 0x134650u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 9)));
    // 0x134654: 0x8fc80000  lw          $t0, 0x0($fp)
    ctx->pc = 0x134654u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x134658: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x134658u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13465c: 0x8f270000  lw          $a3, 0x0($t9)
    ctx->pc = 0x13465cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x134660: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x134660u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x134664: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x134664u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x134668: 0xa88821  addu        $s1, $a1, $t0
    ctx->pc = 0x134668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x13466c: 0x102000e2  beqz        $at, . + 4 + (0xE2 << 2)
    ctx->pc = 0x13466Cu;
    {
        const bool branch_taken_0x13466c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x134670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13466Cu;
        // 0x134670: 0xa78021  addu        $s0, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13466c) {
            ctx->pc = 0x1349F8u;
            goto label_1349f8;
        }
    }
    ctx->pc = 0x134674u;
    // 0x134674: 0x0  nop
    ctx->pc = 0x134674u;
    // NOP
label_134678:
    // 0x134678: 0x31e70004  andi        $a3, $t7, 0x4
    ctx->pc = 0x134678u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)4);
    // 0x13467c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x13467cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x134680: 0x31e80003  andi        $t0, $t7, 0x3
    ctx->pc = 0x134680u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)3);
    // 0x134684: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x134684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x134688: 0x31e90002  andi        $t1, $t7, 0x2
    ctx->pc = 0x134688u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2);
    // 0x13468c: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x13468cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x134690: 0x96040  sll         $t4, $t1, 1
    ctx->pc = 0x134690u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x134694: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x134694u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x134698: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x134698u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13469c: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x13469cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1346a0: 0xc86818  mult        $t5, $a2, $t0
    ctx->pc = 0x1346a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1346a4: 0x31e60001  andi        $a2, $t7, 0x1
    ctx->pc = 0x1346a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x1346a8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1346a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1346ac: 0x658c0  sll         $t3, $a2, 3
    ctx->pc = 0x1346acu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1346b0:
    // 0x1346b0: 0x5a10003  bgez        $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1346B0u;
    {
        const bool branch_taken_0x1346b0 = (GPR_S64(ctx, 13) >= 0);
        ctx->pc = 0x1346B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346B0u;
        // 0x1346b4: 0xd3043  sra         $a2, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346b0) {
            ctx->pc = 0x1346C0u;
            goto label_1346c0;
        }
    }
    ctx->pc = 0x1346B8u;
    // 0x1346b8: 0x25a60001  addiu       $a2, $t5, 0x1
    ctx->pc = 0x1346b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1346bc: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1346bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_1346c0:
    // 0x1346c0: 0x2264821  addu        $t1, $s1, $a2
    ctx->pc = 0x1346c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1346c4: 0x31c70008  andi        $a3, $t6, 0x8
    ctx->pc = 0x1346c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
    // 0x1346c8: 0x31860007  andi        $a2, $t4, 0x7
    ctx->pc = 0x1346c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)7);
    // 0x1346cc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1346ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1346d0: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x1346d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1346d4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1346d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1346d8: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x1346d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1346dc: 0x31c60010  andi        $a2, $t6, 0x10
    ctx->pc = 0x1346dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
    // 0x1346e0: 0x2089021  addu        $s2, $s0, $t0
    ctx->pc = 0x1346e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1346e4: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x1346e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1346e8: 0xe64021  addu        $t0, $a3, $a2
    ctx->pc = 0x1346e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1346ec: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1346ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1346f0: 0x31c60001  andi        $a2, $t6, 0x1
    ctx->pc = 0x1346f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x1346f4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1346f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1346f8: 0x39d20001  xori        $s2, $t6, 0x1
    ctx->pc = 0x1346f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)1);
    // 0x1346fc: 0x1074006  srlv        $t0, $a3, $t0
    ctx->pc = 0x1346fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 8) & 0x1F));
    // 0x134700: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x134700u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x134704: 0x3108000f  andi        $t0, $t0, 0xF
    ctx->pc = 0x134704u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x134708: 0x129880  sll         $s3, $s2, 2
    ctx->pc = 0x134708u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13470c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x13470cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x134710: 0x91320000  lbu         $s2, 0x0($t1)
    ctx->pc = 0x134710u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x134714: 0x2639804  sllv        $s3, $v1, $s3
    ctx->pc = 0x134714u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x134718: 0xc84004  sllv        $t0, $t0, $a2
    ctx->pc = 0x134718u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x13471c: 0x29c70020  slti        $a3, $t6, 0x20
    ctx->pc = 0x13471cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x134720: 0x2723024  and         $a2, $s3, $s2
    ctx->pc = 0x134720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & GPR_U64(ctx, 18));
    // 0x134724: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x134724u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x134728: 0x14e0ffe1  bnez        $a3, . + 4 + (-0x1F << 2)
    ctx->pc = 0x134728u;
    {
        const bool branch_taken_0x134728 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x13472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134728u;
        // 0x13472c: 0xa1260000  sb          $a2, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134728) {
            ctx->pc = 0x1346B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1346b0;
        }
    }
    ctx->pc = 0x134730u;
    // 0x134730: 0x93260009  lbu         $a2, 0x9($t9)
    ctx->pc = 0x134730u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 9)));
    // 0x134734: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x134734u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x134738: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x134738u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13473c: 0x1e6302a  slt         $a2, $t7, $a2
    ctx->pc = 0x13473cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x134740: 0x14c0ffcd  bnez        $a2, . + 4 + (-0x33 << 2)
    ctx->pc = 0x134740u;
    {
        const bool branch_taken_0x134740 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x134740) {
            ctx->pc = 0x134678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134678;
        }
    }
    ctx->pc = 0x134748u;
    // 0x134748: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x134748u;
    {
        const bool branch_taken_0x134748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134748) {
            ctx->pc = 0x1349F8u;
            goto label_1349f8;
        }
    }
    ctx->pc = 0x134750u;
label_134750:
    // 0x134750: 0x8fc80000  lw          $t0, 0x0($fp)
    ctx->pc = 0x134750u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x134754: 0x8f260000  lw          $a2, 0x0($t9)
    ctx->pc = 0x134754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x134758: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x134758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13475c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x13475cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134760: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x134760u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x134764: 0xa64021  addu        $t0, $a1, $a2
    ctx->pc = 0x134764u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_134768:
    // 0x134768: 0x30ea0002  andi        $t2, $a3, 0x2
    ctx->pc = 0x134768u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x13476c: 0xa7040  sll         $t6, $t2, 1
    ctx->pc = 0x13476cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x134770: 0xa5880  sll         $t3, $t2, 2
    ctx->pc = 0x134770u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x134774: 0x30ea001c  andi        $t2, $a3, 0x1C
    ctx->pc = 0x134774u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)28);
    // 0x134778: 0x30f00001  andi        $s0, $a3, 0x1
    ctx->pc = 0x134778u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x13477c: 0xa6843  sra         $t5, $t2, 1
    ctx->pc = 0x13477cu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 10), 1));
    // 0x134780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x134780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134784: 0x20d6821  addu        $t5, $s0, $t5
    ctx->pc = 0x134784u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x134788: 0x30ec0004  andi        $t4, $a3, 0x4
    ctx->pc = 0x134788u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x13478c: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x13478cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134790: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x134790u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x134794: 0x0  nop
    ctx->pc = 0x134794u;
    // NOP
label_134798:
    // 0x134798: 0x18e9021  addu        $s2, $t4, $t6
    ctx->pc = 0x134798u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x13479c: 0x32530007  andi        $s3, $s2, 0x7
    ctx->pc = 0x13479cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x1347a0: 0x30d10010  andi        $s1, $a2, 0x10
    ctx->pc = 0x1347a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x1347a4: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x1347a4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x1347a8: 0x26d9821  addu        $s3, $s3, $t5
    ctx->pc = 0x1347a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x1347ac: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x1347acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1347b0: 0x24d60001  addiu       $s6, $a2, 0x1
    ctx->pc = 0x1347b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1347b4: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1347b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1347b8: 0x2caa821  addu        $s5, $s6, $t2
    ctx->pc = 0x1347b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
    // 0x1347bc: 0x1118821  addu        $s1, $t0, $s1
    ctx->pc = 0x1347bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x1347c0: 0x30d20008  andi        $s2, $a2, 0x8
    ctx->pc = 0x1347c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x1347c4: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1347c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1347c8: 0x195a821  addu        $s5, $t4, $s5
    ctx->pc = 0x1347c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 21)));
    // 0x1347cc: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1347ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1347d0: 0x32d40010  andi        $s4, $s6, 0x10
    ctx->pc = 0x1347d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
    // 0x1347d4: 0x2cf9821  addu        $s3, $s6, $t7
    ctx->pc = 0x1347d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 15)));
    // 0x1347d8: 0x32b50007  andi        $s5, $s5, 0x7
    ctx->pc = 0x1347d8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
    // 0x1347dc: 0xcf8021  addu        $s0, $a2, $t7
    ctx->pc = 0x1347dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x1347e0: 0x24b9021  addu        $s2, $s2, $t3
    ctx->pc = 0x1347e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x1347e4: 0x32d60008  andi        $s6, $s6, 0x8
    ctx->pc = 0x1347e4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
    // 0x1347e8: 0x14a043  sra         $s4, $s4, 1
    ctx->pc = 0x1347e8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 20), 1));
    // 0x1347ec: 0x2ada821  addu        $s5, $s5, $t5
    ctx->pc = 0x1347ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x1347f0: 0x1308021  addu        $s0, $t1, $s0
    ctx->pc = 0x1347f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x1347f4: 0x2518806  srlv        $s1, $s1, $s2
    ctx->pc = 0x1347f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 18) & 0x1F));
    // 0x1347f8: 0x295a821  addu        $s5, $s4, $s5
    ctx->pc = 0x1347f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x1347fc: 0x159080  sll         $s2, $s5, 2
    ctx->pc = 0x1347fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x134800: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x134800u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x134804: 0x1128021  addu        $s0, $t0, $s2
    ctx->pc = 0x134804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x134808: 0x16b040  sll         $s6, $s6, 1
    ctx->pc = 0x134808u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x13480c: 0x24d20002  addiu       $s2, $a2, 0x2
    ctx->pc = 0x13480cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x134810: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x134810u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x134814: 0x24a8821  addu        $s1, $s2, $t2
    ctx->pc = 0x134814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
    // 0x134818: 0x2cba021  addu        $s4, $s6, $t3
    ctx->pc = 0x134818u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 11)));
    // 0x13481c: 0x1918821  addu        $s1, $t4, $s1
    ctx->pc = 0x13481cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x134820: 0x32560010  andi        $s6, $s2, 0x10
    ctx->pc = 0x134820u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x134824: 0x32310007  andi        $s1, $s1, 0x7
    ctx->pc = 0x134824u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x134828: 0x16b043  sra         $s6, $s6, 1
    ctx->pc = 0x134828u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 22), 1));
    // 0x13482c: 0x22d8821  addu        $s1, $s1, $t5
    ctx->pc = 0x13482cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x134830: 0x1339821  addu        $s3, $t1, $s3
    ctx->pc = 0x134830u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x134834: 0x2d18821  addu        $s1, $s6, $s1
    ctx->pc = 0x134834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x134838: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x134838u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x13483c: 0x295a006  srlv        $s4, $s5, $s4
    ctx->pc = 0x13483cu;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 21), GPR_U32(ctx, 20) & 0x1F));
    // 0x134840: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x134840u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x134844: 0xa2740000  sb          $s4, 0x0($s3)
    ctx->pc = 0x134844u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x134848: 0x1118821  addu        $s1, $t0, $s1
    ctx->pc = 0x134848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x13484c: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x13484cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x134850: 0x24d60003  addiu       $s6, $a2, 0x3
    ctx->pc = 0x134850u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x134854: 0x24f8021  addu        $s0, $s2, $t7
    ctx->pc = 0x134854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    // 0x134858: 0x2caa821  addu        $s5, $s6, $t2
    ctx->pc = 0x134858u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
    // 0x13485c: 0x32520008  andi        $s2, $s2, 0x8
    ctx->pc = 0x13485cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x134860: 0x195a821  addu        $s5, $t4, $s5
    ctx->pc = 0x134860u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 21)));
    // 0x134864: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x134864u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x134868: 0x32d40010  andi        $s4, $s6, 0x10
    ctx->pc = 0x134868u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
    // 0x13486c: 0x32b50007  andi        $s5, $s5, 0x7
    ctx->pc = 0x13486cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
    // 0x134870: 0x2cf9821  addu        $s3, $s6, $t7
    ctx->pc = 0x134870u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 15)));
    // 0x134874: 0x24b9021  addu        $s2, $s2, $t3
    ctx->pc = 0x134874u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x134878: 0x14a043  sra         $s4, $s4, 1
    ctx->pc = 0x134878u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 20), 1));
    // 0x13487c: 0x2ada821  addu        $s5, $s5, $t5
    ctx->pc = 0x13487cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x134880: 0x1308021  addu        $s0, $t1, $s0
    ctx->pc = 0x134880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x134884: 0x2518806  srlv        $s1, $s1, $s2
    ctx->pc = 0x134884u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 18) & 0x1F));
    // 0x134888: 0x295a821  addu        $s5, $s4, $s5
    ctx->pc = 0x134888u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x13488c: 0x159080  sll         $s2, $s5, 2
    ctx->pc = 0x13488cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x134890: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x134890u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x134894: 0x1128021  addu        $s0, $t0, $s2
    ctx->pc = 0x134894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x134898: 0x32d60008  andi        $s6, $s6, 0x8
    ctx->pc = 0x134898u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
    // 0x13489c: 0x24d20004  addiu       $s2, $a2, 0x4
    ctx->pc = 0x13489cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1348a0: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x1348a0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1348a4: 0x16b040  sll         $s6, $s6, 1
    ctx->pc = 0x1348a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x1348a8: 0x24a8821  addu        $s1, $s2, $t2
    ctx->pc = 0x1348a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
    // 0x1348ac: 0x2cba021  addu        $s4, $s6, $t3
    ctx->pc = 0x1348acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 11)));
    // 0x1348b0: 0x1918821  addu        $s1, $t4, $s1
    ctx->pc = 0x1348b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x1348b4: 0x32310007  andi        $s1, $s1, 0x7
    ctx->pc = 0x1348b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x1348b8: 0x32560010  andi        $s6, $s2, 0x10
    ctx->pc = 0x1348b8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x1348bc: 0x22d8821  addu        $s1, $s1, $t5
    ctx->pc = 0x1348bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x1348c0: 0x16b043  sra         $s6, $s6, 1
    ctx->pc = 0x1348c0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 22), 1));
    // 0x1348c4: 0x2d18821  addu        $s1, $s6, $s1
    ctx->pc = 0x1348c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1348c8: 0x1339821  addu        $s3, $t1, $s3
    ctx->pc = 0x1348c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x1348cc: 0x295a006  srlv        $s4, $s5, $s4
    ctx->pc = 0x1348ccu;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 21), GPR_U32(ctx, 20) & 0x1F));
    // 0x1348d0: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1348d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1348d4: 0xa2740000  sb          $s4, 0x0($s3)
    ctx->pc = 0x1348d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x1348d8: 0x1118821  addu        $s1, $t0, $s1
    ctx->pc = 0x1348d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x1348dc: 0x24d60005  addiu       $s6, $a2, 0x5
    ctx->pc = 0x1348dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1348e0: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1348e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1348e4: 0x24f8021  addu        $s0, $s2, $t7
    ctx->pc = 0x1348e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    // 0x1348e8: 0x2caa821  addu        $s5, $s6, $t2
    ctx->pc = 0x1348e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
    // 0x1348ec: 0x32520008  andi        $s2, $s2, 0x8
    ctx->pc = 0x1348ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
    // 0x1348f0: 0x195a821  addu        $s5, $t4, $s5
    ctx->pc = 0x1348f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 21)));
    // 0x1348f4: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1348f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1348f8: 0x32d40010  andi        $s4, $s6, 0x10
    ctx->pc = 0x1348f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)16);
    // 0x1348fc: 0x32b50007  andi        $s5, $s5, 0x7
    ctx->pc = 0x1348fcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
    // 0x134900: 0x24b9021  addu        $s2, $s2, $t3
    ctx->pc = 0x134900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x134904: 0x14a043  sra         $s4, $s4, 1
    ctx->pc = 0x134904u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 20), 1));
    // 0x134908: 0x2ada821  addu        $s5, $s5, $t5
    ctx->pc = 0x134908u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x13490c: 0x1308021  addu        $s0, $t1, $s0
    ctx->pc = 0x13490cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x134910: 0x2518806  srlv        $s1, $s1, $s2
    ctx->pc = 0x134910u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 18) & 0x1F));
    // 0x134914: 0x295a821  addu        $s5, $s4, $s5
    ctx->pc = 0x134914u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x134918: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x134918u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x13491c: 0x159080  sll         $s2, $s5, 2
    ctx->pc = 0x13491cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x134920: 0x2cf9821  addu        $s3, $s6, $t7
    ctx->pc = 0x134920u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 15)));
    // 0x134924: 0x1128021  addu        $s0, $t0, $s2
    ctx->pc = 0x134924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x134928: 0x32d60008  andi        $s6, $s6, 0x8
    ctx->pc = 0x134928u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)8);
    // 0x13492c: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x13492cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x134930: 0x24d10006  addiu       $s1, $a2, 0x6
    ctx->pc = 0x134930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x134934: 0x16b040  sll         $s6, $s6, 1
    ctx->pc = 0x134934u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x134938: 0x22fa821  addu        $s5, $s1, $t7
    ctx->pc = 0x134938u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    // 0x13493c: 0x2cba021  addu        $s4, $s6, $t3
    ctx->pc = 0x13493cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 11)));
    // 0x134940: 0x1339821  addu        $s3, $t1, $s3
    ctx->pc = 0x134940u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x134944: 0x32360010  andi        $s6, $s1, 0x10
    ctx->pc = 0x134944u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
    // 0x134948: 0x135a821  addu        $s5, $t1, $s5
    ctx->pc = 0x134948u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x13494c: 0x16b043  sra         $s6, $s6, 1
    ctx->pc = 0x13494cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 22), 1));
    // 0x134950: 0x22a8021  addu        $s0, $s1, $t2
    ctx->pc = 0x134950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x134954: 0x2929006  srlv        $s2, $s2, $s4
    ctx->pc = 0x134954u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 20) & 0x1F));
    // 0x134958: 0x1908021  addu        $s0, $t4, $s0
    ctx->pc = 0x134958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 16)));
    // 0x13495c: 0x32310008  andi        $s1, $s1, 0x8
    ctx->pc = 0x13495cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
    // 0x134960: 0x32100007  andi        $s0, $s0, 0x7
    ctx->pc = 0x134960u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x134964: 0x118840  sll         $s1, $s1, 1
    ctx->pc = 0x134964u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x134968: 0x20d8021  addu        $s0, $s0, $t5
    ctx->pc = 0x134968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x13496c: 0xa2720000  sb          $s2, 0x0($s3)
    ctx->pc = 0x13496cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x134970: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x134970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x134974: 0x22b9021  addu        $s2, $s1, $t3
    ctx->pc = 0x134974u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
    // 0x134978: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x134978u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13497c: 0x24d00007  addiu       $s0, $a2, 0x7
    ctx->pc = 0x13497cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x134980: 0x1118821  addu        $s1, $t0, $s1
    ctx->pc = 0x134980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x134984: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x134984u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x134988: 0x20a9821  addu        $s3, $s0, $t2
    ctx->pc = 0x134988u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x13498c: 0x1939821  addu        $s3, $t4, $s3
    ctx->pc = 0x13498cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 19)));
    // 0x134990: 0x32140010  andi        $s4, $s0, 0x10
    ctx->pc = 0x134990u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x134994: 0x32730007  andi        $s3, $s3, 0x7
    ctx->pc = 0x134994u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x134998: 0x14a043  sra         $s4, $s4, 1
    ctx->pc = 0x134998u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 20), 1));
    // 0x13499c: 0x26d9821  addu        $s3, $s3, $t5
    ctx->pc = 0x13499cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x1349a0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1349a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1349a4: 0x293a021  addu        $s4, $s4, $s3
    ctx->pc = 0x1349a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1349a8: 0x14a080  sll         $s4, $s4, 2
    ctx->pc = 0x1349a8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1349ac: 0x32130008  andi        $s3, $s0, 0x8
    ctx->pc = 0x1349acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x1349b0: 0x2518806  srlv        $s1, $s1, $s2
    ctx->pc = 0x1349b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 18) & 0x1F));
    // 0x1349b4: 0x114a021  addu        $s4, $t0, $s4
    ctx->pc = 0x1349b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
    // 0x1349b8: 0xa2b10000  sb          $s1, 0x0($s5)
    ctx->pc = 0x1349b8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1349bc: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x1349bcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1349c0: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x1349c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1349c4: 0x20f8021  addu        $s0, $s0, $t7
    ctx->pc = 0x1349c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    // 0x1349c8: 0x26b9821  addu        $s3, $s3, $t3
    ctx->pc = 0x1349c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x1349cc: 0x1308821  addu        $s1, $t1, $s0
    ctx->pc = 0x1349ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x1349d0: 0x28d00020  slti        $s0, $a2, 0x20
    ctx->pc = 0x1349d0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1349d4: 0x2729006  srlv        $s2, $s2, $s3
    ctx->pc = 0x1349d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 19) & 0x1F));
    // 0x1349d8: 0x1600ff6f  bnez        $s0, . + 4 + (-0x91 << 2)
    ctx->pc = 0x1349D8u;
    {
        const bool branch_taken_0x1349d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1349DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349D8u;
        // 0x1349dc: 0xa2320000  sb          $s2, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349d8) {
            ctx->pc = 0x134798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134798;
        }
    }
    ctx->pc = 0x1349E0u;
    // 0x1349e0: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x1349e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1349e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1349e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1349e8: 0x1e67821  addu        $t7, $t7, $a2
    ctx->pc = 0x1349e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x1349ec: 0x28e60020  slti        $a2, $a3, 0x20
    ctx->pc = 0x1349ecu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1349f0: 0x14c0ff5d  bnez        $a2, . + 4 + (-0xA3 << 2)
    ctx->pc = 0x1349F0u;
    {
        const bool branch_taken_0x1349f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1349f0) {
            ctx->pc = 0x134768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134768;
        }
    }
    ctx->pc = 0x1349F8u;
label_1349f8:
    // 0x1349f8: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x1349f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1349fc: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x1349fcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x134a00: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x134a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x134a04: 0xa0860010  sb          $a2, 0x10($a0)
    ctx->pc = 0x134a04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x134a08: 0xa497000e  sh          $s7, 0xE($a0)
    ctx->pc = 0x134a08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 23));
    // 0x134a0c: 0x93260009  lbu         $a2, 0x9($t9)
    ctx->pc = 0x134a0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 9)));
    // 0x134a10: 0x26f70100  addiu       $s7, $s7, 0x100
    ctx->pc = 0x134a10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 256));
    // 0x134a14: 0xa086000d  sb          $a2, 0xD($a0)
    ctx->pc = 0x134a14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 6));
    // 0x134a18: 0x93c6000c  lbu         $a2, 0xC($fp)
    ctx->pc = 0x134a18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x134a1c: 0x306302a  slt         $a2, $t8, $a2
    ctx->pc = 0x134a1cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x134a20: 0x14c0fef7  bnez        $a2, . + 4 + (-0x109 << 2)
    ctx->pc = 0x134A20u;
    {
        const bool branch_taken_0x134a20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x134A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A20u;
        // 0x134a24: 0x27390010  addiu       $t9, $t9, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a20) {
            ctx->pc = 0x134600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134600;
        }
    }
    ctx->pc = 0x134A28u;
label_134a28:
    // 0x134a28: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x134a28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x134a2c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x134a2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x134a30: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x134a30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x134a34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x134a34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134a38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x134a38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134a3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x134a3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134a40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x134a40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134a44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x134a44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134a48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x134A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A4Cu;
        // 0x134a50: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134A54u;
}

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

// Function: sub_00161730
// Address: 0x161730 - 0x162294
void sub_00161730_0x161730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161730_0x161730");
#endif

    switch (ctx->pc) {
        case 0x1617d4u: goto label_1617d4;
        case 0x161890u: goto label_161890;
        case 0x161900u: goto label_161900;
        case 0x162098u: goto label_162098;
        case 0x1620f4u: goto label_1620f4;
        case 0x162150u: goto label_162150;
        case 0x1621acu: goto label_1621ac;
        default: break;
    }

    ctx->pc = 0x161730u;

    // 0x161730: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x161730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x161734: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x161734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x161738: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x161738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16173c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16173cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x161740: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x161740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161744: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161748: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x161748u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16174c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16174cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161750: 0x8cb10090  lw          $s1, 0x90($a1)
    ctx->pc = 0x161750u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x161754: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x161754u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x161758: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x161758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x16175c: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x16175cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x161760: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x161760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x161764: 0x34420019  ori         $v0, $v0, 0x19
    ctx->pc = 0x161764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
    // 0x161768: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x161768u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x16176c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x16176cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x161770: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x161770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x161774: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161774u;
    {
        const bool branch_taken_0x161774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161774u;
        // 0x161778: 0x2610aad0  addiu       $s0, $s0, -0x5530 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161774) {
            ctx->pc = 0x161788u;
            goto label_161788;
        }
    }
    ctx->pc = 0x16177Cu;
    // 0x16177c: 0x96620010  lhu         $v0, 0x10($s3)
    ctx->pc = 0x16177cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x161780: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x161780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x161784: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x161784u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_161788:
    // 0x161788: 0x92220035  lbu         $v0, 0x35($s1)
    ctx->pc = 0x161788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
    // 0x16178c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16178Cu;
    {
        const bool branch_taken_0x16178c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16178c) {
            ctx->pc = 0x1617A0u;
            goto label_1617a0;
        }
    }
    ctx->pc = 0x161794u;
    // 0x161794: 0x96620010  lhu         $v0, 0x10($s3)
    ctx->pc = 0x161794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x161798: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x161798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16179c: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x16179cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_1617a0:
    // 0x1617a0: 0x9222000e  lbu         $v0, 0xE($s1)
    ctx->pc = 0x1617a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1617a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1617A4u;
    {
        const bool branch_taken_0x1617a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1617a4) {
            ctx->pc = 0x1617B8u;
            goto label_1617b8;
        }
    }
    ctx->pc = 0x1617ACu;
    // 0x1617ac: 0x96620010  lhu         $v0, 0x10($s3)
    ctx->pc = 0x1617acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1617b0: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1617b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1617b4: 0xa6620010  sh          $v0, 0x10($s3)
    ctx->pc = 0x1617b4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 2));
label_1617b8:
    // 0x1617b8: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x1617b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x1617bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1617bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1617c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617c4: 0xa2620012  sb          $v0, 0x12($s3)
    ctx->pc = 0x1617c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x1617c8: 0x92420013  lbu         $v0, 0x13($s2)
    ctx->pc = 0x1617c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
    // 0x1617cc: 0xc059924  jal         func_166490
    ctx->pc = 0x1617CCu;
    SET_GPR_U32(ctx, 31, 0x1617D4u);
    ctx->pc = 0x1617D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1617CCu;
    // 0x1617d0: 0xa2620013  sb          $v0, 0x13($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 19), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166490u, 0x1617CCu, 0x1617D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617D4u;
label_1617d4:
    // 0x1617d4: 0x8642002c  lh          $v0, 0x2C($s2)
    ctx->pc = 0x1617d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1617d8: 0xa662002c  sh          $v0, 0x2C($s3)
    ctx->pc = 0x1617d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x1617dc: 0x9242004e  lbu         $v0, 0x4E($s2)
    ctx->pc = 0x1617dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 78)));
    // 0x1617e0: 0xa262004e  sb          $v0, 0x4E($s3)
    ctx->pc = 0x1617e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x1617e4: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x1617e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x1617e8: 0xa26200a0  sb          $v0, 0xA0($s3)
    ctx->pc = 0x1617e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 160), (uint8_t)GPR_U32(ctx, 2));
    // 0x1617ec: 0x9222000f  lbu         $v0, 0xF($s1)
    ctx->pc = 0x1617ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
    // 0x1617f0: 0xa26200a1  sb          $v0, 0xA1($s3)
    ctx->pc = 0x1617f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 161), (uint8_t)GPR_U32(ctx, 2));
    // 0x1617f4: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x1617f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1617f8: 0x92230021  lbu         $v1, 0x21($s1)
    ctx->pc = 0x1617f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x1617fc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1617FCu;
    {
        const bool branch_taken_0x1617fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1617fc) {
            ctx->pc = 0x161810u;
            goto label_161810;
        }
    }
    ctx->pc = 0x161804u;
    // 0x161804: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x161804u;
    {
        const bool branch_taken_0x161804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161804) {
            ctx->pc = 0x161868u;
            goto label_161868;
        }
    }
    ctx->pc = 0x16180Cu;
    // 0x16180c: 0x0  nop
    ctx->pc = 0x16180cu;
    // NOP
label_161810:
    // 0x161810: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161814: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x161814u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x161818: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x161818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x16181c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x16181cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x161820: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x161820u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x161824: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161828: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x161828u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x16182c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16182cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161830: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x161834: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x161834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x161838: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x161838u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x16183c: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x16183cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x161840: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x161840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x161844: 0x92230020  lbu         $v1, 0x20($s1)
    ctx->pc = 0x161844u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x161848: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x161848u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16184c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16184cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x161850: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x161850u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x161854: 0x0  nop
    ctx->pc = 0x161854u;
    // NOP
    // 0x161858: 0x0  nop
    ctx->pc = 0x161858u;
    // NOP
    // 0x16185c: 0x1010  mfhi        $v0
    ctx->pc = 0x16185cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x161860: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x161860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x161864: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x161864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_161868:
    // 0x161868: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x161868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x16186c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16186cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x161870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161874: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x161874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x161878: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16187c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16187cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x161880: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x161880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x161884: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x161884u;
    {
        const bool branch_taken_0x161884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161884u;
        // 0x161888: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161884) {
            ctx->pc = 0x161898u;
            goto label_161898;
        }
    }
    ctx->pc = 0x16188Cu;
    // 0x16188c: 0x0  nop
    ctx->pc = 0x16188cu;
    // NOP
label_161890:
    // 0x161890: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x161890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x161894: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x161894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_161898:
    // 0x161898: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x161898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x16189c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16189Cu;
    {
        const bool branch_taken_0x16189c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16189c) {
            ctx->pc = 0x1618B8u;
            goto label_1618b8;
        }
    }
    ctx->pc = 0x1618A4u;
    // 0x1618a4: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1618a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1618a8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1618a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1618ac: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1618ACu;
    {
        const bool branch_taken_0x1618ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1618ac) {
            ctx->pc = 0x161890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161890;
        }
    }
    ctx->pc = 0x1618B4u;
    // 0x1618b4: 0x0  nop
    ctx->pc = 0x1618b4u;
    // NOP
label_1618b8:
    // 0x1618b8: 0x92260023  lbu         $a2, 0x23($s1)
    ctx->pc = 0x1618b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x1618bc: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1618bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1618c0: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1618c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1618c4: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x1618c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1618c8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1618C8u;
    {
        const bool branch_taken_0x1618c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1618CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618C8u;
        // 0x1618cc: 0x92250022  lbu         $a1, 0x22($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618c8) {
            ctx->pc = 0x1618E8u;
            goto label_1618e8;
        }
    }
    ctx->pc = 0x1618D0u;
    // 0x1618d0: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x1618d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1618d4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1618d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1618d8: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1618d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1618dc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1618DCu;
    {
        const bool branch_taken_0x1618dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1618dc) {
            ctx->pc = 0x1618E8u;
            goto label_1618e8;
        }
    }
    ctx->pc = 0x1618E4u;
    // 0x1618e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1618e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1618e8:
    // 0x1618e8: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x1618e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1618ec: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1618ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1618f0: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1618F0u;
    {
        const bool branch_taken_0x1618f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1618f0) {
            ctx->pc = 0x161900u;
            goto label_161900;
        }
    }
    ctx->pc = 0x1618F8u;
    // 0x1618f8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1618F8u;
    {
        const bool branch_taken_0x1618f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1618f8) {
            ctx->pc = 0x161950u;
            goto label_161950;
        }
    }
    ctx->pc = 0x161900u;
label_161900:
    // 0x161900: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161904: 0x8c25f00c  lw          $a1, -0xFF4($at)
    ctx->pc = 0x161904u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x161908: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x161908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x16190c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x16190cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x161910: 0x3484a9e5  ori         $a0, $a0, 0xA9E5
    ctx->pc = 0x161910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x161914: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x161918: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x161918u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x16191c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16191cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161920: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x161920u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x161924: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x161924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x161928: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x161928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16192c: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x16192cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x161930: 0xac24f00c  sw          $a0, -0xFF4($at)
    ctx->pc = 0x161930u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 4));
    // 0x161934: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x161934u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x161938: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x161938u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x16193c: 0x0  nop
    ctx->pc = 0x16193cu;
    // NOP
    // 0x161940: 0x0  nop
    ctx->pc = 0x161940u;
    // NOP
    // 0x161944: 0x1810  mfhi        $v1
    ctx->pc = 0x161944u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x161948: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x161948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x16194c: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x16194cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_161950:
    // 0x161950: 0x8e680018  lw          $t0, 0x18($s3)
    ctx->pc = 0x161950u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x161954: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x161954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x161958: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x161958u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x16195c: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x16195cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x161960: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161964: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x161964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x161968: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x161968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16196c: 0x3449a9e5  ori         $t1, $v0, 0xA9E5
    ctx->pc = 0x16196cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x161970: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x161970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x161974: 0x24020fff  addiu       $v0, $zero, 0xFFF
    ctx->pc = 0x161974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x161978: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x161978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x16197c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x16197cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x161980: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x161980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x161984: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x161984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x161988: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x161988u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16198c: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x16198cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x161990: 0xae66001c  sw          $a2, 0x1C($s3)
    ctx->pc = 0x161990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 6));
    // 0x161994: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x161994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x161998: 0x90c60002  lbu         $a2, 0x2($a2)
    ctx->pc = 0x161998u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x16199c: 0xa266002f  sb          $a2, 0x2F($s3)
    ctx->pc = 0x16199cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 47), (uint8_t)GPR_U32(ctx, 6));
    // 0x1619a0: 0x8c26f00c  lw          $a2, -0xFF4($at)
    ctx->pc = 0x1619a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x1619a4: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x1619a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1619a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1619a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1619ac: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1619acu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1619b0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1619b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1619b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1619b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1619b8: 0xc93026  xor         $a2, $a2, $t1
    ctx->pc = 0x1619b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 9));
    // 0x1619bc: 0xac26f00c  sw          $a2, -0xFF4($at)
    ctx->pc = 0x1619bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 6));
    // 0x1619c0: 0x64202  srl         $t0, $a2, 8
    ctx->pc = 0x1619c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1619c4: 0x92270028  lbu         $a3, 0x28($s1)
    ctx->pc = 0x1619c4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1619c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1619c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1619cc: 0x96460028  lhu         $a2, 0x28($s2)
    ctx->pc = 0x1619ccu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1619d0: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x1619d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1619d4: 0xe23807  srav        $a3, $v0, $a3
    ctx->pc = 0x1619d4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x1619d8: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x1619d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x1619dc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1619dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1619e0: 0xa6660028  sh          $a2, 0x28($s3)
    ctx->pc = 0x1619e0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 6));
    // 0x1619e4: 0x8c26f00c  lw          $a2, -0xFF4($at)
    ctx->pc = 0x1619e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x1619e8: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x1619e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1619ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1619ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1619f0: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1619f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1619f4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1619f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1619f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1619f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1619fc: 0xc93026  xor         $a2, $a2, $t1
    ctx->pc = 0x1619fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 9));
    // 0x161a00: 0xac26f00c  sw          $a2, -0xFF4($at)
    ctx->pc = 0x161a00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 6));
    // 0x161a04: 0x64202  srl         $t0, $a2, 8
    ctx->pc = 0x161a04u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x161a08: 0x92270029  lbu         $a3, 0x29($s1)
    ctx->pc = 0x161a08u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x161a0c: 0x9646002a  lhu         $a2, 0x2A($s2)
    ctx->pc = 0x161a0cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x161a10: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x161a10u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x161a14: 0xe23807  srav        $a3, $v0, $a3
    ctx->pc = 0x161a14u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x161a18: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x161a18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x161a1c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x161a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x161a20: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x161a20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x161a24: 0xa666002a  sh          $a2, 0x2A($s3)
    ctx->pc = 0x161a24u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 6));
    // 0x161a28: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x161a28u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x161a2c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161a30: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x161a30u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a34: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x161a34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x161a38: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x161a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x161a3c: 0x8c2bf00c  lw          $t3, -0xFF4($at)
    ctx->pc = 0x161a3cu;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x161a40: 0x3489a9e5  ori         $t1, $a0, 0xA9E5
    ctx->pc = 0x161a40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x161a44: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x161a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x161a48: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x161a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x161a4c: 0x44844000  mtc1        $a0, $f8
    ctx->pc = 0x161a4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x161a50: 0x3c06873c  lui         $a2, 0x873C
    ctx->pc = 0x161a50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34620 << 16));
    // 0x161a54: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x161a54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x161a58: 0x34c6a9e5  ori         $a2, $a2, 0xA9E5
    ctx->pc = 0x161a58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)43493);
    // 0x161a5c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x161a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x161a60: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x161a60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x161a64: 0x26650060  addiu       $a1, $s3, 0x60
    ctx->pc = 0x161a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x161a68: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161a6c: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x161a6cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x161a70: 0x8c2af00c  lw          $t2, -0xFF4($at)
    ctx->pc = 0x161a70u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x161a74: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x161a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x161a78: 0x3488a9e5  ori         $t0, $a0, 0xA9E5
    ctx->pc = 0x161a78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x161a7c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x161a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x161a80: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x161a80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x161a84: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x161a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x161a88: 0xa57c2  srl         $t2, $t2, 31
    ctx->pc = 0x161a88u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x161a8c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161a90: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x161a90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x161a94: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x161a94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x161a98: 0x1494826  xor         $t1, $t2, $t1
    ctx->pc = 0x161a98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 9));
    // 0x161a9c: 0xac29f00c  sw          $t1, -0xFF4($at)
    ctx->pc = 0x161a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 9));
    // 0x161aa0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x161aa0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x161aa4: 0x94ac2  srl         $t1, $t1, 11
    ctx->pc = 0x161aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 11));
    // 0x161aa8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161aac: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x161aacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
    // 0x161ab0: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x161ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x161ab4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x161ab4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x161ab8: 0x3487a9e5  ori         $a3, $a0, 0xA9E5
    ctx->pc = 0x161ab8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x161abc: 0x2094821  addu        $t1, $s0, $t1
    ctx->pc = 0x161abcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x161ac0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x161ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x161ac4: 0xc5270000  lwc1        $f7, 0x0($t1)
    ctx->pc = 0x161ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x161ac8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x161ac8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x161acc: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x161accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161ad0: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x161ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161ad4: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x161ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x161ad8: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x161ad8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x161adc: 0x46053941  sub.s       $f5, $f7, $f5
    ctx->pc = 0x161adcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x161ae0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x161ae0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x161ae4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161ae8: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x161ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x161aec: 0x8c2af00c  lw          $t2, -0xFF4($at)
    ctx->pc = 0x161aecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x161af0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161af4: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x161af4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x161af8: 0x8c29f00c  lw          $t1, -0xFF4($at)
    ctx->pc = 0x161af8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x161afc: 0x94fc2  srl         $t1, $t1, 31
    ctx->pc = 0x161afcu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x161b00: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161b04: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x161b04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x161b08: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x161b08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x161b0c: 0x1284026  xor         $t0, $t1, $t0
    ctx->pc = 0x161b0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 8));
    // 0x161b10: 0xac28f00c  sw          $t0, -0xFF4($at)
    ctx->pc = 0x161b10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 8));
    // 0x161b14: 0x84382  srl         $t0, $t0, 14
    ctx->pc = 0x161b14u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 14));
    // 0x161b18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161b1c: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x161b1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x161b20: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x161b20u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x161b24: 0x2084021  addu        $t0, $s0, $t0
    ctx->pc = 0x161b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x161b28: 0xc5050000  lwc1        $f5, 0x0($t0)
    ctx->pc = 0x161b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x161b2c: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x161b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161b30: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x161b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161b34: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x161b34u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x161b38: 0x460328c1  sub.s       $f3, $f5, $f3
    ctx->pc = 0x161b38u;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x161b3c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x161b3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x161b40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161b40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161b44: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x161b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x161b48: 0x8c29f00c  lw          $t1, -0xFF4($at)
    ctx->pc = 0x161b48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x161b4c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161b50: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x161b50u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x161b54: 0x8c28f00c  lw          $t0, -0xFF4($at)
    ctx->pc = 0x161b54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x161b58: 0x847c2  srl         $t0, $t0, 31
    ctx->pc = 0x161b58u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x161b5c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161b60: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x161b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x161b64: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x161b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x161b68: 0x1073826  xor         $a3, $t0, $a3
    ctx->pc = 0x161b68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x161b6c: 0xac27f00c  sw          $a3, -0xFF4($at)
    ctx->pc = 0x161b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 7));
    // 0x161b70: 0x73c42  srl         $a3, $a3, 17
    ctx->pc = 0x161b70u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 17));
    // 0x161b74: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161b78: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x161b78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x161b7c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x161b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x161b80: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x161b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x161b84: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x161b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x161b88: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x161b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161b8c: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x161b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161b90: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x161b90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x161b94: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x161b94u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x161b98: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x161b98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x161b9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x161b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161ba0: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x161ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x161ba4: 0x788c0000  lq          $t4, 0x0($a0)
    ctx->pc = 0x161ba4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x161ba8: 0x7cac0000  sq          $t4, 0x0($a1)
    ctx->pc = 0x161ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 12));
    // 0x161bac: 0x92640023  lbu         $a0, 0x23($s3)
    ctx->pc = 0x161bacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
    // 0x161bb0: 0xa2640094  sb          $a0, 0x94($s3)
    ctx->pc = 0x161bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 148), (uint8_t)GPR_U32(ctx, 4));
    // 0x161bb4: 0xa2600095  sb          $zero, 0x95($s3)
    ctx->pc = 0x161bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 149), (uint8_t)GPR_U32(ctx, 0));
    // 0x161bb8: 0x8c25f00c  lw          $a1, -0xFF4($at)
    ctx->pc = 0x161bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x161bbc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161bc0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x161bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x161bc4: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x161bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x161bc8: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x161bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x161bcc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161bd0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x161bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x161bd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x161bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x161bd8: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x161bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
    // 0x161bdc: 0xac24f00c  sw          $a0, -0xFF4($at)
    ctx->pc = 0x161bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 4));
    // 0x161be0: 0x422c2  srl         $a0, $a0, 11
    ctx->pc = 0x161be0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 11));
    // 0x161be4: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x161be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x161be8: 0x9624003e  lhu         $a0, 0x3E($s1)
    ctx->pc = 0x161be8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 62)));
    // 0x161bec: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x161becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x161bf0: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x161bf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x161bf4: 0x30e4f000  andi        $a0, $a3, 0xF000
    ctx->pc = 0x161bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x161bf8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161BF8u;
    {
        const bool branch_taken_0x161bf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x161BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BF8u;
        // 0x161bfc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161bf8) {
            ctx->pc = 0x161C08u;
            goto label_161c08;
        }
    }
    ctx->pc = 0x161C00u;
    // 0x161c00: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x161C00u;
    {
        const bool branch_taken_0x161c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C00u;
        // 0x161c04: 0x30e20fff  andi        $v0, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c00) {
            ctx->pc = 0x161C28u;
            goto label_161c28;
        }
    }
    ctx->pc = 0x161C08u;
label_161c08:
    // 0x161c08: 0x73303  sra         $a2, $a3, 12
    ctx->pc = 0x161c08u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 12));
    // 0x161c0c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x161c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x161c10: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x161c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x161c14: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x161c14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x161c18: 0x30e40fff  andi        $a0, $a3, 0xFFF
    ctx->pc = 0x161c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x161c1c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x161c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x161c20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x161c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x161c24: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x161c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_161c28:
    // 0x161c28: 0xa6620096  sh          $v0, 0x96($s3)
    ctx->pc = 0x161c28u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x161c2c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161c30: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x161c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x161c34: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x161c34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x161c38: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x161c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x161c3c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x161c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x161c40: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161c44: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x161c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x161c48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x161c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161c4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x161c50: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x161c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x161c54: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x161c54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x161c58: 0x96240040  lhu         $a0, 0x40($s1)
    ctx->pc = 0x161c58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x161c5c: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x161c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x161c60: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x161c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x161c64: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x161c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x161c68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161C68u;
    {
        const bool branch_taken_0x161c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161c68) {
            ctx->pc = 0x161C78u;
            goto label_161c78;
        }
    }
    ctx->pc = 0x161C70u;
    // 0x161c70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x161C70u;
    {
        const bool branch_taken_0x161c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C70u;
        // 0x161c74: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c70) {
            ctx->pc = 0x161CA0u;
            goto label_161ca0;
        }
    }
    ctx->pc = 0x161C78u;
label_161c78:
    // 0x161c78: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x161c78u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x161c7c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x161c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x161c80: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x161c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x161c84: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x161c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x161c88: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x161c88u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x161c8c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x161c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x161c90: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x161c90u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x161c94: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x161c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x161c98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161c9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x161c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_161ca0:
    // 0x161ca0: 0xa6620098  sh          $v0, 0x98($s3)
    ctx->pc = 0x161ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 152), (uint16_t)GPR_U32(ctx, 2));
    // 0x161ca4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161ca8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x161ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x161cac: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x161cacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x161cb0: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x161cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x161cb4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x161cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x161cb8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161cbc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x161cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x161cc0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x161cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161cc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x161cc8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x161cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x161ccc: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x161cccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x161cd0: 0x96240042  lhu         $a0, 0x42($s1)
    ctx->pc = 0x161cd0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
    // 0x161cd4: 0x21442  srl         $v0, $v0, 17
    ctx->pc = 0x161cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 17));
    // 0x161cd8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x161cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x161cdc: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x161cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x161ce0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161CE0u;
    {
        const bool branch_taken_0x161ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161ce0) {
            ctx->pc = 0x161CF0u;
            goto label_161cf0;
        }
    }
    ctx->pc = 0x161CE8u;
    // 0x161ce8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x161CE8u;
    {
        const bool branch_taken_0x161ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161CE8u;
        // 0x161cec: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ce8) {
            ctx->pc = 0x161D18u;
            goto label_161d18;
        }
    }
    ctx->pc = 0x161CF0u;
label_161cf0:
    // 0x161cf0: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x161cf0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x161cf4: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x161cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x161cf8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x161cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x161cfc: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x161cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x161d00: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x161d00u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x161d04: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x161d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x161d08: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x161d08u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x161d0c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x161d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x161d10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161d14: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x161d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_161d18:
    // 0x161d18: 0xa662009a  sh          $v0, 0x9A($s3)
    ctx->pc = 0x161d18u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 154), (uint16_t)GPR_U32(ctx, 2));
    // 0x161d1c: 0x96640096  lhu         $a0, 0x96($s3)
    ctx->pc = 0x161d1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 150)));
    // 0x161d20: 0x96630098  lhu         $v1, 0x98($s3)
    ctx->pc = 0x161d20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x161d24: 0x9662009a  lhu         $v0, 0x9A($s3)
    ctx->pc = 0x161d24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x161d28: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x161d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161d2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161d30: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x161d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x161d34: 0xa6620092  sh          $v0, 0x92($s3)
    ctx->pc = 0x161d34u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x161d38: 0x96620096  lhu         $v0, 0x96($s3)
    ctx->pc = 0x161d38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 150)));
    // 0x161d3c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x161D3Cu;
    {
        const bool branch_taken_0x161d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D3Cu;
        // 0x161d40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d3c) {
            ctx->pc = 0x161DB8u;
            goto label_161db8;
        }
    }
    ctx->pc = 0x161D44u;
    // 0x161d44: 0xa6640090  sh          $a0, 0x90($s3)
    ctx->pc = 0x161d44u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x161d48: 0x92630094  lbu         $v1, 0x94($s3)
    ctx->pc = 0x161d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x161d4c: 0x96620096  lhu         $v0, 0x96($s3)
    ctx->pc = 0x161d4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 150)));
    // 0x161d50: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x161d50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x161d54: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x161D54u;
    {
        const bool branch_taken_0x161d54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x161d54) {
            ctx->pc = 0x161D68u;
            goto label_161d68;
        }
    }
    ctx->pc = 0x161D5Cu;
    // 0x161d5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x161D5Cu;
    {
        const bool branch_taken_0x161d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D5Cu;
        // 0x161d60: 0xae640030  sw          $a0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d5c) {
            ctx->pc = 0x161D90u;
            goto label_161d90;
        }
    }
    ctx->pc = 0x161D64u;
    // 0x161d64: 0x0  nop
    ctx->pc = 0x161d64u;
    // NOP
label_161d68:
    // 0x161d68: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x161d68u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x161d6c: 0x0  nop
    ctx->pc = 0x161d6cu;
    // NOP
    // 0x161d70: 0x0  nop
    ctx->pc = 0x161d70u;
    // NOP
    // 0x161d74: 0x1010  mfhi        $v0
    ctx->pc = 0x161d74u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x161d78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161D78u;
    {
        const bool branch_taken_0x161d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161d78) {
            ctx->pc = 0x161D88u;
            goto label_161d88;
        }
    }
    ctx->pc = 0x161D80u;
    // 0x161d80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x161D80u;
    {
        const bool branch_taken_0x161d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161D80u;
        // 0x161d84: 0xae600030  sw          $zero, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d80) {
            ctx->pc = 0x161D90u;
            goto label_161d90;
        }
    }
    ctx->pc = 0x161D88u;
label_161d88:
    // 0x161d88: 0xae640030  sw          $a0, 0x30($s3)
    ctx->pc = 0x161d88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 4));
    // 0x161d8c: 0x0  nop
    ctx->pc = 0x161d8cu;
    // NOP
label_161d90:
    // 0x161d90: 0x92630094  lbu         $v1, 0x94($s3)
    ctx->pc = 0x161d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x161d94: 0x96620096  lhu         $v0, 0x96($s3)
    ctx->pc = 0x161d94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 150)));
    // 0x161d98: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x161d98u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x161d9c: 0x0  nop
    ctx->pc = 0x161d9cu;
    // NOP
    // 0x161da0: 0x0  nop
    ctx->pc = 0x161da0u;
    // NOP
    // 0x161da4: 0x1012  mflo        $v0
    ctx->pc = 0x161da4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x161da8: 0xa2620095  sb          $v0, 0x95($s3)
    ctx->pc = 0x161da8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 149), (uint8_t)GPR_U32(ctx, 2));
    // 0x161dac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x161DACu;
    {
        const bool branch_taken_0x161dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DACu;
        // 0x161db0: 0xa2620023  sb          $v0, 0x23($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161dac) {
            ctx->pc = 0x161DC8u;
            goto label_161dc8;
        }
    }
    ctx->pc = 0x161DB4u;
    // 0x161db4: 0x0  nop
    ctx->pc = 0x161db4u;
    // NOP
label_161db8:
    // 0x161db8: 0x96630098  lhu         $v1, 0x98($s3)
    ctx->pc = 0x161db8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x161dbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161dc0: 0xa6630090  sh          $v1, 0x90($s3)
    ctx->pc = 0x161dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x161dc4: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x161dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
label_161dc8:
    // 0x161dc8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161dcc: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x161dccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x161dd0: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x161dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x161dd4: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x161dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x161dd8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x161dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x161ddc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161de0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x161de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x161de4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x161de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161de8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x161dec: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x161decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x161df0: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x161df0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x161df4: 0x96250044  lhu         $a1, 0x44($s1)
    ctx->pc = 0x161df4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x161df8: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x161df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x161dfc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x161dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x161e00: 0x30a2f000  andi        $v0, $a1, 0xF000
    ctx->pc = 0x161e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
    // 0x161e04: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x161E04u;
    {
        const bool branch_taken_0x161e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E04u;
        // 0x161e08: 0x30a20800  andi        $v0, $a1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e04) {
            ctx->pc = 0x161E48u;
            goto label_161e48;
        }
    }
    ctx->pc = 0x161E0Cu;
    // 0x161e0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x161E0Cu;
    {
        const bool branch_taken_0x161e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161e0c) {
            ctx->pc = 0x161E28u;
            goto label_161e28;
        }
    }
    ctx->pc = 0x161E14u;
    // 0x161e14: 0x30a207ff  andi        $v0, $a1, 0x7FF
    ctx->pc = 0x161e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x161e18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x161e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x161e1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x161e1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x161e20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x161E20u;
    {
        const bool branch_taken_0x161e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E20u;
        // 0x161e24: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e20) {
            ctx->pc = 0x161E38u;
            goto label_161e38;
        }
    }
    ctx->pc = 0x161E28u;
label_161e28:
    // 0x161e28: 0x30a207ff  andi        $v0, $a1, 0x7FF
    ctx->pc = 0x161e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x161e2c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x161e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x161e30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x161e30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x161e34: 0x0  nop
    ctx->pc = 0x161e34u;
    // NOP
label_161e38:
    // 0x161e38: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x161e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x161e3c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x161E3Cu;
    {
        const bool branch_taken_0x161e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E3Cu;
        // 0x161e40: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e3c) {
            ctx->pc = 0x161EA0u;
            goto label_161ea0;
        }
    }
    ctx->pc = 0x161E44u;
    // 0x161e44: 0x0  nop
    ctx->pc = 0x161e44u;
    // NOP
label_161e48:
    // 0x161e48: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x161e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x161e4c: 0x52303  sra         $a0, $a1, 12
    ctx->pc = 0x161e4cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 12));
    // 0x161e50: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x161e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x161e54: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x161e54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161e58: 0x24030fff  addiu       $v1, $zero, 0xFFF
    ctx->pc = 0x161e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x161e5c: 0x832007  srav        $a0, $v1, $a0
    ctx->pc = 0x161e5cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x161e60: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x161e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x161e64: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x161e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x161e68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161e6c: 0x30a20800  andi        $v0, $a1, 0x800
    ctx->pc = 0x161e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x161e70: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x161e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x161e74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x161E74u;
    {
        const bool branch_taken_0x161e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E74u;
        // 0x161e78: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e74) {
            ctx->pc = 0x161E90u;
            goto label_161e90;
        }
    }
    ctx->pc = 0x161E7Cu;
    // 0x161e7c: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x161e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x161e80: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x161e80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x161e84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x161E84u;
    {
        const bool branch_taken_0x161e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161E84u;
        // 0x161e88: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161e84) {
            ctx->pc = 0x161E98u;
            goto label_161e98;
        }
    }
    ctx->pc = 0x161E8Cu;
    // 0x161e8c: 0x0  nop
    ctx->pc = 0x161e8cu;
    // NOP
label_161e90:
    // 0x161e90: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x161e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x161e94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x161e94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_161e98:
    // 0x161e98: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x161e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x161e9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x161e9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_161ea0:
    // 0x161ea0: 0xa662009c  sh          $v0, 0x9C($s3)
    ctx->pc = 0x161ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 156), (uint16_t)GPR_U32(ctx, 2));
    // 0x161ea4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161ea8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x161ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x161eac: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x161eacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x161eb0: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x161eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x161eb4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x161eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x161eb8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161ebc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x161ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x161ec0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x161ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161ec4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x161ec8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x161ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x161ecc: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x161eccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x161ed0: 0x96250046  lhu         $a1, 0x46($s1)
    ctx->pc = 0x161ed0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 70)));
    // 0x161ed4: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x161ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x161ed8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x161ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x161edc: 0x30a2f000  andi        $v0, $a1, 0xF000
    ctx->pc = 0x161edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
    // 0x161ee0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x161EE0u;
    {
        const bool branch_taken_0x161ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161ee0) {
            ctx->pc = 0x161F28u;
            goto label_161f28;
        }
    }
    ctx->pc = 0x161EE8u;
    // 0x161ee8: 0x30a20800  andi        $v0, $a1, 0x800
    ctx->pc = 0x161ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x161eec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x161EECu;
    {
        const bool branch_taken_0x161eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161EECu;
        // 0x161ef0: 0x30a207ff  andi        $v0, $a1, 0x7FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161eec) {
            ctx->pc = 0x161F08u;
            goto label_161f08;
        }
    }
    ctx->pc = 0x161EF4u;
    // 0x161ef4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x161ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x161ef8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x161ef8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x161efc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x161EFCu;
    {
        const bool branch_taken_0x161efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161EFCu;
        // 0x161f00: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161efc) {
            ctx->pc = 0x161F18u;
            goto label_161f18;
        }
    }
    ctx->pc = 0x161F04u;
    // 0x161f04: 0x0  nop
    ctx->pc = 0x161f04u;
    // NOP
label_161f08:
    // 0x161f08: 0x30a207ff  andi        $v0, $a1, 0x7FF
    ctx->pc = 0x161f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x161f0c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x161f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x161f10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x161f10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x161f14: 0x0  nop
    ctx->pc = 0x161f14u;
    // NOP
label_161f18:
    // 0x161f18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x161f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x161f1c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x161F1Cu;
    {
        const bool branch_taken_0x161f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F1Cu;
        // 0x161f20: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f1c) {
            ctx->pc = 0x161F80u;
            goto label_161f80;
        }
    }
    ctx->pc = 0x161F24u;
    // 0x161f24: 0x0  nop
    ctx->pc = 0x161f24u;
    // NOP
label_161f28:
    // 0x161f28: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x161f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x161f2c: 0x52303  sra         $a0, $a1, 12
    ctx->pc = 0x161f2cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 12));
    // 0x161f30: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x161f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x161f34: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x161f34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161f38: 0x24030fff  addiu       $v1, $zero, 0xFFF
    ctx->pc = 0x161f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x161f3c: 0x832007  srav        $a0, $v1, $a0
    ctx->pc = 0x161f3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x161f40: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x161f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x161f44: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x161f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x161f48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161f4c: 0x30a20800  andi        $v0, $a1, 0x800
    ctx->pc = 0x161f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x161f50: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x161f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x161f54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x161F54u;
    {
        const bool branch_taken_0x161f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F54u;
        // 0x161f58: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f54) {
            ctx->pc = 0x161F70u;
            goto label_161f70;
        }
    }
    ctx->pc = 0x161F5Cu;
    // 0x161f5c: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x161f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x161f60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x161f60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x161f64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x161F64u;
    {
        const bool branch_taken_0x161f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F64u;
        // 0x161f68: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f64) {
            ctx->pc = 0x161F78u;
            goto label_161f78;
        }
    }
    ctx->pc = 0x161F6Cu;
    // 0x161f6c: 0x0  nop
    ctx->pc = 0x161f6cu;
    // NOP
label_161f70:
    // 0x161f70: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x161f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x161f74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x161f74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_161f78:
    // 0x161f78: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x161f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x161f7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x161f7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_161f80:
    // 0x161f80: 0xa662009e  sh          $v0, 0x9E($s3)
    ctx->pc = 0x161f80u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 158), (uint16_t)GPR_U32(ctx, 2));
    // 0x161f84: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161f88: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x161f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x161f8c: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x161f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x161f90: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x161f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x161f94: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x161f94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x161f98: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x161f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x161f9c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x161f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x161fa0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x161fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x161fa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x161fa8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x161fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x161fac: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x161facu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x161fb0: 0x96240054  lhu         $a0, 0x54($s1)
    ctx->pc = 0x161fb0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x161fb4: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x161fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x161fb8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x161fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x161fbc: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x161fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x161fc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x161FC0u;
    {
        const bool branch_taken_0x161fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161fc0) {
            ctx->pc = 0x161FD0u;
            goto label_161fd0;
        }
    }
    ctx->pc = 0x161FC8u;
    // 0x161fc8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x161FC8u;
    {
        const bool branch_taken_0x161fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161FC8u;
        // 0x161fcc: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x161fc8) {
            ctx->pc = 0x161FF8u;
            goto label_161ff8;
        }
    }
    ctx->pc = 0x161FD0u;
label_161fd0:
    // 0x161fd0: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x161fd0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x161fd4: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x161fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x161fd8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x161fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x161fdc: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x161fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x161fe0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x161fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x161fe4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x161fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x161fe8: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x161fe8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x161fec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x161fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x161ff0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161ff4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x161ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_161ff8:
    // 0x161ff8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x161ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x161ffc: 0xa4220280  sh          $v0, 0x280($at)
    ctx->pc = 0x161ffcu;
    runtime->Store16(rdram, ctx, 0x70000280u, (uint16_t)GPR_U32(ctx, 2));
    // 0x162000: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162004: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x162004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x162008: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x162008u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x16200c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x16200cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x162010: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x162010u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x162014: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162018: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x162018u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x16201c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16201cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x162020: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x162020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x162024: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x162024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x162028: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x162028u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x16202c: 0x96240056  lhu         $a0, 0x56($s1)
    ctx->pc = 0x16202cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 86)));
    // 0x162030: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x162030u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x162034: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x162034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x162038: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x162038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x16203c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16203Cu;
    {
        const bool branch_taken_0x16203c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16203c) {
            ctx->pc = 0x162050u;
            goto label_162050;
        }
    }
    ctx->pc = 0x162044u;
    // 0x162044: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x162044u;
    {
        const bool branch_taken_0x162044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162044u;
        // 0x162048: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162044) {
            ctx->pc = 0x162078u;
            goto label_162078;
        }
    }
    ctx->pc = 0x16204Cu;
    // 0x16204c: 0x0  nop
    ctx->pc = 0x16204cu;
    // NOP
label_162050:
    // 0x162050: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x162050u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x162054: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x162054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x162058: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x162058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16205c: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x16205cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x162060: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x162060u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x162064: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x162064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x162068: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x162068u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x16206c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16206cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x162070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x162070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x162074: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x162074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_162078:
    // 0x162078: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x162078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16207c: 0xa4220282  sh          $v0, 0x282($at)
    ctx->pc = 0x16207cu;
    runtime->Store16(rdram, ctx, 0x70000282u, (uint16_t)GPR_U32(ctx, 2));
    // 0x162080: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x162080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x162084: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x162084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x162088: 0x34440200  ori         $a0, $v0, 0x200
    ctx->pc = 0x162088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x16208c: 0x34450280  ori         $a1, $v0, 0x280
    ctx->pc = 0x16208cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)640);
    // 0x162090: 0xc04d52c  jal         func_1354B0
    ctx->pc = 0x162090u;
    SET_GPR_U32(ctx, 31, 0x162098u);
    ctx->pc = 0x162094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162090u;
    // 0x162094: 0xa4200284  sh          $zero, 0x284($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 644), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1354B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1354B0u, 0x162090u, 0x162098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162098u;
label_162098:
    // 0x162098: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x162098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16209c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16209cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1620a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1620a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1620a4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1620a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1620a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1620a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1620ac: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1620acu;
    runtime->Store128(rdram, ctx, 0x70000000u, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1620b0: 0x44011000  mfc1        $at, $f2
    ctx->pc = 0x1620b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1620b4: 0x0  nop
    ctx->pc = 0x1620b4u;
    // NOP
    // 0x1620b8: 0xac610000  sw          $at, 0x0($v1)
    ctx->pc = 0x1620b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 1));
    // 0x1620bc: 0x44010800  mfc1        $at, $f1
    ctx->pc = 0x1620bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1620c0: 0x0  nop
    ctx->pc = 0x1620c0u;
    // NOP
    // 0x1620c4: 0xac610004  sw          $at, 0x4($v1)
    ctx->pc = 0x1620c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 1));
    // 0x1620c8: 0x44010000  mfc1        $at, $f0
    ctx->pc = 0x1620c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 1, bits); }
    // 0x1620cc: 0x0  nop
    ctx->pc = 0x1620ccu;
    // NOP
    // 0x1620d0: 0xac610008  sw          $at, 0x8($v1)
    ctx->pc = 0x1620d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 1));
    // 0x1620d4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1620d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1620d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1620d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1620dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1620dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1620e0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1620e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1620e4: 0x34450200  ori         $a1, $v0, 0x200
    ctx->pc = 0x1620e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x1620e8: 0xe420000c  swc1        $f0, 0xC($at)
    ctx->pc = 0x1620e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000000Cu, bits); }
    // 0x1620ec: 0xc041442  jal         func_105108
    ctx->pc = 0x1620ECu;
    SET_GPR_U32(ctx, 31, 0x1620F4u);
    ctx->pc = 0x1620F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1620ECu;
    // 0x1620f0: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1620ECu, 0x1620F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1620F4u;
label_1620f4:
    // 0x1620f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1620f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1620f8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1620f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1620fc: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x1620fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x162100: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x162100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x162104: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x162104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x162108: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x162108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x16210c: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x16210cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x162110: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162114: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x162114u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x162118: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x162118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16211c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16211cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x162120: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x162120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x162124: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x162124u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x162128: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x162128u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x16212c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x16212cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x162130: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x162130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x162134: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x162134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x162138: 0xc622005c  lwc1        $f2, 0x5C($s1)
    ctx->pc = 0x162138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16213c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x16213cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162140: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x162140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162144: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x162144u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x162148: 0xc0414dc  jal         func_105370
    ctx->pc = 0x162148u;
    SET_GPR_U32(ctx, 31, 0x162150u);
    ctx->pc = 0x16214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162148u;
    // 0x16214c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x162148u, 0x162150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162150u;
label_162150:
    // 0x162150: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162154: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x162154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x162158: 0x8c23f00c  lw          $v1, -0xFF4($at)
    ctx->pc = 0x162158u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x16215c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x16215cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x162160: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x162160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x162164: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x162164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x162168: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x162168u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x16216c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16216cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162170: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x162170u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x162174: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x162174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x162178: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x162178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16217c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x16217cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x162180: 0xac22f00c  sw          $v0, -0xFF4($at)
    ctx->pc = 0x162180u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 2));
    // 0x162184: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x162184u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x162188: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x162188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x16218c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16218cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x162190: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x162190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x162194: 0xc6220064  lwc1        $f2, 0x64($s1)
    ctx->pc = 0x162194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x162198: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x162198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16219c: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x16219cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1621a0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1621a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1621a4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1621A4u;
    SET_GPR_U32(ctx, 31, 0x1621ACu);
    ctx->pc = 0x1621A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1621A4u;
    // 0x1621a8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1621A4u, 0x1621ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1621ACu;
label_1621ac:
    // 0x1621ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1621acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1621b0: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1621b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1621b4: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x1621b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x1621b8: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x1621b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1621bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1621bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1621c0: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1621c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1621c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1621c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1621c8: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1621c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1621cc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1621ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1621d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1621d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1621d4: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x1621d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x1621d8: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x1621d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x1621dc: 0x31c42  srl         $v1, $v1, 17
    ctx->pc = 0x1621dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 17));
    // 0x1621e0: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1621e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1621e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1621e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1621e8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1621e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1621ec: 0xc624006c  lwc1        $f4, 0x6C($s1)
    ctx->pc = 0x1621ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1621f0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1621f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1621f4: 0xc6220068  lwc1        $f2, 0x68($s1)
    ctx->pc = 0x1621f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1621f8: 0xc6600084  lwc1        $f0, 0x84($s3)
    ctx->pc = 0x1621f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1621fc: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1621fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x162200: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x162200u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x162204: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x162204u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x162208: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x162208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x16220c: 0xc6600070  lwc1        $f0, 0x70($s3)
    ctx->pc = 0x16220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162210: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x162210u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162214: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x162214u;
    {
        const bool branch_taken_0x162214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162214) {
            ctx->pc = 0x162278u;
            goto label_162278;
        }
    }
    ctx->pc = 0x16221Cu;
    // 0x16221c: 0xc6600074  lwc1        $f0, 0x74($s3)
    ctx->pc = 0x16221cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162220: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x162220u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162224: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x162224u;
    {
        const bool branch_taken_0x162224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162224) {
            ctx->pc = 0x162278u;
            goto label_162278;
        }
    }
    ctx->pc = 0x16222Cu;
    // 0x16222c: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x16222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162230: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x162230u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162234: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x162234u;
    {
        const bool branch_taken_0x162234 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162234) {
            ctx->pc = 0x162278u;
            goto label_162278;
        }
    }
    ctx->pc = 0x16223Cu;
    // 0x16223c: 0xc6600080  lwc1        $f0, 0x80($s3)
    ctx->pc = 0x16223cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162240: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x162240u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162244: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x162244u;
    {
        const bool branch_taken_0x162244 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162244) {
            ctx->pc = 0x162278u;
            goto label_162278;
        }
    }
    ctx->pc = 0x16224Cu;
    // 0x16224c: 0xc6600084  lwc1        $f0, 0x84($s3)
    ctx->pc = 0x16224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162250: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x162250u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162254: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x162254u;
    {
        const bool branch_taken_0x162254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162254) {
            ctx->pc = 0x162278u;
            goto label_162278;
        }
    }
    ctx->pc = 0x16225Cu;
    // 0x16225c: 0xc6600088  lwc1        $f0, 0x88($s3)
    ctx->pc = 0x16225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162260: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x162260u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162264: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x162264u;
    {
        const bool branch_taken_0x162264 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162264) {
            ctx->pc = 0x162278u;
            goto label_162278;
        }
    }
    ctx->pc = 0x16226Cu;
    // 0x16226c: 0x96630010  lhu         $v1, 0x10($s3)
    ctx->pc = 0x16226cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x162270: 0x3063ffe7  andi        $v1, $v1, 0xFFE7
    ctx->pc = 0x162270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65511);
    // 0x162274: 0xa6630010  sh          $v1, 0x10($s3)
    ctx->pc = 0x162274u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 3));
label_162278:
    // 0x162278: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x162278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16227c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16227cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162280: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x162280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162284: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162288: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16228c: 0x3e00008  jr          $ra
    ctx->pc = 0x16228Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16228Cu;
        // 0x162290: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16228Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162294u;
}

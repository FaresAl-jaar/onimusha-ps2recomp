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

// Function: sub_001332C0
// Address: 0x1332c0 - 0x13341c
void sub_001332C0_0x1332c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001332C0_0x1332c0");
#endif

    switch (ctx->pc) {
        case 0x1332f4u: goto label_1332f4;
        case 0x133310u: goto label_133310;
        case 0x133348u: goto label_133348;
        case 0x133360u: goto label_133360;
        case 0x1333b4u: goto label_1333b4;
        case 0x1333c0u: goto label_1333c0;
        default: break;
    }

    ctx->pc = 0x1332c0u;

    // 0x1332c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1332c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1332c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1332c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1332c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1332c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1332cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1332ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1332d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1332d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1332d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1332d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1332d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1332d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1332dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1332e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1332e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1332e4: 0x8cb40014  lw          $s4, 0x14($a1)
    ctx->pc = 0x1332e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1332e8: 0x92850003  lbu         $a1, 0x3($s4)
    ctx->pc = 0x1332e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x1332ec: 0xc04cad8  jal         func_132B60
    ctx->pc = 0x1332ECu;
    SET_GPR_U32(ctx, 31, 0x1332F4u);
    ctx->pc = 0x1332F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1332ECu;
    // 0x1332f0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B60u, 0x1332ECu, 0x1332F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332F4u;
label_1332f4:
    // 0x1332f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1332f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332f8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1332f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1332fc: 0x96820006  lhu         $v0, 0x6($s4)
    ctx->pc = 0x1332fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x133300: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x133300u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x133304: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x133304u;
    {
        const bool branch_taken_0x133304 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x133308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133304u;
        // 0x133308: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133304) {
            ctx->pc = 0x133388u;
            goto label_133388;
        }
    }
    ctx->pc = 0x13330Cu;
    // 0x13330c: 0x0  nop
    ctx->pc = 0x13330cu;
    // NOP
label_133310:
    // 0x133310: 0x92620010  lbu         $v0, 0x10($s3)
    ctx->pc = 0x133310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x133314: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x133314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x133318: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x133318u;
    {
        const bool branch_taken_0x133318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133318) {
            ctx->pc = 0x133350u;
            goto label_133350;
        }
    }
    ctx->pc = 0x133320u;
    // 0x133320: 0x9662000e  lhu         $v0, 0xE($s3)
    ctx->pc = 0x133320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x133324: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x133324u;
    {
        const bool branch_taken_0x133324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x133324) {
            ctx->pc = 0x133350u;
            goto label_133350;
        }
    }
    ctx->pc = 0x13332Cu;
    // 0x13332c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x13332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x133330: 0x9265000a  lbu         $a1, 0xA($s3)
    ctx->pc = 0x133330u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x133334: 0x9266000d  lbu         $a2, 0xD($s3)
    ctx->pc = 0x133334u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x133338: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x133338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13333c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x13333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x133340: 0xc04cfb4  jal         func_133ED0
    ctx->pc = 0x133340u;
    SET_GPR_U32(ctx, 31, 0x133348u);
    ctx->pc = 0x133344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133340u;
    // 0x133344: 0x24440930  addiu       $a0, $v0, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133ED0u, 0x133340u, 0x133348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133348u;
label_133348:
    // 0x133348: 0x9670000e  lhu         $s0, 0xE($s3)
    ctx->pc = 0x133348u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x13334c: 0x0  nop
    ctx->pc = 0x13334cu;
    // NOP
label_133350:
    // 0x133350: 0x9265000c  lbu         $a1, 0xC($s3)
    ctx->pc = 0x133350u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x133354: 0x9266000a  lbu         $a2, 0xA($s3)
    ctx->pc = 0x133354u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x133358: 0xc04d134  jal         func_1344D0
    ctx->pc = 0x133358u;
    SET_GPR_U32(ctx, 31, 0x133360u);
    ctx->pc = 0x13335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133358u;
    // 0x13335c: 0x9264000b  lbu         $a0, 0xB($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1344D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1344D0u, 0x133358u, 0x133360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133360u;
label_133360:
    // 0x133360: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x133360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x133364: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x133364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x133368: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x133368u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13336c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x13336cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x133370: 0xa2600010  sb          $zero, 0x10($s3)
    ctx->pc = 0x133370u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x133374: 0x96820006  lhu         $v0, 0x6($s4)
    ctx->pc = 0x133374u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x133378: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x133378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13337c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x13337Cu;
    {
        const bool branch_taken_0x13337c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13337Cu;
        // 0x133380: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13337c) {
            ctx->pc = 0x133310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133310;
        }
    }
    ctx->pc = 0x133384u;
    // 0x133384: 0x0  nop
    ctx->pc = 0x133384u;
    // NOP
label_133388:
    // 0x133388: 0xa6800004  sh          $zero, 0x4($s4)
    ctx->pc = 0x133388u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x13338c: 0x92860002  lbu         $a2, 0x2($s4)
    ctx->pc = 0x13338cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x133390: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x133390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133394: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x133394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x133398: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x133398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13339c: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x13339cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1333a0: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1333a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1333a4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1333a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1333a8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1333a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1333ac: 0xc04cef8  jal         func_133BE0
    ctx->pc = 0x1333ACu;
    SET_GPR_U32(ctx, 31, 0x1333B4u);
    ctx->pc = 0x1333B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1333ACu;
    // 0x1333b0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133BE0u, 0x1333ACu, 0x1333B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333B4u;
label_1333b4:
    // 0x1333b4: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x1333b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1333b8: 0x10740009  beq         $v1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1333B8u;
    {
        const bool branch_taken_0x1333b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1333BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1333B8u;
        // 0x1333bc: 0x26440018  addiu       $a0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1333b8) {
            ctx->pc = 0x1333E0u;
            goto label_1333e0;
        }
    }
    ctx->pc = 0x1333C0u;
label_1333c0:
    // 0x1333c0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1333c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1333c4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1333c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1333c8: 0x0  nop
    ctx->pc = 0x1333c8u;
    // NOP
    // 0x1333cc: 0x0  nop
    ctx->pc = 0x1333ccu;
    // NOP
    // 0x1333d0: 0x0  nop
    ctx->pc = 0x1333d0u;
    // NOP
    // 0x1333d4: 0x1474fffa  bne         $v1, $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1333D4u;
    {
        const bool branch_taken_0x1333d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x1333d4) {
            ctx->pc = 0x1333C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1333c0;
        }
    }
    ctx->pc = 0x1333DCu;
    // 0x1333dc: 0x0  nop
    ctx->pc = 0x1333dcu;
    // NOP
label_1333e0:
    // 0x1333e0: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x1333e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1333e4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1333e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1333e8: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x1333e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1333ec: 0x14740002  bne         $v1, $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x1333ECu;
    {
        const bool branch_taken_0x1333ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x1333ec) {
            ctx->pc = 0x1333F8u;
            goto label_1333f8;
        }
    }
    ctx->pc = 0x1333F4u;
    // 0x1333f4: 0xae440030  sw          $a0, 0x30($s2)
    ctx->pc = 0x1333f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
label_1333f8:
    // 0x1333f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1333f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1333fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1333fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133400: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x133400u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x133404: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x133404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133408: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x133408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13340c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13340cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133414: 0x3e00008  jr          $ra
    ctx->pc = 0x133414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133414u;
        // 0x133418: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13341Cu;
}

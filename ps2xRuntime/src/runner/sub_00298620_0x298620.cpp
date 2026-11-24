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

// Function: sub_00298620
// Address: 0x298620 - 0x298bbc
void sub_00298620_0x298620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298620_0x298620");
#endif

    switch (ctx->pc) {
        case 0x298700u: goto label_298700;
        case 0x298780u: goto label_298780;
        case 0x298808u: goto label_298808;
        case 0x298818u: goto label_298818;
        case 0x29883cu: goto label_29883c;
        case 0x298878u: goto label_298878;
        case 0x298890u: goto label_298890;
        case 0x2988a0u: goto label_2988a0;
        case 0x2988b0u: goto label_2988b0;
        default: break;
    }

    ctx->pc = 0x298620u;

    // 0x298620: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x298620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x298624: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x298624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x298628: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x298628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29862c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29862cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x298630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x298630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x298634: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x298634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29863c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29863cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298640: 0x948229d2  lhu         $v0, 0x29D2($a0)
    ctx->pc = 0x298640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10706)));
    // 0x298644: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298644u;
    {
        const bool branch_taken_0x298644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298644u;
        // 0x298648: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298644) {
            ctx->pc = 0x298658u;
            goto label_298658;
        }
    }
    ctx->pc = 0x29864Cu;
    // 0x29864c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x298650: 0xa64229d2  sh          $v0, 0x29D2($s2)
    ctx->pc = 0x298650u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10706), (uint16_t)GPR_U32(ctx, 2));
    // 0x298654: 0x0  nop
    ctx->pc = 0x298654u;
    // NOP
label_298658:
    // 0x298658: 0x964229d4  lhu         $v0, 0x29D4($s2)
    ctx->pc = 0x298658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10708)));
    // 0x29865c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29865Cu;
    {
        const bool branch_taken_0x29865c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29865c) {
            ctx->pc = 0x298670u;
            goto label_298670;
        }
    }
    ctx->pc = 0x298664u;
    // 0x298664: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x298664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x298668: 0xa64229d4  sh          $v0, 0x29D4($s2)
    ctx->pc = 0x298668u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10708), (uint16_t)GPR_U32(ctx, 2));
    // 0x29866c: 0x0  nop
    ctx->pc = 0x29866cu;
    // NOP
label_298670:
    // 0x298670: 0x92420783  lbu         $v0, 0x783($s2)
    ctx->pc = 0x298670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1923)));
    // 0x298674: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298674u;
    {
        const bool branch_taken_0x298674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298674) {
            ctx->pc = 0x298688u;
            goto label_298688;
        }
    }
    ctx->pc = 0x29867Cu;
    // 0x29867c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29867cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x298680: 0xa2420783  sb          $v0, 0x783($s2)
    ctx->pc = 0x298680u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1923), (uint8_t)GPR_U32(ctx, 2));
    // 0x298684: 0x0  nop
    ctx->pc = 0x298684u;
    // NOP
label_298688:
    // 0x298688: 0x92420790  lbu         $v0, 0x790($s2)
    ctx->pc = 0x298688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1936)));
    // 0x29868c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29868Cu;
    {
        const bool branch_taken_0x29868c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29868c) {
            ctx->pc = 0x2986A0u;
            goto label_2986a0;
        }
    }
    ctx->pc = 0x298694u;
    // 0x298694: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x298694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x298698: 0xa2420790  sb          $v0, 0x790($s2)
    ctx->pc = 0x298698u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1936), (uint8_t)GPR_U32(ctx, 2));
    // 0x29869c: 0x0  nop
    ctx->pc = 0x29869cu;
    // NOP
label_2986a0:
    // 0x2986a0: 0x9242078b  lbu         $v0, 0x78B($s2)
    ctx->pc = 0x2986a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1931)));
    // 0x2986a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2986A4u;
    {
        const bool branch_taken_0x2986a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2986a4) {
            ctx->pc = 0x2986B8u;
            goto label_2986b8;
        }
    }
    ctx->pc = 0x2986ACu;
    // 0x2986ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2986acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2986b0: 0xa242078b  sb          $v0, 0x78B($s2)
    ctx->pc = 0x2986b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1931), (uint8_t)GPR_U32(ctx, 2));
    // 0x2986b4: 0x0  nop
    ctx->pc = 0x2986b4u;
    // NOP
label_2986b8:
    // 0x2986b8: 0x96420788  lhu         $v0, 0x788($s2)
    ctx->pc = 0x2986b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1928)));
    // 0x2986bc: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x2986bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2986c0: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x2986c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x2986c4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2986C4u;
    {
        const bool branch_taken_0x2986c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2986c4) {
            ctx->pc = 0x2986D8u;
            goto label_2986d8;
        }
    }
    ctx->pc = 0x2986CCu;
    // 0x2986cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2986ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2986d0: 0xa6420788  sh          $v0, 0x788($s2)
    ctx->pc = 0x2986d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1928), (uint16_t)GPR_U32(ctx, 2));
    // 0x2986d4: 0x0  nop
    ctx->pc = 0x2986d4u;
    // NOP
label_2986d8:
    // 0x2986d8: 0x964206d6  lhu         $v0, 0x6D6($s2)
    ctx->pc = 0x2986d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1750)));
    // 0x2986dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2986dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2986e0: 0xa64206d6  sh          $v0, 0x6D6($s2)
    ctx->pc = 0x2986e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1750), (uint16_t)GPR_U32(ctx, 2));
    // 0x2986e4: 0x8e4206c8  lw          $v0, 0x6C8($s2)
    ctx->pc = 0x2986e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1736)));
    // 0x2986e8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2986e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2986ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2986ECu;
    {
        const bool branch_taken_0x2986ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2986F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986ECu;
        // 0x2986f0: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986ec) {
            ctx->pc = 0x2986F8u;
            goto label_2986f8;
        }
    }
    ctx->pc = 0x2986F4u;
    // 0x2986f4: 0xa2420790  sb          $v0, 0x790($s2)
    ctx->pc = 0x2986f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1936), (uint8_t)GPR_U32(ctx, 2));
label_2986f8:
    // 0x2986f8: 0xc09f938  jal         func_27E4E0
    ctx->pc = 0x2986F8u;
    SET_GPR_U32(ctx, 31, 0x298700u);
    ctx->pc = 0x2986FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2986F8u;
    // 0x2986fc: 0x264401c0  addiu       $a0, $s2, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E4E0u, 0x2986F8u, 0x298700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298700u;
label_298700:
    // 0x298700: 0x92430640  lbu         $v1, 0x640($s2)
    ctx->pc = 0x298700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1600)));
    // 0x298704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298708: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x298708u;
    {
        const bool branch_taken_0x298708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x298708) {
            ctx->pc = 0x298750u;
            goto label_298750;
        }
    }
    ctx->pc = 0x298710u;
    // 0x298710: 0xde430500  ld          $v1, 0x500($s2)
    ctx->pc = 0x298710u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x298714: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x298714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x298718: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x298718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29871c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29871cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x298720: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x298720u;
    {
        const bool branch_taken_0x298720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298720) {
            ctx->pc = 0x298750u;
            goto label_298750;
        }
    }
    ctx->pc = 0x298728u;
    // 0x298728: 0x92430780  lbu         $v1, 0x780($s2)
    ctx->pc = 0x298728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1920)));
    // 0x29872c: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x29872cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x298730: 0x244224d0  addiu       $v0, $v0, 0x24D0
    ctx->pc = 0x298730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9424));
    // 0x298734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298738: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x298738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29873c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29873Cu;
    {
        const bool branch_taken_0x29873c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29873Cu;
        // 0x298740: 0x28610002  slti        $at, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29873c) {
            ctx->pc = 0x298750u;
            goto label_298750;
        }
    }
    ctx->pc = 0x298744u;
    // 0x298744: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x298744u;
    {
        const bool branch_taken_0x298744 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x298744) {
            ctx->pc = 0x298750u;
            goto label_298750;
        }
    }
    ctx->pc = 0x29874Cu;
    // 0x29874c: 0xa2400780  sb          $zero, 0x780($s2)
    ctx->pc = 0x29874cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1920), (uint8_t)GPR_U32(ctx, 0));
label_298750:
    // 0x298750: 0x92420780  lbu         $v0, 0x780($s2)
    ctx->pc = 0x298750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1920)));
    // 0x298754: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x298754u;
    {
        const bool branch_taken_0x298754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298754) {
            ctx->pc = 0x298798u;
            goto label_298798;
        }
    }
    ctx->pc = 0x29875Cu;
    // 0x29875c: 0xa2400821  sb          $zero, 0x821($s2)
    ctx->pc = 0x29875cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 0));
    // 0x298760: 0x26440650  addiu       $a0, $s2, 0x650
    ctx->pc = 0x298760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
    // 0x298764: 0xa6400824  sh          $zero, 0x824($s2)
    ctx->pc = 0x298764u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2084), (uint16_t)GPR_U32(ctx, 0));
    // 0x298768: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x298768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29876c: 0xa6400788  sh          $zero, 0x788($s2)
    ctx->pc = 0x29876cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1928), (uint16_t)GPR_U32(ctx, 0));
    // 0x298770: 0x92450780  lbu         $a1, 0x780($s2)
    ctx->pc = 0x298770u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1920)));
    // 0x298774: 0xffa00050  sd          $zero, 0x50($sp)
    ctx->pc = 0x298774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 0));
    // 0x298778: 0xc09d3e8  jal         func_274FA0
    ctx->pc = 0x298778u;
    SET_GPR_U32(ctx, 31, 0x298780u);
    ctx->pc = 0x29877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298778u;
    // 0x29877c: 0xffa00058  sd          $zero, 0x58($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FA0u, 0x298778u, 0x298780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298780u;
label_298780:
    // 0x298780: 0x8e4206b4  lw          $v0, 0x6B4($s2)
    ctx->pc = 0x298780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1716)));
    // 0x298784: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x298784u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x298788: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x298788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29878c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x29878cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x298790: 0xae4206b4  sw          $v0, 0x6B4($s2)
    ctx->pc = 0x298790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1716), GPR_U32(ctx, 2));
    // 0x298794: 0xa2400780  sb          $zero, 0x780($s2)
    ctx->pc = 0x298794u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1920), (uint8_t)GPR_U32(ctx, 0));
label_298798:
    // 0x298798: 0x8e4206c8  lw          $v0, 0x6C8($s2)
    ctx->pc = 0x298798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1736)));
    // 0x29879c: 0xae4206d0  sw          $v0, 0x6D0($s2)
    ctx->pc = 0x29879cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1744), GPR_U32(ctx, 2));
    // 0x2987a0: 0x8e4206cc  lw          $v0, 0x6CC($s2)
    ctx->pc = 0x2987a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1740)));
    // 0x2987a4: 0xae4206c8  sw          $v0, 0x6C8($s2)
    ctx->pc = 0x2987a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1736), GPR_U32(ctx, 2));
    // 0x2987a8: 0xae4006cc  sw          $zero, 0x6CC($s2)
    ctx->pc = 0x2987a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1740), GPR_U32(ctx, 0));
    // 0x2987ac: 0x9242065c  lbu         $v0, 0x65C($s2)
    ctx->pc = 0x2987acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1628)));
    // 0x2987b0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x2987b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2987b4: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x2987B4u;
    {
        const bool branch_taken_0x2987b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2987b4) {
            ctx->pc = 0x298868u;
            goto label_298868;
        }
    }
    ctx->pc = 0x2987BCu;
    // 0x2987bc: 0x92430640  lbu         $v1, 0x640($s2)
    ctx->pc = 0x2987bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1600)));
    // 0x2987c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2987c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2987c4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2987C4u;
    {
        const bool branch_taken_0x2987c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2987c4) {
            ctx->pc = 0x2987E0u;
            goto label_2987e0;
        }
    }
    ctx->pc = 0x2987CCu;
    // 0x2987cc: 0x8e4306ac  lw          $v1, 0x6AC($s2)
    ctx->pc = 0x2987ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
    // 0x2987d0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2987d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2987d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2987d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2987d8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2987D8u;
    {
        const bool branch_taken_0x2987d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2987d8) {
            ctx->pc = 0x298868u;
            goto label_298868;
        }
    }
    ctx->pc = 0x2987E0u;
label_2987e0:
    // 0x2987e0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2987e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2987e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2987e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2987e8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2987E8u;
    {
        const bool branch_taken_0x2987e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2987ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2987E8u;
        // 0x2987ec: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987e8) {
            ctx->pc = 0x2987F8u;
            goto label_2987f8;
        }
    }
    ctx->pc = 0x2987F0u;
    // 0x2987f0: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x2987f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x2987f4: 0x8c530024  lw          $s3, 0x24($v0)
    ctx->pc = 0x2987f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2987f8:
    // 0x2987f8: 0xde450500  ld          $a1, 0x500($s2)
    ctx->pc = 0x2987f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x2987fc: 0xde460508  ld          $a2, 0x508($s2)
    ctx->pc = 0x2987fcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 1288)));
    // 0x298800: 0xc09d410  jal         func_275040
    ctx->pc = 0x298800u;
    SET_GPR_U32(ctx, 31, 0x298808u);
    ctx->pc = 0x298804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298800u;
    // 0x298804: 0x26440650  addiu       $a0, $s2, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275040u, 0x298800u, 0x298808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298808u;
label_298808:
    // 0x298808: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x298808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x29880c: 0x26440650  addiu       $a0, $s2, 0x650
    ctx->pc = 0x29880cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
    // 0x298810: 0xc09d424  jal         func_275090
    ctx->pc = 0x298810u;
    SET_GPR_U32(ctx, 31, 0x298818u);
    ctx->pc = 0x298814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298810u;
    // 0x298814: 0x34450001  ori         $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x275090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275090u, 0x298810u, 0x298818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298818u;
label_298818:
    // 0x298818: 0x9643065a  lhu         $v1, 0x65A($s2)
    ctx->pc = 0x298818u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1626)));
    // 0x29881c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x29881Cu;
    {
        const bool branch_taken_0x29881c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29881c) {
            ctx->pc = 0x298878u;
            goto label_298878;
        }
    }
    ctx->pc = 0x298824u;
    // 0x298824: 0xa6400824  sh          $zero, 0x824($s2)
    ctx->pc = 0x298824u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2084), (uint16_t)GPR_U32(ctx, 0));
    // 0x298828: 0x3002ffff  andi        $v0, $zero, 0xFFFF
    ctx->pc = 0x298828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x29882c: 0xa6400788  sh          $zero, 0x788($s2)
    ctx->pc = 0x29882cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1928), (uint16_t)GPR_U32(ctx, 0));
    // 0x298830: 0x26440650  addiu       $a0, $s2, 0x650
    ctx->pc = 0x298830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
    // 0x298834: 0xc09d4cc  jal         func_275330
    ctx->pc = 0x298834u;
    SET_GPR_U32(ctx, 31, 0x29883Cu);
    ctx->pc = 0x298838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298834u;
    // 0x298838: 0xa2420821  sb          $v0, 0x821($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275330u, 0x298834u, 0x29883Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29883Cu;
label_29883c:
    // 0x29883c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29883cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x298840: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x298840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x298844: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x298844u;
    {
        const bool branch_taken_0x298844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x298844) {
            ctx->pc = 0x298860u;
            goto label_298860;
        }
    }
    ctx->pc = 0x29884Cu;
    // 0x29884c: 0x8e4306b4  lw          $v1, 0x6B4($s2)
    ctx->pc = 0x29884cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1716)));
    // 0x298850: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x298850u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x298854: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x298854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x298858: 0xae4306b4  sw          $v1, 0x6B4($s2)
    ctx->pc = 0x298858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1716), GPR_U32(ctx, 3));
    // 0x29885c: 0x0  nop
    ctx->pc = 0x29885cu;
    // NOP
label_298860:
    // 0x298860: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x298860u;
    {
        const bool branch_taken_0x298860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298860u;
        // 0x298864: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298860) {
            ctx->pc = 0x298878u;
            goto label_298878;
        }
    }
    ctx->pc = 0x298868u;
label_298868:
    // 0x298868: 0x26440650  addiu       $a0, $s2, 0x650
    ctx->pc = 0x298868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
    // 0x29886c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29886cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298870: 0xc09d410  jal         func_275040
    ctx->pc = 0x298870u;
    SET_GPR_U32(ctx, 31, 0x298878u);
    ctx->pc = 0x298874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298870u;
    // 0x298874: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275040u, 0x298870u, 0x298878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298878u;
label_298878:
    // 0x298878: 0x9243065c  lbu         $v1, 0x65C($s2)
    ctx->pc = 0x298878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1628)));
    // 0x29887c: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x29887cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x298880: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x298880u;
    {
        const bool branch_taken_0x298880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x298884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298880u;
        // 0x298884: 0x26440650  addiu       $a0, $s2, 0x650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298880) {
            ctx->pc = 0x298890u;
            goto label_298890;
        }
    }
    ctx->pc = 0x298888u;
    // 0x298888: 0xc09d490  jal         func_275240
    ctx->pc = 0x298888u;
    SET_GPR_U32(ctx, 31, 0x298890u);
    ctx->pc = 0x29888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298888u;
    // 0x29888c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275240u, 0x298888u, 0x298890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298890u;
label_298890:
    // 0x298890: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x298890u;
    {
        const bool branch_taken_0x298890 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x298894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298890u;
        // 0x298894: 0x264406a0  addiu       $a0, $s2, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298890) {
            ctx->pc = 0x2988D0u;
            goto label_2988d0;
        }
    }
    ctx->pc = 0x298898u;
    // 0x298898: 0xc040274  jal         func_1009D0
    ctx->pc = 0x298898u;
    SET_GPR_U32(ctx, 31, 0x2988A0u);
    ctx->pc = 0x1009D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009D0u, 0x298898u, 0x2988A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2988A0u;
label_2988a0:
    // 0x2988a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2988A0u;
    {
        const bool branch_taken_0x2988a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2988A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988A0u;
        // 0x2988a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988a0) {
            ctx->pc = 0x2988D0u;
            goto label_2988d0;
        }
    }
    ctx->pc = 0x2988A8u;
    // 0x2988a8: 0xc040250  jal         func_100940
    ctx->pc = 0x2988A8u;
    SET_GPR_U32(ctx, 31, 0x2988B0u);
    ctx->pc = 0x2988ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2988A8u;
    // 0x2988ac: 0x265906a0  addiu       $t9, $s2, 0x6A0 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 18), 1696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x2988A8u, 0x2988B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2988B0u;
label_2988b0:
    // 0x2988b0: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x2988b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x2988b4: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x2988b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x2988b8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2988b8u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2988bc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2988bcu;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2988c0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2988c0u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2988c4: 0xe64206a0  swc1        $f2, 0x6A0($s2)
    ctx->pc = 0x2988c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1696), bits); }
    // 0x2988c8: 0xe64106a4  swc1        $f1, 0x6A4($s2)
    ctx->pc = 0x2988c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1700), bits); }
    // 0x2988cc: 0xe64006a8  swc1        $f0, 0x6A8($s2)
    ctx->pc = 0x2988ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1704), bits); }
label_2988d0:
    // 0x2988d0: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2988D0u;
    {
        const bool branch_taken_0x2988d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2988d0) {
            ctx->pc = 0x298988u;
            goto label_298988;
        }
    }
    ctx->pc = 0x2988D8u;
    // 0x2988d8: 0x924406d8  lbu         $a0, 0x6D8($s2)
    ctx->pc = 0x2988d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1752)));
    // 0x2988dc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2988dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2988e0: 0x10850025  beq         $a0, $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2988E0u;
    {
        const bool branch_taken_0x2988e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2988E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988E0u;
        // 0x2988e4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988e0) {
            ctx->pc = 0x298978u;
            goto label_298978;
        }
    }
    ctx->pc = 0x2988E8u;
    // 0x2988e8: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2988E8u;
    {
        const bool branch_taken_0x2988e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2988e8) {
            ctx->pc = 0x298940u;
            goto label_298940;
        }
    }
    ctx->pc = 0x2988F0u;
    // 0x2988f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2988f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2988f4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2988F4u;
    {
        const bool branch_taken_0x2988f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2988f4) {
            ctx->pc = 0x298908u;
            goto label_298908;
        }
    }
    ctx->pc = 0x2988FCu;
    // 0x2988fc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2988FCu;
    {
        const bool branch_taken_0x2988fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2988fc) {
            ctx->pc = 0x298988u;
            goto label_298988;
        }
    }
    ctx->pc = 0x298904u;
    // 0x298904: 0x0  nop
    ctx->pc = 0x298904u;
    // NOP
label_298908:
    // 0x298908: 0xde440690  ld          $a0, 0x690($s2)
    ctx->pc = 0x298908u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x29890c: 0xde4306e0  ld          $v1, 0x6E0($s2)
    ctx->pc = 0x29890cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 1760)));
    // 0x298910: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x298910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x298914: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x298914u;
    {
        const bool branch_taken_0x298914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298914) {
            ctx->pc = 0x298928u;
            goto label_298928;
        }
    }
    ctx->pc = 0x29891Cu;
    // 0x29891c: 0xfe4006e0  sd          $zero, 0x6E0($s2)
    ctx->pc = 0x29891cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1760), GPR_U64(ctx, 0));
    // 0x298920: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x298920u;
    {
        const bool branch_taken_0x298920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298920u;
        // 0x298924: 0xa24506d8  sb          $a1, 0x6D8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1752), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298920) {
            ctx->pc = 0x298988u;
            goto label_298988;
        }
    }
    ctx->pc = 0x298928u;
label_298928:
    // 0x298928: 0xde4406e8  ld          $a0, 0x6E8($s2)
    ctx->pc = 0x298928u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 1768)));
    // 0x29892c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29892cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298930: 0xfe4406e0  sd          $a0, 0x6E0($s2)
    ctx->pc = 0x298930u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1760), GPR_U64(ctx, 4));
    // 0x298934: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x298934u;
    {
        const bool branch_taken_0x298934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298934u;
        // 0x298938: 0xa24306d8  sb          $v1, 0x6D8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1752), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298934) {
            ctx->pc = 0x298988u;
            goto label_298988;
        }
    }
    ctx->pc = 0x29893Cu;
    // 0x29893c: 0x0  nop
    ctx->pc = 0x29893cu;
    // NOP
label_298940:
    // 0x298940: 0xde440698  ld          $a0, 0x698($s2)
    ctx->pc = 0x298940u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 1688)));
    // 0x298944: 0xde4306e0  ld          $v1, 0x6E0($s2)
    ctx->pc = 0x298944u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 1760)));
    // 0x298948: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x298948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x29894c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29894Cu;
    {
        const bool branch_taken_0x29894c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29894c) {
            ctx->pc = 0x298960u;
            goto label_298960;
        }
    }
    ctx->pc = 0x298954u;
    // 0x298954: 0xfe4006e0  sd          $zero, 0x6E0($s2)
    ctx->pc = 0x298954u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1760), GPR_U64(ctx, 0));
    // 0x298958: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x298958u;
    {
        const bool branch_taken_0x298958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298958u;
        // 0x29895c: 0xa24506d8  sb          $a1, 0x6D8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1752), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298958) {
            ctx->pc = 0x298988u;
            goto label_298988;
        }
    }
    ctx->pc = 0x298960u;
label_298960:
    // 0x298960: 0xde4406e8  ld          $a0, 0x6E8($s2)
    ctx->pc = 0x298960u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 1768)));
    // 0x298964: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x298964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298968: 0xfe4406e0  sd          $a0, 0x6E0($s2)
    ctx->pc = 0x298968u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1760), GPR_U64(ctx, 4));
    // 0x29896c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29896Cu;
    {
        const bool branch_taken_0x29896c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29896Cu;
        // 0x298970: 0xa24306d8  sb          $v1, 0x6D8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1752), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29896c) {
            ctx->pc = 0x298988u;
            goto label_298988;
        }
    }
    ctx->pc = 0x298974u;
    // 0x298974: 0x0  nop
    ctx->pc = 0x298974u;
    // NOP
label_298978:
    // 0x298978: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298978u;
    {
        const bool branch_taken_0x298978 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298978u;
        // 0x29897c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298978) {
            ctx->pc = 0x298988u;
            goto label_298988;
        }
    }
    ctx->pc = 0x298980u;
    // 0x298980: 0xa24306d8  sb          $v1, 0x6D8($s2)
    ctx->pc = 0x298980u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1752), (uint8_t)GPR_U32(ctx, 3));
    // 0x298984: 0x0  nop
    ctx->pc = 0x298984u;
    // NOP
label_298988:
    // 0x298988: 0x92440640  lbu         $a0, 0x640($s2)
    ctx->pc = 0x298988u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1600)));
    // 0x29898c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29898cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298990: 0x14830051  bne         $a0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x298990u;
    {
        const bool branch_taken_0x298990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x298990) {
            ctx->pc = 0x298AD8u;
            goto label_298ad8;
        }
    }
    ctx->pc = 0x298998u;
    // 0x298998: 0x8e4306ac  lw          $v1, 0x6AC($s2)
    ctx->pc = 0x298998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
    // 0x29899c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29899cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2989a0: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x2989A0u;
    {
        const bool branch_taken_0x2989a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2989a0) {
            ctx->pc = 0x298AD8u;
            goto label_298ad8;
        }
    }
    ctx->pc = 0x2989A8u;
    // 0x2989a8: 0xde440510  ld          $a0, 0x510($s2)
    ctx->pc = 0x2989a8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 1296)));
    // 0x2989ac: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2989acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x2989b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2989b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2989b4: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2989B4u;
    {
        const bool branch_taken_0x2989b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2989b4) {
            ctx->pc = 0x298AD8u;
            goto label_298ad8;
        }
    }
    ctx->pc = 0x2989BCu;
    // 0x2989bc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2989bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2989c0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2989c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2989c4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2989c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2989c8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2989c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2989cc: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2989ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2989d0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2989d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2989d4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2989d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2989d8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2989d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2989dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2989dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2989e0: 0x0  nop
    ctx->pc = 0x2989e0u;
    // NOP
    // 0x2989e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2989e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2989e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2989e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2989ec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2989ECu;
    {
        const bool branch_taken_0x2989ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2989ec) {
            ctx->pc = 0x298A04u;
            goto label_298a04;
        }
    }
    ctx->pc = 0x2989F4u;
    // 0x2989f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2989f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2989f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2989f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2989fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2989FCu;
    {
        const bool branch_taken_0x2989fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2989FCu;
        // 0x298a00: 0xa2440783  sb          $a0, 0x783($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1923), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2989fc) {
            ctx->pc = 0x298A20u;
            goto label_298a20;
        }
    }
    ctx->pc = 0x298A04u;
label_298a04:
    // 0x298a04: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x298a04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x298a08: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x298a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x298a0c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x298a0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x298a10: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x298a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x298a14: 0x0  nop
    ctx->pc = 0x298a14u;
    // NOP
    // 0x298a18: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x298a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x298a1c: 0xa2440783  sb          $a0, 0x783($s2)
    ctx->pc = 0x298a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1923), (uint8_t)GPR_U32(ctx, 4));
label_298a20:
    // 0x298a20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x298a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298a24: 0x924408e8  lbu         $a0, 0x8E8($s2)
    ctx->pc = 0x298a24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x298a28: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x298A28u;
    {
        const bool branch_taken_0x298a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x298a28) {
            ctx->pc = 0x298AD8u;
            goto label_298ad8;
        }
    }
    ctx->pc = 0x298A30u;
    // 0x298a30: 0x8e4329c0  lw          $v1, 0x29C0($s2)
    ctx->pc = 0x298a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x298a34: 0x80640037  lb          $a0, 0x37($v1)
    ctx->pc = 0x298a34u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 55)));
    // 0x298a38: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x298a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x298a3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x298a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x298a40: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x298a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x298a44: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x298A44u;
    {
        const bool branch_taken_0x298a44 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x298A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A44u;
        // 0x298a48: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298a44) {
            ctx->pc = 0x298A58u;
            goto label_298a58;
        }
    }
    ctx->pc = 0x298A4Cu;
    // 0x298a4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298a4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298a50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x298A50u;
    {
        const bool branch_taken_0x298a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298A50u;
        // 0x298a54: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x298a50) {
            ctx->pc = 0x298A70u;
            goto label_298a70;
        }
    }
    ctx->pc = 0x298A58u;
label_298a58:
    // 0x298a58: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x298a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x298a5c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x298a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x298a60: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x298a60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298a64: 0x0  nop
    ctx->pc = 0x298a64u;
    // NOP
    // 0x298a68: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x298a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x298a6c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x298a6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_298a70:
    // 0x298a70: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x298a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298a74: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x298a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x298a78: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x298a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x298a7c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x298a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x298a80: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x298a80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x298a84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298a84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298a88: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x298a88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x298a8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x298a8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x298a90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x298a90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298a94: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x298A94u;
    {
        const bool branch_taken_0x298a94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x298a94) {
            ctx->pc = 0x298AACu;
            goto label_298aac;
        }
    }
    ctx->pc = 0x298A9Cu;
    // 0x298a9c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x298a9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x298aa0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x298aa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x298aa4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x298AA4u;
    {
        const bool branch_taken_0x298aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298AA4u;
        // 0x298aa8: 0x92430783  lbu         $v1, 0x783($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1923)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298aa4) {
            ctx->pc = 0x298AC8u;
            goto label_298ac8;
        }
    }
    ctx->pc = 0x298AACu;
label_298aac:
    // 0x298aac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x298aacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x298ab0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x298ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x298ab4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x298ab4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x298ab8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x298ab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x298abc: 0x0  nop
    ctx->pc = 0x298abcu;
    // NOP
    // 0x298ac0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x298ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x298ac4: 0x92430783  lbu         $v1, 0x783($s2)
    ctx->pc = 0x298ac4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1923)));
label_298ac8:
    // 0x298ac8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x298ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x298acc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x298accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x298ad0: 0xa2430783  sb          $v1, 0x783($s2)
    ctx->pc = 0x298ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1923), (uint8_t)GPR_U32(ctx, 3));
    // 0x298ad4: 0x0  nop
    ctx->pc = 0x298ad4u;
    // NOP
label_298ad8:
    // 0x298ad8: 0x92440640  lbu         $a0, 0x640($s2)
    ctx->pc = 0x298ad8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1600)));
    // 0x298adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x298adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298ae0: 0x1483002f  bne         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x298AE0u;
    {
        const bool branch_taken_0x298ae0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x298ae0) {
            ctx->pc = 0x298BA0u;
            goto label_298ba0;
        }
    }
    ctx->pc = 0x298AE8u;
    // 0x298ae8: 0x9243078b  lbu         $v1, 0x78B($s2)
    ctx->pc = 0x298ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1931)));
    // 0x298aec: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x298AECu;
    {
        const bool branch_taken_0x298aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x298aec) {
            ctx->pc = 0x298BA0u;
            goto label_298ba0;
        }
    }
    ctx->pc = 0x298AF4u;
    // 0x298af4: 0xde4404f8  ld          $a0, 0x4F8($s2)
    ctx->pc = 0x298af4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 1272)));
    // 0x298af8: 0xde430500  ld          $v1, 0x500($s2)
    ctx->pc = 0x298af8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x298afc: 0x802027  not         $a0, $a0
    ctx->pc = 0x298afcu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x298b00: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x298b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x298b04: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x298b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x298b08: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x298B08u;
    {
        const bool branch_taken_0x298b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298b08) {
            ctx->pc = 0x298BA0u;
            goto label_298ba0;
        }
    }
    ctx->pc = 0x298B10u;
    // 0x298b10: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x298b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298b14: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x298b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x298b18: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x298b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x298b1c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x298b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x298b20: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x298b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x298b24: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x298b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x298b28: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x298b28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x298b2c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x298b2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x298b30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298b30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298b34: 0x0  nop
    ctx->pc = 0x298b34u;
    // NOP
    // 0x298b38: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x298b38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x298b3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x298b3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298b40: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x298B40u;
    {
        const bool branch_taken_0x298b40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x298b40) {
            ctx->pc = 0x298B58u;
            goto label_298b58;
        }
    }
    ctx->pc = 0x298B48u;
    // 0x298b48: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x298b48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x298b4c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x298b4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x298b50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x298B50u;
    {
        const bool branch_taken_0x298b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B50u;
        // 0x298b54: 0xa244078b  sb          $a0, 0x78B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1931), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b50) {
            ctx->pc = 0x298B74u;
            goto label_298b74;
        }
    }
    ctx->pc = 0x298B58u;
label_298b58:
    // 0x298b58: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x298b58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x298b5c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x298b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x298b60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x298b60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x298b64: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x298b64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x298b68: 0x0  nop
    ctx->pc = 0x298b68u;
    // NOP
    // 0x298b6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x298b6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x298b70: 0xa244078b  sb          $a0, 0x78B($s2)
    ctx->pc = 0x298b70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1931), (uint8_t)GPR_U32(ctx, 4));
label_298b74:
    // 0x298b74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x298b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298b78: 0xa2430790  sb          $v1, 0x790($s2)
    ctx->pc = 0x298b78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1936), (uint8_t)GPR_U32(ctx, 3));
    // 0x298b7c: 0x924408e8  lbu         $a0, 0x8E8($s2)
    ctx->pc = 0x298b7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x298b80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x298b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298b84: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x298B84u;
    {
        const bool branch_taken_0x298b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x298b84) {
            ctx->pc = 0x298BA0u;
            goto label_298ba0;
        }
    }
    ctx->pc = 0x298B8Cu;
    // 0x298b8c: 0x8e4429c0  lw          $a0, 0x29C0($s2)
    ctx->pc = 0x298b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x298b90: 0x92430790  lbu         $v1, 0x790($s2)
    ctx->pc = 0x298b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1936)));
    // 0x298b94: 0x90840035  lbu         $a0, 0x35($a0)
    ctx->pc = 0x298b94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 53)));
    // 0x298b98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x298b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x298b9c: 0xa2430790  sb          $v1, 0x790($s2)
    ctx->pc = 0x298b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1936), (uint8_t)GPR_U32(ctx, 3));
label_298ba0:
    // 0x298ba0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x298ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298ba4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x298ba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298ba8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x298ba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298bac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x298bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298bb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x298BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BB4u;
        // 0x298bb8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298BBCu;
}

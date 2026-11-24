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

// Function: sub_00291850
// Address: 0x291850 - 0x2919d8
void sub_00291850_0x291850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291850_0x291850");
#endif

    switch (ctx->pc) {
        case 0x291850u: goto label_291850;
        case 0x291854u: goto label_291854;
        case 0x291858u: goto label_291858;
        case 0x29185cu: goto label_29185c;
        case 0x291860u: goto label_291860;
        case 0x291864u: goto label_291864;
        case 0x291868u: goto label_291868;
        case 0x29186cu: goto label_29186c;
        case 0x291870u: goto label_291870;
        case 0x291874u: goto label_291874;
        case 0x291878u: goto label_291878;
        case 0x29187cu: goto label_29187c;
        case 0x291880u: goto label_291880;
        case 0x291884u: goto label_291884;
        case 0x291888u: goto label_291888;
        case 0x29188cu: goto label_29188c;
        case 0x291890u: goto label_291890;
        case 0x291894u: goto label_291894;
        case 0x291898u: goto label_291898;
        case 0x29189cu: goto label_29189c;
        case 0x2918a0u: goto label_2918a0;
        case 0x2918a4u: goto label_2918a4;
        case 0x2918a8u: goto label_2918a8;
        case 0x2918acu: goto label_2918ac;
        case 0x2918b0u: goto label_2918b0;
        case 0x2918b4u: goto label_2918b4;
        case 0x2918b8u: goto label_2918b8;
        case 0x2918bcu: goto label_2918bc;
        case 0x2918c0u: goto label_2918c0;
        case 0x2918c4u: goto label_2918c4;
        case 0x2918c8u: goto label_2918c8;
        case 0x2918ccu: goto label_2918cc;
        case 0x2918d0u: goto label_2918d0;
        case 0x2918d4u: goto label_2918d4;
        case 0x2918d8u: goto label_2918d8;
        case 0x2918dcu: goto label_2918dc;
        case 0x2918e0u: goto label_2918e0;
        case 0x2918e4u: goto label_2918e4;
        case 0x2918e8u: goto label_2918e8;
        case 0x2918ecu: goto label_2918ec;
        case 0x2918f0u: goto label_2918f0;
        case 0x2918f4u: goto label_2918f4;
        case 0x2918f8u: goto label_2918f8;
        case 0x2918fcu: goto label_2918fc;
        case 0x291900u: goto label_291900;
        case 0x291904u: goto label_291904;
        case 0x291908u: goto label_291908;
        case 0x29190cu: goto label_29190c;
        case 0x291910u: goto label_291910;
        case 0x291914u: goto label_291914;
        case 0x291918u: goto label_291918;
        case 0x29191cu: goto label_29191c;
        case 0x291920u: goto label_291920;
        case 0x291924u: goto label_291924;
        case 0x291928u: goto label_291928;
        case 0x29192cu: goto label_29192c;
        case 0x291930u: goto label_291930;
        case 0x291934u: goto label_291934;
        case 0x291938u: goto label_291938;
        case 0x29193cu: goto label_29193c;
        case 0x291940u: goto label_291940;
        case 0x291944u: goto label_291944;
        case 0x291948u: goto label_291948;
        case 0x29194cu: goto label_29194c;
        case 0x291950u: goto label_291950;
        case 0x291954u: goto label_291954;
        case 0x291958u: goto label_291958;
        case 0x29195cu: goto label_29195c;
        case 0x291960u: goto label_291960;
        case 0x291964u: goto label_291964;
        case 0x291968u: goto label_291968;
        case 0x29196cu: goto label_29196c;
        case 0x291970u: goto label_291970;
        case 0x291974u: goto label_291974;
        case 0x291978u: goto label_291978;
        case 0x29197cu: goto label_29197c;
        case 0x291980u: goto label_291980;
        case 0x291984u: goto label_291984;
        case 0x291988u: goto label_291988;
        case 0x29198cu: goto label_29198c;
        case 0x291990u: goto label_291990;
        case 0x291994u: goto label_291994;
        case 0x291998u: goto label_291998;
        case 0x29199cu: goto label_29199c;
        case 0x2919a0u: goto label_2919a0;
        case 0x2919a4u: goto label_2919a4;
        case 0x2919a8u: goto label_2919a8;
        case 0x2919acu: goto label_2919ac;
        case 0x2919b0u: goto label_2919b0;
        case 0x2919b4u: goto label_2919b4;
        case 0x2919b8u: goto label_2919b8;
        case 0x2919bcu: goto label_2919bc;
        case 0x2919c0u: goto label_2919c0;
        case 0x2919c4u: goto label_2919c4;
        case 0x2919c8u: goto label_2919c8;
        case 0x2919ccu: goto label_2919cc;
        case 0x2919d0u: goto label_2919d0;
        case 0x2919d4u: goto label_2919d4;
        default: break;
    }

    ctx->pc = 0x291850u;

label_291850:
    // 0x291850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_291854:
    // 0x291854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x291854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_291858:
    // 0x291858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29185c:
    // 0x29185c: 0x90850118  lbu         $a1, 0x118($a0)
    ctx->pc = 0x29185cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 280)));
label_291860:
    // 0x291860: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_291864:
    // 0x291864: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x291864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_291868:
    // 0x291868: 0x10a4003b  beq         $a1, $a0, . + 4 + (0x3B << 2)
label_29186c:
    if (ctx->pc == 0x29186Cu) {
        ctx->pc = 0x29186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291868u;
        // 0x29186c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291870u;
        goto label_291870;
    }
    ctx->pc = 0x291868u;
    {
        const bool branch_taken_0x291868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x29186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291868u;
        // 0x29186c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291868) {
            ctx->pc = 0x291958u;
            goto label_291958;
        }
    }
    ctx->pc = 0x291870u;
label_291870:
    // 0x291870: 0x10a3002d  beq         $a1, $v1, . + 4 + (0x2D << 2)
label_291874:
    if (ctx->pc == 0x291874u) {
        ctx->pc = 0x291878u;
        goto label_291878;
    }
    ctx->pc = 0x291870u;
    {
        const bool branch_taken_0x291870 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x291870) {
            ctx->pc = 0x291928u;
            goto label_291928;
        }
    }
    ctx->pc = 0x291878u;
label_291878:
    // 0x291878: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_29187c:
    if (ctx->pc == 0x29187Cu) {
        ctx->pc = 0x291880u;
        goto label_291880;
    }
    ctx->pc = 0x291878u;
    {
        const bool branch_taken_0x291878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x291878) {
            ctx->pc = 0x291888u;
            goto label_291888;
        }
    }
    ctx->pc = 0x291880u;
label_291880:
    // 0x291880: 0x10000051  b           . + 4 + (0x51 << 2)
label_291884:
    if (ctx->pc == 0x291884u) {
        ctx->pc = 0x291888u;
        goto label_291888;
    }
    ctx->pc = 0x291880u;
    {
        const bool branch_taken_0x291880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291880) {
            ctx->pc = 0x2919C8u;
            goto label_2919c8;
        }
    }
    ctx->pc = 0x291888u;
label_291888:
    // 0x291888: 0x96032acc  lhu         $v1, 0x2ACC($s0)
    ctx->pc = 0x291888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10956)));
label_29188c:
    // 0x29188c: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
label_291890:
    if (ctx->pc == 0x291890u) {
        ctx->pc = 0x291894u;
        goto label_291894;
    }
    ctx->pc = 0x29188Cu;
    {
        const bool branch_taken_0x29188c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29188c) {
            ctx->pc = 0x2919C8u;
            goto label_2919c8;
        }
    }
    ctx->pc = 0x291894u;
label_291894:
    // 0x291894: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x291894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_291898:
    // 0x291898: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x291898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_29189c:
    // 0x29189c: 0x24640100  addiu       $a0, $v1, 0x100
    ctx->pc = 0x29189cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_2918a0:
    // 0x2918a0: 0x3086001f  andi        $a2, $a0, 0x1F
    ctx->pc = 0x2918a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_2918a4:
    // 0x2918a4: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x2918a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
label_2918a8:
    // 0x2918a8: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x2918a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
label_2918ac:
    // 0x2918ac: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x2918acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
label_2918b0:
    // 0x2918b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2918b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2918b4:
    // 0x2918b4: 0xc52806  srlv        $a1, $a1, $a2
    ctx->pc = 0x2918b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_2918b8:
    // 0x2918b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2918b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2918bc:
    // 0x2918bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2918bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2918c0:
    // 0x2918c0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2918c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_2918c4:
    // 0x2918c4: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
label_2918c8:
    if (ctx->pc == 0x2918C8u) {
        ctx->pc = 0x2918C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918C4u;
        // 0x2918c8: 0x27848560  addiu       $a0, $gp, -0x7AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2918CCu;
        goto label_2918cc;
    }
    ctx->pc = 0x2918C4u;
    {
        const bool branch_taken_0x2918c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2918C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918C4u;
        // 0x2918c8: 0x27848560  addiu       $a0, $gp, -0x7AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2918c4) {
            ctx->pc = 0x2919C8u;
            goto label_2919c8;
        }
    }
    ctx->pc = 0x2918CCu;
label_2918cc:
    // 0x2918cc: 0xc053b28  jal         func_14ECA0
label_2918d0:
    if (ctx->pc == 0x2918D0u) {
        ctx->pc = 0x2918D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918CCu;
        // 0x2918d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2918D4u;
        goto label_2918d4;
    }
    ctx->pc = 0x2918CCu;
    SET_GPR_U32(ctx, 31, 0x2918D4u);
    ctx->pc = 0x2918D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2918CCu;
    // 0x2918d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECA0u, 0x2918CCu, 0x2918D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2918D4u;
label_2918d4:
    // 0x2918d4: 0x92030118  lbu         $v1, 0x118($s0)
    ctx->pc = 0x2918d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 280)));
label_2918d8:
    // 0x2918d8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2918d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_2918dc:
    // 0x2918dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2918dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2918e0:
    // 0x2918e0: 0xa2030118  sb          $v1, 0x118($s0)
    ctx->pc = 0x2918e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
label_2918e4:
    // 0x2918e4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x2918e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_2918e8:
    // 0x2918e8: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x2918e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_2918ec:
    // 0x2918ec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2918ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2918f0:
    // 0x2918f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2918f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2918f4:
    // 0x2918f4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2918f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2918f8:
    // 0x2918f8: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x2918f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_2918fc:
    // 0x2918fc: 0xc0a448c  jal         func_291230
label_291900:
    if (ctx->pc == 0x291900u) {
        ctx->pc = 0x291900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2918FCu;
        // 0x291900: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291904u;
        goto label_291904;
    }
    ctx->pc = 0x2918FCu;
    SET_GPR_U32(ctx, 31, 0x291904u);
    ctx->pc = 0x291900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2918FCu;
    // 0x291900: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291230u, 0x2918FCu, 0x291904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291904u;
label_291904:
    // 0x291904: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x291904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_291908:
    // 0x291908: 0x96062ace  lhu         $a2, 0x2ACE($s0)
    ctx->pc = 0x291908u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10958)));
label_29190c:
    // 0x29190c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29190cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_291910:
    // 0x291910: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x291910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_291914:
    // 0x291914: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x291914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_291918:
    // 0x291918: 0x320f809  jalr        $t9
label_29191c:
    if (ctx->pc == 0x29191Cu) {
        ctx->pc = 0x29191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291918u;
        // 0x29191c: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291920u;
        goto label_291920;
    }
    ctx->pc = 0x291918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x291920u);
        ctx->pc = 0x29191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291918u;
        // 0x29191c: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291918u, 0x291920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291920u;
label_291920:
    // 0x291920: 0x10000029  b           . + 4 + (0x29 << 2)
label_291924:
    if (ctx->pc == 0x291924u) {
        ctx->pc = 0x291928u;
        goto label_291928;
    }
    ctx->pc = 0x291920u;
    {
        const bool branch_taken_0x291920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291920) {
            ctx->pc = 0x2919C8u;
            goto label_2919c8;
        }
    }
    ctx->pc = 0x291928u;
label_291928:
    // 0x291928: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x291928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_29192c:
    // 0x29192c: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x29192cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_291930:
    // 0x291930: 0x946300c8  lhu         $v1, 0xC8($v1)
    ctx->pc = 0x291930u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_291934:
    // 0x291934: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x291934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_291938:
    // 0x291938: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x291938u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29193c:
    // 0x29193c: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_291940:
    if (ctx->pc == 0x291940u) {
        ctx->pc = 0x291940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29193Cu;
        // 0x291940: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291944u;
        goto label_291944;
    }
    ctx->pc = 0x29193Cu;
    {
        const bool branch_taken_0x29193c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29193Cu;
        // 0x291940: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29193c) {
            ctx->pc = 0x2919C8u;
            goto label_2919c8;
        }
    }
    ctx->pc = 0x291944u;
label_291944:
    // 0x291944: 0xa6032ac8  sh          $v1, 0x2AC8($s0)
    ctx->pc = 0x291944u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10952), (uint16_t)GPR_U32(ctx, 3));
label_291948:
    // 0x291948: 0x92030118  lbu         $v1, 0x118($s0)
    ctx->pc = 0x291948u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 280)));
label_29194c:
    // 0x29194c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29194cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_291950:
    // 0x291950: 0x1000001d  b           . + 4 + (0x1D << 2)
label_291954:
    if (ctx->pc == 0x291954u) {
        ctx->pc = 0x291954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291950u;
        // 0x291954: 0xa2030118  sb          $v1, 0x118($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291958u;
        goto label_291958;
    }
    ctx->pc = 0x291950u;
    {
        const bool branch_taken_0x291950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291950u;
        // 0x291954: 0xa2030118  sb          $v1, 0x118($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 280), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291950) {
            ctx->pc = 0x2919C8u;
            goto label_2919c8;
        }
    }
    ctx->pc = 0x291958u;
label_291958:
    // 0x291958: 0x86032ac8  lh          $v1, 0x2AC8($s0)
    ctx->pc = 0x291958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10952)));
label_29195c:
    // 0x29195c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29195cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_291960:
    // 0x291960: 0xa6032ac8  sh          $v1, 0x2AC8($s0)
    ctx->pc = 0x291960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10952), (uint16_t)GPR_U32(ctx, 3));
label_291964:
    // 0x291964: 0x86032ac8  lh          $v1, 0x2AC8($s0)
    ctx->pc = 0x291964u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10952)));
label_291968:
    // 0x291968: 0x1c600013  bgtz        $v1, . + 4 + (0x13 << 2)
label_29196c:
    if (ctx->pc == 0x29196Cu) {
        ctx->pc = 0x291970u;
        goto label_291970;
    }
    ctx->pc = 0x291968u;
    {
        const bool branch_taken_0x291968 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x291968) {
            ctx->pc = 0x2919B8u;
            goto label_2919b8;
        }
    }
    ctx->pc = 0x291970u;
label_291970:
    // 0x291970: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x291970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_291974:
    // 0x291974: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x291974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_291978:
    // 0x291978: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x291978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_29197c:
    // 0x29197c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x29197cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_291980:
    // 0x291980: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x291980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_291984:
    // 0x291984: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x291984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_291988:
    // 0x291988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29198c:
    // 0x29198c: 0x0  nop
    ctx->pc = 0x29198cu;
    // NOP
label_291990:
    // 0x291990: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x291990u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_291994:
    // 0x291994: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x291994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_291998:
    // 0x291998: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x291998u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_29199c:
    // 0x29199c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x29199cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2919a0:
    // 0x2919a0: 0x0  nop
    ctx->pc = 0x2919a0u;
    // NOP
label_2919a4:
    // 0x2919a4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2919a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_2919a8:
    // 0x2919a8: 0xc0a85ec  jal         func_2A17B0
label_2919ac:
    if (ctx->pc == 0x2919ACu) {
        ctx->pc = 0x2919ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919A8u;
        // 0x2919ac: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2919B0u;
        goto label_2919b0;
    }
    ctx->pc = 0x2919A8u;
    SET_GPR_U32(ctx, 31, 0x2919B0u);
    ctx->pc = 0x2919ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2919A8u;
    // 0x2919ac: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A17B0u, 0x2919A8u, 0x2919B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919B0u;
label_2919b0:
    // 0x2919b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2919b4:
    if (ctx->pc == 0x2919B4u) {
        ctx->pc = 0x2919B8u;
        goto label_2919b8;
    }
    ctx->pc = 0x2919B0u;
    {
        const bool branch_taken_0x2919b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2919b0) {
            ctx->pc = 0x2919C8u;
            goto label_2919c8;
        }
    }
    ctx->pc = 0x2919B8u;
label_2919b8:
    // 0x2919b8: 0xa204011c  sb          $a0, 0x11C($s0)
    ctx->pc = 0x2919b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 4));
label_2919bc:
    // 0x2919bc: 0x96030030  lhu         $v1, 0x30($s0)
    ctx->pc = 0x2919bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_2919c0:
    // 0x2919c0: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2919c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
label_2919c4:
    // 0x2919c4: 0xa6030030  sh          $v1, 0x30($s0)
    ctx->pc = 0x2919c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 3));
label_2919c8:
    // 0x2919c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2919c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2919cc:
    // 0x2919cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2919ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2919d0:
    // 0x2919d0: 0x3e00008  jr          $ra
label_2919d4:
    if (ctx->pc == 0x2919D4u) {
        ctx->pc = 0x2919D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919D0u;
        // 0x2919d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2919D8u;
        goto label_fallthrough_0x2919d0;
    }
    ctx->pc = 0x2919D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2919D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919D0u;
        // 0x2919d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2919D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2919d0:
    ctx->pc = 0x2919D8u;
}

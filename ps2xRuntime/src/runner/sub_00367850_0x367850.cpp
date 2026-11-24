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

// Function: sub_00367850
// Address: 0x367850 - 0x367bf8
void sub_00367850_0x367850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367850_0x367850");
#endif

    switch (ctx->pc) {
        case 0x367940u: goto label_367940;
        case 0x36797cu: goto label_36797c;
        case 0x367988u: goto label_367988;
        case 0x3679b4u: goto label_3679b4;
        case 0x367ab0u: goto label_367ab0;
        case 0x367ac8u: goto label_367ac8;
        case 0x367af4u: goto label_367af4;
        case 0x367b14u: goto label_367b14;
        case 0x367b2cu: goto label_367b2c;
        case 0x367b58u: goto label_367b58;
        case 0x367b70u: goto label_367b70;
        case 0x367bb4u: goto label_367bb4;
        default: break;
    }

    ctx->pc = 0x367850u;

    // 0x367850: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x367850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x367854: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x367854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x367858: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x367858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x36785c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x36785cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x367860: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x367860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x367864: 0x34568080  ori         $s6, $v0, 0x8080
    ctx->pc = 0x367864u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x367868: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x367868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x36786c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36786cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x367870: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x367870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x367874: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x367874u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367878: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x367878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x36787c: 0x27938360  addiu       $s3, $gp, -0x7CA0
    ctx->pc = 0x36787cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935392));
    // 0x367880: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x367880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x367884: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x367884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x367888: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x367888u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36788c: 0x90830020  lbu         $v1, 0x20($a0)
    ctx->pc = 0x36788cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x367890: 0x8c89004c  lw          $t1, 0x4C($a0)
    ctx->pc = 0x367890u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x367894: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x367894u;
    {
        const bool branch_taken_0x367894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x367898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367894u;
        // 0x367898: 0x2692011c  addiu       $s2, $s4, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367894) {
            ctx->pc = 0x367918u;
            goto label_367918;
        }
    }
    ctx->pc = 0x36789Cu;
    // 0x36789c: 0x9282015d  lbu         $v0, 0x15D($s4)
    ctx->pc = 0x36789cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 349)));
    // 0x3678a0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3678A0u;
    {
        const bool branch_taken_0x3678a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3678a0) {
            ctx->pc = 0x3678D0u;
            goto label_3678d0;
        }
    }
    ctx->pc = 0x3678A8u;
    // 0x3678a8: 0x9282015c  lbu         $v0, 0x15C($s4)
    ctx->pc = 0x3678a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 348)));
    // 0x3678ac: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3678acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x3678b0: 0xa282015c  sb          $v0, 0x15C($s4)
    ctx->pc = 0x3678b0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 348), (uint8_t)GPR_U32(ctx, 2));
    // 0x3678b4: 0x9282015c  lbu         $v0, 0x15C($s4)
    ctx->pc = 0x3678b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 348)));
    // 0x3678b8: 0x28410041  slti        $at, $v0, 0x41
    ctx->pc = 0x3678b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x3678bc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x3678BCu;
    {
        const bool branch_taken_0x3678bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3678C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3678BCu;
        // 0x3678c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3678bc) {
            ctx->pc = 0x3678F0u;
            goto label_3678f0;
        }
    }
    ctx->pc = 0x3678C4u;
    // 0x3678c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3678C4u;
    {
        const bool branch_taken_0x3678c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3678C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3678C4u;
        // 0x3678c8: 0xa282015d  sb          $v0, 0x15D($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 349), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3678c4) {
            ctx->pc = 0x3678F0u;
            goto label_3678f0;
        }
    }
    ctx->pc = 0x3678CCu;
    // 0x3678cc: 0x0  nop
    ctx->pc = 0x3678ccu;
    // NOP
label_3678d0:
    // 0x3678d0: 0x9282015c  lbu         $v0, 0x15C($s4)
    ctx->pc = 0x3678d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 348)));
    // 0x3678d4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3678d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3678d8: 0xa282015c  sb          $v0, 0x15C($s4)
    ctx->pc = 0x3678d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 348), (uint8_t)GPR_U32(ctx, 2));
    // 0x3678dc: 0x9282015c  lbu         $v0, 0x15C($s4)
    ctx->pc = 0x3678dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 348)));
    // 0x3678e0: 0x284200f0  slti        $v0, $v0, 0xF0
    ctx->pc = 0x3678e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)240) ? 1 : 0);
    // 0x3678e4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3678E4u;
    {
        const bool branch_taken_0x3678e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3678e4) {
            ctx->pc = 0x3678F0u;
            goto label_3678f0;
        }
    }
    ctx->pc = 0x3678ECu;
    // 0x3678ec: 0xa280015d  sb          $zero, 0x15D($s4)
    ctx->pc = 0x3678ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 349), (uint8_t)GPR_U32(ctx, 0));
label_3678f0:
    // 0x3678f0: 0x9286015c  lbu         $a2, 0x15C($s4)
    ctx->pc = 0x3678f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 348)));
    // 0x3678f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3678f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3678f8: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x3678f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x3678fc: 0x62c00  sll         $a1, $a2, 16
    ctx->pc = 0x3678fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x367900: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x367900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x367904: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x367904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x367908: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x367908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x36790c: 0x834821  addu        $t1, $a0, $v1
    ctx->pc = 0x36790cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x367910: 0x44b021  addu        $s6, $v0, $a0
    ctx->pc = 0x367910u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x367914: 0x0  nop
    ctx->pc = 0x367914u;
    // NOP
label_367918:
    // 0x367918: 0x82830334  lb          $v1, 0x334($s4)
    ctx->pc = 0x367918u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 820)));
    // 0x36791c: 0x27828360  addiu       $v0, $gp, -0x7CA0
    ctx->pc = 0x36791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935392));
    // 0x367920: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x367920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x367924: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x367924u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x367928: 0x240701d6  addiu       $a3, $zero, 0x1D6
    ctx->pc = 0x367928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
    // 0x36792c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36792cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x367930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x367930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x367934: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x367934u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x367938: 0xc09c4e0  jal         func_271380
    ctx->pc = 0x367938u;
    SET_GPR_U32(ctx, 31, 0x367940u);
    ctx->pc = 0x36793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367938u;
    // 0x36793c: 0x24080042  addiu       $t0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271380u, 0x367938u, 0x367940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367940u;
label_367940:
    // 0x367940: 0x92840020  lbu         $a0, 0x20($s4)
    ctx->pc = 0x367940u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x367944: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x367944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367948: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x367948u;
    {
        const bool branch_taken_0x367948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x367948) {
            ctx->pc = 0x367980u;
            goto label_367980;
        }
    }
    ctx->pc = 0x367950u;
    // 0x367950: 0x82830334  lb          $v1, 0x334($s4)
    ctx->pc = 0x367950u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 820)));
    // 0x367954: 0x27828360  addiu       $v0, $gp, -0x7CA0
    ctx->pc = 0x367954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935392));
    // 0x367958: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x367958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36795c: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x36795cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x367960: 0x3407fff8  ori         $a3, $zero, 0xFFF8
    ctx->pc = 0x367960u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x367964: 0x24080025  addiu       $t0, $zero, 0x25
    ctx->pc = 0x367964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x367968: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x367968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36796c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36796cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x367970: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x367970u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x367974: 0xc0dc688  jal         func_371A20
    ctx->pc = 0x367974u;
    SET_GPR_U32(ctx, 31, 0x36797Cu);
    ctx->pc = 0x367978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367974u;
    // 0x367978: 0x24460021  addiu       $a2, $v0, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371A20u, 0x367974u, 0x36797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36797Cu;
label_36797c:
    // 0x36797c: 0x0  nop
    ctx->pc = 0x36797cu;
    // NOP
label_367980:
    // 0x367980: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x367980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367984: 0x0  nop
    ctx->pc = 0x367984u;
    // NOP
label_367988:
    // 0x367988: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x367988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x36798c: 0x1060008a  beqz        $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x36798Cu;
    {
        const bool branch_taken_0x36798c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36798c) {
            ctx->pc = 0x367BB8u;
            goto label_367bb8;
        }
    }
    ctx->pc = 0x367994u;
    // 0x367994: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x367994u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x367998: 0x3c02435a  lui         $v0, 0x435A
    ctx->pc = 0x367998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17242 << 16));
    // 0x36799c: 0x96700000  lhu         $s0, 0x0($s3)
    ctx->pc = 0x36799cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3679a0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3679a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3679a4: 0x9255000c  lbu         $s5, 0xC($s2)
    ctx->pc = 0x3679a4u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3679a8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3679a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3679ac: 0xc0bd168  jal         func_2F45A0
    ctx->pc = 0x3679ACu;
    SET_GPR_U32(ctx, 31, 0x3679B4u);
    ctx->pc = 0x3679B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3679ACu;
    // 0x3679b0: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F45A0u, 0x3679ACu, 0x3679B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3679B4u;
label_3679b4:
    // 0x3679b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3679b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3679b8: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x3679b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3679bc: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x3679BCu;
    {
        const bool branch_taken_0x3679bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3679bc) {
            ctx->pc = 0x367A40u;
            goto label_367a40;
        }
    }
    ctx->pc = 0x3679C4u;
    // 0x3679c4: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x3679c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x3679c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3679C8u;
    {
        const bool branch_taken_0x3679c8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3679CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3679C8u;
        // 0x3679cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3679c8) {
            ctx->pc = 0x3679DCu;
            goto label_3679dc;
        }
    }
    ctx->pc = 0x3679D0u;
    // 0x3679d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3679d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3679d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3679D4u;
    {
        const bool branch_taken_0x3679d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3679D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3679D4u;
        // 0x3679d8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3679d4) {
            ctx->pc = 0x3679F4u;
            goto label_3679f4;
        }
    }
    ctx->pc = 0x3679DCu;
label_3679dc:
    // 0x3679dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3679dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3679e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3679e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3679e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3679e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3679e8: 0x0  nop
    ctx->pc = 0x3679e8u;
    // NOP
    // 0x3679ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3679ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3679f0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3679f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3679f4:
    // 0x3679f4: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x3679f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3679f8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3679F8u;
    {
        const bool branch_taken_0x3679f8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3679FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3679F8u;
        // 0x3679fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3679f8) {
            ctx->pc = 0x367A0Cu;
            goto label_367a0c;
        }
    }
    ctx->pc = 0x367A00u;
    // 0x367a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x367a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367a04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x367A04u;
    {
        const bool branch_taken_0x367a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A04u;
        // 0x367a08: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x367a04) {
            ctx->pc = 0x367A24u;
            goto label_367a24;
        }
    }
    ctx->pc = 0x367A0Cu;
label_367a0c:
    // 0x367a0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x367a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x367a10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x367a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x367a14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x367a14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367a18: 0x0  nop
    ctx->pc = 0x367a18u;
    // NOP
    // 0x367a1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x367a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x367a20: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x367a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_367a24:
    // 0x367a24: 0x0  nop
    ctx->pc = 0x367a24u;
    // NOP
    // 0x367a28: 0x0  nop
    ctx->pc = 0x367a28u;
    // NOP
    // 0x367a2c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x367a2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x367a30: 0x3c02435a  lui         $v0, 0x435A
    ctx->pc = 0x367a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17242 << 16));
    // 0x367a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x367a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367a38: 0x0  nop
    ctx->pc = 0x367a38u;
    // NOP
    // 0x367a3c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x367a3cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_367a40:
    // 0x367a40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x367a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x367a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x367a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367a48: 0x0  nop
    ctx->pc = 0x367a48u;
    // NOP
    // 0x367a4c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x367a4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x367a50: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x367A50u;
    {
        const bool branch_taken_0x367a50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x367a50) {
            ctx->pc = 0x367AB0u;
            goto label_367ab0;
        }
    }
    ctx->pc = 0x367A58u;
    // 0x367a58: 0x92650002  lbu         $a1, 0x2($s3)
    ctx->pc = 0x367a58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x367a5c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x367a5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x367a60: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x367a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x367a64: 0x26070028  addiu       $a3, $s0, 0x28
    ctx->pc = 0x367a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x367a68: 0x24636940  addiu       $v1, $v1, 0x6940
    ctx->pc = 0x367a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26944));
    // 0x367a6c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x367a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x367a70: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x367a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x367a74: 0x82820334  lb          $v0, 0x334($s4)
    ctx->pc = 0x367a74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 820)));
    // 0x367a78: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x367a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x367a7c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x367a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x367a80: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x367a80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x367a84: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x367A84u;
    {
        const bool branch_taken_0x367a84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x367A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A84u;
        // 0x367a88: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367a84) {
            ctx->pc = 0x367A94u;
            goto label_367a94;
        }
    }
    ctx->pc = 0x367A8Cu;
    // 0x367a8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x367A8Cu;
    {
        const bool branch_taken_0x367a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A8Cu;
        // 0x367a90: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367a8c) {
            ctx->pc = 0x367A9Cu;
            goto label_367a9c;
        }
    }
    ctx->pc = 0x367A94u;
label_367a94:
    // 0x367a94: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x367a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x367a98: 0x344b8080  ori         $t3, $v0, 0x8080
    ctx->pc = 0x367a98u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_367a9c:
    // 0x367a9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x367a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367aa0: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x367aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x367aa4: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x367aa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x367aa8: 0xc09c540  jal         func_271500
    ctx->pc = 0x367AA8u;
    SET_GPR_U32(ctx, 31, 0x367AB0u);
    ctx->pc = 0x367AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367AA8u;
    // 0x367aac: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271500u, 0x367AA8u, 0x367AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367AB0u;
label_367ab0:
    // 0x367ab0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x367ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x367ab4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x367ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x367ab8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x367ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367abc: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x367abcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x367ac0: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x367AC0u;
    SET_GPR_U32(ctx, 31, 0x367AC8u);
    ctx->pc = 0x367AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367AC0u;
    // 0x367ac4: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x367AC0u, 0x367AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367AC8u;
label_367ac8:
    // 0x367ac8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x367ac8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367acc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x367accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x367ad0: 0x26020013  addiu       $v0, $s0, 0x13
    ctx->pc = 0x367ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 19));
    // 0x367ad4: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x367ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x367ad8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x367ad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x367adc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x367adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x367ae0: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x367ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x367ae4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x367ae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ae8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x367ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x367aec: 0xc095f88  jal         func_257E20
    ctx->pc = 0x367AECu;
    SET_GPR_U32(ctx, 31, 0x367AF4u);
    ctx->pc = 0x367AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367AECu;
    // 0x367af0: 0x25291860  addiu       $t1, $t1, 0x1860 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x367AECu, 0x367AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367AF4u;
label_367af4:
    // 0x367af4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x367af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x367af8: 0x26050013  addiu       $a1, $s0, 0x13
    ctx->pc = 0x367af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 19));
    // 0x367afc: 0x9248000c  lbu         $t0, 0xC($s2)
    ctx->pc = 0x367afcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x367b00: 0x24040156  addiu       $a0, $zero, 0x156
    ctx->pc = 0x367b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x367b04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x367b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b08: 0x94490004  lhu         $t1, 0x4($v0)
    ctx->pc = 0x367b08u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x367b0c: 0xc0ed738  jal         func_3B5CE0
    ctx->pc = 0x367B0Cu;
    SET_GPR_U32(ctx, 31, 0x367B14u);
    ctx->pc = 0x367B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367B0Cu;
    // 0x367b10: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5CE0u, 0x367B0Cu, 0x367B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B14u;
label_367b14:
    // 0x367b14: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x367b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x367b18: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x367b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x367b1c: 0x9246000c  lbu         $a2, 0xC($s2)
    ctx->pc = 0x367b1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x367b20: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x367b20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x367b24: 0xc0bd184  jal         func_2F4610
    ctx->pc = 0x367B24u;
    SET_GPR_U32(ctx, 31, 0x367B2Cu);
    ctx->pc = 0x367B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367B24u;
    // 0x367b28: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4610u, 0x367B24u, 0x367B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B2Cu;
label_367b2c:
    // 0x367b2c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x367b2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b30: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x367b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x367b34: 0x26020013  addiu       $v0, $s0, 0x13
    ctx->pc = 0x367b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 19));
    // 0x367b38: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x367b38u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x367b3c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x367b3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x367b40: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x367b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x367b44: 0x240501ce  addiu       $a1, $zero, 0x1CE
    ctx->pc = 0x367b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 462));
    // 0x367b48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x367b48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b4c: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x367b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x367b50: 0xc095f88  jal         func_257E20
    ctx->pc = 0x367B50u;
    SET_GPR_U32(ctx, 31, 0x367B58u);
    ctx->pc = 0x367B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367B50u;
    // 0x367b54: 0x25291868  addiu       $t1, $t1, 0x1868 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x367B50u, 0x367B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B58u;
label_367b58:
    // 0x367b58: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x367b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x367b5c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x367b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x367b60: 0x9255000c  lbu         $s5, 0xC($s2)
    ctx->pc = 0x367b60u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x367b64: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x367b64u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x367b68: 0xc0bd168  jal         func_2F45A0
    ctx->pc = 0x367B68u;
    SET_GPR_U32(ctx, 31, 0x367B70u);
    ctx->pc = 0x367B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367B68u;
    // 0x367b6c: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F45A0u, 0x367B68u, 0x367B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B70u;
label_367b70:
    // 0x367b70: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x367b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x367b74: 0x2a3082a  slt         $at, $s5, $v1
    ctx->pc = 0x367b74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x367b78: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x367B78u;
    {
        const bool branch_taken_0x367b78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x367b78) {
            ctx->pc = 0x367BB8u;
            goto label_367bb8;
        }
    }
    ctx->pc = 0x367B80u;
    // 0x367b80: 0x2602002f  addiu       $v0, $s0, 0x2F
    ctx->pc = 0x367b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 47));
    // 0x367b84: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x367b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x367b88: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x367b88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x367b8c: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x367b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x367b90: 0x96430008  lhu         $v1, 0x8($s2)
    ctx->pc = 0x367b90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x367b94: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x367b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x367b98: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x367b98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x367b9c: 0x240501ce  addiu       $a1, $zero, 0x1CE
    ctx->pc = 0x367b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 462));
    // 0x367ba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x367ba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ba4: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x367ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x367ba8: 0x25291868  addiu       $t1, $t1, 0x1868
    ctx->pc = 0x367ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6248));
    // 0x367bac: 0xc095f88  jal         func_257E20
    ctx->pc = 0x367BACu;
    SET_GPR_U32(ctx, 31, 0x367BB4u);
    ctx->pc = 0x367BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367BACu;
    // 0x367bb0: 0x625023  subu        $t2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x367BACu, 0x367BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367BB4u;
label_367bb4:
    // 0x367bb4: 0x0  nop
    ctx->pc = 0x367bb4u;
    // NOP
label_367bb8:
    // 0x367bb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x367bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x367bbc: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x367bbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x367bc0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x367bc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x367bc4: 0x1460ff70  bnez        $v1, . + 4 + (-0x90 << 2)
    ctx->pc = 0x367BC4u;
    {
        const bool branch_taken_0x367bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x367BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367BC4u;
        // 0x367bc8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367bc4) {
            ctx->pc = 0x367988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367988;
        }
    }
    ctx->pc = 0x367BCCu;
    // 0x367bcc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x367bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x367bd0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x367bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x367bd4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x367bd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x367bd8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x367bd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x367bdc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x367bdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x367be0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x367be0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x367be4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x367be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x367be8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x367be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367bec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x367becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x367BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367BF0u;
        // 0x367bf4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367BF8u;
}

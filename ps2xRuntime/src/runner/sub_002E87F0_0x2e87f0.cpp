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

// Function: sub_002E87F0
// Address: 0x2e87f0 - 0x2e8950
void sub_002E87F0_0x2e87f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E87F0_0x2e87f0");
#endif

    switch (ctx->pc) {
        case 0x2e8830u: goto label_2e8830;
        case 0x2e892cu: goto label_2e892c;
        default: break;
    }

    ctx->pc = 0x2e87f0u;

    // 0x2e87f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e87f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e87f4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2e87f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2e87f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e87f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e87fc: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x2e87fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x2e8800: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e8800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e8804: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e8804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e8808: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e8808u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e880c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e880cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e8810: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2e8810u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8814: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e8814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e8818: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2e8818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e881c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e881cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e8820: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e8820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8824: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2e8824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8828: 0xc05e360  jal         func_178D80
    ctx->pc = 0x2E8828u;
    SET_GPR_U32(ctx, 31, 0x2E8830u);
    ctx->pc = 0x2E882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8828u;
    // 0x2e882c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x2E8828u, 0x2E8830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8830u;
label_2e8830:
    // 0x2e8830: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e8830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8834: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2E8834u;
    {
        const bool branch_taken_0x2e8834 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8834) {
            ctx->pc = 0x2E8930u;
            goto label_2e8930;
        }
    }
    ctx->pc = 0x2E883Cu;
    // 0x2e883c: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x2e883cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x2e8840: 0x122600  sll         $a0, $s2, 24
    ctx->pc = 0x2e8840u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x2e8844: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e8844u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e8848: 0x24077fff  addiu       $a3, $zero, 0x7FFF
    ctx->pc = 0x2e8848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2e884c: 0x24430700  addiu       $v1, $v0, 0x700
    ctx->pc = 0x2e884cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x2e8850: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2e8850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e8854: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x2e8854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x2e8858: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e8858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e885c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e885cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e8860: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2e8860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2e8864: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x2e8864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x2e8868: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x2e8868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x2e886c: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x2e886cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e8870: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e8870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e8874: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2e8874u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2e8878: 0x3c022028  lui         $v0, 0x2028
    ctx->pc = 0x2e8878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8232 << 16));
    // 0x2e887c: 0x34430156  ori         $v1, $v0, 0x156
    ctx->pc = 0x2e887cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)342);
    // 0x2e8880: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2e8880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2e8884: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2e8884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2e8888: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x2e8888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x2e888c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2e888cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2e8890: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2e8890u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2e8894: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2e8894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2e8898: 0xacb00010  sw          $s0, 0x10($a1)
    ctx->pc = 0x2e8898u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 16));
    // 0x2e889c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2e889cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2e88a0: 0xa4a00014  sh          $zero, 0x14($a1)
    ctx->pc = 0x2e88a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e88a4: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x2e88a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2e88a8: 0x92290009  lbu         $t1, 0x9($s1)
    ctx->pc = 0x2e88a8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x2e88ac: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2e88acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e88b0: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2e88b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2e88b4: 0xa4a90016  sh          $t1, 0x16($a1)
    ctx->pc = 0x2e88b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 9));
    // 0x2e88b8: 0xaca80020  sw          $t0, 0x20($a1)
    ctx->pc = 0x2e88b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 8));
    // 0x2e88bc: 0xaca70024  sw          $a3, 0x24($a1)
    ctx->pc = 0x2e88bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 7));
    // 0x2e88c0: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x2e88c0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e88c4: 0x86270002  lh          $a3, 0x2($s1)
    ctx->pc = 0x2e88c4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2e88c8: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2e88c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2e88cc: 0x73d00  sll         $a3, $a3, 20
    ctx->pc = 0x2e88ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x2e88d0: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x2e88d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2e88d4: 0xaca70028  sw          $a3, 0x28($a1)
    ctx->pc = 0x2e88d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 7));
    // 0x2e88d8: 0x86280004  lh          $t0, 0x4($s1)
    ctx->pc = 0x2e88d8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e88dc: 0x86270006  lh          $a3, 0x6($s1)
    ctx->pc = 0x2e88dcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2e88e0: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2e88e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2e88e4: 0x73d00  sll         $a3, $a3, 20
    ctx->pc = 0x2e88e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x2e88e8: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x2e88e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2e88ec: 0xaca70018  sw          $a3, 0x18($a1)
    ctx->pc = 0x2e88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 7));
    // 0x2e88f0: 0x862a0004  lh          $t2, 0x4($s1)
    ctx->pc = 0x2e88f0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e88f4: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x2e88f4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e88f8: 0x86280006  lh          $t0, 0x6($s1)
    ctx->pc = 0x2e88f8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2e88fc: 0x86270002  lh          $a3, 0x2($s1)
    ctx->pc = 0x2e88fcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2e8900: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x2e8900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2e8904: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x2e8904u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2e8908: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x2e8908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2e890c: 0x73d00  sll         $a3, $a3, 20
    ctx->pc = 0x2e890cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x2e8910: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x2e8910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x2e8914: 0xaca7001c  sw          $a3, 0x1C($a1)
    ctx->pc = 0x2e8914u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 7));
    // 0x2e8918: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x2e8918u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e891c: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x2e891cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2e8920: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2e8920u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2e8924: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2E8924u;
    SET_GPR_U32(ctx, 31, 0x2E892Cu);
    ctx->pc = 0x2E8928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8924u;
    // 0x2e8928: 0xa0a2000f  sb          $v0, 0xF($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2E8924u, 0x2E892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E892Cu;
label_2e892c:
    // 0x2e892c: 0x0  nop
    ctx->pc = 0x2e892cu;
    // NOP
label_2e8930:
    // 0x2e8930: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e8930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e8934: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e8934u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e8938: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e8938u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e893c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e893cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e8940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8948: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8948u;
        // 0x2e894c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8950u;
}

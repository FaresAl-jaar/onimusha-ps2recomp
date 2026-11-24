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

// Function: sub_001A14E0
// Address: 0x1a14e0 - 0x1a16cc
void sub_001A14E0_0x1a14e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A14E0_0x1a14e0");
#endif

    switch (ctx->pc) {
        case 0x1a1534u: goto label_1a1534;
        case 0x1a1548u: goto label_1a1548;
        case 0x1a1634u: goto label_1a1634;
        case 0x1a167cu: goto label_1a167c;
        default: break;
    }

    ctx->pc = 0x1a14e0u;

    // 0x1a14e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a14e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a14e4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1a14e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1a14e8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a14e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1a14ec: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x1a14ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x1a14f0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a14f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1a14f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a14f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a14f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a14f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a14fc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a14fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1500: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a1500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a1504: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1a1504u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1508: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a1508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a150c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1a150cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a1510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a1514: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1a1514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a1518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a151c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a151cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1520: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x1a1520u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1a1524: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1a1524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a1528: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a1528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a152c: 0xc05e360  jal         func_178D80
    ctx->pc = 0x1A152Cu;
    SET_GPR_U32(ctx, 31, 0x1A1534u);
    ctx->pc = 0x1A1530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A152Cu;
    // 0x1a1530: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x1A152Cu, 0x1A1534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1534u;
label_1a1534:
    // 0x1a1534: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a1534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1538: 0x12200059  beqz        $s1, . + 4 + (0x59 << 2)
    ctx->pc = 0x1A1538u;
    {
        const bool branch_taken_0x1a1538 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1538u;
        // 0x1a153c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1538) {
            ctx->pc = 0x1A16A0u;
            goto label_1a16a0;
        }
    }
    ctx->pc = 0x1A1540u;
    // 0x1a1540: 0x14be02  srl         $s7, $s4, 24
    ctx->pc = 0x1a1540u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 20), 24));
    // 0x1a1544: 0x0  nop
    ctx->pc = 0x1a1544u;
    // NOP
label_1a1548:
    // 0x1a1548: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x1a1548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1a154c: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1A154Cu;
    {
        const bool branch_taken_0x1a154c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A154Cu;
        // 0x1a1550: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a154c) {
            ctx->pc = 0x1A1688u;
            goto label_1a1688;
        }
    }
    ctx->pc = 0x1A1554u;
    // 0x1a1554: 0x3c022028  lui         $v0, 0x2028
    ctx->pc = 0x1a1554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8232 << 16));
    // 0x1a1558: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1a1558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1a155c: 0x34420116  ori         $v0, $v0, 0x116
    ctx->pc = 0x1a155cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)278);
    // 0x1a1560: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a1560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1a1564: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a1564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a1568: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a1568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a156c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a156cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1a1570: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1a1570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1a1574: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1a1574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1a1578: 0xae360010  sw          $s6, 0x10($s1)
    ctx->pc = 0x1a1578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
    // 0x1a157c: 0x96a30016  lhu         $v1, 0x16($s5)
    ctx->pc = 0x1a157cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 22)));
    // 0x1a1580: 0xa6230014  sh          $v1, 0x14($s1)
    ctx->pc = 0x1a1580u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a1584: 0x96a30014  lhu         $v1, 0x14($s5)
    ctx->pc = 0x1a1584u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1a1588: 0xa6230016  sh          $v1, 0x16($s1)
    ctx->pc = 0x1a1588u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a158c: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x1a158cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
    // 0x1a1590: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a1590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a1594: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a1594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a1598: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a1598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1a159c: 0xa237000f  sb          $s7, 0xF($s1)
    ctx->pc = 0x1a159cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 23));
    // 0x1a15a0: 0x96a30010  lhu         $v1, 0x10($s5)
    ctx->pc = 0x1a15a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1a15a4: 0x96a20012  lhu         $v0, 0x12($s5)
    ctx->pc = 0x1a15a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x1a15a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a15a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a15ac: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x1a15acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x1a15b0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a15b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a15b4: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1a15b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1a15b8: 0x86a30008  lh          $v1, 0x8($s5)
    ctx->pc = 0x1a15b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1a15bc: 0x86a2000a  lh          $v0, 0xA($s5)
    ctx->pc = 0x1a15bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x1a15c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a15c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a15c4: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x1a15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x1a15c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a15c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a15cc: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1a15ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1a15d0: 0x86a3000c  lh          $v1, 0xC($s5)
    ctx->pc = 0x1a15d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1a15d4: 0x86a2000e  lh          $v0, 0xE($s5)
    ctx->pc = 0x1a15d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x1a15d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a15d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a15dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a15e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a15e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a15e4: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x1a15e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x1a15e8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a15e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a15ec: 0x16600014  bnez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A15ECu;
    {
        const bool branch_taken_0x1a15ec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A15F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15ECu;
        // 0x1a15f0: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15ec) {
            ctx->pc = 0x1A1640u;
            goto label_1a1640;
        }
    }
    ctx->pc = 0x1A15F4u;
    // 0x1a15f4: 0x86a30004  lh          $v1, 0x4($s5)
    ctx->pc = 0x1a15f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1a15f8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1a15f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1a15fc: 0x86a20006  lh          $v0, 0x6($s5)
    ctx->pc = 0x1a15fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1a1600: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x1a1600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x1a1604: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1608: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a1608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a160c: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x1a160cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x1a1610: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a1610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a1614: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x1a1614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x1a1618: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a161c: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x1a161cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x1a1620: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a1620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a1624: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1a1624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1a1628: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x1a1628u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x1a162c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1A162Cu;
    SET_GPR_U32(ctx, 31, 0x1A1634u);
    ctx->pc = 0x1A1630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A162Cu;
    // 0x1a1630: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1A162Cu, 0x1A1634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1634u;
label_1a1634:
    // 0x1a1634: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A1634u;
    {
        const bool branch_taken_0x1a1634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1634) {
            ctx->pc = 0x1A1680u;
            goto label_1a1680;
        }
    }
    ctx->pc = 0x1A163Cu;
    // 0x1a163c: 0x0  nop
    ctx->pc = 0x1a163cu;
    // NOP
label_1a1640:
    // 0x1a1640: 0x86a30004  lh          $v1, 0x4($s5)
    ctx->pc = 0x1a1640u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1a1644: 0x86a20006  lh          $v0, 0x6($s5)
    ctx->pc = 0x1a1644u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1a1648: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1a1648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1a164c: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x1a164cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x1a1650: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1654: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1a1654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a1658: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x1a1658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x1a165c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a165cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a1660: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x1a1660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x1a1664: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1668: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x1a1668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x1a166c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a166cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a1670: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1a1670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1a1674: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1A1674u;
    SET_GPR_U32(ctx, 31, 0x1A167Cu);
    ctx->pc = 0x1A1678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1674u;
    // 0x1a1678: 0xae330024  sw          $s3, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1A1674u, 0x1A167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A167Cu;
label_1a167c:
    // 0x1a167c: 0x0  nop
    ctx->pc = 0x1a167cu;
    // NOP
label_1a1680:
    // 0x1a1680: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1a1680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1a1684: 0x0  nop
    ctx->pc = 0x1a1684u;
    // NOP
label_1a1688:
    // 0x1a1688: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1a1688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a168c: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1a168cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a1690: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x1a1690u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1a1694: 0x1460ffac  bnez        $v1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x1A1694u;
    {
        const bool branch_taken_0x1a1694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1694u;
        // 0x1a1698: 0x26b50018  addiu       $s5, $s5, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1694) {
            ctx->pc = 0x1A1548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1548;
        }
    }
    ctx->pc = 0x1A169Cu;
    // 0x1a169c: 0x0  nop
    ctx->pc = 0x1a169cu;
    // NOP
label_1a16a0:
    // 0x1a16a0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a16a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a16a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a16a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a16a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a16a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a16ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a16acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a16b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a16b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a16b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a16b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a16b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a16b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a16bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a16bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a16c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a16c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a16c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A16C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A16C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16C4u;
        // 0x1a16c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A16C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A16CCu;
}

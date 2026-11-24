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

// Function: sub_001A16D0
// Address: 0x1a16d0 - 0x1a18b0
void sub_001A16D0_0x1a16d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A16D0_0x1a16d0");
#endif

    switch (ctx->pc) {
        case 0x1a171cu: goto label_1a171c;
        case 0x1a1730u: goto label_1a1730;
        case 0x1a1868u: goto label_1a1868;
        default: break;
    }

    ctx->pc = 0x1a16d0u;

    // 0x1a16d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a16d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a16d4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1a16d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1a16d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a16d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1a16dc: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x1a16dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x1a16e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a16e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a16e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a16e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a16e8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a16e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a16ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a16ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a16f0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1a16f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a16f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a16f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a16f8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1a16f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a16fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a16fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a1700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a1700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a1704: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1708: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x1a1708u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1a170c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1a170cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a1710: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a1710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a1714: 0xc05e360  jal         func_178D80
    ctx->pc = 0x1A1714u;
    SET_GPR_U32(ctx, 31, 0x1A171Cu);
    ctx->pc = 0x1A1718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1714u;
    // 0x1a1718: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x1A1714u, 0x1A171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A171Cu;
label_1a171c:
    // 0x1a171c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a171cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1720: 0x12400059  beqz        $s2, . + 4 + (0x59 << 2)
    ctx->pc = 0x1A1720u;
    {
        const bool branch_taken_0x1a1720 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1720u;
        // 0x1a1724: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1720) {
            ctx->pc = 0x1A1888u;
            goto label_1a1888;
        }
    }
    ctx->pc = 0x1A1728u;
    // 0x1a1728: 0x148e00  sll         $s1, $s4, 24
    ctx->pc = 0x1a1728u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
    // 0x1a172c: 0x0  nop
    ctx->pc = 0x1a172cu;
    // NOP
label_1a1730:
    // 0x1a1730: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x1a1730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1a1734: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1A1734u;
    {
        const bool branch_taken_0x1a1734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1734u;
        // 0x1a1738: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1734) {
            ctx->pc = 0x1A1870u;
            goto label_1a1870;
        }
    }
    ctx->pc = 0x1A173Cu;
    // 0x1a173c: 0x3c022028  lui         $v0, 0x2028
    ctx->pc = 0x1a173cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8232 << 16));
    // 0x1a1740: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1a1740u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1a1744: 0x34420116  ori         $v0, $v0, 0x116
    ctx->pc = 0x1a1744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)278);
    // 0x1a1748: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1a1748u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1a174c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1a174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a1750: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1a1750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1a1754: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1a1754u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1a1758: 0xae560010  sw          $s6, 0x10($s2)
    ctx->pc = 0x1a1758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 22));
    // 0x1a175c: 0x96a20012  lhu         $v0, 0x12($s5)
    ctx->pc = 0x1a175cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x1a1760: 0xa6420014  sh          $v0, 0x14($s2)
    ctx->pc = 0x1a1760u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a1764: 0x96a20010  lhu         $v0, 0x10($s5)
    ctx->pc = 0x1a1764u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1a1768: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x1A1768u;
    {
        const bool branch_taken_0x1a1768 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1768u;
        // 0x1a176c: 0xa6420016  sh          $v0, 0x16($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1768) {
            ctx->pc = 0x1A17A0u;
            goto label_1a17a0;
        }
    }
    ctx->pc = 0x1A1770u;
    // 0x1a1770: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x1a1770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1a1774: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a1774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a1778: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a1778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1a177c: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1a177cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x1a1780: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1a1780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1a1784: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x1a1784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1a1788: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1a1788u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1a178c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1a178cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a1790: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a1790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a1794: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1a1794u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1a1798: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A1798u;
    {
        const bool branch_taken_0x1a1798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1798u;
        // 0x1a179c: 0xa254000f  sb          $s4, 0xF($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 15), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1798) {
            ctx->pc = 0x1A17C8u;
            goto label_1a17c8;
        }
    }
    ctx->pc = 0x1A17A0u;
label_1a17a0:
    // 0x1a17a0: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x1a17a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1a17a4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a17a8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a17a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1a17ac: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1a17acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1a17b0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1a17b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a17b4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a17b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a17b8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1a17b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1a17bc: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x1a17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1a17c0: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1a17c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1a17c4: 0xa242000f  sb          $v0, 0xF($s2)
    ctx->pc = 0x1a17c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 15), (uint8_t)GPR_U32(ctx, 2));
label_1a17c8:
    // 0x1a17c8: 0x86a30004  lh          $v1, 0x4($s5)
    ctx->pc = 0x1a17c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1a17cc: 0x86a20006  lh          $v0, 0x6($s5)
    ctx->pc = 0x1a17ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1a17d0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1a17d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1a17d4: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x1a17d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x1a17d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a17d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a17dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a17dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a17e0: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x1a17e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x1a17e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a17e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a17e8: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x1a17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x1a17ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a17ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a17f0: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x1a17f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x1a17f4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a17f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a17f8: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1a17f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x1a17fc: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x1a17fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x1a1800: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1a1800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x1a1804: 0x96a3000c  lhu         $v1, 0xC($s5)
    ctx->pc = 0x1a1804u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1a1808: 0x96a2000e  lhu         $v0, 0xE($s5)
    ctx->pc = 0x1a1808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x1a180c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a180cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a1810: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x1a1810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x1a1814: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a1814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a1818: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1a1818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1a181c: 0x86a30008  lh          $v1, 0x8($s5)
    ctx->pc = 0x1a181cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1a1820: 0x86a2000a  lh          $v0, 0xA($s5)
    ctx->pc = 0x1a1820u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x1a1824: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a1824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a1828: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x1a1828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x1a182c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a182cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a1830: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1a1830u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x1a1834: 0x86a80008  lh          $t0, 0x8($s5)
    ctx->pc = 0x1a1834u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1a1838: 0x96a7000c  lhu         $a3, 0xC($s5)
    ctx->pc = 0x1a1838u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1a183c: 0x86a3000a  lh          $v1, 0xA($s5)
    ctx->pc = 0x1a183cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x1a1840: 0x96a2000e  lhu         $v0, 0xE($s5)
    ctx->pc = 0x1a1840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x1a1844: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1a1844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1a1848: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1a1848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a184c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a184cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1850: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a1850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a1854: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x1a1854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1a1858: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x1a1858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x1a185c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a185cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a1860: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1A1860u;
    SET_GPR_U32(ctx, 31, 0x1A1868u);
    ctx->pc = 0x1A1864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1860u;
    // 0x1a1864: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1A1860u, 0x1A1868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1868u;
label_1a1868:
    // 0x1a1868: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1a1868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1a186c: 0x0  nop
    ctx->pc = 0x1a186cu;
    // NOP
label_1a1870:
    // 0x1a1870: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x1a1870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a1874: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x1a1874u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a1878: 0x270182a  slt         $v1, $s3, $s0
    ctx->pc = 0x1a1878u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1a187c: 0x1460ffac  bnez        $v1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x1A187Cu;
    {
        const bool branch_taken_0x1a187c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A187Cu;
        // 0x1a1880: 0x26b50018  addiu       $s5, $s5, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a187c) {
            ctx->pc = 0x1A1730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1730;
        }
    }
    ctx->pc = 0x1A1884u;
    // 0x1a1884: 0x0  nop
    ctx->pc = 0x1a1884u;
    // NOP
label_1a1888:
    // 0x1a1888: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a1888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a188c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a188cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1890: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a1890u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1894: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a1894u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1898: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a1898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a189c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a189cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a18a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a18a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a18a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a18a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a18a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A18A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A18ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A18A8u;
        // 0x1a18ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A18A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A18B0u;
}

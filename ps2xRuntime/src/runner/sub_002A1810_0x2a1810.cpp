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

// Function: sub_002A1810
// Address: 0x2a1810 - 0x2a19ac
void sub_002A1810_0x2a1810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1810_0x2a1810");
#endif

    switch (ctx->pc) {
        case 0x2a1988u: goto label_2a1988;
        default: break;
    }

    ctx->pc = 0x2a1810u;

    // 0x2a1810: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a1810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a1814: 0x8c870078  lw          $a3, 0x78($a0)
    ctx->pc = 0x2a1814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2a1818: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a1818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a181c: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x2a181cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2a1820: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x2a1820u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a1824: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2a1824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a1828: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x2a1828u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a182c: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x2a182cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a1830: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2a1830u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2a1834: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x2a1834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2a1838: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2a1838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a183c: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x2a183cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a1840: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2a1840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a1844: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x2a1844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x2a1848: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x2a1848u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x2a184c: 0x9106004a  lbu         $a2, 0x4A($t0)
    ctx->pc = 0x2a184cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 74)));
    // 0x2a1850: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1850u;
    {
        const bool branch_taken_0x2a1850 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1850u;
        // 0x2a1854: 0x25090010  addiu       $t1, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1850) {
            ctx->pc = 0x2A1868u;
            goto label_2a1868;
        }
    }
    ctx->pc = 0x2A1858u;
    // 0x2a1858: 0x24c600f7  addiu       $a2, $a2, 0xF7
    ctx->pc = 0x2a1858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 247));
    // 0x2a185c: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x2a185cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x2a1860: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2A1860u;
    {
        const bool branch_taken_0x2a1860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1860u;
        // 0x2a1864: 0xaca60150  sw          $a2, 0x150($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 336), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1860) {
            ctx->pc = 0x2A18E8u;
            goto label_2a18e8;
        }
    }
    ctx->pc = 0x2A1868u;
label_2a1868:
    // 0x2a1868: 0x9127001a  lbu         $a3, 0x1A($t1)
    ctx->pc = 0x2a1868u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 26)));
    // 0x2a186c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a186cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1870: 0x10e60011  beq         $a3, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A1870u;
    {
        const bool branch_taken_0x2a1870 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x2a1870) {
            ctx->pc = 0x2A18B8u;
            goto label_2a18b8;
        }
    }
    ctx->pc = 0x2A1878u;
    // 0x2a1878: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1878u;
    {
        const bool branch_taken_0x2a1878 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1878) {
            ctx->pc = 0x2A1888u;
            goto label_2a1888;
        }
    }
    ctx->pc = 0x2A1880u;
    // 0x2a1880: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2A1880u;
    {
        const bool branch_taken_0x2a1880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1880) {
            ctx->pc = 0x2A18E8u;
            goto label_2a18e8;
        }
    }
    ctx->pc = 0x2A1888u;
label_2a1888:
    // 0x2a1888: 0x54302  srl         $t0, $a1, 12
    ctx->pc = 0x2a1888u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x2a188c: 0x53902  srl         $a3, $a1, 4
    ctx->pc = 0x2a188cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x2a1890: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x2a1890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2a1894: 0x1073826  xor         $a3, $t0, $a3
    ctx->pc = 0x2a1894u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x2a1898: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x2a1898u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2a189c: 0x0  nop
    ctx->pc = 0x2a189cu;
    // NOP
    // 0x2a18a0: 0x0  nop
    ctx->pc = 0x2a18a0u;
    // NOP
    // 0x2a18a4: 0x3010  mfhi        $a2
    ctx->pc = 0x2a18a4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2a18a8: 0x24c6003c  addiu       $a2, $a2, 0x3C
    ctx->pc = 0x2a18a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 60));
    // 0x2a18ac: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x2a18acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x2a18b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A18B0u;
    {
        const bool branch_taken_0x2a18b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A18B0u;
        // 0x2a18b4: 0xaca60150  sw          $a2, 0x150($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 336), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a18b0) {
            ctx->pc = 0x2A18E8u;
            goto label_2a18e8;
        }
    }
    ctx->pc = 0x2A18B8u;
label_2a18b8:
    // 0x2a18b8: 0x54302  srl         $t0, $a1, 12
    ctx->pc = 0x2a18b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x2a18bc: 0x53902  srl         $a3, $a1, 4
    ctx->pc = 0x2a18bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x2a18c0: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x2a18c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2a18c4: 0x1073826  xor         $a3, $t0, $a3
    ctx->pc = 0x2a18c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x2a18c8: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x2a18c8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2a18cc: 0x0  nop
    ctx->pc = 0x2a18ccu;
    // NOP
    // 0x2a18d0: 0x0  nop
    ctx->pc = 0x2a18d0u;
    // NOP
    // 0x2a18d4: 0x3010  mfhi        $a2
    ctx->pc = 0x2a18d4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2a18d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a18d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a18dc: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x2a18dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x2a18e0: 0xaca60150  sw          $a2, 0x150($a1)
    ctx->pc = 0x2a18e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 336), GPR_U32(ctx, 6));
    // 0x2a18e4: 0x0  nop
    ctx->pc = 0x2a18e4u;
    // NOP
label_2a18e8:
    // 0x2a18e8: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2a18e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a18ec: 0x30c60004  andi        $a2, $a2, 0x4
    ctx->pc = 0x2a18ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x2a18f0: 0x14c00019  bnez        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A18F0u;
    {
        const bool branch_taken_0x2a18f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a18f0) {
            ctx->pc = 0x2A1958u;
            goto label_2a1958;
        }
    }
    ctx->pc = 0x2A18F8u;
    // 0x2a18f8: 0x9086011c  lbu         $a2, 0x11C($a0)
    ctx->pc = 0x2a18f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x2a18fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a18fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1900: 0x10c4000b  beq         $a2, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A1900u;
    {
        const bool branch_taken_0x2a1900 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x2a1900) {
            ctx->pc = 0x2A1930u;
            goto label_2a1930;
        }
    }
    ctx->pc = 0x2A1908u;
    // 0x2a1908: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1908u;
    {
        const bool branch_taken_0x2a1908 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1908) {
            ctx->pc = 0x2A1918u;
            goto label_2a1918;
        }
    }
    ctx->pc = 0x2A1910u;
    // 0x2a1910: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2A1910u;
    {
        const bool branch_taken_0x2a1910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1910) {
            ctx->pc = 0x2A1958u;
            goto label_2a1958;
        }
    }
    ctx->pc = 0x2A1918u;
label_2a1918:
    // 0x2a1918: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x2a1918u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2a191c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a191cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1920: 0x14c4000d  bne         $a2, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A1920u;
    {
        const bool branch_taken_0x2a1920 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a1920) {
            ctx->pc = 0x2A1958u;
            goto label_2a1958;
        }
    }
    ctx->pc = 0x2A1928u;
    // 0x2a1928: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A1928u;
    {
        const bool branch_taken_0x2a1928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1928u;
        // 0x2a192c: 0xa0a00002  sb          $zero, 0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1928) {
            ctx->pc = 0x2A1958u;
            goto label_2a1958;
        }
    }
    ctx->pc = 0x2A1930u;
label_2a1930:
    // 0x2a1930: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x2a1930u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2a1934: 0x14c40004  bne         $a2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1934u;
    {
        const bool branch_taken_0x2a1934 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a1934) {
            ctx->pc = 0x2A1948u;
            goto label_2a1948;
        }
    }
    ctx->pc = 0x2A193Cu;
    // 0x2a193c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A193Cu;
    {
        const bool branch_taken_0x2a193c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A193Cu;
        // 0x2a1940: 0xa0a00002  sb          $zero, 0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a193c) {
            ctx->pc = 0x2A1958u;
            goto label_2a1958;
        }
    }
    ctx->pc = 0x2A1944u;
    // 0x2a1944: 0x0  nop
    ctx->pc = 0x2a1944u;
    // NOP
label_2a1948:
    // 0x2a1948: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2a1948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a194c: 0x14c40002  bne         $a2, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A194Cu;
    {
        const bool branch_taken_0x2a194c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A194Cu;
        // 0x2a1950: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a194c) {
            ctx->pc = 0x2A1958u;
            goto label_2a1958;
        }
    }
    ctx->pc = 0x2A1954u;
    // 0x2a1954: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x2a1954u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
label_2a1958:
    // 0x2a1958: 0x94640040  lhu         $a0, 0x40($v1)
    ctx->pc = 0x2a1958u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2a195c: 0x3084ffbf  andi        $a0, $a0, 0xFFBF
    ctx->pc = 0x2a195cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65471);
    // 0x2a1960: 0xa4640040  sh          $a0, 0x40($v1)
    ctx->pc = 0x2a1960u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 64), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a1964: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x2a1964u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a1968: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x2a1968u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2a196c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a196cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a1970: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x2a1970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2a1974: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2a1974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2a1978: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2a1978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a197c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a197cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a1980: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2a1980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a1984: 0x70032389  pcpyld      $a0, $zero, $v1
    ctx->pc = 0x2a1984u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_2a1988:
    // 0x2a1988: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2a1988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a198c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2a198cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a1990: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x2a1990u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a1994: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2a1994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2a1998: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a1998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a199c: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A199Cu;
    {
        const bool branch_taken_0x2a199c = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x2A19A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A199Cu;
        // 0x2a19a0: 0xfcc30010  sd          $v1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a199c) {
            ctx->pc = 0x2A1988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1988;
        }
    }
    ctx->pc = 0x2A19A4u;
    // 0x2a19a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A19A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A19A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A19ACu;
}

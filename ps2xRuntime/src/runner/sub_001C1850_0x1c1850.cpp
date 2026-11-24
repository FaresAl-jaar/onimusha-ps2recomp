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

// Function: sub_001C1850
// Address: 0x1c1850 - 0x1c1bbc
void sub_001C1850_0x1c1850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1850_0x1c1850");
#endif

    switch (ctx->pc) {
        case 0x1c1858u: goto label_1c1858;
        case 0x1c1940u: goto label_1c1940;
        case 0x1c1a80u: goto label_1c1a80;
        default: break;
    }

    ctx->pc = 0x1c1850u;

    // 0x1c1850: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1850u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1854: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c1854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c1858:
    // 0x1c1858: 0x90c30006  lbu         $v1, 0x6($a2)
    ctx->pc = 0x1c1858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1c185c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1c185cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1c1860: 0x2ce10079  sltiu       $at, $a3, 0x79
    ctx->pc = 0x1c1860u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
    // 0x1c1864: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c1864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c1868: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1c1868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1c186c: 0x90c30006  lbu         $v1, 0x6($a2)
    ctx->pc = 0x1c186cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1c1870: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c1870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c1874: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1c1874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1c1878: 0x90c30006  lbu         $v1, 0x6($a2)
    ctx->pc = 0x1c1878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1c187c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c187cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c1880: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1c1880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1c1884: 0x90c30006  lbu         $v1, 0x6($a2)
    ctx->pc = 0x1c1884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1c1888: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c1888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c188c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1c188cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1c1890: 0x90c30006  lbu         $v1, 0x6($a2)
    ctx->pc = 0x1c1890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1c1894: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c1894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c1898: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1c1898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1c189c: 0x90c30006  lbu         $v1, 0x6($a2)
    ctx->pc = 0x1c189cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1c18a0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c18a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c18a4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1c18a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1c18a8: 0x90c30006  lbu         $v1, 0x6($a2)
    ctx->pc = 0x1c18a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1c18ac: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c18acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c18b0: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1c18b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1c18b4: 0x90c30006  lbu         $v1, 0x6($a2)
    ctx->pc = 0x1c18b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1c18b8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c18bc: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x1c18bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x1c18c0: 0x1420ffe5  bnez        $at, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1C18C0u;
    {
        const bool branch_taken_0x1c18c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C18C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18C0u;
        // 0x1c18c4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c18c0) {
            ctx->pc = 0x1C1858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1858;
        }
    }
    ctx->pc = 0x1C18C8u;
    // 0x1c18c8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1c18c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1c18cc: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1c18ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c18d0: 0x90c70006  lbu         $a3, 0x6($a2)
    ctx->pc = 0x1c18d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1c18d4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1c18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c18d8: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x1c18d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1c18dc: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1c18dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1c18e0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1c18e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c18e4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c18e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c18e8: 0xaca303e0  sw          $v1, 0x3E0($a1)
    ctx->pc = 0x1c18e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 992), GPR_U32(ctx, 3));
    // 0x1c18ec: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x1c18ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1c18f0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c18f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c18f4: 0xaca303e4  sw          $v1, 0x3E4($a1)
    ctx->pc = 0x1c18f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 996), GPR_U32(ctx, 3));
    // 0x1c18f8: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x1c18f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1c18fc: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c18fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c1900: 0xaca303e8  sw          $v1, 0x3E8($a1)
    ctx->pc = 0x1c1900u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1000), GPR_U32(ctx, 3));
    // 0x1c1904: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x1c1904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x1c1908: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c1908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c190c: 0xaca303ec  sw          $v1, 0x3EC($a1)
    ctx->pc = 0x1c190cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1004), GPR_U32(ctx, 3));
    // 0x1c1910: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x1c1910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1c1914: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c1914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c1918: 0xaca303f0  sw          $v1, 0x3F0($a1)
    ctx->pc = 0x1c1918u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 3));
    // 0x1c191c: 0x90c30005  lbu         $v1, 0x5($a2)
    ctx->pc = 0x1c191cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x1c1920: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c1920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c1924: 0xaca303f4  sw          $v1, 0x3F4($a1)
    ctx->pc = 0x1c1924u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1012), GPR_U32(ctx, 3));
    // 0x1c1928: 0x90c30006  lbu         $v1, 0x6($a2)
    ctx->pc = 0x1c1928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1c192c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c192cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c1930: 0xaca303f8  sw          $v1, 0x3F8($a1)
    ctx->pc = 0x1c1930u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1016), GPR_U32(ctx, 3));
    // 0x1c1934: 0x90c30007  lbu         $v1, 0x7($a2)
    ctx->pc = 0x1c1934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x1c1938: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c1938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c193c: 0xaca303fc  sw          $v1, 0x3FC($a1)
    ctx->pc = 0x1c193cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1020), GPR_U32(ctx, 3));
label_1c1940:
    // 0x1c1940: 0x90c90008  lbu         $t1, 0x8($a2)
    ctx->pc = 0x1c1940u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c1944: 0x34870080  ori         $a3, $a0, 0x80
    ctx->pc = 0x1c1944u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c1948: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1c1948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c194c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1c194cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1c1950: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1c1950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1c1954: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x1c1954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c1958: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c1958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c195c: 0xa36021  addu        $t4, $a1, $v1
    ctx->pc = 0x1c195cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c1960: 0x24870003  addiu       $a3, $a0, 0x3
    ctx->pc = 0x1c1960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1c1964: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x1c1964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1c1968: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x1c1968u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1c196c: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x1c196cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x1c1970: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1c1970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1c1974: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x1c1974u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x1c1978: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c1978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c197c: 0x90c90008  lbu         $t1, 0x8($a2)
    ctx->pc = 0x1c197cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c1980: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x1c1980u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1c1984: 0x24870004  addiu       $a3, $a0, 0x4
    ctx->pc = 0x1c1984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1c1988: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1c1988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c198c: 0xa85821  addu        $t3, $a1, $t0
    ctx->pc = 0x1c198cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1c1990: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x1c1990u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1c1994: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x1c1994u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1c1998: 0x24870005  addiu       $a3, $a0, 0x5
    ctx->pc = 0x1c1998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x1c199c: 0xa85021  addu        $t2, $a1, $t0
    ctx->pc = 0x1c199cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1c19a0: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x1c19a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1c19a4: 0x96e00  sll         $t5, $t1, 24
    ctx->pc = 0x1c19a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x1c19a8: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x1c19a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1c19ac: 0xad8d0000  sw          $t5, 0x0($t4)
    ctx->pc = 0x1c19acu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 13));
    // 0x1c19b0: 0x24870006  addiu       $a3, $a0, 0x6
    ctx->pc = 0x1c19b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x1c19b4: 0x90cc0008  lbu         $t4, 0x8($a2)
    ctx->pc = 0x1c19b4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c19b8: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x1c19b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1c19bc: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x1c19bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1c19c0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1c19c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1c19c4: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x1c19c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c19c8: 0x24870007  addiu       $a3, $a0, 0x7
    ctx->pc = 0x1c19c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1c19cc: 0x34e70080  ori         $a3, $a3, 0x80
    ctx->pc = 0x1c19ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1c19d0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1c19d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1c19d4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1c19d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1c19d8: 0x2c81006f  sltiu       $at, $a0, 0x6F
    ctx->pc = 0x1c19d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)111) ? 1 : 0);
    // 0x1c19dc: 0xc6600  sll         $t4, $t4, 24
    ctx->pc = 0x1c19dcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1c19e0: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x1c19e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c19e4: 0xac6c0000  sw          $t4, 0x0($v1)
    ctx->pc = 0x1c19e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 12));
    // 0x1c19e8: 0x90c30008  lbu         $v1, 0x8($a2)
    ctx->pc = 0x1c19e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c19ec: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c19ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c19f0: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x1c19f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x1c19f4: 0x90c30008  lbu         $v1, 0x8($a2)
    ctx->pc = 0x1c19f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c19f8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c19f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c19fc: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x1c19fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x1c1a00: 0x90c30008  lbu         $v1, 0x8($a2)
    ctx->pc = 0x1c1a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c1a04: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c1a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c1a08: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x1c1a08u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x1c1a0c: 0x90c30008  lbu         $v1, 0x8($a2)
    ctx->pc = 0x1c1a0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c1a10: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c1a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c1a14: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1c1a14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1c1a18: 0x90c30008  lbu         $v1, 0x8($a2)
    ctx->pc = 0x1c1a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c1a1c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c1a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c1a20: 0x1420ffc7  bnez        $at, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1C1A20u;
    {
        const bool branch_taken_0x1c1a20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A20u;
        // 0x1c1a24: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a20) {
            ctx->pc = 0x1C1940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1940;
        }
    }
    ctx->pc = 0x1C1A28u;
    // 0x1c1a28: 0x90c90008  lbu         $t1, 0x8($a2)
    ctx->pc = 0x1c1a28u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c1a2c: 0x34830080  ori         $v1, $a0, 0x80
    ctx->pc = 0x1c1a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c1a30: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x1c1a30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c1a34: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1c1a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c1a38: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x1c1a38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c1a3c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1c1a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1c1a40: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x1c1a40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c1a44: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x1c1a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1c1a48: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x1c1a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c1a4c: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x1c1a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x1c1a50: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1c1a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1c1a54: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x1c1a54u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x1c1a58: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1c1a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c1a5c: 0x90c80008  lbu         $t0, 0x8($a2)
    ctx->pc = 0x1c1a5cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c1a60: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1c1a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c1a64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1a68: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1c1a68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x1c1a6c: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x1c1a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x1c1a70: 0x90c70008  lbu         $a3, 0x8($a2)
    ctx->pc = 0x1c1a70u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c1a74: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x1c1a74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1c1a78: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x1c1a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x1c1a7c: 0x0  nop
    ctx->pc = 0x1c1a7cu;
    // NOP
label_1c1a80:
    // 0x1c1a80: 0x90c90009  lbu         $t1, 0x9($a2)
    ctx->pc = 0x1c1a80u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x1c1a84: 0x34670080  ori         $a3, $v1, 0x80
    ctx->pc = 0x1c1a84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1c1a88: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1c1a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c1a8c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1c1a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1c1a90: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x1c1a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c1a94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c1a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1a98: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x1c1a98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c1a9c: 0xa46021  addu        $t4, $a1, $a0
    ctx->pc = 0x1c1a9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c1aa0: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x1c1aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1c1aa4: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x1c1aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x1c1aa8: 0x34870080  ori         $a3, $a0, 0x80
    ctx->pc = 0x1c1aa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c1aac: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x1c1aacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x1c1ab0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1c1ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1c1ab4: 0x90c80009  lbu         $t0, 0x9($a2)
    ctx->pc = 0x1c1ab4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x1c1ab8: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x1c1ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1c1abc: 0xa75821  addu        $t3, $a1, $a3
    ctx->pc = 0x1c1abcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c1ac0: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x1c1ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c1ac4: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x1c1ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1ac8: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1c1ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1c1acc: 0xa75021  addu        $t2, $a1, $a3
    ctx->pc = 0x1c1accu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c1ad0: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x1c1ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c1ad4: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x1c1ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1ad8: 0x86e00  sll         $t5, $t0, 24
    ctx->pc = 0x1c1ad8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x1c1adc: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x1c1adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1c1ae0: 0xad8d0000  sw          $t5, 0x0($t4)
    ctx->pc = 0x1c1ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 13));
    // 0x1c1ae4: 0xa74821  addu        $t1, $a1, $a3
    ctx->pc = 0x1c1ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c1ae8: 0x90cc0009  lbu         $t4, 0x9($a2)
    ctx->pc = 0x1c1ae8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x1c1aec: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x1c1aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c1af0: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x1c1af0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1af4: 0x24640006  addiu       $a0, $v1, 0x6
    ctx->pc = 0x1c1af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1c1af8: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x1c1af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c1afc: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x1c1afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c1b00: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c1b00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1b04: 0xa43821  addu        $a3, $a1, $a0
    ctx->pc = 0x1c1b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c1b08: 0xc6600  sll         $t4, $t4, 24
    ctx->pc = 0x1c1b08u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1c1b0c: 0x24640007  addiu       $a0, $v1, 0x7
    ctx->pc = 0x1c1b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x1c1b10: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x1c1b10u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
    // 0x1c1b14: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x1c1b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c1b18: 0x90cb0009  lbu         $t3, 0x9($a2)
    ctx->pc = 0x1c1b18u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x1c1b1c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c1b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c1b20: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c1b20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1b24: 0x2c610034  sltiu       $at, $v1, 0x34
    ctx->pc = 0x1c1b24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
    // 0x1c1b28: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1c1b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c1b2c: 0xb5e00  sll         $t3, $t3, 24
    ctx->pc = 0x1c1b2cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x1c1b30: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x1c1b30u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x1c1b34: 0x90ca0009  lbu         $t2, 0x9($a2)
    ctx->pc = 0x1c1b34u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x1c1b38: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c1b38u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
    // 0x1c1b3c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x1c1b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x1c1b40: 0x90c90009  lbu         $t1, 0x9($a2)
    ctx->pc = 0x1c1b40u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x1c1b44: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x1c1b44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x1c1b48: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x1c1b48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x1c1b4c: 0x90c80009  lbu         $t0, 0x9($a2)
    ctx->pc = 0x1c1b4cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x1c1b50: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1c1b50u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x1c1b54: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x1c1b54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x1c1b58: 0x90c70009  lbu         $a3, 0x9($a2)
    ctx->pc = 0x1c1b58u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x1c1b5c: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x1c1b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1c1b60: 0x1420ffc7  bnez        $at, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1C1B60u;
    {
        const bool branch_taken_0x1c1b60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B60u;
        // 0x1c1b64: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b60) {
            ctx->pc = 0x1C1A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1a80;
        }
    }
    ctx->pc = 0x1C1B68u;
    // 0x1c1b68: 0x34640080  ori         $a0, $v1, 0x80
    ctx->pc = 0x1c1b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1c1b6c: 0x90c80009  lbu         $t0, 0x9($a2)
    ctx->pc = 0x1c1b6cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x1c1b70: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x1c1b70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1b74: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1c1b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c1b78: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x1c1b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c1b7c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1c1b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1c1b80: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x1c1b80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x1c1b84: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1c1b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1c1b88: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c1b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c1b8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c1b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c1b90: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1c1b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c1b94: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1c1b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c1b98: 0x82e00  sll         $a1, $t0, 24
    ctx->pc = 0x1c1b98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x1c1b9c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1c1b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1c1ba0: 0x90c50009  lbu         $a1, 0x9($a2)
    ctx->pc = 0x1c1ba0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x1c1ba4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1c1ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1c1ba8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1c1ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1c1bac: 0x90c40009  lbu         $a0, 0x9($a2)
    ctx->pc = 0x1c1bacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x1c1bb0: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1c1bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c1bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BB4u;
        // 0x1c1bb8: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1BBCu;
}

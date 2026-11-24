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

// Function: sub_001A12F0
// Address: 0x1a12f0 - 0x1a14e0
void sub_001A12F0_0x1a12f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A12F0_0x1a12f0");
#endif

    switch (ctx->pc) {
        case 0x1a1340u: goto label_1a1340;
        case 0x1a1350u: goto label_1a1350;
        case 0x1a1450u: goto label_1a1450;
        case 0x1a1494u: goto label_1a1494;
        default: break;
    }

    ctx->pc = 0x1a12f0u;

    // 0x1a12f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a12f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a12f4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1a12f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1a12f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a12f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1a12fc: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x1a12fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x1a1300: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a1300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a1304: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a1304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a1308: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a1308u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a130c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a130cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a1310: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1a1310u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1314: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a1314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a1318: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1a1318u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a131c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a131cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a1320: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1a1320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1324: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a1324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a1328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a132c: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x1a132cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1a1330: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1a1330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a1334: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a1334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a1338: 0xc05e360  jal         func_178D80
    ctx->pc = 0x1A1338u;
    SET_GPR_U32(ctx, 31, 0x1A1340u);
    ctx->pc = 0x1A133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1338u;
    // 0x1a133c: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x1A1338u, 0x1A1340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1340u;
label_1a1340:
    // 0x1a1340: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a1340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1344: 0x1220005c  beqz        $s1, . + 4 + (0x5C << 2)
    ctx->pc = 0x1A1344u;
    {
        const bool branch_taken_0x1a1344 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1344u;
        // 0x1a1348: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1344) {
            ctx->pc = 0x1A14B8u;
            goto label_1a14b8;
        }
    }
    ctx->pc = 0x1A134Cu;
    // 0x1a134c: 0x0  nop
    ctx->pc = 0x1a134cu;
    // NOP
label_1a1350:
    // 0x1a1350: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x1a1350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1a1354: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x1A1354u;
    {
        const bool branch_taken_0x1a1354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1354u;
        // 0x1a1358: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1354) {
            ctx->pc = 0x1A14A0u;
            goto label_1a14a0;
        }
    }
    ctx->pc = 0x1A135Cu;
    // 0x1a135c: 0x3c022028  lui         $v0, 0x2028
    ctx->pc = 0x1a135cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8232 << 16));
    // 0x1a1360: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1a1360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1a1364: 0x34420116  ori         $v0, $v0, 0x116
    ctx->pc = 0x1a1364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)278);
    // 0x1a1368: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a1368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1a136c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a136cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a1370: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a1370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a1374: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x1a1374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1a1378: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1a1378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a137c: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x1a137cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x1a1380: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x1a1380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x1a1384: 0xae360010  sw          $s6, 0x10($s1)
    ctx->pc = 0x1a1384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
    // 0x1a1388: 0x96a40012  lhu         $a0, 0x12($s5)
    ctx->pc = 0x1a1388u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
    // 0x1a138c: 0xa6240014  sh          $a0, 0x14($s1)
    ctx->pc = 0x1a138cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a1390: 0x96a40010  lhu         $a0, 0x10($s5)
    ctx->pc = 0x1a1390u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1a1394: 0xa6240016  sh          $a0, 0x16($s1)
    ctx->pc = 0x1a1394u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a1398: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x1a1398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
    // 0x1a139c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a139cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a13a0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a13a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a13a4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1a13a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1a13a8: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x1a13a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a13ac: 0x96a3000c  lhu         $v1, 0xC($s5)
    ctx->pc = 0x1a13acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1a13b0: 0x96a2000e  lhu         $v0, 0xE($s5)
    ctx->pc = 0x1a13b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x1a13b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a13b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a13b8: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x1a13b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x1a13bc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a13bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a13c0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1a13c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1a13c4: 0x86a30008  lh          $v1, 0x8($s5)
    ctx->pc = 0x1a13c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1a13c8: 0x86a2000a  lh          $v0, 0xA($s5)
    ctx->pc = 0x1a13c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x1a13cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a13ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a13d0: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x1a13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x1a13d4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a13d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a13d8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1a13d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1a13dc: 0x86a50008  lh          $a1, 0x8($s5)
    ctx->pc = 0x1a13dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1a13e0: 0x96a4000c  lhu         $a0, 0xC($s5)
    ctx->pc = 0x1a13e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1a13e4: 0x86a3000a  lh          $v1, 0xA($s5)
    ctx->pc = 0x1a13e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x1a13e8: 0x96a2000e  lhu         $v0, 0xE($s5)
    ctx->pc = 0x1a13e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x1a13ec: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1a13ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a13f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a13f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a13f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a13f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a13fc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1a13fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a1400: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x1a1400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x1a1404: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a1404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a1408: 0x16600013  bnez        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1408u;
    {
        const bool branch_taken_0x1a1408 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1408u;
        // 0x1a140c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1408) {
            ctx->pc = 0x1A1458u;
            goto label_1a1458;
        }
    }
    ctx->pc = 0x1A1410u;
    // 0x1a1410: 0x86a30004  lh          $v1, 0x4($s5)
    ctx->pc = 0x1a1410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1a1414: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1a1414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1a1418: 0x86a20006  lh          $v0, 0x6($s5)
    ctx->pc = 0x1a1418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1a141c: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x1a141cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x1a1420: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1424: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a1424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1428: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x1a1428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x1a142c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a142cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a1430: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x1a1430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x1a1434: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1438: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x1a1438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x1a143c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a1440: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1a1440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1a1444: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x1a1444u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x1a1448: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1A1448u;
    SET_GPR_U32(ctx, 31, 0x1A1450u);
    ctx->pc = 0x1A144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1448u;
    // 0x1a144c: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1A1448u, 0x1A1450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1450u;
label_1a1450:
    // 0x1a1450: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1450u;
    {
        const bool branch_taken_0x1a1450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1450) {
            ctx->pc = 0x1A1498u;
            goto label_1a1498;
        }
    }
    ctx->pc = 0x1A1458u;
label_1a1458:
    // 0x1a1458: 0x86a30004  lh          $v1, 0x4($s5)
    ctx->pc = 0x1a1458u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1a145c: 0x86a20006  lh          $v0, 0x6($s5)
    ctx->pc = 0x1a145cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1a1460: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1a1460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1a1464: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x1a1464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x1a1468: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a146c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1a146cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a1470: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x1a1470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x1a1474: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a1474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a1478: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x1a1478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x1a147c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a147cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1480: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x1a1480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x1a1484: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a1484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a1488: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1a1488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1a148c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1A148Cu;
    SET_GPR_U32(ctx, 31, 0x1A1494u);
    ctx->pc = 0x1A1490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A148Cu;
    // 0x1a1490: 0xae330024  sw          $s3, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1A148Cu, 0x1A1494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1494u;
label_1a1494:
    // 0x1a1494: 0x0  nop
    ctx->pc = 0x1a1494u;
    // NOP
label_1a1498:
    // 0x1a1498: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1a1498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1a149c: 0x0  nop
    ctx->pc = 0x1a149cu;
    // NOP
label_1a14a0:
    // 0x1a14a0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1a14a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a14a4: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1a14a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a14a8: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x1a14a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1a14ac: 0x1460ffa8  bnez        $v1, . + 4 + (-0x58 << 2)
    ctx->pc = 0x1A14ACu;
    {
        const bool branch_taken_0x1a14ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A14B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14ACu;
        // 0x1a14b0: 0x26b50014  addiu       $s5, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14ac) {
            ctx->pc = 0x1A1350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1350;
        }
    }
    ctx->pc = 0x1A14B4u;
    // 0x1a14b4: 0x0  nop
    ctx->pc = 0x1a14b4u;
    // NOP
label_1a14b8:
    // 0x1a14b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a14b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a14bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a14bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a14c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a14c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a14c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a14c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a14c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a14c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a14cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a14ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a14d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a14d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a14d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a14d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a14d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A14D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A14DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14D8u;
        // 0x1a14dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A14D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A14E0u;
}

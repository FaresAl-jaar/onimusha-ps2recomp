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

// Function: sub_002D1330
// Address: 0x2d1330 - 0x2d1534
void sub_002D1330_0x2d1330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1330_0x2d1330");
#endif

    switch (ctx->pc) {
        case 0x2d135cu: goto label_2d135c;
        case 0x2d1378u: goto label_2d1378;
        case 0x2d1408u: goto label_2d1408;
        case 0x2d14a4u: goto label_2d14a4;
        case 0x2d14acu: goto label_2d14ac;
        case 0x2d14b8u: goto label_2d14b8;
        case 0x2d14c8u: goto label_2d14c8;
        case 0x2d14e8u: goto label_2d14e8;
        default: break;
    }

    ctx->pc = 0x2d1330u;

    // 0x2d1330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d1334: 0x24061012  addiu       $a2, $zero, 0x1012
    ctx->pc = 0x2d1334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4114));
    // 0x2d1338: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d1338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d133c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d133cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d1340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1344: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d1344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1348: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d1348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d134c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2d134cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2d1350: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x2d1350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x2d1354: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x2D1354u;
    SET_GPR_U32(ctx, 31, 0x2D135Cu);
    ctx->pc = 0x2D1358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1354u;
    // 0x2d1358: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x2D1354u, 0x2D135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D135Cu;
label_2d135c:
    // 0x2d135c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2d135cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2d1360: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2d1360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2d1364: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2d1364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2d1368: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x2d1368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x2d136c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2d136cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d1370: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x2D1370u;
    SET_GPR_U32(ctx, 31, 0x2D1378u);
    ctx->pc = 0x2D1374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1370u;
    // 0x2d1374: 0x34461012  ori         $a2, $v0, 0x1012 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4114);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x2D1370u, 0x2D1378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1378u;
label_2d1378:
    // 0x2d1378: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2d1378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2d137c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d137cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d1380: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2d1380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2d1384: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2d1384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d1388: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x2d1388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x2d138c: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2d138cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2d1390: 0xa2220044  sb          $v0, 0x44($s1)
    ctx->pc = 0x2d1390u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d1394: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2d1394u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1398: 0xa2200047  sb          $zero, 0x47($s1)
    ctx->pc = 0x2d1398u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d139c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2d139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d13a0: 0xa2240046  sb          $a0, 0x46($s1)
    ctx->pc = 0x2d13a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 70), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d13a4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2d13a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d13a8: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2d13a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x2d13ac: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2d13acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d13b0: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x2d13b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x2d13b4: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x2d13b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x2d13b8: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x2d13b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x2d13bc: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x2d13bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
    // 0x2d13c0: 0xa220001a  sb          $zero, 0x1A($s1)
    ctx->pc = 0x2d13c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d13c4: 0xa6200048  sh          $zero, 0x48($s1)
    ctx->pc = 0x2d13c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d13c8: 0xa620004a  sh          $zero, 0x4A($s1)
    ctx->pc = 0x2d13c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d13cc: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x2d13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x2d13d0: 0xa2220014  sb          $v0, 0x14($s1)
    ctx->pc = 0x2d13d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d13d4: 0xa2220015  sb          $v0, 0x15($s1)
    ctx->pc = 0x2d13d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 21), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d13d8: 0xa2200136  sb          $zero, 0x136($s1)
    ctx->pc = 0x2d13d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 310), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d13dc: 0xa2200018  sb          $zero, 0x18($s1)
    ctx->pc = 0x2d13dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d13e0: 0xa2200045  sb          $zero, 0x45($s1)
    ctx->pc = 0x2d13e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d13e4: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x2d13e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x2d13e8: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x2d13e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x2d13ec: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x2d13ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x2d13f0: 0x24080500  addiu       $t0, $zero, 0x500
    ctx->pc = 0x2d13f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2d13f4: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x2d13f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2d13f8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2d13f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2d13fc: 0x240503c0  addiu       $a1, $zero, 0x3C0
    ctx->pc = 0x2d13fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x2d1400: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d1400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d1404: 0x0  nop
    ctx->pc = 0x2d1404u;
    // NOP
label_2d1408:
    // 0x2d1408: 0xad480084  sw          $t0, 0x84($t2)
    ctx->pc = 0x2d1408u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 132), GPR_U32(ctx, 8));
    // 0x2d140c: 0xad48007c  sw          $t0, 0x7C($t2)
    ctx->pc = 0x2d140cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 124), GPR_U32(ctx, 8));
    // 0x2d1410: 0x22b1821  addu        $v1, $s1, $t3
    ctx->pc = 0x2d1410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
    // 0x2d1414: 0xad480094  sw          $t0, 0x94($t2)
    ctx->pc = 0x2d1414u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 148), GPR_U32(ctx, 8));
    // 0x2d1418: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2d1418u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2d141c: 0xad48008c  sw          $t0, 0x8C($t2)
    ctx->pc = 0x2d141cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 140), GPR_U32(ctx, 8));
    // 0x2d1420: 0x2d620002  sltiu       $v0, $t3, 0x2
    ctx->pc = 0x2d1420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d1424: 0xad4000c4  sw          $zero, 0xC4($t2)
    ctx->pc = 0x2d1424u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 196), GPR_U32(ctx, 0));
    // 0x2d1428: 0xad2700ac  sw          $a3, 0xAC($t1)
    ctx->pc = 0x2d1428u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 172), GPR_U32(ctx, 7));
    // 0x2d142c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2d142cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x2d1430: 0xad2600b0  sw          $a2, 0xB0($t1)
    ctx->pc = 0x2d1430u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 176), GPR_U32(ctx, 6));
    // 0x2d1434: 0xad2500b4  sw          $a1, 0xB4($t1)
    ctx->pc = 0x2d1434u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 180), GPR_U32(ctx, 5));
    // 0x2d1438: 0xa06400d4  sb          $a0, 0xD4($v1)
    ctx->pc = 0x2d1438u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 212), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d143c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D143Cu;
    {
        const bool branch_taken_0x2d143c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D143Cu;
        // 0x2d1440: 0x2529000c  addiu       $t1, $t1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d143c) {
            ctx->pc = 0x2D1408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1408;
        }
    }
    ctx->pc = 0x2D1444u;
    // 0x2d1444: 0xae2800d0  sw          $t0, 0xD0($s1)
    ctx->pc = 0x2d1444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 8));
    // 0x2d1448: 0xae2800cc  sw          $t0, 0xCC($s1)
    ctx->pc = 0x2d1448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 8));
    // 0x2d144c: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x2d144cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d1450: 0xa2220019  sb          $v0, 0x19($s1)
    ctx->pc = 0x2d1450u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d1454: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x2d1454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2d1458: 0xa2220016  sb          $v0, 0x16($s1)
    ctx->pc = 0x2d1458u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d145c: 0x92220015  lbu         $v0, 0x15($s1)
    ctx->pc = 0x2d145cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
    // 0x2d1460: 0xa2220016  sb          $v0, 0x16($s1)
    ctx->pc = 0x2d1460u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d1464: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x2d1464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
    // 0x2d1468: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1468u;
    {
        const bool branch_taken_0x2d1468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1468u;
        // 0x2d146c: 0xae2001fc  sw          $zero, 0x1FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 508), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1468) {
            ctx->pc = 0x2D1480u;
            goto label_2d1480;
        }
    }
    ctx->pc = 0x2D1470u;
    // 0x2d1470: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d1470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d1474: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2d1474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2d1478: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d1478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2d147c: 0x0  nop
    ctx->pc = 0x2d147cu;
    // NOP
label_2d1480:
    // 0x2d1480: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2d1480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d1484: 0xa6220028  sh          $v0, 0x28($s1)
    ctx->pc = 0x2d1484u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d1488: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2d1488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d148c: 0xa622002a  sh          $v0, 0x2A($s1)
    ctx->pc = 0x2d148cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d1490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1494: 0x3402fffa  ori         $v0, $zero, 0xFFFA
    ctx->pc = 0x2d1494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x2d1498: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x2d1498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x2d149c: 0xc0b4550  jal         func_2D1540
    ctx->pc = 0x2D149Cu;
    SET_GPR_U32(ctx, 31, 0x2D14A4u);
    ctx->pc = 0x2D14A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D149Cu;
    // 0x2d14a0: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1540u, 0x2D149Cu, 0x2D14A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14A4u;
label_2d14a4:
    // 0x2d14a4: 0xc0b4588  jal         func_2D1620
    ctx->pc = 0x2D14A4u;
    SET_GPR_U32(ctx, 31, 0x2D14ACu);
    ctx->pc = 0x2D14A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D14A4u;
    // 0x2d14a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1620u, 0x2D14A4u, 0x2D14ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14ACu;
label_2d14ac:
    // 0x2d14ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d14acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d14b0: 0xc0b4594  jal         func_2D1650
    ctx->pc = 0x2D14B0u;
    SET_GPR_U32(ctx, 31, 0x2D14B8u);
    ctx->pc = 0x2D14B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D14B0u;
    // 0x2d14b4: 0x26250170  addiu       $a1, $s1, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1650u, 0x2D14B0u, 0x2D14B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14B8u;
label_2d14b8:
    // 0x2d14b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d14b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d14bc: 0x262501b0  addiu       $a1, $s1, 0x1B0
    ctx->pc = 0x2d14bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x2d14c0: 0xc0b4594  jal         func_2D1650
    ctx->pc = 0x2D14C0u;
    SET_GPR_U32(ctx, 31, 0x2D14C8u);
    ctx->pc = 0x2D14C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D14C0u;
    // 0x2d14c4: 0xa22001a1  sb          $zero, 0x1A1($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1650u, 0x2D14C0u, 0x2D14C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14C8u;
label_2d14c8:
    // 0x2d14c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d14c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d14cc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2d14ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2d14d0: 0xa22301e1  sb          $v1, 0x1E1($s1)
    ctx->pc = 0x2d14d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 481), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d14d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d14d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d14d8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2d14d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d14dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d14dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d14e0: 0xc0b4598  jal         func_2D1660
    ctx->pc = 0x2D14E0u;
    SET_GPR_U32(ctx, 31, 0x2D14E8u);
    ctx->pc = 0x2D14E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D14E0u;
    // 0x2d14e4: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1660u, 0x2D14E0u, 0x2D14E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14E8u;
label_2d14e8:
    // 0x2d14e8: 0xa2200210  sb          $zero, 0x210($s1)
    ctx->pc = 0x2d14e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 528), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d14ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d14ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d14f0: 0xa2200211  sb          $zero, 0x211($s1)
    ctx->pc = 0x2d14f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 529), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d14f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d14f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d14f8: 0xa2200214  sb          $zero, 0x214($s1)
    ctx->pc = 0x2d14f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 532), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d14fc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2d14fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d1500: 0xa2200215  sb          $zero, 0x215($s1)
    ctx->pc = 0x2d1500u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 533), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1504: 0xa2250216  sb          $a1, 0x216($s1)
    ctx->pc = 0x2d1504u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 534), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d1508: 0xae200218  sw          $zero, 0x218($s1)
    ctx->pc = 0x2d1508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 0));
    // 0x2d150c: 0xa224021c  sb          $a0, 0x21C($s1)
    ctx->pc = 0x2d150cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 540), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1510: 0xa223021d  sb          $v1, 0x21D($s1)
    ctx->pc = 0x2d1510u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 541), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1514: 0x9223006e  lbu         $v1, 0x6E($s1)
    ctx->pc = 0x2d1514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 110)));
    // 0x2d1518: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x2d1518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2d151c: 0xa223006e  sb          $v1, 0x6E($s1)
    ctx->pc = 0x2d151cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 110), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1520: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d1520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1524: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d1524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1528: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d152c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D152Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D152Cu;
        // 0x2d1530: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D152Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1534u;
}

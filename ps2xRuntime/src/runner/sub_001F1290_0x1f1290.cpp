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

// Function: sub_001F1290
// Address: 0x1f1290 - 0x1f1558
void sub_001F1290_0x1f1290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1290_0x1f1290");
#endif

    switch (ctx->pc) {
        case 0x1f1290u: goto label_1f1290;
        case 0x1f1294u: goto label_1f1294;
        case 0x1f1298u: goto label_1f1298;
        case 0x1f129cu: goto label_1f129c;
        case 0x1f12a0u: goto label_1f12a0;
        case 0x1f12a4u: goto label_1f12a4;
        case 0x1f12a8u: goto label_1f12a8;
        case 0x1f12acu: goto label_1f12ac;
        case 0x1f12b0u: goto label_1f12b0;
        case 0x1f12b4u: goto label_1f12b4;
        case 0x1f12b8u: goto label_1f12b8;
        case 0x1f12bcu: goto label_1f12bc;
        case 0x1f12c0u: goto label_1f12c0;
        case 0x1f12c4u: goto label_1f12c4;
        case 0x1f12c8u: goto label_1f12c8;
        case 0x1f12ccu: goto label_1f12cc;
        case 0x1f12d0u: goto label_1f12d0;
        case 0x1f12d4u: goto label_1f12d4;
        case 0x1f12d8u: goto label_1f12d8;
        case 0x1f12dcu: goto label_1f12dc;
        case 0x1f12e0u: goto label_1f12e0;
        case 0x1f12e4u: goto label_1f12e4;
        case 0x1f12e8u: goto label_1f12e8;
        case 0x1f12ecu: goto label_1f12ec;
        case 0x1f12f0u: goto label_1f12f0;
        case 0x1f12f4u: goto label_1f12f4;
        case 0x1f12f8u: goto label_1f12f8;
        case 0x1f12fcu: goto label_1f12fc;
        case 0x1f1300u: goto label_1f1300;
        case 0x1f1304u: goto label_1f1304;
        case 0x1f1308u: goto label_1f1308;
        case 0x1f130cu: goto label_1f130c;
        case 0x1f1310u: goto label_1f1310;
        case 0x1f1314u: goto label_1f1314;
        case 0x1f1318u: goto label_1f1318;
        case 0x1f131cu: goto label_1f131c;
        case 0x1f1320u: goto label_1f1320;
        case 0x1f1324u: goto label_1f1324;
        case 0x1f1328u: goto label_1f1328;
        case 0x1f132cu: goto label_1f132c;
        case 0x1f1330u: goto label_1f1330;
        case 0x1f1334u: goto label_1f1334;
        case 0x1f1338u: goto label_1f1338;
        case 0x1f133cu: goto label_1f133c;
        case 0x1f1340u: goto label_1f1340;
        case 0x1f1344u: goto label_1f1344;
        case 0x1f1348u: goto label_1f1348;
        case 0x1f134cu: goto label_1f134c;
        case 0x1f1350u: goto label_1f1350;
        case 0x1f1354u: goto label_1f1354;
        case 0x1f1358u: goto label_1f1358;
        case 0x1f135cu: goto label_1f135c;
        case 0x1f1360u: goto label_1f1360;
        case 0x1f1364u: goto label_1f1364;
        case 0x1f1368u: goto label_1f1368;
        case 0x1f136cu: goto label_1f136c;
        case 0x1f1370u: goto label_1f1370;
        case 0x1f1374u: goto label_1f1374;
        case 0x1f1378u: goto label_1f1378;
        case 0x1f137cu: goto label_1f137c;
        case 0x1f1380u: goto label_1f1380;
        case 0x1f1384u: goto label_1f1384;
        case 0x1f1388u: goto label_1f1388;
        case 0x1f138cu: goto label_1f138c;
        case 0x1f1390u: goto label_1f1390;
        case 0x1f1394u: goto label_1f1394;
        case 0x1f1398u: goto label_1f1398;
        case 0x1f139cu: goto label_1f139c;
        case 0x1f13a0u: goto label_1f13a0;
        case 0x1f13a4u: goto label_1f13a4;
        case 0x1f13a8u: goto label_1f13a8;
        case 0x1f13acu: goto label_1f13ac;
        case 0x1f13b0u: goto label_1f13b0;
        case 0x1f13b4u: goto label_1f13b4;
        case 0x1f13b8u: goto label_1f13b8;
        case 0x1f13bcu: goto label_1f13bc;
        case 0x1f13c0u: goto label_1f13c0;
        case 0x1f13c4u: goto label_1f13c4;
        case 0x1f13c8u: goto label_1f13c8;
        case 0x1f13ccu: goto label_1f13cc;
        case 0x1f13d0u: goto label_1f13d0;
        case 0x1f13d4u: goto label_1f13d4;
        case 0x1f13d8u: goto label_1f13d8;
        case 0x1f13dcu: goto label_1f13dc;
        case 0x1f13e0u: goto label_1f13e0;
        case 0x1f13e4u: goto label_1f13e4;
        case 0x1f13e8u: goto label_1f13e8;
        case 0x1f13ecu: goto label_1f13ec;
        case 0x1f13f0u: goto label_1f13f0;
        case 0x1f13f4u: goto label_1f13f4;
        case 0x1f13f8u: goto label_1f13f8;
        case 0x1f13fcu: goto label_1f13fc;
        case 0x1f1400u: goto label_1f1400;
        case 0x1f1404u: goto label_1f1404;
        case 0x1f1408u: goto label_1f1408;
        case 0x1f140cu: goto label_1f140c;
        case 0x1f1410u: goto label_1f1410;
        case 0x1f1414u: goto label_1f1414;
        case 0x1f1418u: goto label_1f1418;
        case 0x1f141cu: goto label_1f141c;
        case 0x1f1420u: goto label_1f1420;
        case 0x1f1424u: goto label_1f1424;
        case 0x1f1428u: goto label_1f1428;
        case 0x1f142cu: goto label_1f142c;
        case 0x1f1430u: goto label_1f1430;
        case 0x1f1434u: goto label_1f1434;
        case 0x1f1438u: goto label_1f1438;
        case 0x1f143cu: goto label_1f143c;
        case 0x1f1440u: goto label_1f1440;
        case 0x1f1444u: goto label_1f1444;
        case 0x1f1448u: goto label_1f1448;
        case 0x1f144cu: goto label_1f144c;
        case 0x1f1450u: goto label_1f1450;
        case 0x1f1454u: goto label_1f1454;
        case 0x1f1458u: goto label_1f1458;
        case 0x1f145cu: goto label_1f145c;
        case 0x1f1460u: goto label_1f1460;
        case 0x1f1464u: goto label_1f1464;
        case 0x1f1468u: goto label_1f1468;
        case 0x1f146cu: goto label_1f146c;
        case 0x1f1470u: goto label_1f1470;
        case 0x1f1474u: goto label_1f1474;
        case 0x1f1478u: goto label_1f1478;
        case 0x1f147cu: goto label_1f147c;
        case 0x1f1480u: goto label_1f1480;
        case 0x1f1484u: goto label_1f1484;
        case 0x1f1488u: goto label_1f1488;
        case 0x1f148cu: goto label_1f148c;
        case 0x1f1490u: goto label_1f1490;
        case 0x1f1494u: goto label_1f1494;
        case 0x1f1498u: goto label_1f1498;
        case 0x1f149cu: goto label_1f149c;
        case 0x1f14a0u: goto label_1f14a0;
        case 0x1f14a4u: goto label_1f14a4;
        case 0x1f14a8u: goto label_1f14a8;
        case 0x1f14acu: goto label_1f14ac;
        case 0x1f14b0u: goto label_1f14b0;
        case 0x1f14b4u: goto label_1f14b4;
        case 0x1f14b8u: goto label_1f14b8;
        case 0x1f14bcu: goto label_1f14bc;
        case 0x1f14c0u: goto label_1f14c0;
        case 0x1f14c4u: goto label_1f14c4;
        case 0x1f14c8u: goto label_1f14c8;
        case 0x1f14ccu: goto label_1f14cc;
        case 0x1f14d0u: goto label_1f14d0;
        case 0x1f14d4u: goto label_1f14d4;
        case 0x1f14d8u: goto label_1f14d8;
        case 0x1f14dcu: goto label_1f14dc;
        case 0x1f14e0u: goto label_1f14e0;
        case 0x1f14e4u: goto label_1f14e4;
        case 0x1f14e8u: goto label_1f14e8;
        case 0x1f14ecu: goto label_1f14ec;
        case 0x1f14f0u: goto label_1f14f0;
        case 0x1f14f4u: goto label_1f14f4;
        case 0x1f14f8u: goto label_1f14f8;
        case 0x1f14fcu: goto label_1f14fc;
        case 0x1f1500u: goto label_1f1500;
        case 0x1f1504u: goto label_1f1504;
        case 0x1f1508u: goto label_1f1508;
        case 0x1f150cu: goto label_1f150c;
        case 0x1f1510u: goto label_1f1510;
        case 0x1f1514u: goto label_1f1514;
        case 0x1f1518u: goto label_1f1518;
        case 0x1f151cu: goto label_1f151c;
        case 0x1f1520u: goto label_1f1520;
        case 0x1f1524u: goto label_1f1524;
        case 0x1f1528u: goto label_1f1528;
        case 0x1f152cu: goto label_1f152c;
        case 0x1f1530u: goto label_1f1530;
        case 0x1f1534u: goto label_1f1534;
        case 0x1f1538u: goto label_1f1538;
        case 0x1f153cu: goto label_1f153c;
        case 0x1f1540u: goto label_1f1540;
        case 0x1f1544u: goto label_1f1544;
        case 0x1f1548u: goto label_1f1548;
        case 0x1f154cu: goto label_1f154c;
        case 0x1f1550u: goto label_1f1550;
        case 0x1f1554u: goto label_1f1554;
        default: break;
    }

    ctx->pc = 0x1f1290u;

label_1f1290:
    // 0x1f1290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f1290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f1294:
    // 0x1f1294: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f1294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f1298:
    // 0x1f1298: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f1298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f129c:
    // 0x1f129c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f129cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f12a0:
    // 0x1f12a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f12a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f12a4:
    // 0x1f12a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f12a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f12a8:
    // 0x1f12a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f12a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f12ac:
    // 0x1f12ac: 0xa3808838  sb          $zero, -0x77C8($gp)
    ctx->pc = 0x1f12acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936632), (uint8_t)GPR_U32(ctx, 0));
label_1f12b0:
    // 0x1f12b0: 0x93828838  lbu         $v0, -0x77C8($gp)
    ctx->pc = 0x1f12b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936632)));
label_1f12b4:
    // 0x1f12b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f12b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f12b8:
    // 0x1f12b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f12b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1f12bc:
    // 0x1f12bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1f12c0:
    if (ctx->pc == 0x1F12C0u) {
        ctx->pc = 0x1F12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12BCu;
        // 0x1f12c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F12C4u;
        goto label_1f12c4;
    }
    ctx->pc = 0x1F12BCu;
    {
        const bool branch_taken_0x1f12bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12BCu;
        // 0x1f12c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12bc) {
            ctx->pc = 0x1F12D8u;
            goto label_1f12d8;
        }
    }
    ctx->pc = 0x1F12C4u;
label_1f12c4:
    // 0x1f12c4: 0xc07c814  jal         func_1F2050
label_1f12c8:
    if (ctx->pc == 0x1F12C8u) {
        ctx->pc = 0x1F12CCu;
        goto label_1f12cc;
    }
    ctx->pc = 0x1F12C4u;
    SET_GPR_U32(ctx, 31, 0x1F12CCu);
    ctx->pc = 0x1F2050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2050u, 0x1F12C4u, 0x1F12CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F12CCu;
label_1f12cc:
    // 0x1f12cc: 0x10000270  b           . + 4 + (0x270 << 2)
label_1f12d0:
    if (ctx->pc == 0x1F12D0u) {
        ctx->pc = 0x1F12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12CCu;
        // 0x1f12d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F12D4u;
        goto label_1f12d4;
    }
    ctx->pc = 0x1F12CCu;
    {
        const bool branch_taken_0x1f12cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12CCu;
        // 0x1f12d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12cc) {
            ctx->pc = 0x1F1C90u;
            return;
        }
    }
    ctx->pc = 0x1F12D4u;
label_1f12d4:
    // 0x1f12d4: 0x0  nop
    ctx->pc = 0x1f12d4u;
    // NOP
label_1f12d8:
    // 0x1f12d8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1f12d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f12dc:
    // 0x1f12dc: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x1f12dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1f12e0:
    // 0x1f12e0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1f12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f12e4:
    // 0x1f12e4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f12e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f12e8:
    // 0x1f12e8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1f12e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1f12ec:
    // 0x1f12ec: 0x10430232  beq         $v0, $v1, . + 4 + (0x232 << 2)
label_1f12f0:
    if (ctx->pc == 0x1F12F0u) {
        ctx->pc = 0x1F12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12ECu;
        // 0x1f12f0: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F12F4u;
        goto label_1f12f4;
    }
    ctx->pc = 0x1F12ECu;
    {
        const bool branch_taken_0x1f12ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12ECu;
        // 0x1f12f0: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12ec) {
            ctx->pc = 0x1F1BB8u;
            return;
        }
    }
    ctx->pc = 0x1F12F4u;
label_1f12f4:
    // 0x1f12f4: 0x10430220  beq         $v0, $v1, . + 4 + (0x220 << 2)
label_1f12f8:
    if (ctx->pc == 0x1F12F8u) {
        ctx->pc = 0x1F12FCu;
        goto label_1f12fc;
    }
    ctx->pc = 0x1F12F4u;
    {
        const bool branch_taken_0x1f12f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f12f4) {
            ctx->pc = 0x1F1B78u;
            return;
        }
    }
    ctx->pc = 0x1F12FCu;
label_1f12fc:
    // 0x1f12fc: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1f12fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1f1300:
    // 0x1f1300: 0x1043020b  beq         $v0, $v1, . + 4 + (0x20B << 2)
label_1f1304:
    if (ctx->pc == 0x1F1304u) {
        ctx->pc = 0x1F1304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1300u;
        // 0x1f1304: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1308u;
        goto label_1f1308;
    }
    ctx->pc = 0x1F1300u;
    {
        const bool branch_taken_0x1f1300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F1304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1300u;
        // 0x1f1304: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1300) {
            ctx->pc = 0x1F1B30u;
            return;
        }
    }
    ctx->pc = 0x1F1308u;
label_1f1308:
    // 0x1f1308: 0x104301fd  beq         $v0, $v1, . + 4 + (0x1FD << 2)
label_1f130c:
    if (ctx->pc == 0x1F130Cu) {
        ctx->pc = 0x1F1310u;
        goto label_1f1310;
    }
    ctx->pc = 0x1F1308u;
    {
        const bool branch_taken_0x1f1308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1308) {
            ctx->pc = 0x1F1B00u;
            return;
        }
    }
    ctx->pc = 0x1F1310u;
label_1f1310:
    // 0x1f1310: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1f1310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1f1314:
    // 0x1f1314: 0x104301f6  beq         $v0, $v1, . + 4 + (0x1F6 << 2)
label_1f1318:
    if (ctx->pc == 0x1F1318u) {
        ctx->pc = 0x1F1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1314u;
        // 0x1f1318: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F131Cu;
        goto label_1f131c;
    }
    ctx->pc = 0x1F1314u;
    {
        const bool branch_taken_0x1f1314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1314u;
        // 0x1f1318: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1314) {
            ctx->pc = 0x1F1AF0u;
            return;
        }
    }
    ctx->pc = 0x1F131Cu;
label_1f131c:
    // 0x1f131c: 0x104301da  beq         $v0, $v1, . + 4 + (0x1DA << 2)
label_1f1320:
    if (ctx->pc == 0x1F1320u) {
        ctx->pc = 0x1F1324u;
        goto label_1f1324;
    }
    ctx->pc = 0x1F131Cu;
    {
        const bool branch_taken_0x1f131c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f131c) {
            ctx->pc = 0x1F1A88u;
            return;
        }
    }
    ctx->pc = 0x1F1324u;
label_1f1324:
    // 0x1f1324: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1f1324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1f1328:
    // 0x1f1328: 0x104301c5  beq         $v0, $v1, . + 4 + (0x1C5 << 2)
label_1f132c:
    if (ctx->pc == 0x1F132Cu) {
        ctx->pc = 0x1F132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1328u;
        // 0x1f132c: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1330u;
        goto label_1f1330;
    }
    ctx->pc = 0x1F1328u;
    {
        const bool branch_taken_0x1f1328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1328u;
        // 0x1f132c: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1328) {
            ctx->pc = 0x1F1A40u;
            return;
        }
    }
    ctx->pc = 0x1F1330u;
label_1f1330:
    // 0x1f1330: 0x1043019b  beq         $v0, $v1, . + 4 + (0x19B << 2)
label_1f1334:
    if (ctx->pc == 0x1F1334u) {
        ctx->pc = 0x1F1338u;
        goto label_1f1338;
    }
    ctx->pc = 0x1F1330u;
    {
        const bool branch_taken_0x1f1330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1330) {
            ctx->pc = 0x1F19A0u;
            return;
        }
    }
    ctx->pc = 0x1F1338u;
label_1f1338:
    // 0x1f1338: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x1f1338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1f133c:
    // 0x1f133c: 0x10430180  beq         $v0, $v1, . + 4 + (0x180 << 2)
label_1f1340:
    if (ctx->pc == 0x1F1340u) {
        ctx->pc = 0x1F1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F133Cu;
        // 0x1f1340: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1344u;
        goto label_1f1344;
    }
    ctx->pc = 0x1F133Cu;
    {
        const bool branch_taken_0x1f133c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F133Cu;
        // 0x1f1340: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f133c) {
            ctx->pc = 0x1F1940u;
            return;
        }
    }
    ctx->pc = 0x1F1344u;
label_1f1344:
    // 0x1f1344: 0x10430156  beq         $v0, $v1, . + 4 + (0x156 << 2)
label_1f1348:
    if (ctx->pc == 0x1F1348u) {
        ctx->pc = 0x1F134Cu;
        goto label_1f134c;
    }
    ctx->pc = 0x1F1344u;
    {
        const bool branch_taken_0x1f1344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1344) {
            ctx->pc = 0x1F18A0u;
            return;
        }
    }
    ctx->pc = 0x1F134Cu;
label_1f134c:
    // 0x1f134c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1f134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1f1350:
    // 0x1f1350: 0x10430139  beq         $v0, $v1, . + 4 + (0x139 << 2)
label_1f1354:
    if (ctx->pc == 0x1F1354u) {
        ctx->pc = 0x1F1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1350u;
        // 0x1f1354: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1358u;
        goto label_1f1358;
    }
    ctx->pc = 0x1F1350u;
    {
        const bool branch_taken_0x1f1350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F1354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1350u;
        // 0x1f1354: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1350) {
            ctx->pc = 0x1F1838u;
            return;
        }
    }
    ctx->pc = 0x1F1358u;
label_1f1358:
    // 0x1f1358: 0x10430133  beq         $v0, $v1, . + 4 + (0x133 << 2)
label_1f135c:
    if (ctx->pc == 0x1F135Cu) {
        ctx->pc = 0x1F1360u;
        goto label_1f1360;
    }
    ctx->pc = 0x1F1358u;
    {
        const bool branch_taken_0x1f1358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1358) {
            ctx->pc = 0x1F1828u;
            return;
        }
    }
    ctx->pc = 0x1F1360u;
label_1f1360:
    // 0x1f1360: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1f1360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1f1364:
    // 0x1f1364: 0x10430118  beq         $v0, $v1, . + 4 + (0x118 << 2)
label_1f1368:
    if (ctx->pc == 0x1F1368u) {
        ctx->pc = 0x1F1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1364u;
        // 0x1f1368: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F136Cu;
        goto label_1f136c;
    }
    ctx->pc = 0x1F1364u;
    {
        const bool branch_taken_0x1f1364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1364u;
        // 0x1f1368: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1364) {
            ctx->pc = 0x1F17C8u;
            return;
        }
    }
    ctx->pc = 0x1F136Cu;
label_1f136c:
    // 0x1f136c: 0x104300fc  beq         $v0, $v1, . + 4 + (0xFC << 2)
label_1f1370:
    if (ctx->pc == 0x1F1370u) {
        ctx->pc = 0x1F1374u;
        goto label_1f1374;
    }
    ctx->pc = 0x1F136Cu;
    {
        const bool branch_taken_0x1f136c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f136c) {
            ctx->pc = 0x1F1760u;
            return;
        }
    }
    ctx->pc = 0x1F1374u;
label_1f1374:
    // 0x1f1374: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1f1374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1f1378:
    // 0x1f1378: 0x104300ef  beq         $v0, $v1, . + 4 + (0xEF << 2)
label_1f137c:
    if (ctx->pc == 0x1F137Cu) {
        ctx->pc = 0x1F137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1378u;
        // 0x1f137c: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1380u;
        goto label_1f1380;
    }
    ctx->pc = 0x1F1378u;
    {
        const bool branch_taken_0x1f1378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1378u;
        // 0x1f137c: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1378) {
            ctx->pc = 0x1F1738u;
            return;
        }
    }
    ctx->pc = 0x1F1380u;
label_1f1380:
    // 0x1f1380: 0x104300db  beq         $v0, $v1, . + 4 + (0xDB << 2)
label_1f1384:
    if (ctx->pc == 0x1F1384u) {
        ctx->pc = 0x1F1388u;
        goto label_1f1388;
    }
    ctx->pc = 0x1F1380u;
    {
        const bool branch_taken_0x1f1380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1380) {
            ctx->pc = 0x1F16F0u;
            return;
        }
    }
    ctx->pc = 0x1F1388u;
label_1f1388:
    // 0x1f1388: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1f1388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1f138c:
    // 0x1f138c: 0x10430098  beq         $v0, $v1, . + 4 + (0x98 << 2)
label_1f1390:
    if (ctx->pc == 0x1F1390u) {
        ctx->pc = 0x1F1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F138Cu;
        // 0x1f1390: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1394u;
        goto label_1f1394;
    }
    ctx->pc = 0x1F138Cu;
    {
        const bool branch_taken_0x1f138c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F138Cu;
        // 0x1f1390: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f138c) {
            ctx->pc = 0x1F15F0u;
            return;
        }
    }
    ctx->pc = 0x1F1394u;
label_1f1394:
    // 0x1f1394: 0x1043008a  beq         $v0, $v1, . + 4 + (0x8A << 2)
label_1f1398:
    if (ctx->pc == 0x1F1398u) {
        ctx->pc = 0x1F139Cu;
        goto label_1f139c;
    }
    ctx->pc = 0x1F1394u;
    {
        const bool branch_taken_0x1f1394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1394) {
            ctx->pc = 0x1F15C0u;
            return;
        }
    }
    ctx->pc = 0x1F139Cu;
label_1f139c:
    // 0x1f139c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1f139cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1f13a0:
    // 0x1f13a0: 0x10430077  beq         $v0, $v1, . + 4 + (0x77 << 2)
label_1f13a4:
    if (ctx->pc == 0x1F13A4u) {
        ctx->pc = 0x1F13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13A0u;
        // 0x1f13a4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F13A8u;
        goto label_1f13a8;
    }
    ctx->pc = 0x1F13A0u;
    {
        const bool branch_taken_0x1f13a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13A0u;
        // 0x1f13a4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13a0) {
            ctx->pc = 0x1F1580u;
            return;
        }
    }
    ctx->pc = 0x1F13A8u;
label_1f13a8:
    // 0x1f13a8: 0x1043006b  beq         $v0, $v1, . + 4 + (0x6B << 2)
label_1f13ac:
    if (ctx->pc == 0x1F13ACu) {
        ctx->pc = 0x1F13B0u;
        goto label_1f13b0;
    }
    ctx->pc = 0x1F13A8u;
    {
        const bool branch_taken_0x1f13a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f13a8) {
            ctx->pc = 0x1F1558u;
            return;
        }
    }
    ctx->pc = 0x1F13B0u;
label_1f13b0:
    // 0x1f13b0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1f13b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f13b4:
    // 0x1f13b4: 0x10430054  beq         $v0, $v1, . + 4 + (0x54 << 2)
label_1f13b8:
    if (ctx->pc == 0x1F13B8u) {
        ctx->pc = 0x1F13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13B4u;
        // 0x1f13b8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F13BCu;
        goto label_1f13bc;
    }
    ctx->pc = 0x1F13B4u;
    {
        const bool branch_taken_0x1f13b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13B4u;
        // 0x1f13b8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13b4) {
            ctx->pc = 0x1F1508u;
            goto label_1f1508;
        }
    }
    ctx->pc = 0x1F13BCu;
label_1f13bc:
    // 0x1f13bc: 0x10430036  beq         $v0, $v1, . + 4 + (0x36 << 2)
label_1f13c0:
    if (ctx->pc == 0x1F13C0u) {
        ctx->pc = 0x1F13C4u;
        goto label_1f13c4;
    }
    ctx->pc = 0x1F13BCu;
    {
        const bool branch_taken_0x1f13bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f13bc) {
            ctx->pc = 0x1F1498u;
            goto label_1f1498;
        }
    }
    ctx->pc = 0x1F13C4u;
label_1f13c4:
    // 0x1f13c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f13c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f13c8:
    // 0x1f13c8: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
label_1f13cc:
    if (ctx->pc == 0x1F13CCu) {
        ctx->pc = 0x1F13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13C8u;
        // 0x1f13cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F13D0u;
        goto label_1f13d0;
    }
    ctx->pc = 0x1F13C8u;
    {
        const bool branch_taken_0x1f13c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13C8u;
        // 0x1f13cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13c8) {
            ctx->pc = 0x1F1430u;
            goto label_1f1430;
        }
    }
    ctx->pc = 0x1F13D0u;
label_1f13d0:
    // 0x1f13d0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_1f13d4:
    if (ctx->pc == 0x1F13D4u) {
        ctx->pc = 0x1F13D8u;
        goto label_1f13d8;
    }
    ctx->pc = 0x1F13D0u;
    {
        const bool branch_taken_0x1f13d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f13d0) {
            ctx->pc = 0x1F13E8u;
            goto label_1f13e8;
        }
    }
    ctx->pc = 0x1F13D8u;
label_1f13d8:
    // 0x1f13d8: 0x1040ffb5  beqz        $v0, . + 4 + (-0x4B << 2)
label_1f13dc:
    if (ctx->pc == 0x1F13DCu) {
        ctx->pc = 0x1F13E0u;
        goto label_1f13e0;
    }
    ctx->pc = 0x1F13D8u;
    {
        const bool branch_taken_0x1f13d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f13d8) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F13E0u;
label_1f13e0:
    // 0x1f13e0: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
label_1f13e4:
    if (ctx->pc == 0x1F13E4u) {
        ctx->pc = 0x1F13E8u;
        goto label_1f13e8;
    }
    ctx->pc = 0x1F13E0u;
    {
        const bool branch_taken_0x1f13e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f13e0) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F13E8u;
label_1f13e8:
    // 0x1f13e8: 0xc07bd80  jal         func_1EF600
label_1f13ec:
    if (ctx->pc == 0x1F13ECu) {
        ctx->pc = 0x1F13ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13E8u;
        // 0x1f13ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F13F0u;
        goto label_1f13f0;
    }
    ctx->pc = 0x1F13E8u;
    SET_GPR_U32(ctx, 31, 0x1F13F0u);
    ctx->pc = 0x1F13ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F13E8u;
    // 0x1f13ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF600u, 0x1F13E8u, 0x1F13F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F13F0u;
label_1f13f0:
    // 0x1f13f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f13f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1f13f4:
    // 0x1f13f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f13f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f13f8:
    // 0x1f13f8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1f13f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_1f13fc:
    // 0x1f13fc: 0xa2030036  sb          $v1, 0x36($s0)
    ctx->pc = 0x1f13fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 3));
label_1f1400:
    // 0x1f1400: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1f1400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1404:
    // 0x1f1404: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f1404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1408:
    // 0x1f1408: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_1f140c:
    if (ctx->pc == 0x1F140Cu) {
        ctx->pc = 0x1F1410u;
        goto label_1f1410;
    }
    ctx->pc = 0x1F1408u;
    {
        const bool branch_taken_0x1f1408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f1408) {
            ctx->pc = 0x1F1428u;
            goto label_1f1428;
        }
    }
    ctx->pc = 0x1F1410u;
label_1f1410:
    // 0x1f1410: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1f1410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1f1414:
    // 0x1f1414: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f1414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1418:
    // 0x1f1418: 0xc096974  jal         func_25A5D0
label_1f141c:
    if (ctx->pc == 0x1F141Cu) {
        ctx->pc = 0x1F141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1418u;
        // 0x1f141c: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1420u;
        goto label_1f1420;
    }
    ctx->pc = 0x1F1418u;
    SET_GPR_U32(ctx, 31, 0x1F1420u);
    ctx->pc = 0x1F141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1418u;
    // 0x1f141c: 0x2445fff6  addiu       $a1, $v0, -0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x1F1418u, 0x1F1420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1420u;
label_1f1420:
    // 0x1f1420: 0xa2020037  sb          $v0, 0x37($s0)
    ctx->pc = 0x1f1420u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 2));
label_1f1424:
    // 0x1f1424: 0x0  nop
    ctx->pc = 0x1f1424u;
    // NOP
label_1f1428:
    // 0x1f1428: 0x10000219  b           . + 4 + (0x219 << 2)
label_1f142c:
    if (ctx->pc == 0x1F142Cu) {
        ctx->pc = 0x1F142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1428u;
        // 0x1f142c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1430u;
        goto label_1f1430;
    }
    ctx->pc = 0x1F1428u;
    {
        const bool branch_taken_0x1f1428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1428u;
        // 0x1f142c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1428) {
            ctx->pc = 0x1F1C90u;
            return;
        }
    }
    ctx->pc = 0x1F1430u;
label_1f1430:
    // 0x1f1430: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1434:
    // 0x1f1434: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1434u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1438:
    // 0x1f1438: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1f1438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1f143c:
    // 0x1f143c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1f143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1f1440:
    // 0x1f1440: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1f1444:
    if (ctx->pc == 0x1F1444u) {
        ctx->pc = 0x1F1448u;
        goto label_1f1448;
    }
    ctx->pc = 0x1F1440u;
    {
        const bool branch_taken_0x1f1440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1440) {
            ctx->pc = 0x1F1488u;
            goto label_1f1488;
        }
    }
    ctx->pc = 0x1F1448u;
label_1f1448:
    // 0x1f1448: 0x9203004f  lbu         $v1, 0x4F($s0)
    ctx->pc = 0x1f1448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
label_1f144c:
    // 0x1f144c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f144cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1450:
    // 0x1f1450: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1450u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1454:
    // 0x1f1454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1458:
    // 0x1f1458: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1f1458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_1f145c:
    // 0x1f145c: 0xa203004f  sb          $v1, 0x4F($s0)
    ctx->pc = 0x1f145cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 3));
label_1f1460:
    // 0x1f1460: 0x9423a3d6  lhu         $v1, -0x5C2A($at)
    ctx->pc = 0x1f1460u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1f1464:
    // 0x1f1464: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1468:
    // 0x1f1468: 0x3063fbff  andi        $v1, $v1, 0xFBFF
    ctx->pc = 0x1f1468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64511);
label_1f146c:
    // 0x1f146c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f146cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1470:
    // 0x1f1470: 0xa423a3d6  sh          $v1, -0x5C2A($at)
    ctx->pc = 0x1f1470u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943702), (uint16_t)GPR_U32(ctx, 3));
label_1f1474:
    // 0x1f1474: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f1478:
    // 0x1f1478: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f1478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f147c:
    // 0x1f147c: 0x10000204  b           . + 4 + (0x204 << 2)
label_1f1480:
    if (ctx->pc == 0x1F1480u) {
        ctx->pc = 0x1F1480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F147Cu;
        // 0x1f1480: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1484u;
        goto label_1f1484;
    }
    ctx->pc = 0x1F147Cu;
    {
        const bool branch_taken_0x1f147c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F147Cu;
        // 0x1f1480: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f147c) {
            ctx->pc = 0x1F1C90u;
            return;
        }
    }
    ctx->pc = 0x1F1484u;
label_1f1484:
    // 0x1f1484: 0x0  nop
    ctx->pc = 0x1f1484u;
    // NOP
label_1f1488:
    // 0x1f1488: 0xc07c7d0  jal         func_1F1F40
label_1f148c:
    if (ctx->pc == 0x1F148Cu) {
        ctx->pc = 0x1F148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1488u;
        // 0x1f148c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1490u;
        goto label_1f1490;
    }
    ctx->pc = 0x1F1488u;
    SET_GPR_U32(ctx, 31, 0x1F1490u);
    ctx->pc = 0x1F148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1488u;
    // 0x1f148c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1F40u, 0x1F1488u, 0x1F1490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1490u;
label_1f1490:
    // 0x1f1490: 0x100001ff  b           . + 4 + (0x1FF << 2)
label_1f1494:
    if (ctx->pc == 0x1F1494u) {
        ctx->pc = 0x1F1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1490u;
        // 0x1f1494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1498u;
        goto label_1f1498;
    }
    ctx->pc = 0x1F1490u;
    {
        const bool branch_taken_0x1f1490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1490u;
        // 0x1f1494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1490) {
            ctx->pc = 0x1F1C90u;
            return;
        }
    }
    ctx->pc = 0x1F1498u;
label_1f1498:
    // 0x1f1498: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1f1498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f149c:
    // 0x1f149c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f149cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f14a0:
    // 0x1f14a0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1f14a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1f14a4:
    // 0x1f14a4: 0x90710000  lbu         $s1, 0x0($v1)
    ctx->pc = 0x1f14a4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f14a8:
    // 0x1f14a8: 0xc07bd80  jal         func_1EF600
label_1f14ac:
    if (ctx->pc == 0x1F14ACu) {
        ctx->pc = 0x1F14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14A8u;
        // 0x1f14ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F14B0u;
        goto label_1f14b0;
    }
    ctx->pc = 0x1F14A8u;
    SET_GPR_U32(ctx, 31, 0x1F14B0u);
    ctx->pc = 0x1F14ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F14A8u;
    // 0x1f14ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF600u, 0x1F14A8u, 0x1F14B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F14B0u;
label_1f14b0:
    // 0x1f14b0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f14b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1f14b4:
    // 0x1f14b4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x1f14b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
label_1f14b8:
    // 0x1f14b8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x1f14b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1f14bc:
    // 0x1f14bc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x1f14bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
label_1f14c0:
    // 0x1f14c0: 0xa782882c  sh          $v0, -0x77D4($gp)
    ctx->pc = 0x1f14c0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936620), (uint16_t)GPR_U32(ctx, 2));
label_1f14c4:
    // 0x1f14c4: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x1f14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_1f14c8:
    // 0x1f14c8: 0xaf908834  sw          $s0, -0x77CC($gp)
    ctx->pc = 0x1f14c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936628), GPR_U32(ctx, 16));
label_1f14cc:
    // 0x1f14cc: 0xc0957a0  jal         func_255E80
label_1f14d0:
    if (ctx->pc == 0x1F14D0u) {
        ctx->pc = 0x1F14D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14CCu;
        // 0x1f14d0: 0xa7828830  sh          $v0, -0x77D0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936624), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F14D4u;
        goto label_1f14d4;
    }
    ctx->pc = 0x1F14CCu;
    SET_GPR_U32(ctx, 31, 0x1F14D4u);
    ctx->pc = 0x1F14D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F14CCu;
    // 0x1f14d0: 0xa7828830  sh          $v0, -0x77D0($gp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936624), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x1F14CCu, 0x1F14D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F14D4u;
label_1f14d4:
    // 0x1f14d4: 0x9783882c  lhu         $v1, -0x77D4($gp)
    ctx->pc = 0x1f14d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936620)));
label_1f14d8:
    // 0x1f14d8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1f14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_1f14dc:
    // 0x1f14dc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x1f14dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
label_1f14e0:
    // 0x1f14e0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1f14e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f14e4:
    // 0x1f14e4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x1f14e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
label_1f14e8:
    // 0x1f14e8: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x1f14e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1f14ec:
    // 0x1f14ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f14ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f14f0:
    // 0x1f14f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f14f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f14f4:
    // 0x1f14f4: 0xc09565c  jal         func_255970
label_1f14f8:
    if (ctx->pc == 0x1F14F8u) {
        ctx->pc = 0x1F14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F14F4u;
        // 0x1f14f8: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F14FCu;
        goto label_1f14fc;
    }
    ctx->pc = 0x1F14F4u;
    SET_GPR_U32(ctx, 31, 0x1F14FCu);
    ctx->pc = 0x1F14F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F14F4u;
    // 0x1f14f8: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x1F14F4u, 0x1F14FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F14FCu;
label_1f14fc:
    // 0x1f14fc: 0x1000ff6c  b           . + 4 + (-0x94 << 2)
label_1f1500:
    if (ctx->pc == 0x1F1500u) {
        ctx->pc = 0x1F1504u;
        goto label_1f1504;
    }
    ctx->pc = 0x1F14FCu;
    {
        const bool branch_taken_0x1f14fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f14fc) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1504u;
label_1f1504:
    // 0x1f1504: 0x0  nop
    ctx->pc = 0x1f1504u;
    // NOP
label_1f1508:
    // 0x1f1508: 0xc07bd80  jal         func_1EF600
label_1f150c:
    if (ctx->pc == 0x1F150Cu) {
        ctx->pc = 0x1F150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1508u;
        // 0x1f150c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1510u;
        goto label_1f1510;
    }
    ctx->pc = 0x1F1508u;
    SET_GPR_U32(ctx, 31, 0x1F1510u);
    ctx->pc = 0x1F150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1508u;
    // 0x1f150c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF600u, 0x1F1508u, 0x1F1510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1510u;
label_1f1510:
    // 0x1f1510: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f1514:
    // 0x1f1514: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1f1514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1f1518:
    // 0x1f1518: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f1518u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f151c:
    // 0x1f151c: 0x9422a3d6  lhu         $v0, -0x5C2A($at)
    ctx->pc = 0x1f151cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
label_1f1520:
    // 0x1f1520: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1f1520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1f1524:
    // 0x1f1524: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f1528:
    if (ctx->pc == 0x1F1528u) {
        ctx->pc = 0x1F1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1524u;
        // 0x1f1528: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F152Cu;
        goto label_1f152c;
    }
    ctx->pc = 0x1F1524u;
    {
        const bool branch_taken_0x1f1524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1524u;
        // 0x1f1528: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1524) {
            ctx->pc = 0x1F1538u;
            goto label_1f1538;
        }
    }
    ctx->pc = 0x1F152Cu;
label_1f152c:
    // 0x1f152c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1530:
    // 0x1f1530: 0x1062ff5f  beq         $v1, $v0, . + 4 + (-0xA1 << 2)
label_1f1534:
    if (ctx->pc == 0x1F1534u) {
        ctx->pc = 0x1F1538u;
        goto label_1f1538;
    }
    ctx->pc = 0x1F1530u;
    {
        const bool branch_taken_0x1f1530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f1530) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
    ctx->pc = 0x1F1538u;
label_1f1538:
    // 0x1f1538: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f1538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f153c:
    // 0x1f153c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f153cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f1540:
    // 0x1f1540: 0x8c39a3dc  lw          $t9, -0x5C24($at)
    ctx->pc = 0x1f1540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943708)));
label_1f1544:
    // 0x1f1544: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1f1544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1f1548:
    // 0x1f1548: 0x320f809  jalr        $t9
label_1f154c:
    if (ctx->pc == 0x1F154Cu) {
        ctx->pc = 0x1F154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1548u;
        // 0x1f154c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1550u;
        goto label_1f1550;
    }
    ctx->pc = 0x1F1548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F1550u);
        ctx->pc = 0x1F154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1548u;
        // 0x1f154c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1548u, 0x1F1550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1550u;
label_1f1550:
    // 0x1f1550: 0x1000ff57  b           . + 4 + (-0xA9 << 2)
label_1f1554:
    if (ctx->pc == 0x1F1554u) {
        ctx->pc = 0x1F1558u;
        goto label_fallthrough_0x1f1550;
    }
    ctx->pc = 0x1F1550u;
    {
        const bool branch_taken_0x1f1550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1550) {
            ctx->pc = 0x1F12B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f12b0;
        }
    }
label_fallthrough_0x1f1550:
    ctx->pc = 0x1F1558u;
}
